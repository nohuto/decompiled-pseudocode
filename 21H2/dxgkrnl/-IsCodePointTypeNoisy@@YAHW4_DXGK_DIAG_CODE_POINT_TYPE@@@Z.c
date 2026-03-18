/*
 * XREFs of ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C0012AE4
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0012028 (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00127B4 (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCodePointTypeNoisy(int a1)
{
  if ( a1 <= 38 )
  {
    if ( a1 >= 37 || a1 == 17 || a1 == 28 )
      return 1LL;
    if ( a1 <= 31 )
      return 0LL;
    return a1 <= 33;
  }
  if ( a1 == 77 || a1 == 60 )
    return 1LL;
  if ( a1 > 116 )
    return a1 <= 118;
  return 0LL;
}
