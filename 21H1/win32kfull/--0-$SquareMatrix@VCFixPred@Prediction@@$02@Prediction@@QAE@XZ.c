/*
 * XREFs of ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x1569E5
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1565EB (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@ABVCFixPred@0@@Z @ 0x156681 (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$_ea_156681.c)
 *     ??$?GVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1567E6 (--$-GVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x156843 (--$-HVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10.c)
 *     ??$?TVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1568F3 (--$-TVCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV-$.c)
 *     ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@@Z @ 0x156959 (--$Tri@VCFixPred@Prediction@@$02@Prediction@@YG-AV-$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>(_DWORD *this)
{
  char *v2; // eax
  int v3; // esi
  int v4; // ecx
  char v6; // [esp+Ch] [ebp-8h] BYREF

  *this = 0;
  this[1] = 0;
  qmemcpy(this + 2, this, 0x40u);
  v2 = (char *)this;
  v3 = 3;
  do
  {
    v4 = 3;
    do
    {
      if ( v2 != &v6 )
      {
        *(_DWORD *)v2 = 0;
        *((_DWORD *)v2 + 1) = 0;
      }
      v2 += 8;
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  return this;
}
