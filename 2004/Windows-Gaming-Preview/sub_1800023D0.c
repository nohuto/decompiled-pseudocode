/*
 * XREFs of sub_1800023D0 @ 0x1800023D0
 * Callers:
 *     sub_180002724 @ 0x180002724 (sub_180002724.c)
 * Callees:
 *     sub_180001EC8 @ 0x180001EC8 (sub_180001EC8.c)
 *     sub_180008EF4 @ 0x180008EF4 (sub_180008EF4.c)
 *     sub_180008F80 @ 0x180008F80 (sub_180008F80.c)
 *     memset @ 0x1800453CC (memset.c)
 */

__int64 __fastcall sub_1800023D0(__int64 a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rbx
  LPVOID *v35; // rsi
  volatile signed __int32 *v36; // rcx
  size_t v37; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v39; // rcx
  __int64 v40; // r10
  __int64 v41; // rdx
  __int64 result; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  void *v53; // rax

  *(_OWORD *)a1 = *(_OWORD *)a2;
  v4 = 2LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(v5 + 2 * v7) );
    v6 = 2 * v7 + 2;
  }
  else
  {
    v6 = 2LL;
  }
  v8 = *(_QWORD *)(a2 + 32);
  if ( v8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_BYTE *)(v8 + v10) );
    v9 = v10 + 1;
  }
  else
  {
    v9 = 1LL;
  }
  v11 = *(_QWORD *)(a2 + 40);
  if ( v11 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *(_BYTE *)(v11 + v13) );
    v12 = v13 + 1;
  }
  else
  {
    v12 = 1LL;
  }
  v14 = *(_QWORD *)(a2 + 48);
  if ( v14 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_BYTE *)(v14 + v16) );
    v15 = v16 + 1;
  }
  else
  {
    v15 = 1LL;
  }
  v17 = *(_QWORD *)(a2 + 64);
  if ( v17 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v17 + v19) );
    v18 = v19 + 1;
  }
  else
  {
    v18 = 1LL;
  }
  v20 = *(_QWORD *)(a2 + 120);
  if ( v20 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_BYTE *)(v20 + v22) );
    v21 = v22 + 1;
  }
  else
  {
    v21 = 1LL;
  }
  v23 = *(_QWORD *)(a2 + 104);
  if ( v23 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( *(_BYTE *)(v23 + v25) );
    v24 = v25 + 1;
  }
  else
  {
    v24 = 1LL;
  }
  v26 = *(_QWORD *)(a2 + 112);
  if ( v26 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(v26 + 2 * v28) );
    v27 = 2 * v28 + 2;
  }
  else
  {
    v27 = 2LL;
  }
  v29 = *(_QWORD *)(a2 + 80);
  if ( v29 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(v29 + v31) );
    v30 = v31 + 1;
  }
  else
  {
    v30 = 1LL;
  }
  v32 = *(_QWORD *)(a2 + 88);
  if ( v32 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v32 + 2 * v33) );
    v4 = 2 * v33 + 2;
  }
  v34 = v15 + v18 + v21 + v24 + v27 + v4 + v30;
  v35 = (LPVOID *)(a1 + 144);
  v36 = *(volatile signed __int32 **)(a1 + 144);
  v37 = v6 + v9 + v12 + v34;
  if ( v36 )
  {
    if ( *v36 == 1 && *(_QWORD *)(a1 + 152) >= v37 )
      goto LABEL_57;
    if ( _InterlockedExchangeAdd(v36, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *v35);
    }
    *v35 = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
  }
  sub_180001EC8(a1 + 144, 0LL, v37);
LABEL_57:
  v39 = (__int64)*v35 + 4;
  v40 = v39 & -(__int64)(*v35 != 0LL);
  v41 = v40 + *(_QWORD *)(a1 + 152);
  result = -v40;
  v43 = v41 & -(__int64)(v40 != 0);
  if ( v40 )
  {
    v44 = sub_180008EF4(
            v39 & -(__int64)(*v35 != 0LL),
            v41 & -(__int64)((v39 & -(__int64)(*v35 != 0LL)) != 0),
            *(_QWORD *)(a2 + 16),
            a1 + 16);
    v45 = sub_180008F80(v44, v43, *(_QWORD *)(a2 + 32), a1 + 32);
    v46 = sub_180008F80(v45, v43, *(_QWORD *)(a2 + 40), a1 + 40);
    v47 = sub_180008F80(v46, v43, *(_QWORD *)(a2 + 48), a1 + 48);
    v48 = sub_180008F80(v47, v43, *(_QWORD *)(a2 + 64), a1 + 64);
    v49 = sub_180008F80(v48, v43, *(_QWORD *)(a2 + 120), a1 + 120);
    v50 = sub_180008F80(v49, v43, *(_QWORD *)(a2 + 104), a1 + 104);
    v51 = sub_180008EF4(v50, v43, *(_QWORD *)(a2 + 112), a1 + 112);
    v52 = sub_180008F80(v51, v43, *(_QWORD *)(a2 + 80), a1 + 80);
    v53 = (void *)sub_180008EF4(v52, v43, *(_QWORD *)(a2 + 88), a1 + 88);
    return (__int64)memset(v53, 0, v43 - (_QWORD)v53);
  }
  return result;
}
