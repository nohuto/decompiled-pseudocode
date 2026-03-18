/*
 * XREFs of ??$?TVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1568F3
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x1569E5 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ.c)
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 */

_DWORD *__fastcall Prediction::operator^<Prediction::CFixPred,3>(_DWORD *a1, int a2, int a3)
{
  _DWORD *v4; // esi
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  int v10; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v4 = a1;
  v10 = 3;
  v5 = a2;
  do
  {
    v6 = a3;
    v12 = 3;
    do
    {
      v7 = (_DWORD *)Prediction::operator*(v6);
      if ( v4 != v7 )
      {
        *v4 = *v7;
        v4[1] = v7[1];
      }
      v6 += 8;
      v4 += 2;
      --v12;
    }
    while ( v12 );
    v5 += 8;
    --v10;
  }
  while ( v10 );
  return a1;
}
