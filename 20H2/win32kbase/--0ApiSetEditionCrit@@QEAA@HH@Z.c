/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0027568
 * Callers:
 *     InputUnInitialize @ 0x1C0007D60 (InputUnInitialize.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C002394C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     RIMReadInput @ 0x1C0026620 (RIMReadInput.c)
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0027070 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 *     InputInitialize @ 0x1C009C054 (InputInitialize.c)
 *     rimDeviceResetApc @ 0x1C00BC610 (rimDeviceResetApc.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C488 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C016D300 (rimDoVirtRimDevChange.c)
 *     rimInputApc @ 0x1C01739B0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C017FD08 (RIMApplyPTPConfigRemedy.c)
 *     ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01A44B0 (-OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3190 (-ivHandlePTPInertiaPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 *     ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B3BC0 (-ivHandleTouchInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ApiSetEnterEditionCrit @ 0x1C0027600 (ApiSetEnterEditionCrit.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
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
