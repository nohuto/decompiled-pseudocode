/*
 * XREFs of Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C0075F10
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000DD50 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010230 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00156C4 (WPP_RECORDER_SF_i.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003D3C4 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Controller_ExecuteDSM @ 0x1C006C218 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_ExecuteKBLPowerTransitionWorkaround(__int64 *a1, char a2)
{
  __int64 v4; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(a1[9], 4, 4, 252, (__int64)&WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids, *a1);
  v4 = a1[11];
  if ( !a2 )
    return Register_UpdateKBLUSB2PMCTRLRegister(v4, 3u);
  Register_UpdateKBLUSB2PMCTRLRegister(v4, 0);
  return Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 2, 0LL, 0);
}
