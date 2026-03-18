/*
 * XREFs of ?GetProperty@CNineGridBrush@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180229550
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z @ 0x1800E2DA4 (-TryGetInsetFieldPointer@CNineGridBrush@@AEAAPEAMK@Z.c)
 */

__int64 __fastcall CNineGridBrush::GetProperty(CNineGridBrush *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  float *InsetFieldPointer; // rax
  __int64 v5; // rcx
  __int64 v6; // r8

  v3 = 0;
  InsetFieldPointer = CNineGridBrush::TryGetInsetFieldPointer(this, a2);
  if ( InsetFieldPointer )
  {
    *(float *)v6 = *InsetFieldPointer;
    *(_DWORD *)(v6 + 72) = 18;
    *(_BYTE *)(v6 + 76) = 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, -2147024809, 0xD1u);
  }
  return v3;
}
