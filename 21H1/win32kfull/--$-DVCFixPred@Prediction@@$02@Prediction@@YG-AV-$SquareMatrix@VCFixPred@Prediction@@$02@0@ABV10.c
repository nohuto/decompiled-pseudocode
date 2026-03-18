/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1565EB
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x1569E5 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ.c)
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 */

_DWORD *__fastcall Prediction::operator*<Prediction::CFixPred,3>(_DWORD *a1, int a2, int a3)
{
  char *v5; // esi
  int v6; // edi
  int v7; // ebx
  char *v8; // eax
  char *v9; // edi
  _DWORD *v10; // eax
  bool v11; // cf
  bool v12; // zf
  char v14; // [esp+Ch] [ebp-30h] BYREF
  _DWORD *v15; // [esp+1Ch] [ebp-20h]
  char *v16; // [esp+20h] [ebp-1Ch]
  int v17; // [esp+24h] [ebp-18h]
  int v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+2Ch] [ebp-10h]
  int v20; // [esp+30h] [ebp-Ch]
  int v21; // [esp+34h] [ebp-8h]
  int v22; // [esp+38h] [ebp-4h]

  v15 = a1;
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v19 = 3;
  v5 = (char *)a1;
  v18 = a2 - (_DWORD)a1;
  v6 = a2 - (_DWORD)a1;
  do
  {
    v7 = a3;
    v8 = &v5[v6];
    v16 = &v5[v6];
    v21 = a3;
    v20 = 3;
    do
    {
      v9 = v8;
      v17 = v7;
      v22 = 3;
      do
      {
        v10 = (_DWORD *)Prediction::operator*(v7);
        if ( v5 != &v14 )
        {
          v11 = __CFADD__(*v10, *(_DWORD *)v5);
          *(_DWORD *)v5 += *v10;
          *((_DWORD *)v5 + 1) += v10[1] + v11;
        }
        v9 += 8;
        v7 += 24;
        --v22;
      }
      while ( v22 );
      v5 += 8;
      v8 = v16;
      v7 = v21 + 8;
      v12 = v20-- == 1;
      v21 += 8;
    }
    while ( !v12 );
    v12 = v19-- == 1;
    v6 = v18;
  }
  while ( !v12 );
  return v15;
}
