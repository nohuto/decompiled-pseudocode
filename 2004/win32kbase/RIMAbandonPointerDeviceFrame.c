/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C01730A0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C015C34C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMEndAllActiveContacts @ 0x1C015F9A0 (RIMEndAllActiveContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01622D4 (RIMSuppressAllActiveContacts.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C017AF40 (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C017B81C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C005DC40 (rimFindHoldingFrame.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     rimReclaimHoldingFrame @ 0x1C01743B8 (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C0179DE8 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

_QWORD *__fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      51,
      (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
  }
  result = rimFindHoldingFrame(a1, v2);
  if ( result && *((_DWORD *)result + 4) )
  {
    rimReclaimHoldingFrame(v6, v5, result);
    result = (_QWORD *)RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v2, 0LL, 1LL);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      return (_QWORD *)WPP_RECORDER_SF_(
                         WPP_GLOBAL_Control->DeviceExtension,
                         v5,
                         1,
                         52,
                         (__int64)&WPP_9651681dcc2638ebeb0ec510677294f4_Traceguids);
    }
  }
  return result;
}
