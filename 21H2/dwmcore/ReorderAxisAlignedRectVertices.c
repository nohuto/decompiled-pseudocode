/*
 * XREFs of ReorderAxisAlignedRectVertices @ 0x1800854A8
 * Callers:
 *     ?PrepareData@CMegaRect@@QEAAJAEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x180084B28 (-PrepareData@CMegaRect@@QEAAJAEAV-$vector@EV-$allocator@E@std@@@std@@@Z.c)
 * Callees:
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

void *__fastcall ReorderAxisAlignedRectVertices(__int64 *a1, int a2, __int64 a3)
{
  float v3; // xmm3_4
  float v5; // xmm2_4
  unsigned int v6; // r8d
  int v7; // r10d
  __int64 v9; // r9
  float v11; // xmm5_4
  float v12; // xmm4_4
  __int64 v13; // rdx
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm0_4
  int v17; // esi
  unsigned int v18; // eax
  int v19; // ebp
  int v20; // r14d
  int v21; // edx
  float v22; // xmm1_4
  unsigned int v23; // ebx

  v3 = FLOAT_3_4028235e38;
  v5 = FLOAT_N3_4028235e38;
  v6 = 0;
  v7 = *((_DWORD *)a1 + 2);
  v9 = *a1;
  v11 = FLOAT_3_4028235e38;
  v12 = FLOAT_N3_4028235e38;
  v13 = 4LL;
  v14 = 0;
  do
  {
    v15 = *(float *)(v14 + v9);
    if ( v15 <= v3 )
      v3 = *(float *)(v14 + v9);
    if ( v5 <= v15 )
      v5 = *(float *)(v14 + v9);
    v16 = *(float *)(v14 + v9 + 4);
    if ( v16 <= v11 )
      v11 = *(float *)(v14 + v9 + 4);
    if ( v12 <= v16 )
      v12 = *(float *)(v14 + v9 + 4);
    v14 += v7;
    --v13;
  }
  while ( v13 );
  v17 = 1;
  v18 = 0;
  v19 = 3;
  v20 = 2;
  v21 = 0;
  do
  {
    v22 = *(float *)(v21 + v9);
    if ( v22 == v3 && *(float *)(v21 + v9 + 4) == v11 )
    {
      v6 = v18;
    }
    else if ( v22 == v5 && *(float *)(v21 + v9 + 4) == v11 )
    {
      v17 = v18;
    }
    else if ( v22 == v3 && *(float *)(v21 + v9 + 4) == v12 )
    {
      v19 = v18;
    }
    else if ( v22 == v5 && *(float *)(v21 + v9 + 4) == v12 )
    {
      v20 = v18;
    }
    ++v18;
    v21 += v7;
  }
  while ( v18 < 4 );
  v23 = 8 * a2 + 16;
  memcpy_0(*(void **)a3, (const void *)(v9 + (int)(v6 * v7)), v23);
  memcpy_0((void *)(*(_QWORD *)a3 + *(int *)(a3 + 8)), (const void *)(*a1 + v17 * *((_DWORD *)a1 + 2)), v23);
  memcpy_0((void *)(*(_QWORD *)a3 + 3 * *(_DWORD *)(a3 + 8)), (const void *)(*a1 + v19 * *((_DWORD *)a1 + 2)), v23);
  return memcpy_0(
           (void *)(*(_QWORD *)a3 + 2 * *(_DWORD *)(a3 + 8)),
           (const void *)(*a1 + v20 * *((_DWORD *)a1 + 2)),
           v23);
}
