/*
 * XREFs of ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QAE@XZ @ 0x156A2A
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV10@ABVCFixPred@0@@Z @ 0x1566DC (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV10@ABVCF.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV?$SquareMatrix@VCFixPred@Prediction@@$02@0@ABV10@@Z @ 0x15672E (--$-DVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV-$Square.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YG?AV?$Vector@VCFixPred@Prediction@@$02@0@ABV10@0@Z @ 0x1568A0 (--$-HVCFixPred@Prediction@@$02@Prediction@@YG-AV-$Vector@VCFixPred@Prediction@@$02@0@ABV10@0@Z.c)
 * Callees:
 *     <none>
 */

char *__thiscall Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(char *this)
{
  char *v1; // eax
  int v2; // edx
  char v4; // [esp+Ch] [ebp-8h] BYREF

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = *(_DWORD *)this;
  v2 = 3;
  *((_DWORD *)this + 3) = *((_DWORD *)this + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)this + 2);
  *((_DWORD *)this + 5) = *((_DWORD *)this + 3);
  do
  {
    if ( v1 != &v4 )
    {
      *(_DWORD *)v1 = 0;
      *((_DWORD *)v1 + 1) = 0;
    }
    v1 += 8;
    --v2;
  }
  while ( v2 );
  return this;
}
