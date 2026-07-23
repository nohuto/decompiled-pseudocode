/*
 * XREFs of CmpAddToLeaf @ 0x14065E93C
 * Callers:
 *     CmpAddSubKeyToList @ 0x14065EBC0 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x14060E4C0 (CmpGenerateFastLeafHintForUnicodeString.c)
 *     HvReallocateCell @ 0x14065B1D0 (HvReallocateCell.c)
 *     CmpHashUnicodeComponent @ 0x14065F044 (CmpHashUnicodeComponent.c)
 *     CmpCompareInIndex @ 0x1406DD450 (CmpCompareInIndex.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 *     CmpFindSubKeyInLeaf @ 0x14087A700 (CmpFindSubKeyInLeaf.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        unsigned __int16 *a4)
{
  unsigned int v4; // r12d
  unsigned int v6; // r15d
  __int64 v7; // rax
  _WORD *v8; // rbx
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // r13d
  _WORD *v12; // rdi
  unsigned int v13; // ecx
  int SubKeyInLeaf; // eax
  __int64 v15; // r14
  int v16; // eax
  int v17; // ecx
  size_t v18; // r8
  _WORD *v19; // rdx
  _WORD *v20; // rcx
  int FastLeafHintForUnicodeString; // eax
  int v23; // [rsp+30h] [rbp-20h] BYREF
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  _WORD *v25; // [rsp+40h] [rbp-10h] BYREF

  v24 = 0xFFFFFFFFLL;
  v23 = 0;
  v4 = BugCheckParameter3;
  v6 = 0;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, BugCheckParameter3, 0LL) )
    return 0xFFFFFFFFLL;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(BugCheckParameter2, v4, &v24);
  v8 = (_WORD *)v7;
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v9 = *(unsigned __int16 *)(v7 + 2);
  if ( (_WORD)v9 == 0xFFFF )
    goto LABEL_33;
  v10 = -4 - *((_DWORD *)v8 - 1);
  if ( *v8 == 26988 )
  {
    v11 = 4;
    v12 = 0LL;
    v13 = v10 - 4 * v9 - 4;
  }
  else
  {
    v12 = v8;
    v11 = 8;
    v13 = v10 - 8 * v9 - 4;
  }
  v6 = v4;
  if ( v13 < v11 )
  {
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
    v25 = 0LL;
    if ( (v10 >> 1) + v10 >= v10 + v11 )
      v11 = v10 >> 1;
    v6 = HvReallocateCell(BugCheckParameter2, v4, v10 + v11, 0, (__int64 *)&v25, &v24);
    if ( v6 == -1 )
      return 0xFFFFFFFFLL;
    v8 = v25;
    if ( v12 )
      v12 = v25;
  }
  SubKeyInLeaf = CmpFindSubKeyInLeaf(BugCheckParameter2, (_DWORD)v8, (_DWORD)a4, 0, (__int64)&v23);
  v15 = (unsigned int)SubKeyInLeaf;
  if ( SubKeyInLeaf < 0 || v23 != -1 )
  {
LABEL_33:
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
    if ( v6 != v4 )
      HvFreeCell(BugCheckParameter2, v6);
    return 0xFFFFFFFFLL;
  }
  if ( SubKeyInLeaf != (unsigned __int16)v8[1] )
  {
    v16 = CmpCompareInIndex(BugCheckParameter2, (_DWORD)a4, 0, SubKeyInLeaf, (__int64)v8, (__int64)&v23);
    if ( v16 != 2 )
    {
      if ( v16 > 0 )
        v15 = (unsigned int)(v15 + 1);
      v17 = (unsigned __int16)v8[1];
      if ( (_DWORD)v15 != v17 )
      {
        if ( v12 )
        {
          v18 = 8LL * ((unsigned __int16)v12[1] - (unsigned int)v15);
          v19 = &v12[4 * v15 + 2];
          v20 = &v12[4 * (unsigned int)(v15 + 1) + 2];
        }
        else
        {
          v18 = 4LL * (unsigned int)(v17 - v15);
          v19 = &v8[2 * (unsigned int)v15 + 2];
          v20 = &v8[2 * (unsigned int)(v15 + 1) + 2];
        }
        memmove(v20, v19, v18);
      }
      goto LABEL_24;
    }
    goto LABEL_33;
  }
LABEL_24:
  if ( v12 )
  {
    *(_DWORD *)&v12[4 * v15 + 2] = a3;
    if ( *v12 == 26732 )
      FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
    else
      FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
    *(_DWORD *)&v12[4 * v15 + 4] = FastLeafHintForUnicodeString;
  }
  else
  {
    *(_DWORD *)&v8[2 * v15 + 2] = a3;
  }
  ++v8[1];
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v24);
  if ( v6 != v4 )
    HvFreeCell(BugCheckParameter2, v4);
  return v6;
}
