/*
 * XREFs of CmpAddSubKeyEx @ 0x140640CC0
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14086CED0 (CmpDoBuildVirtualStack.c)
 *     CmpCopySyncTree2 @ 0x1408750C0 (CmpCopySyncTree2.c)
 *     CmpAddSubKey @ 0x140876EB0 (CmpAddSubKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14087CE00 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpAddSubKeyToList @ 0x140640F04 (CmpAddSubKeyToList.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14069EE08 (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 (__fastcall *v6)(ULONG_PTR, __int64, _DWORD *); // rax
  unsigned int Cell; // r12d
  __int64 v9; // r15
  __int64 v10; // r13
  _WORD *v11; // rax
  _WORD *v12; // rbx
  __int16 v13; // ax
  char v14; // di
  unsigned int v15; // eax
  int v16; // r14d
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // edx
  unsigned int i; // edx
  __int64 v23; // rcx
  unsigned int v24; // [rsp+30h] [rbp-20h]
  __int16 v25; // [rsp+30h] [rbp-20h]
  _DWORD *v26; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v27[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v28[2]; // [rsp+48h] [rbp-8h] BYREF
  int v29; // [rsp+90h] [rbp+40h]

  v28[1] = 0;
  v28[0] = -1;
  v27[0] = -1;
  v27[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
  Cell = -1;
  v26 = 0LL;
  v29 = 0;
  v9 = v6(BugCheckParameter2, a2, v28);
  if ( !v9 )
    return 0;
  v10 = a3 >> 31;
  if ( *(_DWORD *)(v9 + 4 * v10 + 20) )
  {
    v11 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *(unsigned int *)(v9 + 4 * v10 + 28),
                     v27);
    v12 = v11;
    if ( v11 )
    {
      v13 = *v11;
      v14 = 1;
      if ( v13 != 26220 || v12[1] < 0x1FBu )
      {
        if ( ((v13 - 26732) & 0xFEFF) == 0 && v12[1] >= 0x3F5u )
        {
          (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(BugCheckParameter2 + 16))(BugCheckParameter2, v27, 0LL);
          v26 = 0LL;
          Cell = HvAllocateCell(BugCheckParameter2, 12, v10, (unsigned int)&v26, (__int64)v27);
          if ( Cell == -1 )
          {
            v14 = 0;
            v12 = v26;
LABEL_37:
            v16 = v29;
            goto LABEL_10;
          }
          v12 = v26;
          *v26 = 92530;
          *((_DWORD *)v12 + 1) = *(_DWORD *)(v9 + 4 * v10 + 28);
          *(_DWORD *)(v9 + 4 * v10 + 28) = Cell;
        }
        goto LABEL_7;
      }
      if ( (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v9 + 4 * v10 + 28), 0LL) )
      {
        for ( i = 0; i < (unsigned __int16)v12[1]; *(_DWORD *)&v12[2 * v23 + 2] = *(_DWORD *)&v12[4 * v23 + 2] )
          v23 = i++;
        *v12 = 26988;
LABEL_7:
        v15 = *(_DWORD *)(v9 + 4 * v10 + 28);
        Cell = -1;
        goto LABEL_8;
      }
    }
    v14 = 0;
    v16 = 0;
    goto LABEL_10;
  }
  v14 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
  {
    v20 = 12;
    v25 = 26220;
  }
  else
  {
    v25 = 26732;
    v18 = 1012;
    v19 = 1;
    if ( a4 )
      v19 = a4;
    if ( v19 < 0x3F4 )
      v18 = v19;
    v20 = 8 * v18 + 4;
  }
  v15 = HvAllocateCell(BugCheckParameter2, v20, v10, (unsigned int)&v26, (__int64)v27);
  v12 = v26;
  Cell = v15;
  if ( v15 == -1 )
  {
    v14 = 0;
    v16 = 0;
    goto LABEL_10;
  }
  *(_WORD *)v26 = v25;
  v12[1] = 0;
  v29 = 1;
LABEL_8:
  v24 = v15;
  if ( !(unsigned __int8)CmpAddSubKeyToList(BugCheckParameter2) )
  {
    v14 = 0;
    goto LABEL_37;
  }
  ++*(_DWORD *)(v9 + 4 * v10 + 20);
  *(_DWORD *)(v9 + 4 * v10 + 28) = v24;
  v16 = 0;
LABEL_10:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v27);
  if ( v16 )
    HvFreeCell(BugCheckParameter2, Cell);
  return v14;
}
