/*
 * XREFs of ExSetTimer @ 0x14026E2B0
 * Callers:
 *     WdtpArmTimer @ 0x14026DB20 (WdtpArmTimer.c)
 *     RtlpHpScheduleCompaction @ 0x140313038 (RtlpHpScheduleCompaction.c)
 *     EnableFlushTimer @ 0x1403762B4 (EnableFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x1404EDB60 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     WdtpTimerCallback @ 0x1405C6A00 (WdtpTimerCallback.c)
 *     WdipTimeoutCheckRoutine @ 0x1406154B0 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093F834 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093FB10 (SendCaptureStateNotificationsWorker.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x14026E334 (ExpCheckForFreedEnhancedTimer.c)
 *     ExpTimerSetParametersAreValid @ 0x14026E548 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
