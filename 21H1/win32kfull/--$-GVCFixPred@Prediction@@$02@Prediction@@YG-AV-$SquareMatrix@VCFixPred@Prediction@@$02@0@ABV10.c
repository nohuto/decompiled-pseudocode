/*
 * XREFs of ??$?GVCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1567E6
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x1569E5 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ.c)
 */

_BYTE *__fastcall Prediction::operator-<Prediction::CFixPred,3>(_BYTE *a1, int a2, int a3)
{
  int v5; // ebx
  char *v6; // esi
  int v7; // edi
  int v8; // edx
  char v10; // [esp+Ch] [ebp-10h] BYREF
  _BYTE *v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  v11 = a1;
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v5 = a2 - (_DWORD)a1;
  v12 = 3;
  v6 = a1;
  v7 = a3 - (_DWORD)a1;
  do
  {
    v8 = 3;
    do
    {
      if ( v6 != &v10 )
        *(_QWORD *)v6 = *(_QWORD *)&v6[v5] - *(_QWORD *)&v6[v7];
      v6 += 8;
      --v8;
    }
    while ( v8 );
    --v12;
  }
  while ( v12 );
  return v11;
}
