/*
 * XREFs of CmpSplitLeaf @ 0x140733A08
 * Callers:
 *     CmpSelectLeaf @ 0x14076BDCC (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvReallocateCell @ 0x14065B1D0 (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1407207E4 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSplitLeaf(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3, int a4)
{
  _WORD *v4; // r14
  unsigned int v5; // r12d
  __int64 (__fastcall *v7)(ULONG_PTR, ULONG_PTR, __int64 *); // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  _WORD *v11; // rsi
  unsigned __int16 v12; // r15
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r15
  _WORD *v15; // r9
  int v16; // eax
  int v17; // ebx
  unsigned int v18; // ebx
  _WORD *v19; // rdx
  _WORD *v20; // rax
  int v21; // ecx
  unsigned int BugCheckParameter3a; // [rsp+30h] [rbp-40h]
  unsigned int BugCheckParameter3b; // [rsp+30h] [rbp-40h]
  _WORD *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h]
  unsigned __int16 v31; // [rsp+B0h] [rbp+40h]

  v26 = 0xFFFFFFFFLL;
  v29[0] = -1;
  v4 = 0LL;
  v27 = 0xFFFFFFFFLL;
  v5 = BugCheckParameter3;
  v29[1] = 0;
  v7 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8);
  v8 = a3;
  v25 = 0LL;
  v9 = v7(BugCheckParameter2, BugCheckParameter3, &v26);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  if ( *(_WORD *)(v9 + 2) == 0xFFFF
    || (BugCheckParameter3a = *(_DWORD *)(v9 + 4 * v8 + 4),
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                BugCheckParameter3a,
                v29),
        (v11 = (_WORD *)v10) == 0LL) )
  {
LABEL_24:
    if ( v9 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
    return 0xFFFFFFFFLL;
  }
  v12 = *(_WORD *)(v10 + 2);
  v13 = v12 >> 1;
  v14 = v12 - (v12 >> 1);
  v31 = v13;
  if ( ((*v11 - 26220) & 0xFDFF) != 0 )
  {
    LODWORD(v28) = 4;
    v30 = 4LL;
  }
  else
  {
    v28 = 8LL;
    v30 = 8LL;
  }
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, BugCheckParameter3a, 0LL) )
  {
LABEL_22:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
    if ( v4 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
    goto LABEL_24;
  }
  BugCheckParameter3b = HvAllocateCell(BugCheckParameter2, (unsigned int)v28 * v14 + 5, a4, &v25, &v27);
  if ( BugCheckParameter3b == -1 )
  {
    v4 = v25;
    goto LABEL_22;
  }
  v15 = v25;
  *v25 = *v11;
  v16 = *(_DWORD *)(v9 - 4);
  if ( ((-8 - 4 * *(unsigned __int16 *)(v9 + 2) - v16) & 0xFFFFFFFC) < 4 )
  {
    v17 = -4 - v16;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
    v28 = 0LL;
    v18 = HvReallocateCell(BugCheckParameter2, v5, v17 + 4, 0, &v28, &v26);
    if ( v18 == -1 )
    {
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
      v4 = 0LL;
      HvFreeCell(BugCheckParameter2, BugCheckParameter3b);
      v9 = v28;
      goto LABEL_22;
    }
    if ( v5 != v18 )
    {
      HvFreeCell(BugCheckParameter2, v5);
      v5 = v18;
    }
    v15 = v25;
    v9 = v28;
  }
  if ( ((*v11 - 26220) & 0xFDFF) != 0 )
    v19 = &v11[2 * v31 + 2];
  else
    v19 = &v11[4 * v31 + 2];
  memmove(v15 + 2, v19, v30 * v14);
  v20 = v25;
  v11[1] = v31;
  v20[1] = v14;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
  v21 = *(unsigned __int16 *)(v9 + 2);
  if ( (unsigned int)v8 < v21 - 1 )
  {
    memmove(
      (void *)(v9 + 4 * ((unsigned int)(v8 + 2) + 1LL)),
      (const void *)(v9 + 4 * ((unsigned int)(v8 + 1) + 1LL)),
      4LL * (unsigned int)(v21 - v8 - 1));
    LOWORD(v21) = *(_WORD *)(v9 + 2);
  }
  *(_WORD *)(v9 + 2) = v21 + 1;
  *(_DWORD *)(v9 + 4LL * (unsigned int)(v8 + 1) + 4) = BugCheckParameter3b;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
  return v5;
}
