/*
 * XREFs of _EditionFinalizeKoreanImeCompStrOnMouseClick@8 @ 0x1478DB
 * Callers:
 *     <none>
 * Callees:
 *     _GetActiveHKL@0 @ 0xA3110 (_GetActiveHKL@0.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z @ 0x146A3E (-FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z.c)
 */

void __stdcall EditionFinalizeKoreanImeCompStrOnMouseClick(int a1, int a2)
{
  int *v2; // esi

  v2 = *(int **)(a1 + 80);
  if ( (*_gpsi & 4) != 0
    && !a2
    && (GetActiveHKL() & 0x3FF) == 0x12
    && (*(_BYTE *)(*(_DWORD *)(v2[19] + 4) + 10) & 1) == 0 )
  {
    if ( _gpqForeground )
      FinalizeKoreanImeCompStrOnMouseClick(v2);
  }
}
