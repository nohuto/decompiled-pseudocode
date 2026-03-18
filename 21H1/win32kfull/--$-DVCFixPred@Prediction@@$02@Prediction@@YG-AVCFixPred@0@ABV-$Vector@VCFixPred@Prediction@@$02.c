/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AVCFixPred@0@ABV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x156793
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, int a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // eax
  bool v8; // cf
  char v10; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+24h] [ebp+8h]

  v4 = a2;
  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = 0;
  v5 = a3 - a2;
  v11 = a3 - a2;
  v6 = 3;
  do
  {
    v7 = (_DWORD *)Prediction::operator*(v4 + v5);
    if ( a1 != &v10 )
    {
      v8 = __CFADD__(*v7, *(_DWORD *)a1);
      *(_DWORD *)a1 += *v7;
      *((_DWORD *)a1 + 1) += v7[1] + v8;
    }
    v5 = v11;
    v4 += 8;
    --v6;
  }
  while ( v6 );
  return a1;
}
