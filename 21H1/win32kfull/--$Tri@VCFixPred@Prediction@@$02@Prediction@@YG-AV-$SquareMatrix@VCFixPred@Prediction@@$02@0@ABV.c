/*
 * XREFs of ??$Tri@VCFixPred@Prediction@@$02@Prediction@@YG?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@@Z @ 0x156959
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x1569E5 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ.c)
 */

_DWORD *__fastcall Prediction::Tri<Prediction::CFixPred,3>(_DWORD *a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // ebx
  _DWORD *v5; // edx
  _DWORD *v6; // ecx
  int v7; // ebx
  int v8; // eax
  _DWORD *v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  v2 = a1;
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v3 = 0;
  v12 = v2;
  v4 = v2;
  do
  {
    v5 = v4;
    v6 = v4;
    v7 = a2 - (_DWORD)v2;
    v8 = 3 - v3;
    v13 = 3 - v3;
    do
    {
      if ( v6 != (_DWORD *)((char *)v5 + v7) )
      {
        *v6 = *(_DWORD *)((char *)v5 + v7);
        v6[1] = *(_DWORD *)((char *)v5 + v7 + 4);
        v8 = v13;
      }
      if ( v5 != v6 )
      {
        *v5 = *v6;
        v5[1] = v6[1];
        v8 = v13;
      }
      v5 += 2;
      v6 += 6;
      v13 = --v8;
    }
    while ( v8 );
    v2 = a1;
    ++v3;
    v4 = v12 + 8;
    v12 += 8;
  }
  while ( v3 < 3 );
  return a1;
}
