/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@@Z @ 0x15672E
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x156A2A (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ.c)
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 */

_DWORD *__fastcall Prediction::operator*<Prediction::CFixPred,3>(_DWORD *a1, int a2, int a3)
{
  char *v5; // esi
  int v6; // ebx
  _DWORD *v7; // eax
  bool v8; // cf
  char v10; // [esp+Ch] [ebp-20h] BYREF
  _DWORD *v11; // [esp+20h] [ebp-Ch]
  int v12; // [esp+24h] [ebp-8h]
  int v13; // [esp+28h] [ebp-4h]

  v11 = a1;
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v5 = (char *)a1;
  v12 = 3;
  do
  {
    v6 = a3;
    v13 = 3;
    do
    {
      v7 = (_DWORD *)Prediction::operator*(v6);
      if ( v5 != &v10 )
      {
        v8 = __CFADD__(*v7, *(_DWORD *)v5);
        *(_DWORD *)v5 += *v7;
        *((_DWORD *)v5 + 1) += v7[1] + v8;
      }
      v6 += 8;
      a2 += 8;
      --v13;
    }
    while ( v13 );
    v5 += 8;
    --v12;
  }
  while ( v12 );
  return v11;
}
