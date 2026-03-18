/*
 * XREFs of ??$?TVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01EC298
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01EC964 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01EC43C (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator^<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  char *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char v19; // [rsp+50h] [rbp+8h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v6 = 0LL;
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  do
  {
    v9 = 3LL;
    do
    {
      v10 = *(_QWORD *)(a2 + 8 * v6);
      v11 = *(_QWORD *)&v7[v8];
      v12 = (v11 ^ v10) >> 63;
      if ( v10 < 0 )
        v10 = -v10;
      if ( v11 < 0 )
        v11 = -v11;
      v13 = (unsigned int)v11 * (unsigned __int64)(unsigned int)v10;
      v14 = HIDWORD(v11);
      v15 = HIDWORD(v13) + (unsigned int)v11 * HIDWORD(v10);
      v16 = v12 ^ ((unsigned int)(v15 + v10 * v14) | ((unsigned __int64)(unsigned int)((((unsigned int)v15
                                                                                       + (unsigned int)v10 * v14) >> 32)
                                                                                     + HIDWORD(v10) * v14
                                                                                     + HIDWORD(v15)) << 32));
      v17 = v16 - v12;
      if ( (_DWORD)v13 )
        v17 = v16;
      if ( v7 != &v19 )
        *(_QWORD *)v7 = v17;
      v7 += 8;
      --v9;
    }
    while ( v9 );
    ++v6;
    v8 -= 24LL;
  }
  while ( v6 < 3 );
  return a1;
}
