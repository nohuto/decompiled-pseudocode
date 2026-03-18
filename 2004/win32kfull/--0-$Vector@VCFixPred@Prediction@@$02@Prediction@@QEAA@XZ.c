/*
 * XREFs of ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01EC498
 * Callers:
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01EBEB8 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBV.c)
 *     ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01EBFB0 (--$-DVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV-$Squar.c)
 *     ??$?HVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01EC230 (--$-HVCFixPred@Prediction@@$02@Prediction@@YA-AV-$Vector@VCFixPred@Prediction@@$02@0@AEBV10@0@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C01495EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

char *__fastcall Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(char *a1)
{
  __int64 v1; // rbx
  char *v3; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 3LL;
  `vector constructor iterator'(a1, 8LL, 3LL, (void (__fastcall *)(char *))Prediction::CFixPred::CFixPred);
  v3 = a1;
  do
  {
    if ( v3 != &v5 )
      *(_QWORD *)v3 = 0LL;
    v3 += 8;
    --v1;
  }
  while ( v1 );
  return a1;
}
