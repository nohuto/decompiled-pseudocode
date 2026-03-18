/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01EBFB0
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01EC964 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01EC498 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  char *v4; // r14
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1;
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v5 = 3LL;
  v6 = a2 - (_QWORD)a3;
  do
  {
    v7 = a3;
    v8 = 3LL;
    do
    {
      v9 = *(__int64 *)((char *)v7 + v6);
      v10 = *v7;
      v11 = (*v7 ^ v9) >> 63;
      if ( v9 < 0 )
        v9 = -v9;
      if ( v10 < 0 )
        v10 = -v10;
      v12 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v9;
      v13 = HIDWORD(v10);
      v14 = HIDWORD(v12) + (unsigned int)v10 * HIDWORD(v9);
      v15 = v11 ^ ((unsigned int)(v14 + v9 * v13) | ((unsigned __int64)(unsigned int)((((unsigned int)v14
                                                                                      + (unsigned int)v9 * v13) >> 32)
                                                                                    + HIDWORD(v9) * v13
                                                                                    + HIDWORD(v14)) << 32));
      v16 = v15 - v11;
      if ( (_DWORD)v12 )
        v16 = v15;
      v17 = *(_QWORD *)v4 + v16;
      if ( v4 != &v21 )
        *(_QWORD *)v4 = v17;
      ++v7;
      --v8;
    }
    while ( v8 );
    v4 += 8;
    v6 += 24LL;
    --v5;
  }
  while ( v5 );
  return a1;
}
