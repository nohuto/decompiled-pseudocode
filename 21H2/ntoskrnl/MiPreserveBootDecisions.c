/*
 * XREFs of MiPreserveBootDecisions @ 0x1403B0EE8
 * Callers:
 *     MiZeroNodePages @ 0x1403B0390 (MiZeroNodePages.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

_OWORD *__fastcall MiPreserveBootDecisions(__int64 a1, __int64 a2)
{
  _OWORD *result; // rax
  _OWORD *v5; // rbx
  __int64 v6; // rcx
  _OWORD *v7; // r8
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  SIZE_T v10; // rsi
  _OWORD *v11; // rdi
  unsigned int *v12; // rbp
  SIZE_T v13; // rsi
  _OWORD *v14; // rdi

  result = MiAllocatePool(64, 0x138uLL, 0x20206D4Du);
  v5 = result;
  if ( result )
  {
    v6 = 2LL;
    v7 = result;
    v8 = (_OWORD *)a2;
    do
    {
      *v7 = *v8;
      v7[1] = v8[1];
      v7[2] = v8[2];
      v7[3] = v8[3];
      v7[4] = v8[4];
      v7[5] = v8[5];
      v7[6] = v8[6];
      v7 += 8;
      v9 = v8[7];
      v8 += 8;
      *(v7 - 1) = v9;
      --v6;
    }
    while ( v6 );
    *v7 = *v8;
    v7[1] = v8[1];
    v7[2] = v8[2];
    *((_QWORD *)v7 + 6) = *((_QWORD *)v8 + 6);
    v10 = 40LL * *(unsigned int *)(a2 + 156);
    result = MiAllocatePool(64, v10, 0x20206D4Du);
    v11 = result;
    if ( result )
      result = memmove(result, *(const void **)(a2 + 144), v10);
    *((_QWORD *)v5 + 18) = v11;
    v12 = *(unsigned int **)(a2 + 304);
    if ( v12 )
    {
      v13 = 16LL * *v12;
      result = MiAllocatePool(64, v13, 0x20206D4Du);
      v14 = result;
      if ( result )
        result = memmove(result, v12, v13);
    }
    else
    {
      v14 = 0LL;
    }
    *((_QWORD *)v5 + 38) = v14;
    *(_QWORD *)(a1 + 4392) = v5;
  }
  return result;
}
