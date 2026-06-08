/*
 * XREFs of GetNtProcessorNumber @ 0x1C002DC10
 * Callers:
 *     <none>
 * Callees:
 *     SaveDevExt @ 0x1C00030C0 (SaveDevExt.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003B54 (WPP_RECORDER_SF_D.c)
 *     LookupNtProcessorNumber @ 0x1C000B274 (LookupNtProcessorNumber.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EC50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetNtProcessorNumber(_DWORD *a1)
{
  int v2; // edi
  int v4; // [rsp+28h] [rbp-10h]

  v2 = LookupNtProcessorNumber(a1);
  if ( v2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = a1[12];
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        1u,
        0x32u,
        (__int64)&WPP_b2467729b80b3cd916f8b89f5820164f_Traceguids,
        v4);
    }
  }
  else if ( a1[14] != -1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00143F8,
      0LL);
    SaveDevExt((__int64)a1, a1[14]);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00143F8);
  }
  return (unsigned int)v2;
}
