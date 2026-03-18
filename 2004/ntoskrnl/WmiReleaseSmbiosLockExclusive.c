/*
 * XREFs of WmiReleaseSmbiosLockExclusive @ 0x1407673DC
 * Callers:
 *     PoBroadcastSystemState @ 0x14098F324 (PoBroadcastSystemState.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *WmiReleaseSmbiosLockExclusive()
{
  ExReleaseResourceLite(&WmipSMBiosLock);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
