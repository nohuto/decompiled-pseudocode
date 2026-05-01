/*
 * XREFs of sub_180031B00 @ 0x180031B00
 * Callers:
 *     PsmMemoryLimitNotification2 @ 0x180033530 (PsmMemoryLimitNotification2.c)
 * Callees:
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     j_j_free @ 0x1800460D8 (j_j_free.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800460F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 *     memmove @ 0x18004682E (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 */

int __fastcall sub_180031B00(__int64 a1, __int64 a2, int a3, char **a4, int a5, void *a6)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rsi
  _QWORD *v13; // r13
  unsigned __int64 v14; // rbx
  char **v15; // r12
  __int64 v16; // rcx
  char **v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  char *v20; // rbp
  void **v21; // rax
  char v22; // r15
  size_t v23; // rbx
  char *v24; // rbx
  char **v25; // rcx
  void *v26; // rax
  char *v27; // rax
  __int128 v28; // xmm1
  void *v29; // rdi
  int v30; // eax
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  _QWORD *v33; // rcx
  char *v34; // rax
  void *v36; // [rsp+30h] [rbp-68h] BYREF
  void *v37[2]; // [rsp+38h] [rbp-60h] BYREF
  void *Block[10]; // [rsp+48h] [rbp-50h] BYREF

  LODWORD(v36) = 0;
  v8 = a2;
  v9 = sub_180046098(0x98uLL);
  v12 = v9;
  if ( !v9 )
    goto LABEL_44;
  *(_WORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 8) = v9 + 24;
  v13 = (_QWORD *)(v9 + 136);
  *(_QWORD *)(v9 + 16) = v9 + 24;
  *(_QWORD *)(v9 + 112) = 0LL;
  *(_QWORD *)(v9 + 120) = 0LL;
  *(_DWORD *)(v9 + 128) = 0;
  *(_OWORD *)(v9 + 136) = 0LL;
  *(_DWORD *)v9 = 1;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)a4 + v14) );
  }
  else
  {
    v14 = 0LL;
  }
  v15 = (char **)(v9 + 24);
  v16 = 7LL;
  v17 = *(char ***)(v9 + 8);
  if ( v17 == v15 )
    v18 = 7LL;
  else
    v18 = (*v15 - (char *)v17) >> 1;
  if ( v14 <= v18 )
  {
    if ( v17 != a4 )
    {
      memmove(v17, a4, 2 * v14);
      v17 = *(char ***)(v12 + 8);
    }
    v34 = (char *)v17 + 2 * v14;
    *(_QWORD *)(v12 + 16) = v34;
    *(_WORD *)v34 = 0;
    goto LABEL_26;
  }
  if ( v17 != v15 )
    v16 = (*v15 - (char *)v17) >> 1;
  v19 = 2 * v16 + 1;
  if ( v19 < v14 )
    v19 = v14;
  if ( v19 > 0x3FFFFFFFFFFFFFF7LL )
    v19 = 0x3FFFFFFFFFFFFFF7LL;
  if ( v14 > v19 )
  {
    v20 = 0LL;
    Block[1] = 0LL;
    v21 = Block;
    v22 = 2;
  }
  else
  {
    v37[1] = (void *)(v19 + 1);
    if ( v19 + 1 > 0x7FFFFFFFFFFFFFFFLL )
    {
      v20 = 0LL;
      v37[0] = 0LL;
    }
    else
    {
      v20 = (char *)operator new(2 * (v19 + 1), (const struct std::nothrow_t *)&unk_1800967D8);
      v37[0] = v20;
    }
    v21 = v37;
    v22 = 1;
  }
  v36 = v21[1];
  *v21 = 0LL;
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( Block[0] )
      j_j_free(Block[0]);
  }
  if ( (v22 & 1) != 0 && v37[0] )
    j_j_free(v37[0]);
  if ( !v20 )
  {
    LODWORD(v9) = sub_180063538((void *)v12);
LABEL_44:
    v29 = a6;
    goto LABEL_30;
  }
  v23 = 2 * v14;
  memcpy(v20, a4, v23);
  v24 = &v20[v23];
  *(_WORD *)v24 = 0;
  v25 = *(char ***)(v12 + 8);
  if ( v25 != v15 )
    j_j_free(v25);
  v26 = v36;
  *(_QWORD *)(v12 + 8) = v20;
  *(_QWORD *)(v12 + 16) = v24;
  v27 = &v20[2 * (_QWORD)v26 - 2];
  v8 = a2;
  *v15 = v27;
LABEL_26:
  v28 = *(_OWORD *)(v8 + 16);
  v29 = a6;
  *(_OWORD *)(v12 + 40) = *(_OWORD *)v8;
  *(_DWORD *)(v12 + 112) = a5;
  v30 = *(_DWORD *)(v8 + 64);
  v31 = *(_OWORD *)(v8 + 32);
  *(_QWORD *)(v12 + 120) = a6;
  *(_OWORD *)(v12 + 56) = v28;
  *(_DWORD *)(v12 + 128) = 1;
  v32 = *(_OWORD *)(v8 + 48);
  *(_OWORD *)(v12 + 72) = v31;
  *(_OWORD *)(v12 + 88) = v32;
  *(_DWORD *)(v12 + 104) = v30;
  *(_DWORD *)(v12 + 108) = a3;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
  v33 = *(_QWORD **)(a1 + 280);
  if ( *v33 != a1 + 272 )
    __fastfail(3u);
  *v13 = a1 + 272;
  v13[1] = v33;
  *v33 = v13;
  *(_QWORD *)(a1 + 280) = v13;
  if ( (*(_BYTE *)(a1 + 296) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    TpPostWork(*(_QWORD *)(a1 + 264));
    *(_DWORD *)(a1 + 296) |= 1u;
  }
  LODWORD(v9) = RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 224));
LABEL_30:
  if ( (unsigned int)dword_1800B31E0 > 5 && (byte_1800B31F0 & 1) != 0 )
  {
    v9 = qword_1800B31F8 & 1;
    if ( v9 == qword_1800B31F8 )
    {
      v37[0] = v29;
      LODWORD(v36) = -1073741801;
      LODWORD(v9) = sub_180063424(
                      (unsigned int)&dword_1800B31E0,
                      (unsigned int)&unk_18009AAB4,
                      v10,
                      v11,
                      (__int64)&v36,
                      (__int64)v37);
    }
  }
  return v9;
}
