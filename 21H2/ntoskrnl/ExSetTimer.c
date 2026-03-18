/*
 * XREFs of ExSetTimer @ 0x1402D5750
 * Callers:
 *     WdtpArmTimer @ 0x1402D3D0C (WdtpArmTimer.c)
 *     RtlpHpScheduleCompaction @ 0x140365798 (RtlpHpScheduleCompaction.c)
 *     EnableFlushTimer @ 0x1403A72E4 (EnableFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x14053FF38 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     WdtpTimerCallback @ 0x14064FA50 (WdtpTimerCallback.c)
 *     WdipTimeoutCheckRoutine @ 0x1406D9E90 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1409EC088 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1409EC340 (SendCaptureStateNotificationsWorker.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1402D57D4 (ExpCheckForFreedEnhancedTimer.c)
 *     ExpTimerSetParametersAreValid @ 0x1402D59E8 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, signed __int64 a2, signed __int64 a3, __int64 a4)
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
  if ( a4 && !(unsigned __int8)ExpTimerSetParametersAreValid(a4, 0LL, 4LL) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
