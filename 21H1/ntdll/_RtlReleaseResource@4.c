/*
 * XREFs of _RtlReleaseResource@4 @ 0x4B2EA890
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpNonNegativeDecrement@4 @ 0x4B2EA910 (_RtlpNonNegativeDecrement@4.c)
 *     _NtReleaseSemaphore@12 @ 0x4B2F2A00 (_NtReleaseSemaphore@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __cdecl RtlReleaseResource(PRTL_RESOURCE Resource)
{
  LONG NumberOfActive; // ecx
  LONG *p_NumberOfActive; // eax
  int v3; // eax
  LONG v4; // eax
  int v5; // eax
  LONG PreviousCount; // [esp+8h] [ebp-4h] BYREF

  NumberOfActive = Resource->NumberOfActive;
  p_NumberOfActive = &Resource->NumberOfActive;
  if ( NumberOfActive >= 0 )
  {
    if ( _InterlockedDecrement(p_NumberOfActive) )
      return;
    goto LABEL_3;
  }
  if ( NumberOfActive == -1 )
    Resource->ExclusiveOwnerThread = 0;
  if ( !_InterlockedIncrement(p_NumberOfActive) )
  {
    if ( Resource->NumberOfWaitingShared )
    {
      v4 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
      if ( v4 )
      {
        v5 = NtReleaseSemaphore(Resource->SharedSemaphore, v4, &PreviousCount);
        if ( v5 < 0 )
          RtlRaiseStatus(v5);
      }
    }
LABEL_3:
    if ( RtlpNonNegativeDecrement(&Resource->NumberOfWaitingExclusive) )
    {
      v3 = NtReleaseSemaphore(Resource->ExclusiveSemaphore, 1, &PreviousCount);
      if ( v3 < 0 )
        RtlRaiseStatus(v3);
    }
  }
}
