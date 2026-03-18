/*
 * XREFs of ExSetTimer @ 0x140275960
 * Callers:
 *     RtlpHpScheduleCompaction @ 0x14025A1F4 (RtlpHpScheduleCompaction.c)
 *     WdtpArmTimer @ 0x140275250 (WdtpArmTimer.c)
 *     EnableFlushTimer @ 0x140373E94 (EnableFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x1404E87B4 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     WdtpTimerCallback @ 0x1405C1320 (WdtpTimerCallback.c)
 *     WdipTimeoutCheckRoutine @ 0x14064CAE0 (WdipTimeoutCheckRoutine.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x14093C064 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x14093C340 (SendCaptureStateNotificationsWorker.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1402759E4 (ExpCheckForFreedEnhancedTimer.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x14027F538 (ExpTimerSetParametersAreValid.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
