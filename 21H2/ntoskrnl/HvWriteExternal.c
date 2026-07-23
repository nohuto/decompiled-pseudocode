/*
 * XREFs of HvWriteExternal @ 0x140729450
 * Callers:
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14087CBF0 (CmSaveMergedKeys.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvpHeaderCheckSum @ 0x1406FC8D4 (HvpHeaderCheckSum.c)
 *     CmpFileFlush @ 0x1406FC904 (CmpFileFlush.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // edi
  unsigned int v3; // ebp
  int v4; // r10d
  unsigned int v5; // r8d
  __int64 CellMap; // rax
  unsigned int v7; // r8d
  int v8; // ecx
  int v9; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // r13
  __int64 (__fastcall *v12)(ULONG_PTR, __int64, __int128 *, __int64, _DWORD); // rax
  int v13; // ebx
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // r12d
  int (__fastcall *v18)(ULONG_PTR, __int64, __int128 *); // rax
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]

  v1 = 0;
  v21 = 0LL;
  v22 = 0LL;
  if ( !*(_QWORD *)(BugCheckParameter2 + 1552) )
    return 3221225485LL;
  v3 = *(_DWORD *)(BugCheckParameter2 + 272);
  v4 = CmpDoFileSetSizeEx(BugCheckParameter2, 2u, v3 + 4096, 0);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v5);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0xCE4uLL);
      v8 = *(_DWORD *)((*(_QWORD *)(CellMap + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
      v5 = v8 + v7;
      if ( v5 > *(_DWORD *)(BugCheckParameter2 + 272) || (v8 & 0xFFF) != 0 )
        break;
      if ( v5 >= v3 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741492;
  }
LABEL_8:
  if ( v5 < *(_DWORD *)(BugCheckParameter2 + 272) )
    return (unsigned int)v4;
  v9 = 4096;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0x1000uLL, 0x20204D43u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 64), 0x1000uLL);
  v11[10] = v3;
  v11[11] = 1;
  v11[127] = HvpHeaderCheckSum(v11);
  v12 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int128 *, __int64, _DWORD))(BugCheckParameter2 + 40);
  *((_QWORD *)&v21 + 1) = v11;
  LODWORD(v22) = 4096;
  v13 = v12(BugCheckParameter2, 2LL, &v21, 1LL, 0);
  ExFreePoolWithTag(v11, 0);
  if ( v13 >= 0 )
  {
    v14 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        v15 = HvpGetCellMap(BugCheckParameter2, v14);
        if ( !v15 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v14, 0xD39uLL);
        v16 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
        v17 = *(_DWORD *)(v16 + 8);
        *((_QWORD *)&v21 + 1) = v16;
        v18 = *(int (__fastcall **)(ULONG_PTR, __int64, __int128 *))(BugCheckParameter2 + 40);
        LODWORD(v21) = v9;
        LODWORD(v22) = v17;
        if ( v18(BugCheckParameter2, 2LL, &v21) < 0 )
          break;
        v9 += v17;
        v14 += v17;
        if ( v14 >= v3 )
          goto LABEL_15;
      }
      return (unsigned int)-1073741491;
    }
    else
    {
LABEL_15:
      if ( CmpFileFlush(BugCheckParameter2, 2u) < 0 )
        return (unsigned int)-1073741491;
      return v1;
    }
  }
  return 3221225805LL;
}
