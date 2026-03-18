/*
 * XREFs of ?IsReadyToDraw@CColorBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18005A9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CColorBrush::IsReadyToDraw(CColorBrush *this, struct CDrawingContext *a2, bool *a3)
{
  *a3 = COERCE_FLOAT(*((_DWORD *)this + 23) & _xmm) < 0.0000011920929;
  return 1;
}
