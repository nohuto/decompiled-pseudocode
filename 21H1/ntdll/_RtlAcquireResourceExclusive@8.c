/*
 * XREFs of _RtlAcquireResourceExclusive@8 @ 0x4B2EBDC0
 * Callers:
 *     _RtlConvertSharedToExclusive@4 @ 0x4B34A510 (_RtlConvertSharedToExclusive@4.c)
 * Callees:
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     __alldiv @ 0x4B2F6300 (__alldiv.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _RtlpPossibleDeadlock@4 @ 0x4B34A99E (_RtlpPossibleDeadlock@4.c)
 */

BOOLEAN __cdecl RtlAcquireResourceExclusive(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // ecx
  LONG *p_NumberOfActive; // edi
  int v5; // edi
  LARGE_INTEGER *v6; // eax
  int v7; // eax
  bool v8; // zf
  ULONG v9; // ecx
  int v10; // eax
  int v11; // [esp+0h] [ebp-18h]
  signed int NumberOfWaitingExclusive; // [esp+10h] [ebp-8h]

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
      if ( !NumberOfActive && !_InterlockedCompareExchange(p_NumberOfActive, -1, 0) )
      {
        Resource->ExclusiveOwnerThread = NtCurrentTeb()->ClientId.UniqueThread;
        return 1;
      }
      if ( !Wait )
        break;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive);
      NumberOfActive = *p_NumberOfActive;
      if ( !*p_NumberOfActive )
      {
        NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
        v8 = NumberOfWaitingExclusive == 0;
        if ( NumberOfWaitingExclusive > 0 )
        {
          v9 = Resource->NumberOfWaitingExclusive;
          do
          {
            v10 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                    v9 - 1,
                    v9);
            if ( v10 == v9 )
              break;
            v9 = v10;
            NumberOfWaitingExclusive = v10;
          }
          while ( v10 > 0 );
          p_NumberOfActive = &Resource->NumberOfActive;
          NumberOfActive = 0;
          v8 = NumberOfWaitingExclusive == 0;
        }
        if ( !v8 )
          continue;
      }
      v5 = 0;
      while ( 1 )
      {
        v6 = (Resource->Flags & 1) != 0 ? 0 : &RtlpTimeout;
        v7 = ZwWaitForSingleObject(Resource->ExclusiveSemaphore, 0, v6);
        if ( v7 != 258 )
          break;
        DbgPrintEx(101, 0, (int)"RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n", v5);
        DbgPrintEx(101, 0, (int)"RTL: Resource at %p\n", (int)Resource);
        if ( (unsigned int)++v5 > 2 )
          RtlpPossibleDeadlock(Resource);
        DbgPrintEx(101, 0, (int)"RTL: Re-Waiting\n", v11);
      }
      p_NumberOfActive = &Resource->NumberOfActive;
      if ( v7 < 0 )
        RtlRaiseStatus(v7);
      NumberOfActive = *p_NumberOfActive;
    }
    return 0;
  }
}
