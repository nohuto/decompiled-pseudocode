/*
 * XREFs of HvpDropPagedBins @ 0x14083D244
 * Callers:
 *     CmpMountPreloadedHives @ 0x14083200C (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvpPointMapEntriesToBuffer @ 0x14068CEA0 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x14068D2B8 (HvpAllocateBin.c)
 *     HvpFreeBin @ 0x1406D16F8 (HvpFreeBin.c)
 *     HvpMapEntryGetFreeBin @ 0x14079B740 (HvpMapEntryGetFreeBin.c)
 *     CmpReleaseGlobalQuota @ 0x14079CF18 (CmpReleaseGlobalQuota.c)
 *     MmFreeBootRegistry @ 0x14083D398 (MmFreeBootRegistry.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AB44A4 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140AB451C (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  unsigned int i; // esi
  __int64 CellMap; // rax
  __int64 v7; // rcx
  _BYTE *v8; // r15
  _DWORD *BinAddress; // r13
  int Bin; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 FreeBin; // rax
  __int16 v15; // [rsp+70h] [rbp+8h] BYREF
  void *v16; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0;
  HvpGetBinContextInitialize(&v15);
  v2 = *(_DWORD *)(BugCheckParameter2 + 160);
  v3 = 0;
  v16 = 0LL;
  if ( (v2 & 0x10) != 0 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 280);
    if ( v4 )
    {
      for ( i = 0; i < v4; i += v3 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, i);
        v8 = (_BYTE *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0x145AuLL);
        if ( (*(_BYTE *)(CellMap + 8) & 8) != 0 )
          break;
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v7, CellMap, &v15);
        v3 = BinAddress[2];
        Bin = HvpAllocateBin(BugCheckParameter2, v3, 0, 0x35324D43u, (__int64 *)&v16);
        if ( Bin < 0 )
          goto LABEL_11;
        memmove(v16, BinAddress, v3);
        HvpMapEntryReleaseBinAddress(v12, v11, &v15);
        FreeBin = HvpMapEntryGetFreeBin(v8);
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v16, v3, i, 1, FreeBin);
        v16 = 0LL;
        CmpReleaseGlobalQuota(v3);
      }
    }
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
    Bin = 0;
LABEL_11:
    if ( v16 )
      HvpFreeBin(BugCheckParameter2, v3, (__int64)v16);
  }
  else
  {
    return 0;
  }
  return (unsigned int)Bin;
}
