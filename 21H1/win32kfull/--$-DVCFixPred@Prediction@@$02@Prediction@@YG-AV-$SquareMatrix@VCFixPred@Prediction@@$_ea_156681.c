/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@ABVCFixPred@0@@Z @ 0x156681
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x1569E5 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ.c)
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 */

_DWORD *__thiscall Prediction::operator*<Prediction::CFixPred,3>(_DWORD *this, int a2)
{
  _DWORD *v3; // esi
  int v4; // ebx
  _DWORD *v5; // eax
  int v8; // [esp+20h] [ebp-4h]

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v8 = 3;
  v3 = this;
  do
  {
    v4 = 3;
    do
    {
      v5 = (_DWORD *)Prediction::operator*(a2);
      if ( v3 != v5 )
      {
        *v3 = *v5;
        v3[1] = v5[1];
      }
      v3 += 2;
      --v4;
    }
    while ( v4 );
    --v8;
  }
  while ( v8 );
  return this;
}
