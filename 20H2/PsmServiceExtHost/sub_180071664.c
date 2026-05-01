/*
 * XREFs of sub_180071664 @ 0x180071664
 * Callers:
 *     sub_180014F00 @ 0x180014F00 (sub_180014F00.c)
 *     sub_180021CC4 @ 0x180021CC4 (sub_180021CC4.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 * Callees:
 *     sub_180012D40 @ 0x180012D40 (sub_180012D40.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 *     sub_1800719A4 @ 0x1800719A4 (sub_1800719A4.c)
 *     sub_180071AF0 @ 0x180071AF0 (sub_180071AF0.c)
 */

bool __fastcall sub_180071664(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, int a5, int a6)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  int v11; // eax
  int v12; // r13d
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  unsigned __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // r10d
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  int v26; // [rsp+30h] [rbp-58h]
  unsigned int v27; // [rsp+34h] [rbp-54h]
  _BYTE Context[8]; // [rsp+38h] [rbp-50h] BYREF
  int v29; // [rsp+40h] [rbp-48h]
  unsigned int v30; // [rsp+44h] [rbp-44h]
  unsigned int v31; // [rsp+48h] [rbp-40h]
  unsigned int v32; // [rsp+98h] [rbp+10h]
  int v34; // [rsp+A8h] [rbp+20h]

  v6 = 0;
  v7 = 0LL;
  v32 = 0;
  if ( !*(_DWORD *)(a2 + 36) )
    goto LABEL_32;
  sub_180071AF0(a1, a2, a4, a6, (__int64)Context);
  qsort_s(
    *(void **)a2,
    *(unsigned int *)(a2 + 36),
    0x40uLL,
    (_CoreCrtSecureSearchSortCompareFunction)sub_180071490,
    Context);
  v27 = v30;
  v34 = v29;
  if ( v30 )
  {
    if ( v30 == 1 )
    {
      v11 = a5;
      v12 = 1;
      goto LABEL_9;
    }
    if ( v30 != 2 )
      goto LABEL_32;
    v11 = a5;
  }
  else
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 520LL);
  }
  v12 = 0;
LABEL_9:
  v13 = *(_DWORD *)(a1 + 196);
  v14 = 0;
  v26 = v11;
  if ( *(_DWORD *)(a2 + 36) )
  {
    while ( 1 )
    {
      if ( a4 <= v7 )
      {
LABEL_31:
        v6 = v32;
        goto LABEL_32;
      }
      v15 = *(_QWORD *)a2 + ((unsigned __int64)v14 << 6);
      v16 = *(_QWORD *)(v15 + 48);
      if ( v16 != a3 )
        break;
LABEL_28:
      if ( ++v14 >= *(_DWORD *)(a2 + 36) )
        goto LABEL_31;
      v11 = v26;
    }
    if ( (int)sub_180063CBC(*(_DWORD *)(v15 + 56), v11) >= 0 )
      goto LABEL_31;
    if ( v17 == 1 )
    {
      if ( (*(_BYTE *)(v16 + 1162) & 0x10) == 0 )
        goto LABEL_31;
    }
    else if ( (unsigned int)(v17 - 2) > 1 )
    {
      goto LABEL_18;
    }
    if ( !(unsigned int)sub_180012D40(v16) )
      goto LABEL_28;
LABEL_18:
    sub_180012D40(v16);
    v18 = *(_QWORD *)(a2 + 8);
    v19 = 3LL * v32++;
    *(_QWORD *)(v18 + 8 * v19 + 8) = v16;
    if ( v27 == 2 )
    {
      if ( v34 == 1 )
        goto LABEL_23;
      if ( v7 + *(_QWORD *)(v15 + 40) >= a4 )
      {
        *(_DWORD *)(v18 + 8 * v19 + 16) = 1;
        v24 = a4 - v7;
        v7 = a4;
        *(_QWORD *)(v18 + 8 * v19) = v24;
        goto LABEL_31;
      }
    }
    if ( v27 == 1 )
      *(_DWORD *)(v18 + 8 * v19 + 20) |= 1u;
LABEL_23:
    *(_DWORD *)(v18 + 8 * v19 + 16) = v12;
    v20 = sub_1800719A4(v30, v15);
    v7 += v20;
    *(_QWORD *)(v23 + 8 * v22) = v20;
    if ( !v12 && *(char *)(v16 + 1162) < 0 )
      --v13;
    if ( !v21 && v13 <= v31 )
      goto LABEL_31;
    goto LABEL_28;
  }
LABEL_32:
  *(_DWORD *)(a2 + 40) = v6;
  return v7 >= a4;
}
