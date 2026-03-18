/*
 * XREFs of HvWriteExternal @ 0x14065A848
 * Callers:
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14090CFF8 (CmSaveMergedKeys.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     CmpFileFlush @ 0x1406E10CC (CmpFileFlush.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x140AB41B0 (HvpHeaderCheckSum.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AB44A4 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140AB451C (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  unsigned int v3; // r14d
  int v4; // r11d
  unsigned int v5; // r10d
  __int64 CellMap; // rax
  __int64 v7; // rcx
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 (__fastcall *v17)(ULONG_PTR, __int64, __int128 *, __int64, _DWORD); // rax
  int v18; // ebx
  unsigned int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 BinAddress; // rax
  int v23; // r13d
  int (__fastcall *v24)(ULONG_PTR, __int64, __int128 *); // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v29; // [rsp+30h] [rbp-20h] BYREF
  int v30; // [rsp+40h] [rbp-10h]
  __int16 v31; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  v30 = 0;
  v31 = 0;
  v29 = 0LL;
  HvpGetBinContextInitialize(&v31);
  if ( !*(_QWORD *)(BugCheckParameter2 + 1560) )
    return 3221225485LL;
  v3 = *(_DWORD *)(BugCheckParameter2 + 280);
  v4 = CmpDoFileSetSizeEx(BugCheckParameter2, 2LL, v3 + 4096, 0LL);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v5);
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0xCE4uLL);
      v10 = *(unsigned int *)(HvpMapEntryGetBinAddress(v7, CellMap, &v31) + 8);
      if ( (unsigned int)(v10 + v11) > *(_DWORD *)(BugCheckParameter2 + 280) || (v10 & 0xFFF) != 0 )
        break;
      HvpMapEntryReleaseBinAddress(v10, v9, &v31);
      if ( v5 >= v3 )
        goto LABEL_8;
    }
    return (unsigned int)-1073741492;
  }
LABEL_8:
  if ( v5 < *(_DWORD *)(BugCheckParameter2 + 280) )
    return (unsigned int)v4;
  v12 = 4096;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, 0x1000uLL, 0x20204D43u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 64), 0x1000uLL);
  v14[10] = v3;
  v14[11] = 1;
  v14[127] = HvpHeaderCheckSum(v14, v15, v16);
  v17 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int128 *, __int64, _DWORD))(BugCheckParameter2 + 40);
  *((_QWORD *)&v29 + 1) = v14;
  v30 = 4096;
  v18 = v17(BugCheckParameter2, 2LL, &v29, 1LL, 0);
  ExFreePoolWithTag(v14, 0);
  if ( v18 >= 0 )
  {
    v19 = 0;
    if ( v3 )
    {
      while ( 1 )
      {
        v20 = HvpGetCellMap(BugCheckParameter2, v19);
        if ( !v20 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v19, 0xD39uLL);
        BinAddress = HvpMapEntryGetBinAddress(v21, v20, &v31);
        v23 = *(_DWORD *)(BinAddress + 8);
        *((_QWORD *)&v29 + 1) = BinAddress;
        v24 = *(int (__fastcall **)(ULONG_PTR, __int64, __int128 *))(BugCheckParameter2 + 40);
        LODWORD(v29) = v12;
        v30 = v23;
        if ( v24(BugCheckParameter2, 2LL, &v29) < 0 )
          break;
        HvpMapEntryReleaseBinAddress(v26, v25, &v31);
        v12 += v23;
        v19 += v23;
        if ( v19 >= v3 )
          goto LABEL_15;
      }
      return (unsigned int)-1073741491;
    }
    else
    {
LABEL_15:
      if ( (int)CmpFileFlush(BugCheckParameter2, 2LL) < 0 )
        return (unsigned int)-1073741491;
      return v2;
    }
  }
  return 3221225805LL;
}
