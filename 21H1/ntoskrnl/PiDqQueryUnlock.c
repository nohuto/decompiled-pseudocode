/*
 * XREFs of PiDqQueryUnlock @ 0x1408A077C
 * Callers:
 *     PiDqIrpCancel @ 0x140508410 (PiDqIrpCancel.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 */

_QWORD *__fastcall PiDqQueryUnlock(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  ExReleasePushLockEx(a1 + 64, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2, v3);
}
