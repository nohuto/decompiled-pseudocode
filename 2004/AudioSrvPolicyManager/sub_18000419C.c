/*
 * XREFs of sub_18000419C @ 0x18000419C
 * Callers:
 *     sub_1800044A8 @ 0x1800044A8 (sub_1800044A8.c)
 * Callees:
 *     sub_180001FD0 @ 0x180001FD0 (sub_180001FD0.c)
 *     sub_180005048 @ 0x180005048 (sub_180005048.c)
 *     memset @ 0x18003A7D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_18000419C(__int64 a1, __int64 a2, int a3)
{
  char **v3; // r15
  char **v4; // r14
  __int64 v5; // r13
  __int64 v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  SIZE_T v18; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v20; // rbp
  HANDLE v21; // rax
  HANDLE v22; // rax
  char *v23; // rbx
  size_t v24; // rdx
  _BYTE *v25; // r8
  char *v26; // rbp
  __int64 v27; // rdi
  size_t v28; // rdi
  _BYTE *v29; // r8
  size_t v30; // rsi
  void *v31; // rax

  *(_DWORD *)(a1 + 4) = a3;
  v3 = (char **)(a1 + 16);
  v4 = (char **)(a1 + 32);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 4);
  v5 = a1 + 56;
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = -1LL;
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 56);
  *(_BYTE *)(a1 + 26) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 56) = 0LL;
  v9 = *(_QWORD *)(a2 + 48);
  if ( v9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(v9 + v11) );
    v10 = v11 + 1;
  }
  else
  {
    v10 = 1LL;
  }
  v12 = *(_QWORD *)(a2 + 120);
  if ( v12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v12 + v14) );
    v13 = v14 + 1;
  }
  else
  {
    v13 = 1LL;
  }
  v15 = *(_QWORD *)(a2 + 16);
  if ( v15 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v15 + 2 * v17) );
    v16 = 2 * v17 + 2;
  }
  else
  {
    v16 = 2LL;
  }
  v18 = v10 + v16 + v13;
  if ( !*(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 72) < v18 )
  {
    ProcessHeap = GetProcessHeap();
    v10 = (__int64)HeapAlloc(ProcessHeap, 8u, v18);
    v20 = v10;
    if ( qword_18004FD18 )
    {
      v21 = GetProcessHeap();
      LODWORD(v10) = ((__int64 (__fastcall *)(HANDLE, __int64))qword_18004FD18)(v21, v20);
    }
    if ( v20 )
    {
      v22 = GetProcessHeap();
      LODWORD(v10) = HeapFree(v22, 0, *(LPVOID *)(a1 + 64));
      *(_QWORD *)(a1 + 64) = v20;
      *(_QWORD *)(a1 + 72) = v18;
    }
  }
  v23 = *(char **)(a1 + 64);
  if ( v23 )
  {
    v24 = *(_QWORD *)(a1 + 72);
    v25 = *(_BYTE **)(a2 + 48);
    v26 = &v23[v24];
    if ( v23 == &v23[v24] )
      goto LABEL_32;
    if ( !v25 )
      goto LABEL_32;
    if ( !*v25 )
      goto LABEL_32;
    v27 = -1LL;
    do
      ++v27;
    while ( v25[v27] );
    v28 = v27 + 1;
    if ( v24 >= v28 )
    {
      sub_180001FD0(v23, v24, v25, v28);
      if ( v3 )
        *v3 = v23;
      v23 += v28;
    }
    else
    {
LABEL_32:
      if ( v3 )
        *v3 = 0LL;
    }
    v29 = *(_BYTE **)(a2 + 120);
    if ( v23 == v26 || !v29 || !*v29 )
      goto LABEL_42;
    do
      ++v7;
    while ( v29[v7] );
    v30 = v7 + 1;
    if ( v26 - v23 >= v30 )
    {
      sub_180001FD0(v23, v26 - v23, v29, v30);
      if ( v4 )
        *v4 = v23;
      v23 += v30;
    }
    else
    {
LABEL_42:
      if ( v4 )
        *v4 = 0LL;
    }
    v31 = (void *)sub_180005048(v23, v26, *(_QWORD *)(a2 + 16), v5);
    LODWORD(v10) = (unsigned int)memset(v31, 0, v26 - (_BYTE *)v31);
  }
  return v10;
}
