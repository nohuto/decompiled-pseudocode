/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00A1758
 * Callers:
 *     InputInitialize @ 0x1C001E64C (InputInitialize.c)
 *     InputUnInitialize @ 0x1C001E9CC (InputUnInitialize.c)
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 *     rimDeviceResetApc @ 0x1C00574F0 (rimDeviceResetApc.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMReadInput @ 0x1C00A08D0 (RIMReadInput.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C00A1260 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C00A39FC (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C0175A60 (rimDoVirtRimDevChange.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0187E38 (RIMApplyPTPConfigRemedy.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01AC590 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BB260 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01BBC90 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ApiSetEnterEditionCrit @ 0x1C00A17F0 (ApiSetEnterEditionCrit.c)
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
