/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1408DD428
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1408DD460 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408DDA00 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x140564F40 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
