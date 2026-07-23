/*
 * XREFs of RtlAcquireResourceShared @ 0x180065FB0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     NtWaitForSingleObject @ 0x18009D680 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800E9228 (RtlpPossibleDeadlock.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlAcquireResourceShared(PRTL_RESOURCE Resource, BOOLEAN Wait)
{
  LONG NumberOfActive; // r8d
  signed __int32 v5; // eax
  int v7; // ebp
  LARGE_INTEGER *v8; // rsi
  int v9; // eax
  signed int NumberOfWaitingShared; // edx
  bool v11; // zf
  int v12; // eax

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 && Resource->ExclusiveOwnerThread == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedDecrement(&Resource->NumberOfActive);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( NumberOfActive >= 0 )
      {
        v5 = _InterlockedCompareExchange(&Resource->NumberOfActive, NumberOfActive + 1, NumberOfActive);
        v11 = NumberOfActive == v5;
        NumberOfActive = v5;
        if ( v11 )
          return 1;
      }
      if ( !Wait )
        break;
      ++Resource->DebugInfo->ContentionCount;
      _InterlockedIncrement((volatile signed __int32 *)&Resource->NumberOfWaitingShared);
      NumberOfActive = Resource->NumberOfActive;
      if ( NumberOfActive >= 0 )
      {
        NumberOfWaitingShared = Resource->NumberOfWaitingShared;
        v11 = NumberOfWaitingShared == 0;
        if ( NumberOfWaitingShared > 0 )
        {
          do
          {
            v12 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&Resource->NumberOfWaitingShared,
                    NumberOfWaitingShared - 1,
                    NumberOfWaitingShared);
            if ( NumberOfWaitingShared == v12 )
              break;
            NumberOfWaitingShared = v12;
          }
          while ( v12 > 0 );
          v11 = NumberOfWaitingShared == 0;
        }
        if ( !v11 )
          continue;
      }
      v7 = 0;
      while ( 1 )
      {
        v8 = (LARGE_INTEGER *)&RtlpTimeout;
        if ( (Resource->Flags & 1) != 0 )
          v8 = 0LL;
        v9 = NtWaitForSingleObject(Resource->SharedSemaphore, 0, v8);
        if ( v9 != 258 )
          break;
        DbgPrintEx(
          0x65u,
          0,
          "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
          v7,
          ((unsigned __int64)(((unsigned __int128)(v8->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v8->QuadPart) >> 63)
        + ((__int64)(((unsigned __int128)(v8->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v8->QuadPart) >> 23));
        DbgPrintEx(0x65u, 0, "RTL: Resource at %p\n", Resource);
        if ( (unsigned int)++v7 > 2 )
          RtlpPossibleDeadlock(Resource);
        DbgPrintEx(0x65u, 0, "RTL: Re-Waiting\n");
      }
      if ( v9 < 0 )
        RtlRaiseStatus(v9);
      NumberOfActive = Resource->NumberOfActive;
    }
    return 0;
  }
}
