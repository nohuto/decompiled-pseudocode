/*
 * XREFs of ??4?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEAAV01@ABV01@@Z @ 0x156A64
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall Prediction::SquareMatrix<Prediction::CFixPred,3>::operator=(_DWORD *this, int a2)
{
  _DWORD *v2; // edx
  int v3; // esi
  int v4; // ebx
  _DWORD *v5; // edi
  int v7; // [esp+14h] [ebp+8h]

  v2 = this;
  v3 = a2 - (_DWORD)this;
  v7 = 3;
  do
  {
    v4 = 3;
    do
    {
      v5 = (_DWORD *)((char *)v2 + v3);
      if ( v2 != (_DWORD *)((char *)v2 + v3) )
      {
        *v2 = *v5;
        v2[1] = v5[1];
      }
      v2 += 2;
      --v4;
    }
    while ( v4 );
    --v7;
  }
  while ( v7 );
  return this;
}
