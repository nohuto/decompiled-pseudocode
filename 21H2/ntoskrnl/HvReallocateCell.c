/*
 * XREFs of HvReallocateCell @ 0x14065B1D0
 * Callers:
 *     CmpRemoveValueFromList @ 0x1406030D0 (CmpRemoveValueFromList.c)
 *     CmpSetValueDataExisting @ 0x1406200E0 (CmpSetValueDataExisting.c)
 *     CmpSetValueKeyExisting @ 0x14065BAA8 (CmpSetValueKeyExisting.c)
 *     CmpAddValueToListEx @ 0x14065C284 (CmpAddValueToListEx.c)
 *     CmpAddToLeaf @ 0x14065E93C (CmpAddToLeaf.c)
 *     CmpSplitLeaf @ 0x140733A08 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvpDoAllocateCell @ 0x140720248 (HvpDoAllocateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 (__fastcall *v7)(ULONG_PTR, ULONG_PTR, __int64 *); // rax
  void *v8; // r15
  unsigned int v10; // r12d
  __int64 v12; // rax
  const void *v13; // rsi
  unsigned int Cell; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  __int64 *v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // ebx
  int v20; // eax
  size_t v21; // r8
  void *v22; // r14
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v26; // [rsp+30h] [rbp-10h] BYREF
  void *v27; // [rsp+38h] [rbp-8h]
  __int64 v28; // [rsp+70h] [rbp+30h] BYREF

  v7 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8);
  v8 = 0LL;
  v26 = 0xFFFFFFFFLL;
  v10 = BugCheckParameter3;
  v28 = 0xFFFFFFFFLL;
  v27 = 0LL;
  v12 = v7(BugCheckParameter2, BugCheckParameter3, &v26);
  v13 = (const void *)v12;
  if ( v12 )
  {
    v15 = a3 + 4;
    v16 = -4 - *(_DWORD *)(v12 - 4);
    if ( v15 > -*(_DWORD *)(v12 - 4) )
    {
      v18 = 0x4000;
      v19 = (v15 + 7) & 0xFFFFFFF8;
      v20 = 0;
      while ( v19 > v18 )
      {
        v18 *= 2;
        ++v20;
      }
      if ( !v20 )
        v18 = v19;
      if ( v18 <= 0x100000 )
      {
        Cell = HvpDoAllocateCell(BugCheckParameter2, (__int64)&v28);
        if ( Cell == -1 )
        {
          v8 = v27;
          Cell = -1;
        }
        else
        {
          v21 = v16;
          v22 = v27;
          memmove(v27, v13, v21);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
          v13 = 0LL;
          if ( a4 == 1 )
            HvFreeCell(BugCheckParameter2, v10);
          v23 = a6;
          *a5 = (__int64)v22;
          v24 = v28;
          HIWORD(v28) = 0;
          LODWORD(v28) = -1;
          *v23 = v24;
          WORD2(v28) = 0;
        }
      }
      else
      {
        Cell = -1;
      }
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v26);
      if ( v8 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v28);
    }
    else
    {
      Cell = v10;
      v17 = a6;
      *a5 = v12;
      *v17 = v26;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return Cell;
}
