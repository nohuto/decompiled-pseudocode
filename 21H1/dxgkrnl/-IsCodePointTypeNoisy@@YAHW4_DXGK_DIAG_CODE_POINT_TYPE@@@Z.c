/*
 * XREFs of ?IsCodePointTypeNoisy@@YAHW4_DXGK_DIAG_CODE_POINT_TYPE@@@Z @ 0x1C00095C8
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0008DAC (-WriteDxgDiagnosticsEvent_CODE_POINT_ADAPTERLUID@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000951C (-WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCodePointTypeNoisy(int a1)
{
  return a1 == 28 || a1 == 17 || a1 > 31 && (a1 <= 33 || a1 > 36 && (a1 == 77 || a1 <= 38 || a1 == 60));
}
