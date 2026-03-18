/*
 * XREFs of HUBSM_LogUnhandledEvent @ 0x1C000A29C
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x1C000A49C (HUBSM_FindAndSetTargetState.c)
 * Callees:
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x1C0009F84 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x1C000A034 (WPP_RECORDER_SF_qLL.c)
 *     HUBMISC_DbgBreak @ 0x1C00302F4 (HUBMISC_DbgBreak.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x1C004025C (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall HUBSM_LogUnhandledEvent(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  const char *v8; // r9
  NTSTATUS result; // eax
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+28h] [rbp-30h]

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C00671E8);
  v6 = *(unsigned int *)(a1 + 984);
  v7 = v4;
  switch ( (_DWORD)v6 )
  {
    case 0x7D0:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xBu, v11);
      }
      v8 = "Unhandled HSM event";
      break;
    case 0xBB8:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xCu, v11);
      }
      v8 = "Unhandled PSM20 event";
      break;
    case 0xFA0:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xAu, v11);
      }
      v8 = "Unhandled DSM event";
      break;
    case 0x1388:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *(_QWORD *)(a1 + 960);
        WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 0xDu, v11);
      }
      v8 = "Unhandled PSM30 event";
      break;
    default:
      goto LABEL_18;
  }
  MicrosoftTelemetryAssertTriggeredArgsMsgKM(v6, a2, *(unsigned int *)(a1 + 852), v8);
LABEL_18:
  result = HUBMISC_DbgBreak("Unhandled Event", v7);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
  {
    v10 = (unsigned int)(*(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 984));
    LODWORD(v12) = *(_DWORD *)(a1 + 984);
    return McTemplateK0ppqqqq_EtwWriteTransfer(
             v10,
             &USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
             (const GUID *)(a1 + 1012),
             *(_QWORD *)(a1 + 1032),
             *(_QWORD *)(a1 + 960),
             v12,
             **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)v10),
             a2,
             0);
  }
  return result;
}
