/*
 * XREFs of sub_180041D10 @ 0x180041D10
 * Callers:
 *     sub_180041864 @ 0x180041864 (sub_180041864.c)
 *     sub_180042470 @ 0x180042470 (sub_180042470.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180042120 @ 0x180042120 (sub_180042120.c)
 *     sub_1800421D8 @ 0x1800421D8 (sub_1800421D8.c)
 *     sub_180042214 @ 0x180042214 (sub_180042214.c)
 *     sub_180042298 @ 0x180042298 (sub_180042298.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 *     j_??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800447FC (j_--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_180041D10(__int64 a1)
{
  int v2; // edi
  int v3; // edx
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // eax
  unsigned __int16 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // rdi
  int v13; // esi
  int v14; // edx
  _WORD *v15; // r14
  unsigned __int64 v16; // rax
  void *v17; // rax
  __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rsi
  unsigned int v21; // r15d
  __int64 v22; // rsi
  int v23; // ebp
  __int64 v24; // r8
  unsigned __int64 v25; // rax
  void *v26; // rax
  __int64 v27; // rdx
  void *v28; // rcx
  void *v29; // rdi
  int v30; // edx
  bool v31; // cf
  unsigned int v32; // esi
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v2 = sub_180042298(a1, a1 + 36);
  if ( v2 < 0 )
  {
    v3 = 1305;
LABEL_3:
    sub_180003268(
      retaddr,
      v3,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v2);
    return (unsigned int)v2;
  }
  v5 = *(unsigned int *)(a1 + 36);
  if ( v5 > (unsigned __int64)*(unsigned int *)(a1 + 32) + 4 )
  {
    v6 = -2147483637;
    v7 = 1309;
LABEL_6:
    sub_180003268(
      retaddr,
      v7,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v6);
    return v6;
  }
  if ( (unsigned int)v5 < 4 )
    v8 = -1;
  else
    v8 = v5 - 4;
  *(_DWORD *)(a1 + 32) = v8;
  v2 = (unsigned int)v5 < 4 ? 0x80070216 : 0;
  if ( (unsigned int)v5 < 4 )
  {
    v3 = 1313;
    goto LABEL_3;
  }
  v9 = (unsigned __int16 *)(a1 + 48);
  v2 = sub_180042214(a1, a1 + 48);
  if ( v2 < 0 )
  {
    v3 = 1317;
    goto LABEL_3;
  }
  v2 = sub_1800421D8(a1, *v9);
  if ( v2 < 0 )
  {
    v3 = 1319;
    goto LABEL_3;
  }
  LOBYTE(v10) = 1;
  v11 = *v9;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 16);
  v2 = sub_180042120(a1, v11, v10);
  if ( v2 < 0 )
  {
    v3 = 1323;
    goto LABEL_3;
  }
  v12 = (_WORD *)(a1 + 50);
  v13 = sub_180042214(a1, a1 + 50);
  if ( v13 < 0 )
  {
    v14 = 1325;
LABEL_20:
    sub_180003268(
      retaddr,
      v14,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v13);
    return (unsigned int)v13;
  }
  if ( 12 * (unsigned int)(unsigned __int16)*v12 > *(_DWORD *)(a1 + 32) )
  {
    v6 = -2147024809;
    v7 = 1327;
    goto LABEL_6;
  }
  v15 = (_WORD *)(a1 + 52);
  v13 = sub_180042214(a1, a1 + 52);
  if ( v13 < 0 )
  {
    v14 = 1329;
    goto LABEL_20;
  }
  if ( 4 * (unsigned int)(unsigned __int16)*v15 > *(_DWORD *)(a1 + 32) )
  {
    v6 = -2147024809;
    v7 = 1331;
    goto LABEL_6;
  }
  if ( !*v12 )
    goto LABEL_40;
  v16 = 16LL * (unsigned __int16)*v12;
  if ( !is_mul_ok((unsigned __int16)*v12, 0x10uLL) )
    v16 = -1LL;
  v17 = operator new(v16, (const struct std::nothrow_t *)&unk_18005AF88);
  v19 = *(void **)(a1 + 56);
  v20 = v17;
  if ( v17 != v19 )
  {
    j_j__o_free(v19, v18);
    v19 = v20;
    *(_QWORD *)(a1 + 56) = v20;
  }
  if ( !v19 )
  {
    v6 = -2147024882;
    v7 = 1337;
    goto LABEL_6;
  }
  v21 = 0;
  if ( *v12 )
  {
    while ( 1 )
    {
      v22 = 16LL * v21;
      v23 = sub_180042298(a1, v22 + *(_QWORD *)(a1 + 56));
      if ( v23 < 0 )
        break;
      v23 = sub_180042298(a1, v22 + *(_QWORD *)(a1 + 56) + 4LL);
      if ( v23 < 0 )
      {
        v30 = 1343;
        goto LABEL_51;
      }
      v23 = sub_1800421D8(a1, *(unsigned int *)(*(_QWORD *)(a1 + 56) + v22 + 4));
      if ( v23 < 0 )
      {
        v30 = 1345;
        goto LABEL_51;
      }
      LOBYTE(v24) = 1;
      *(_QWORD *)(v22 + *(_QWORD *)(a1 + 56) + 8) = *(_QWORD *)(a1 + 16);
      v13 = sub_180042120(a1, *(unsigned int *)(*(_QWORD *)(a1 + 56) + v22 + 4), v24);
      if ( v13 < 0 )
      {
        v14 = 1349;
        goto LABEL_20;
      }
      if ( ++v21 >= (unsigned __int16)*v12 )
        goto LABEL_40;
    }
    v30 = 1341;
LABEL_51:
    sub_180003268(
      retaddr,
      v30,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v23);
    return (unsigned int)v23;
  }
  else
  {
LABEL_40:
    if ( *v15 )
    {
      v25 = 16LL * (unsigned __int16)*v15;
      if ( !is_mul_ok((unsigned __int16)*v15, 0x10uLL) )
        v25 = -1LL;
      v26 = operator new(v25, (const struct std::nothrow_t *)&unk_18005AF88);
      v28 = *(void **)(a1 + 64);
      v29 = v26;
      if ( v26 != v28 )
      {
        j_j__o_free(v28, v27);
        v28 = v29;
        *(_QWORD *)(a1 + 64) = v29;
      }
      if ( !v28 )
      {
        v6 = -2147024882;
        v7 = 1357;
        goto LABEL_6;
      }
      v31 = *v15 != 0;
      v32 = 0;
      while ( v31 )
      {
        v33 = 16LL * v32;
        *(_DWORD *)(*(_QWORD *)(a1 + 64) + v33 + 4) = 0;
        *(_QWORD *)(*(_QWORD *)(a1 + 64) + v33 + 8) = 0LL;
        v23 = sub_180042298(a1, v33 + *(_QWORD *)(a1 + 64));
        if ( v23 < 0 )
        {
          v30 = 1364;
          goto LABEL_51;
        }
        v34 = *(_QWORD *)(a1 + 64);
        if ( (*(_DWORD *)(v34 + 16LL * v32) & 0x10000000) == 0 )
        {
          v23 = sub_180042298(a1, v33 + v34 + 4);
          if ( v23 < 0 )
          {
            v30 = 1370;
            goto LABEL_51;
          }
          v23 = sub_1800421D8(a1, *(unsigned int *)(*(_QWORD *)(a1 + 64) + v33 + 4));
          if ( v23 < 0 )
          {
            v30 = 1372;
            goto LABEL_51;
          }
          LOBYTE(v35) = 1;
          *(_QWORD *)(*(_QWORD *)(a1 + 64) + v33 + 8) = *(_QWORD *)(a1 + 16);
          v2 = sub_180042120(a1, *(unsigned int *)(*(_QWORD *)(a1 + 64) + v33 + 4), v35);
          if ( v2 < 0 )
          {
            v3 = 1376;
            goto LABEL_3;
          }
        }
        v31 = ++v32 < (unsigned __int16)*v15;
      }
    }
    return 0LL;
  }
}
