/*
 * XREFs of ??$?HVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1568A0
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x156A2A (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ.c)
 */

int __fastcall Prediction::operator+<Prediction::CFixPred,3>(int a1, int a2, int a3)
{
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  char v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+1Ch] [ebp+8h]

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v6 = a2 - a1;
  v7 = 3;
  v8 = a1;
  v13 = 3;
  v9 = a3 - a1;
  do
  {
    if ( (char *)v8 != &v12 )
    {
      v10 = *(_DWORD *)(v6 + v8) + *(_DWORD *)(v9 + v8);
      *(_DWORD *)(v8 + 4) = (*(_QWORD *)(v6 + v8) + *(_QWORD *)(v9 + v8)) >> 32;
      v7 = v13;
      *(_DWORD *)v8 = v10;
    }
    v8 += 8;
    v13 = --v7;
  }
  while ( v7 );
  return a1;
}
