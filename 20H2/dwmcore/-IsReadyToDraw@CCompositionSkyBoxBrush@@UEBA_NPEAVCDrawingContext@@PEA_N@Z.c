/*
 * XREFs of ?IsReadyToDraw@CCompositionSkyBoxBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801BB960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSkyBoxBrush::IsReadyToDraw(
        CCompositionSkyBoxBrush *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  char result; // al
  __int64 v4; // rdx

  result = 0;
  *a3 = 0;
  v4 = *((_QWORD *)this + 10);
  if ( v4 && *(int *)(v4 + 112) >= 0 && (!*(_BYTE *)(v4 + 160) || *(int *)(v4 + 112) < 6) )
    return 1;
  return result;
}
