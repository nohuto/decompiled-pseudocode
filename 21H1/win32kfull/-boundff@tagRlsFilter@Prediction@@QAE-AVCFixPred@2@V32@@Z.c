/*
 * XREFs of ?boundff@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@@Z @ 0x158CB5
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall Prediction::tagRlsFilter::boundff(_DWORD *this, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int result; // eax
  unsigned int v6; // esi
  unsigned int v7; // ecx

  v3 = this[101];
  v4 = this[100];
  if ( a3 >= __SPAIR64__(v3, v4) )
  {
    v6 = this[102];
    v7 = this[103];
    result = a2;
    if ( a3 <= __SPAIR64__(v7, v6) )
    {
      *(_QWORD *)a2 = a3;
    }
    else
    {
      *(_DWORD *)a2 = v6;
      *(_DWORD *)(a2 + 4) = v7;
    }
  }
  else
  {
    result = a2;
    *(_DWORD *)a2 = v4;
    *(_DWORD *)(a2 + 4) = v3;
  }
  return result;
}
