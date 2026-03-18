/*
 * XREFs of CmpAddToLeaf @ 0x1406410D8
 * Callers:
 *     CmpAddSubKeyToList @ 0x140640F04 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmpCompareInIndex @ 0x1405E61C0 (CmpCompareInIndex.c)
 *     CmpHashUnicodeComponent @ 0x140641348 (CmpHashUnicodeComponent.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x1406413BC (CmpGenerateFastLeafHintForUnicodeString.c)
 *     HvReallocateCell @ 0x14069DB20 (HvReallocateCell.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 *     CmpFindSubKeyInLeaf @ 0x1408770B8 (CmpFindSubKeyInLeaf.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        unsigned __int16 *a4)
{
  unsigned int v4; // r15d
  __int16 *v6; // rax
  __int16 *v7; // rbx
  int v8; // r14d
  __int16 *v9; // rdi
  unsigned int v10; // r13d
  int v11; // edx
  unsigned int v12; // r12d
  int SubKeyInLeaf; // eax
  __int64 v14; // r14
  int v15; // eax
  int v16; // ecx
  size_t v17; // r8
  __int16 *v18; // rdx
  __int16 *v19; // rcx
  int FastLeafHintForUnicodeString; // eax
  int v22; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v23[2]; // [rsp+38h] [rbp-18h] BYREF
  __int16 *v24; // [rsp+40h] [rbp-10h] BYREF

  v23[0] = -1;
  v22 = 0;
  v23[1] = 0;
  v4 = BugCheckParameter3;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, BugCheckParameter3, 0LL) )
    return 0xFFFFFFFFLL;
  v6 = (__int16 *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                    BugCheckParameter2,
                    v4,
                    v23);
  v7 = v6;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v8 = -4 - *((_DWORD *)v6 - 1);
  if ( *v6 == 26988 )
  {
    v9 = 0LL;
    v11 = v8 - 4 * (unsigned __int16)v6[1];
    v10 = 4;
  }
  else
  {
    v9 = v6;
    v10 = 8;
    v11 = v8 - 8 * (unsigned __int16)v6[1];
  }
  v12 = v4;
  if ( v11 - 4 >= v10 )
    goto LABEL_6;
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
  v24 = 0LL;
  v12 = HvReallocateCell(BugCheckParameter2, v4, (__int64)&v24, (__int64)v23);
  if ( v12 == -1 )
    return 0xFFFFFFFFLL;
  v7 = v24;
  if ( v9 )
    v9 = v24;
LABEL_6:
  SubKeyInLeaf = CmpFindSubKeyInLeaf(BugCheckParameter2, v7, a4, &v22);
  v14 = (unsigned int)SubKeyInLeaf;
  if ( SubKeyInLeaf < 0 || v22 != -1 )
  {
LABEL_32:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
    if ( v12 != v4 )
      HvFreeCell(BugCheckParameter2, v12);
    return 0xFFFFFFFFLL;
  }
  if ( SubKeyInLeaf != (unsigned __int16)v7[1] )
  {
    v15 = CmpCompareInIndex(BugCheckParameter2, a4, SubKeyInLeaf, v7, &v22);
    if ( v15 != 2 )
    {
      if ( v15 > 0 )
        v14 = (unsigned int)(v14 + 1);
      v16 = (unsigned __int16)v7[1];
      if ( (_DWORD)v14 != v16 )
      {
        if ( v9 )
        {
          v17 = 8LL * ((unsigned __int16)v9[1] - (unsigned int)v14);
          v18 = &v9[4 * v14 + 2];
          v19 = &v9[4 * (unsigned int)(v14 + 1) + 2];
        }
        else
        {
          v17 = 4LL * (unsigned int)(v16 - v14);
          v18 = &v7[2 * (unsigned int)v14 + 2];
          v19 = &v7[2 * (unsigned int)(v14 + 1) + 2];
        }
        memmove(v19, v18, v17);
      }
      goto LABEL_16;
    }
    goto LABEL_32;
  }
LABEL_16:
  if ( v9 )
  {
    *(_DWORD *)&v9[4 * v14 + 2] = a3;
    if ( *v9 == 26732 )
      FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
    else
      FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
    *(_DWORD *)&v9[4 * v14 + 4] = FastLeafHintForUnicodeString;
  }
  else
  {
    *(_DWORD *)&v7[2 * v14 + 2] = a3;
  }
  ++v7[1];
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v23);
  if ( v12 != v4 )
    HvFreeCell(BugCheckParameter2, v4);
  return v12;
}
