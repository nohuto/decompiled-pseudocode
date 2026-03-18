/*
 * XREFs of WmiReleaseSmbiosLockExclusive @ 0x140765A1C
 * Callers:
 *     PoBroadcastSystemState @ 0x14098E5D0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 */

_QWORD *WmiReleaseSmbiosLockExclusive()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9

  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v0, v1, v2);
}
