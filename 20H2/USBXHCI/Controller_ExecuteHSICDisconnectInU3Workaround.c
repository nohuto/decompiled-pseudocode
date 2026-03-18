/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006C4C8
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000B4D0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0014CE0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Controller_IsSecureDevice @ 0x1C0009764 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_i @ 0x1C00155A4 (WPP_RECORDER_SF_i.c)
 *     Controller_ExecuteDSM @ 0x1C00700B8 (Controller_ExecuteDSM.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C0075A58 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 */

void __fastcall Controller_ExecuteHSICDisconnectInU3Workaround(_QWORD *a1, char a2)
{
  int v4; // [rsp+28h] [rbp-10h]

  if ( (a1[42] & 0x1000000000000000LL) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(a1[9], 4, 4, 250, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, *a1);
    if ( Controller_IsSecureDevice((__int64)a1) )
    {
      Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(a1);
    }
    else
    {
      LOWORD(v4) = 0;
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 6 - (unsigned int)(a2 != 0), 0LL, 0LL, v4);
    }
  }
}
