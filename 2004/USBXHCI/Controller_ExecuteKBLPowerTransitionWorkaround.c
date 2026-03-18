/*
 * XREFs of Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00746CC
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000AC00 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0013C00 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C003C5CC (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Controller_ExecuteDSM @ 0x1C006CDA8 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_ExecuteKBLPowerTransitionWorkaround(__int64 *a1, char a2)
{
  __int64 v4; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(a1[9], 4, 4, 251, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, *a1);
  v4 = a1[11];
  if ( !a2 )
    return Register_UpdateKBLUSB2PMCTRLRegister(v4, 3u);
  Register_UpdateKBLUSB2PMCTRLRegister(v4, 0);
  return Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 2, 0LL, 0);
}
