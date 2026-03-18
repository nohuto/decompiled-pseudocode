/*
 * XREFs of PiDqQueryUnlock @ 0x1408A75CC
 * Callers:
 *     PiDqIrpCancel @ 0x14050C390 (PiDqIrpCancel.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  ExReleasePushLockEx(a1 + 64, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
