/*
 * XREFs of CmpAddSubKeyEx @ 0x1407037B8
 * Callers:
 *     CmpCopySyncTree2 @ 0x14087AC10 (CmpCopySyncTree2.c)
 *     CmpAddSubKey @ 0x14087CA20 (CmpAddSubKey.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x1408829B0 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpAddSubKeyToList @ 0x140703A3C (CmpAddSubKeyToList.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140707168 (HvAllocateCell.c)
 *     HvMarkCellDirty @ 0x14087E360 (HvMarkCellDirty.c)
 */

char __fastcall CmpAddSubKeyEx(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 (__fastcall *v6)(ULONG_PTR, __int64, _DWORD *); // rax
  unsigned int v7; // r12d
  int v9; // r13d
  __int64 v10; // r15
  char v11; // di
  __int64 v12; // rdx
  __int64 v13; // r14
  int v14; // eax
  unsigned int v15; // ecx
  __int16 v16; // r13
  int v17; // ecx
  unsigned int v18; // eax
  _WORD *v19; // rbx
  _WORD *v20; // rax
  unsigned int i; // edx
  __int64 v22; // rcx
  unsigned int Cell; // eax
  unsigned int v25; // [rsp+30h] [rbp-20h]
  unsigned int v26; // [rsp+30h] [rbp-20h]
  _DWORD *v27; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v28[2]; // [rsp+40h] [rbp-10h] BYREF
  _DWORD v29[2]; // [rsp+48h] [rbp-8h] BYREF
  int v30; // [rsp+90h] [rbp+40h]

  v29[1] = 0;
  v29[0] = -1;
  v28[0] = -1;
  v28[1] = 0;
  v6 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8);
  v7 = -1;
  v27 = 0LL;
  v30 = 0;
  v9 = 0;
  v10 = v6(BugCheckParameter2, a2, v29);
  if ( !v10 )
    return 0;
  v12 = a3 >> 31;
  v25 = a3 >> 31;
  v13 = v12;
  if ( *(_DWORD *)(v10 + 4 * v12 + 20) )
  {
    v20 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                     BugCheckParameter2,
                     *(unsigned int *)(v10 + 4 * v12 + 28),
                     v28);
    v19 = v20;
    if ( !v20 )
    {
LABEL_15:
      v11 = 0;
      goto LABEL_32;
    }
    v11 = 1;
    if ( *v20 == 26220 && v20[1] >= 0x1FBu )
    {
      if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *(unsigned int *)(v10 + 4 * v13 + 28), 0LL) )
        goto LABEL_15;
      for ( i = 0; i < (unsigned __int16)v19[1]; *(_DWORD *)&v19[2 * v22 + 2] = *(_DWORD *)&v19[4 * v22 + 2] )
        v22 = i++;
      *v19 = 26988;
    }
    if ( ((*v19 - 26732) & 0xFEFF) != 0 || v19[1] < 0x3F5u )
    {
      v9 = 0;
    }
    else
    {
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *, _QWORD))(BugCheckParameter2 + 16))(BugCheckParameter2, v28, 0LL);
      v9 = 0;
      v27 = 0LL;
      Cell = HvAllocateCell(BugCheckParameter2, 12, v25, (unsigned int)&v27, (__int64)v28);
      v19 = v27;
      v7 = Cell;
      if ( Cell == -1 )
      {
        v11 = 0;
        goto LABEL_32;
      }
      *v27 = 92530;
      *((_DWORD *)v19 + 1) = *(_DWORD *)(v10 + 4 * v13 + 28);
      *(_DWORD *)(v10 + 4 * v13 + 28) = Cell;
    }
    v18 = *(_DWORD *)(v10 + 4 * v13 + 28);
    v7 = -1;
LABEL_29:
    v26 = v18;
    if ( (unsigned __int8)CmpAddSubKeyToList(BugCheckParameter2) )
    {
      ++*(_DWORD *)(v10 + 4 * v13 + 20);
      *(_DWORD *)(v10 + 4 * v13 + 28) = v26;
    }
    else
    {
      v11 = 0;
      v9 = v30;
    }
    goto LABEL_32;
  }
  v11 = 1;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 5u )
  {
    v17 = 12;
    v16 = 26220;
  }
  else
  {
    v14 = 1012;
    v15 = 1;
    v16 = 26732;
    if ( a4 )
      v15 = a4;
    if ( v15 < 0x3F4 )
      v14 = v15;
    v17 = 8 * v14 + 4;
  }
  v18 = HvAllocateCell(BugCheckParameter2, v17, v12, (unsigned int)&v27, (__int64)v28);
  v19 = v27;
  v7 = v18;
  if ( v18 != -1 )
  {
    *(_WORD *)v27 = v16;
    v9 = 0;
    v19[1] = 0;
    v30 = 1;
    goto LABEL_29;
  }
  v11 = 0;
  v9 = 0;
LABEL_32:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
  if ( v19 )
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
  if ( v9 )
    HvFreeCell(BugCheckParameter2, v7);
  return v11;
}
