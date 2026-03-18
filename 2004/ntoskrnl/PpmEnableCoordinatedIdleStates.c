/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1408DE688
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1408DE6C0 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408DEC60 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x140565590 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
