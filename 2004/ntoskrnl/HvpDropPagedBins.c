/*
 * XREFs of HvpDropPagedBins @ 0x1407874F8
 * Callers:
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     HvpAllocateBin @ 0x140637B8C (HvpAllocateBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140638644 (HvpPointMapEntriesToBuffer.c)
 *     CmpReleaseGlobalQuota @ 0x14069E60C (CmpReleaseGlobalQuota.c)
 *     HvpMapEntryGetFreeBin @ 0x14069F8F8 (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x14069FF10 (HvpGetCellMap.c)
 *     HvpFreeBin @ 0x1407105B4 (HvpFreeBin.c)
 *     MmFreeBootRegistry @ 0x14078762C (MmFreeBootRegistry.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebp
  unsigned int v3; // r14d
  unsigned int i; // esi
  __int64 CellMap; // rax
  _BYTE *v6; // r13
  __int64 v7; // r15
  _DWORD *v8; // r15
  int Bin; // edi
  __int64 FreeBin; // rax
  void *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = 0LL;
  v1 = 0;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x10) != 0 )
  {
    v3 = *(_DWORD *)(BugCheckParameter2 + 272);
    if ( v3 )
    {
      for ( i = 0; i < v3; i += v1 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, i);
        v6 = (_BYTE *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0x1456uLL);
        v7 = *(_QWORD *)(CellMap + 8);
        if ( (v7 & 8) != 0 )
          break;
        v8 = (_DWORD *)(v7 & 0xFFFFFFFFFFFFFFF0uLL);
        v1 = v8[2];
        Bin = HvpAllocateBin(BugCheckParameter2, v1, 0, 0x35324D43u, (__int64 *)&v12);
        if ( Bin < 0 )
          goto LABEL_11;
        memmove(v12, v8, v1);
        FreeBin = HvpMapEntryGetFreeBin(v6);
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v12, v1, i, 1, FreeBin);
        v12 = 0LL;
        CmpReleaseGlobalQuota(v1);
      }
    }
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
    Bin = 0;
LABEL_11:
    if ( v12 )
      HvpFreeBin(BugCheckParameter2, v1, (unsigned __int64)v12);
  }
  else
  {
    return 0;
  }
  return (unsigned int)Bin;
}
