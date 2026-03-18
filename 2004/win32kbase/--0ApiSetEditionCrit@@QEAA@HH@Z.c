/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00AAC28
 * Callers:
 *     InputUnInitialize @ 0x1C0007770 (InputUnInitialize.c)
 *     rimDeviceResetApc @ 0x1C0019BE0 (rimDeviceResetApc.c)
 *     InputInitialize @ 0x1C0034604 (InputInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C005310C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00AA310 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     RIMDeviceClassNotify @ 0x1C00AAD80 (RIMDeviceClassNotify.c)
 *     RIMReadInput @ 0x1C00ABA70 (RIMReadInput.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016E8B8 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C016F730 (rimDoVirtRimDevChange.c)
 *     rimInputApc @ 0x1C0175DE0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0182138 (RIMApplyPTPConfigRemedy.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A6830 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5500 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B5F30 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     ApiSetEnterEditionCrit @ 0x1C00AACC0 (ApiSetEnterEditionCrit.c)
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this, int a2, unsigned int a3)
{
  int v4; // edi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      58,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  *(_DWORD *)this = v4;
  if ( v4 )
    *((_DWORD *)this + 1) = ApiSetEnterEditionCrit(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      59,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return this;
}
