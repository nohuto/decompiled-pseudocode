/*
 * XREFs of ?diag@?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QAEXABVCFixPred@2@@Z @ 0x158D12
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QAEXVCFixPred@2@000@Z @ 0x158F9C (-vInit@tagRlsFilter@Prediction@@QAEXVCFixPred@2@000@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall Prediction::SquareMatrix<Prediction::CFixPred,3>::diag(char *this, char *a2)
{
  char *v2; // edi
  int v3; // esi
  int i; // edx
  int j; // ecx
  int result; // eax
  char *v7; // edi

  v2 = this;
  v3 = 0;
  for ( i = 0; i < 9; i += 3 )
  {
    for ( j = 0; j < 3; ++j )
    {
      if ( v3 == j )
      {
        result = i + j;
        v7 = &v2[8 * i + 8 * j];
        if ( v7 != a2 )
        {
          *(_DWORD *)v7 = *(_DWORD *)a2;
          result = *((_DWORD *)a2 + 1);
          *((_DWORD *)v7 + 1) = result;
        }
        v2 = this;
      }
    }
    ++v3;
  }
  return result;
}
