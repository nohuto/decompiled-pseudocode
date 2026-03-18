/*
 * XREFs of ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C00270BC
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
 *     ApiSetLeaveEditionCrit @ 0x1C0027144 (ApiSetLeaveEditionCrit.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 */

void __fastcall ApiSetEditionCrit::~ApiSetEditionCrit(ApiSetEditionCrit *this)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      60,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  if ( *(_DWORD *)this && !*((_DWORD *)this + 1) )
    ApiSetLeaveEditionCrit();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        10,
        61,
        (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
}
