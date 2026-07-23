/*
 * XREFs of RtlReleaseResource @ 0x180064C10
 * Callers:
 *     <none>
 * Callees:
 *     ZwReleaseSemaphore @ 0x18009CF50 (ZwReleaseSemaphore.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // eax
  signed int v3; // edx
  bool v4; // zf
  signed int NumberOfWaitingExclusive; // r8d
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  LONG v11; // ecx
  int v12; // eax
  LONG PreviousCount; // [rsp+30h] [rbp+8h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  if ( NumberOfActive < 0 )
  {
    if ( NumberOfActive == -1 )
      Resource->ExclusiveOwnerThread = 0LL;
    if ( !_InterlockedIncrement(&Resource->NumberOfActive) )
    {
      if ( Resource->NumberOfWaitingShared )
      {
        v11 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
        if ( v11 )
        {
          v12 = ZwReleaseSemaphore(Resource->SharedSemaphore, v11, &PreviousCount);
          if ( v12 < 0 )
            RtlRaiseStatus(v12);
        }
      }
      NumberOfWaitingExclusive = Resource->NumberOfWaitingExclusive;
      v6 = NumberOfWaitingExclusive == 0;
      if ( NumberOfWaitingExclusive > 0 )
      {
        do
        {
          v8 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&Resource->NumberOfWaitingExclusive,
                 NumberOfWaitingExclusive - 1,
                 NumberOfWaitingExclusive);
          if ( NumberOfWaitingExclusive == v8 )
            break;
          NumberOfWaitingExclusive = v8;
        }
        while ( v8 > 0 );
        v6 = NumberOfWaitingExclusive == 0;
      }
      if ( !v6 )
      {
        v7 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
        if ( v7 < 0 )
          RtlRaiseStatus(v7);
      }
    }
  }
  else if ( _InterlockedExchangeAdd(&Resource->NumberOfActive, 0xFFFFFFFF) == 1 )
  {
    v3 = Resource->NumberOfWaitingExclusive;
    v4 = v3 == 0;
    if ( v3 > 0 )
    {
      do
      {
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)&Resource->NumberOfWaitingExclusive, v3 - 1, v3);
        if ( v3 == v9 )
          break;
        v3 = v9;
      }
      while ( v9 > 0 );
      v4 = v3 == 0;
    }
    if ( !v4 )
    {
      v10 = ZwReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v10 < 0 )
        RtlRaiseStatus(v10);
    }
  }
}
