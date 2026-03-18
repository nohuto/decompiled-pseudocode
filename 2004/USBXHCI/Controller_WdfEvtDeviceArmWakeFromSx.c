/*
 * XREFs of Controller_WdfEvtDeviceArmWakeFromSx @ 0x1C00343A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0014AE8 (WPP_RECORDER_SF_i.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceArmWakeFromSx(__int64 a1)
{
  char v1; // di
  int v2; // edx
  __int64 v3; // rbx

  v1 = a1;
  v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C00603D8)
                 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), v2, 4, 90, (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids, v1);
  }
  *(_BYTE *)(v3 + 468) = 1;
  return 0LL;
}
