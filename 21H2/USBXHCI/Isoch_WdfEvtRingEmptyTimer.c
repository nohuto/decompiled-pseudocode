/*
 * XREFs of Isoch_WdfEvtRingEmptyTimer @ 0x1C0043AF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall Isoch_WdfEvtRingEmptyTimer(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rbx
  _UNKNOWN **v4; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C0061388);
  v4 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    LOBYTE(v4) = WPP_RECORDER_SF_(
                   *(_QWORD *)(*(_QWORD *)(v3 + 56) + 80LL),
                   v2,
                   14,
                   11,
                   (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids);
  }
  if ( *(_DWORD *)(v3 + 108) == 4 )
  {
    LOBYTE(v4) = KdRefreshDebuggerNotPresent();
    if ( !(_BYTE)v4 )
      __debugbreak();
  }
  return (char)v4;
}
