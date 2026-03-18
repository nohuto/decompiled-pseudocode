/*
 * XREFs of KeTryToInsertQueueApc @ 0x140570750
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406362D0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     KiTryToAcquireThreadLock @ 0x14020E67C (KiTryToAcquireThreadLock.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     ObGetCurrentIrql @ 0x140244120 (ObGetCurrentIrql.c)
 *     KiInsertQueueApc @ 0x1402EE784 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v7; // bp
  char v8; // si
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( !KeIsThreadRunning(v2) )
    return 0;
  CurrentIrql = ObGetCurrentIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentIrql;
  if ( !KiTryToAcquireThreadLock(v2, &v10) )
    return 0;
  if ( (*(_DWORD *)(v2 + 116) & 0x4000) == 0 || *(_BYTE *)(a1 + 82) )
  {
    v8 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    v8 = 1;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 64) = a2;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v7);
  }
  KiReleaseThreadLockSafe(v2);
  return v8;
}
