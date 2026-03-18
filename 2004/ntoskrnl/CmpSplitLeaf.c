/*
 * XREFs of CmpSplitLeaf @ 0x140721824
 * Callers:
 *     CmpSelectLeaf @ 0x140758E70 (CmpSelectLeaf.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     HvReallocateCell @ 0x14069DB20 (HvReallocateCell.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14069EE08 (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSplitLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // r12
  __int16 *v5; // rsi
  __int64 (__fastcall *v6)(ULONG_PTR, ULONG_PTR, ULONG_PTR *); // rax
  unsigned int v7; // r15d
  __int64 v9; // rax
  _WORD *v10; // rbx
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // r13
  unsigned int v14; // r14d
  unsigned int Cell; // eax
  __int16 v16; // ax
  int v17; // edx
  __int64 v18; // rdx
  int v19; // ecx
  int v21; // ebx
  unsigned int v22; // ebx
  unsigned __int16 v23; // [rsp+30h] [rbp-30h]
  unsigned int BugCheckParameter3a; // [rsp+34h] [rbp-2Ch]
  ULONG_PTR BugCheckParameter3_4; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v26[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 *v27; // [rsp+48h] [rbp-18h] BYREF
  _DWORD v28[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v29; // [rsp+A0h] [rbp+40h]

  v4 = a3;
  v28[1] = 0;
  v26[1] = 0;
  v5 = 0LL;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 8);
  v7 = BugCheckParameter3;
  BugCheckParameter3_4 = 0xFFFFFFFFLL;
  v28[0] = -1;
  v26[0] = -1;
  v27 = 0LL;
  v9 = v6(BugCheckParameter2, BugCheckParameter3, &BugCheckParameter3_4);
  v10 = (_WORD *)v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  v11 = *(_DWORD *)(v9 + 4 * v4 + 4);
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, v11, v28);
  v13 = v12;
  if ( v12 )
  {
    v23 = *(_WORD *)(v12 + 2) >> 1;
    v29 = *(_WORD *)(v12 + 2) - v23;
    BugCheckParameter3a = *(_DWORD *)(BugCheckParameter2 + 212);
    if ( (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v11, 0LL) )
    {
      v14 = v29 * (BugCheckParameter3a < 5 ? 4 : 8);
      Cell = HvAllocateCell(BugCheckParameter2, v14 + 5, a4, (__int64)&v27, (__int64)v26);
      v5 = v27;
      BugCheckParameter3a = Cell;
      if ( Cell != -1 )
      {
        v16 = 26732;
        if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
          v16 = 26988;
        *v27 = v16;
        v17 = *((_DWORD *)v10 - 1);
        if ( ((-8 - 4 * (unsigned __int16)v10[1] - v17) & 0xFFFFFFFC) >= 4 )
          goto LABEL_8;
        v21 = -4 - v17;
        (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
          BugCheckParameter2,
          &BugCheckParameter3_4);
        v27 = 0LL;
        v22 = HvReallocateCell(BugCheckParameter2, v7, v21 + 4, 0, (__int64 *)&v27, (__int64 *)&BugCheckParameter3_4);
        if ( v22 != -1 )
        {
          if ( v7 != v22 )
          {
            HvFreeCell(BugCheckParameter2, v7);
            v7 = v22;
          }
          v10 = v27;
LABEL_8:
          v18 = 8LL * v23 + 4;
          if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
            v18 = 4LL * v23 + 4;
          memmove(v5 + 2, (const void *)(v13 + v18), v14);
          *(_WORD *)(v13 + 2) = v23;
          v5[1] = v29;
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
          v19 = (unsigned __int16)v10[1];
          if ( (unsigned int)v4 < v19 - 1 )
          {
            memmove(
              &v10[2 * (unsigned int)(v4 + 2) + 2],
              &v10[2 * (unsigned int)(v4 + 1) + 2],
              4LL * (unsigned int)(v19 - v4 - 1));
            LOWORD(v19) = v10[1];
          }
          v10[1] = v19 + 1;
          *(_DWORD *)&v10[2 * (unsigned int)(v4 + 1) + 2] = BugCheckParameter3a;
          (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
            BugCheckParameter2,
            &BugCheckParameter3_4);
          return v7;
        }
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
        v5 = 0LL;
        HvFreeCell(BugCheckParameter2, BugCheckParameter3a);
        v10 = v27;
      }
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
    if ( v5 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v26);
  }
  if ( v10 )
    (*(void (__fastcall **)(ULONG_PTR, ULONG_PTR *))(BugCheckParameter2 + 16))(
      BugCheckParameter2,
      &BugCheckParameter3_4);
  return 0xFFFFFFFFLL;
}
