/*
 * XREFs of RtlRbInsertNodeEx @ 0x180027DC0
 * Callers:
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpVaMgrFree @ 0x180005E4C (RtlpHpVaMgrFree.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180006CD0 (RtlpHpSegFreeRangeInsert.c)
 *     LdrpInsertModuleToIndexLockHeld @ 0x180014744 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlpHpSegFree @ 0x1800279F0 (RtlpHpSegFree.c)
 *     RtlpHpVsContextFree @ 0x180028500 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x180029280 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegAlloc @ 0x180029B70 (RtlpHpSegAlloc.c)
 *     EtwpInsertRegistration @ 0x1800434A4 (EtwpInsertRegistration.c)
 *     LdrpCheckForRetryLoading @ 0x18005FDE8 (LdrpCheckForRetryLoading.c)
 *     RtlpHpVsFreeChunkInsert @ 0x180064E18 (RtlpHpVsFreeChunkInsert.c)
 *     EtwpInsertGuidEntry @ 0x18008375C (EtwpInsertGuidEntry.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4EE4 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r11
  bool v5; // bl
  char v7; // cl
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  bool v10; // zf
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // si
  unsigned __int64 v14; // r8
  char v15; // cl
  __int64 v16; // rdi
  _BOOL8 v17; // rbp
  _BOOL8 v18; // rdi
  unsigned __int64 v19; // rax
  int v20; // ebx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 *v25; // r12
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r15
  _QWORD *v32; // rbx
  BOOL v33; // edi
  unsigned __int64 v34; // rax
  int v35; // r9d
  _BOOL8 v36; // rbp
  __int64 *v37; // r14
  __int64 v38; // rax
  _QWORD *v39; // rsi
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // r12
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 v50; // r15
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx

  v4 = 0LL;
  v5 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  v7 = *((_BYTE *)a1 + 8);
  LOBYTE(v8) = v7 & 1;
  if ( !a2 )
  {
    v44 = a4 ^ (unsigned __int64)a1;
    if ( (_BYTE)v8 )
      *a1 = v44;
    else
      *a1 = a4;
    if ( (v7 & 1) != 0 )
    {
      a1[1] = v44;
      *((_BYTE *)a1 + 8) = v44 | 1;
    }
    else
    {
      a1[1] = a4;
    }
    *(_QWORD *)(a4 + 16) = 0LL;
    return v8;
  }
  v9 = a4;
  v10 = (_BYTE)v8 == 0;
  v11 = a2;
  if ( !v10 )
    v9 = a4 ^ a2;
  *(_QWORD *)(a2 + 8LL * a3) = v9;
  if ( (a1[1] & 1) != 0 )
    v11 = a4 ^ a2;
  v8 = v11 | 1;
  *(_QWORD *)(a4 + 16) = v8;
  if ( !a3 )
  {
    v8 = a1[1];
    if ( (v8 & 1) != 0 )
      v12 = v8 == 1 ? 0LL : v8 ^ ((unsigned __int64)a1 | 1);
    else
      v12 = a1[1];
    if ( a2 == v12 )
    {
      if ( (v8 & 1) != 0 )
      {
        a1[1] = a4 ^ (unsigned __int64)a1;
        LOBYTE(v8) = a4 ^ (unsigned __int8)a1 | 1;
        *((_BYTE *)a1 + 8) = v8;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
  {
    v13 = *((_BYTE *)a1 + 8);
    while ( 1 )
    {
      v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v15 = v13 & 1;
      if ( (v13 & 1) != 0 && v14 )
        v14 ^= a2;
      v16 = *(_QWORD *)v14;
      if ( v15 && v16 )
        v16 ^= v14;
      v17 = v16 == a2;
      v18 = v16 != a2;
      v8 = *(_QWORD *)(v14 + 8 * v17);
      if ( v15 )
      {
        if ( !v8 )
          break;
        v8 ^= v14;
      }
      if ( !v8 || (*(_BYTE *)(v8 + 16) & 1) == 0 )
        break;
      *(_BYTE *)(a2 + 16) &= ~1u;
      a4 = v14;
      *(_BYTE *)(v8 + 16) &= ~1u;
      LOBYTE(v8) = *(_QWORD *)(v14 + 16);
      a2 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !a2 )
          return v8;
        a2 ^= v14;
      }
      if ( a2 )
      {
        *(_BYTE *)(v14 + 16) = v8 | 1;
        v13 = *((_BYTE *)a1 + 8);
        v8 = *(_QWORD *)a2;
        if ( (v13 & 1) != 0 && v8 )
          v8 ^= a2;
        v5 = v14 != v8;
        if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
          continue;
      }
      return v8;
    }
    if ( v5 == v18 )
    {
LABEL_38:
      v31 = *a1;
      if ( (a1[1] & 1) != 0 )
      {
        if ( v31 )
          v31 ^= (unsigned __int64)a1;
        else
          v31 = 0LL;
      }
      v32 = (_QWORD *)(a2 + 16);
      v33 = !v18;
      v34 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v35 = a1[1] & 1;
      if ( (a1[1] & 1) != 0 && v34 )
        v34 ^= a2;
      if ( v34 != v14 )
        goto LABEL_90;
      v36 = v33;
      v37 = (__int64 *)(v14 + 8 * !v33);
      v38 = *v37;
      if ( (a1[1] & 1) != 0 && v38 )
        v38 ^= v14;
      if ( v38 != a2 )
        goto LABEL_90;
      v39 = (_QWORD *)(v14 + 16);
      v40 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !v40 )
          goto LABEL_78;
        v40 ^= v14;
      }
      if ( v40 )
      {
        v41 = *(_QWORD *)(v40 + 8);
        if ( (a1[1] & 1) != 0 && v41 )
          v41 ^= v40;
        if ( v41 == v14 )
        {
          v42 = a2;
          if ( (a1[1] & 1) != 0 )
            v42 = a2 ^ v40;
          *(_QWORD *)(v40 + 8) = v42;
        }
        else
        {
          v45 = *(_QWORD *)v40;
          if ( (a1[1] & 1) != 0 && v45 )
            v45 ^= v40;
          if ( v45 != v14 )
            goto LABEL_90;
          v46 = a2;
          if ( (a1[1] & 1) != 0 )
            v46 = a2 ^ v40;
          *(_QWORD *)v40 = v46;
        }
        goto LABEL_50;
      }
LABEL_78:
      if ( v31 != v14 )
        goto LABEL_90;
      v31 = a2;
LABEL_50:
      if ( v35 && v40 )
        v40 ^= a2;
      *v32 &= 3uLL;
      *v32 |= v40;
      v43 = *(_QWORD *)(a2 + 8 * v36);
      if ( v35 )
      {
        if ( !v43 )
        {
LABEL_53:
          if ( v35 && v43 )
            v43 ^= v14;
          *v37 = v43;
          v8 = v14 ^ a2;
          if ( v35 )
            v14 ^= a2;
          *(_QWORD *)(a2 + 8 * v36) = v14;
          if ( v35 )
            a2 = v8;
          *v39 &= 3uLL;
          *v39 |= a2;
          if ( (a1[1] & 1) != 0 )
          {
            LOBYTE(v8) = v31 ^ (unsigned __int8)a1;
            if ( v31 )
              v4 = v31 ^ (unsigned __int64)a1;
          }
          else
          {
            v4 = v31;
          }
          *a1 = v4;
          *(_BYTE *)v39 |= 1u;
          *(_BYTE *)v32 &= ~1u;
          return v8;
        }
        v43 ^= a2;
      }
      if ( !v43 )
        goto LABEL_53;
      v47 = *(_QWORD *)(v43 + 16);
      v48 = v47 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v35 && v48 )
        v48 ^= v43;
      if ( v48 == a2 )
      {
        v49 = v14;
        if ( v35 )
          v49 = v14 ^ v43;
        *(_QWORD *)(v43 + 16) = v49 | v47 & 3;
        goto LABEL_53;
      }
LABEL_90:
      __fastfail(0x1Du);
    }
    v19 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v20 = v13 & 1;
    if ( (v13 & 1) != 0 && v19 )
      v19 ^= a4;
    if ( v19 != a2 )
      goto LABEL_90;
    v21 = *(_QWORD *)(a2 + 8 * v17);
    if ( (v13 & 1) != 0 && v21 )
      v21 ^= a2;
    if ( v21 != a4 )
      goto LABEL_90;
    v22 = *(_QWORD *)(v14 + 8 * v18);
    if ( (v13 & 1) != 0 && v22 )
      v22 ^= v14;
    if ( v22 != a2 )
      goto LABEL_90;
    v23 = (_QWORD *)(a2 + 16);
    v24 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v13 & 1) != 0 && v24 )
      v24 ^= a2;
    if ( v24 != v14 )
      goto LABEL_90;
    v25 = (unsigned __int64 *)(a4 + 8 * v18);
    v26 = a4;
    if ( (v13 & 1) != 0 )
      v26 = a4 ^ v14;
    *(_QWORD *)(v14 + 8 * v18) = v26;
    v27 = v14;
    if ( (v13 & 1) != 0 )
      v27 = a4 ^ v14;
    *(_QWORD *)(a4 + 16) &= 3uLL;
    *(_QWORD *)(a4 + 16) |= v27;
    v28 = *v25;
    if ( v20 )
    {
      if ( !v28 )
      {
LABEL_34:
        if ( v20 && v28 )
          v28 ^= a2;
        *(_QWORD *)(a2 + 8 * v17) = v28;
        v29 = a2 ^ a4;
        v30 = a4;
        if ( v20 )
        {
          a2 ^= a4;
          v30 = v29;
        }
        *v25 = a2;
        a2 = a4;
        *v23 &= 3uLL;
        *v23 |= v30;
        goto LABEL_38;
      }
      v28 ^= a4;
    }
    if ( v28 )
    {
      v50 = *(_QWORD *)(v28 + 16);
      v51 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v20 && v51 )
        v51 ^= v28;
      if ( v51 != a4 )
        goto LABEL_90;
      v52 = a2;
      if ( v20 )
        v52 = a2 ^ v28;
      *(_QWORD *)(v28 + 16) = v52 | v50 & 3;
    }
    goto LABEL_34;
  }
  return v8;
}
