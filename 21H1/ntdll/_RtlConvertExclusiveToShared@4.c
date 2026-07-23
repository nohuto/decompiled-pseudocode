/*
 * XREFs of _RtlConvertExclusiveToShared@4 @ 0x4B34A4B0
 * Callers:
 *     <none>
 * Callees:
 *     _NtReleaseSemaphore@12 @ 0x4B2F2A00 (_NtReleaseSemaphore@12.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

void __cdecl RtlConvertExclusiveToShared(PRTL_RESOURCE Resource)
{
  LONG v1; // eax
  int v2; // eax
  LONG PreviousCount; // [esp+0h] [ebp-4h] BYREF

  Resource->ExclusiveOwnerThread = 0;
  _InterlockedExchange(&Resource->NumberOfActive, 1);
  if ( Resource->NumberOfWaitingShared )
  {
    v1 = _InterlockedExchange((volatile __int32 *)&Resource->NumberOfWaitingShared, 0);
    if ( v1 )
    {
      v2 = NtReleaseSemaphore(Resource->SharedSemaphore, v1, &PreviousCount);
      if ( v2 < 0 )
        RtlRaiseStatus(v2);
    }
  }
}
