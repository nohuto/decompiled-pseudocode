/*
 * XREFs of PpmSetExitLatencySamplingPercentage @ 0x140565BF4
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140288880 (PpmReleaseLock.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     PpmAcquireLock @ 0x14033EE5C (PpmAcquireLock.c)
 */

__int64 __fastcall PpmSetExitLatencySamplingPercentage(int *a1)
{
  unsigned int v2; // ebx
  char v3; // di
  int v4; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  v3 = 0;
  PpmAcquireLock((struct _KTHREAD **)&PopFxSystemLatencyLock);
  if ( PpmExitLatencySamplingPercentageSet )
  {
    v2 = -1073741823;
  }
  else
  {
    v4 = *a1;
    if ( (unsigned int)*a1 > 0x64 )
      v4 = 100;
    if ( !v4 || !PpmExitLatencySamplingPercentage )
      v3 = 1;
    PpmExitLatencySamplingPercentageSet = 1;
    PpmExitLatencySamplingPercentage = v4;
    if ( v3 )
    {
      _InterlockedOr(v6, 0);
      KeFlushProcessWriteBuffers(1);
    }
  }
  PpmReleaseLock(&PopFxSystemLatencyLock);
  return v2;
}
