/*
 * XREFs of TUNNEL_EvtIoTargetRemoveComplete @ 0x1C00888D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0013D04 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     TUNNEL_CloseRemoteTarget @ 0x1C00889E0 (TUNNEL_CloseRemoteTarget.c)
 */

void __fastcall TUNNEL_EvtIoTargetRemoveComplete(__int64 a1)
{
  __int64 v2; // rdi
  struct _DEVICE_OBJECT *v3; // rax

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00670A8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)v2 + 2520LL),
      4u,
      3u,
      0x19u,
      (__int64)&WPP_37c4b7d9305837c1312f85d744ccd03f_Traceguids,
      a1);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)v2 + 2744LL),
    0LL);
  TUNNEL_CloseRemoteTarget(v2);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)v2 + 2744LL));
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  *(_QWORD *)(*(_QWORD *)v2 + 16LL));
  IoInvalidateDeviceRelations(v3, PowerRelations);
}
