/*
 * XREFs of KeTryToInsertQueueApc @ 0x140518CD0
 * Callers:
 *     EtwpQueueStackWalkApc @ 0x1405A5210 (EtwpQueueStackWalkApc.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AD440 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x1402473F0 (ObGetCurrentIrql.c)
 *     KiTryToAcquireThreadLock @ 0x1402D8D68 (KiTryToAcquireThreadLock.c)
 *     KiSignalThreadForApc @ 0x1402EC4EC (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1402EC670 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
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
