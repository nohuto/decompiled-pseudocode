/*
 * XREFs of Controller_SetControllerGone @ 0x1C0032568
 * Callers:
 *     Controller_WdfEvtWatchdogTimerFunc @ 0x1C0009430 (Controller_WdfEvtWatchdogTimerFunc.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1C0010C80 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1C00113F0 (RootHub_UcxEvtClearPortFeature.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x1C0011BF0 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x1C00122E0 (RootHub_UcxEvtGetPortStatus.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C002DFB0 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_DisableController @ 0x1C0030CEC (Controller_DisableController.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 */

void __fastcall Controller_SetControllerGone(_QWORD *a1, char a2)
{
  int v4; // esi
  int v5; // edx
  int v6; // edi
  int v7; // r8d

  v4 = 16;
  v6 = *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     *a1,
                     off_1C00603D8)
                 + 28) & 0x10;
  if ( a2 && !*((_BYTE *)a1 + 397) )
  {
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 4;
        WPP_RECORDER_SF_(a1[9], v5, 4, 205, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v5) = 2;
        WPP_RECORDER_SF_(a1[9], v5, 4, 204, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids);
      }
      Controller_HwVerifierBreakIfEnabled(
        a1,
        0,
        0,
        64LL,
        "A register read returned all FFs. Controller is considered physically removed",
        0LL,
        0LL);
    }
  }
  *((_BYTE *)a1 + 397) = 1;
  if ( a2 )
  {
    v7 = 0;
  }
  else
  {
    v4 = 8;
    v7 = v6 == 0 ? 0x100D : 0;
  }
  Controller_ReportFatalError((__int64)a1, v4, v7, 0LL, 0LL, 0LL, 0LL);
}
