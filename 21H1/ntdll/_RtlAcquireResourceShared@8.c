/*
 * XREFs of _RtlAcquireResourceShared@8 @ 0x4B2EB3B0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 */

BOOLEAN __cdecl RtlAcquireResourceShared(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  PRTL_RESOURCE v2; // edi
  LONG NumberOfActive; // ecx
  LONG *p_NumberOfActive; // esi
  signed __int32 v5; // eax
  bool v7; // zf
  signed __int32 v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // [esp+0h] [ebp-18h]
  int NumberOfWaitingShared; // [esp+10h] [ebp-8h]

  v2 = Resource;
  NumberOfActive = Resource->NumberOfActive;
  p_NumberOfActive = &Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(p_NumberOfActive);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( NumberOfActive >= 0 )
      {
        v5 = _InterlockedCompareExchange(p_NumberOfActive, NumberOfActive + 1, NumberOfActive);
        if ( v5 == NumberOfActive )
          return 1;
        NumberOfActive = v5;
      }
      if ( !Wait )
        break;
      ++v2->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&v2->NumberOfWaitingShared);
      NumberOfActive = *p_NumberOfActive;
      if ( *p_NumberOfActive >= 0 )
      {
        NumberOfWaitingShared = v2->NumberOfWaitingShared;
        v7 = NumberOfWaitingShared == 0;
        if ( NumberOfWaitingShared > 0 )
        {
          v8 = v2->NumberOfWaitingShared;
          do
          {
            v9 = _InterlockedCompareExchange((volatile signed __int32 *)&v2->NumberOfWaitingShared, v8 - 1, v8);
            if ( v9 == v8 )
              break;
            v8 = v9;
            NumberOfWaitingShared = v9;
          }
          while ( v9 > 0 );
          v2 = Resource;
          v7 = NumberOfWaitingShared == 0;
          p_NumberOfActive = &Resource->NumberOfActive;
        }
        if ( !v7 )
          continue;
      }
      v10 = 0;
      while ( 1 )
      {
        v11 = ZwWaitForSingleObject(v2->SharedSemaphore, 0, (v2->Flags & 1) == 0 ? &RtlpTimeout : 0);
        if ( v11 != 258 )
          break;
        DbgPrintEx(101, 0, (int)"RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n", v10);
        DbgPrintEx(101, 0, (int)"RTL: Resource at %p\n", (int)v2);
        if ( (unsigned int)++v10 > 2 )
          RtlpPossibleDeadlock(v2);
        DbgPrintEx(101, 0, (int)"RTL: Re-Waiting\n", v12);
      }
      p_NumberOfActive = &v2->NumberOfActive;
      if ( v11 < 0 )
        RtlRaiseStatus(v11);
      NumberOfActive = *p_NumberOfActive;
    }
    return 0;
  }
}
