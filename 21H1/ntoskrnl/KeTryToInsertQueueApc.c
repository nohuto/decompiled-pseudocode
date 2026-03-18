/*
 * XREFs of KeTryToInsertQueueApc @ 0x140514D50
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x1405A1080 (EtwpQueueStackWalkApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405A91F0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140236140 (ObGetCurrentIrql.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1403348EC (KiTryToAcquireThreadLock.c)
 *     KiSignalThreadForApc @ 0x140357158 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1403572DC (KiInsertQueueApc.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 */

char __fastcall KeTryToInsertQueueApc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  char v7; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r14
  char v10; // bp
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v7 = 0;
  if ( !KeIsThreadRunning(v3) )
    return 0;
  CurrentIrql = ObGetCurrentIrql();
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = CurrentIrql;
  if ( !KiTryToAcquireThreadLock(v3, &v12) )
    return 0;
  if ( (*(_DWORD *)(v3 + 116) & 0x4000) != 0 && !*(_BYTE *)(a1 + 82) )
  {
    v7 = 1;
    *(_QWORD *)(a1 + 64) = a2;
    *(_BYTE *)(a1 + 82) = 1;
    *(_QWORD *)(a1 + 72) = a3;
    KiInsertQueueApc(a1);
    KiSignalThreadForApc((__int64)CurrentPrcb, a1, v10);
  }
  KiReleaseThreadLockSafe(v3);
  return v7;
}
