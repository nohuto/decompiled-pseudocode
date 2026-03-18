/*
 * XREFs of ExSetTimer @ 0x14033C8D0
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x1402CE7E4 (RtlpHpScheduleCompaction.c)
 *     WdtpArmTimer @ 0x14033BFE0 (WdtpArmTimer.c)
 *     EnableFlushTimer @ 0x140376554 (EnableFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x1404EC044 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     WdtpTimerCallback @ 0x1405C4FA0 (WdtpTimerCallback.c)
 *     WdipTimeoutCheckRoutine @ 0x1406F3CC0 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140941E94 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140942170 (SendCaptureStateNotificationsWorker.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1402E1268 (ExpTimerSetParametersAreValid.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x14033C954 (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v11[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v11[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v11, 0LL);
  }
  if ( a4 && !ExpTimerSetParametersAreValid(a4) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
