/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1408E44C8
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1408E4500 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408E4AA0 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x140568F90 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
