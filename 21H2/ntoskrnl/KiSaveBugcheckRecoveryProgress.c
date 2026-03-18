/*
 * XREFs of KiSaveBugcheckRecoveryProgress @ 0x140579750
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405788B0 (KiAttemptBugcheckRecovery.c)
 *     KiDeferredBugcheckRecoveryWorker @ 0x140579150 (KiDeferredBugcheckRecoveryWorker.c)
 * Callees:
 *     KiUpdateBugcheckRecoveryProgress @ 0x140579B48 (KiUpdateBugcheckRecoveryProgress.c)
 */

__int64 __fastcall KiSaveBugcheckRecoveryProgress(int a1)
{
  __int64 v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  __int64 v4; // [rsp+2Ch] [rbp-1Ch]

  v4 = 0LL;
  v2 = 1LL;
  v3 = a1;
  return KiUpdateBugcheckRecoveryProgress(&v2);
}
