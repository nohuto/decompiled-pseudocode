/*
 * XREFs of HvpRemapAndEnlistHiveBins @ 0x14068C544
 * Callers:
 *     HvLoadHive @ 0x14068C238 (HvLoadHive.c)
 * Callees:
 *     SetFailureLocation @ 0x14020A890 (SetFailureLocation.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HvpEnlistFreeCells @ 0x14068C700 (HvpEnlistFreeCells.c)
 *     HvpValidateLoadedBin @ 0x14068C7E0 (HvpValidateLoadedBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x14068CEA0 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateBin @ 0x14068D2B8 (HvpAllocateBin.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14068D310 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpProtectBinPartial @ 0x1406C9BF4 (HvpProtectBinPartial.c)
 *     HvpFreeBin @ 0x1406D16F8 (HvpFreeBin.c)
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 *     CmpReleaseGlobalQuota @ 0x14079CF18 (CmpReleaseGlobalQuota.c)
 *     HvIsRangeDirty @ 0x14092200C (HvIsRangeDirty.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140AB44A4 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140AB451C (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140AB4534 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpRemapAndEnlistHiveBins(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // r11
  bool v6; // zf
  char v7; // bl
  unsigned int v8; // r10d
  __int64 v9; // r13
  unsigned int v10; // r12d
  unsigned int v11; // edi
  __int64 v12; // rcx
  unsigned int v13; // r10d
  _DWORD *BinAddress; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v22; // r11d
  __int64 v23; // rcx
  int v24; // eax
  unsigned int v25; // r9d
  __int64 v26; // rcx
  unsigned int v27; // r10d
  _DWORD *v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rcx
  signed int Bin; // eax
  unsigned int v32; // ebx
  __int64 v33; // rsi
  __int64 v34; // rcx
  const void *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // r8d
  signed int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // [rsp+20h] [rbp-38h]
  __int64 v44; // [rsp+28h] [rbp-30h]
  unsigned int v45; // [rsp+30h] [rbp-28h]
  unsigned int v46; // [rsp+34h] [rbp-24h]
  __int64 v47; // [rsp+38h] [rbp-20h] BYREF
  __int64 v48; // [rsp+40h] [rbp-18h] BYREF
  __int64 CellMap; // [rsp+48h] [rbp-10h]
  char v50; // [rsp+A0h] [rbp+48h]
  __int16 v53; // [rsp+B8h] [rbp+60h] BYREF

  v53 = 0;
  v4 = a3;
  HvpGetBinContextInitialize(&v53);
  v6 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0;
  v7 = v5;
  v8 = *(_DWORD *)(BugCheckParameter2 + 280);
  v9 = (unsigned int)v5;
  v50 = v5;
  v10 = v5;
  v48 = v5;
  v47 = v5;
  v45 = v8;
  if ( !v6 )
  {
    v11 = v5;
    v46 = *(_DWORD *)(BugCheckParameter2 + 232) - 4096;
    if ( *(_DWORD *)(BugCheckParameter2 + 232) == 4096 )
    {
LABEL_9:
      LODWORD(v5) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter2, v11);
      BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v12, CellMap, &v53);
      if ( !(unsigned __int8)HvpValidateLoadedBin(BinAddress, v11, v13) )
      {
        v20 = -1073741492;
        SetFailureLocation(v4, 1, 34, 0xC000014C, 0x10u);
        if ( (a2 & 0x20000) != 0 || BYTE3(NlsMbOemCodePageTag) == (_BYTE)v9 && (CmpBootType & 6) == 0 )
        {
          v43 = 32;
          goto LABEL_30;
        }
        v24 = HvpMarkDirty(BugCheckParameter2);
        v20 = v24;
        if ( v24 < 0 )
        {
          v43 = 48;
          goto LABEL_27;
        }
        memset(BinAddress, 0, 0x1000uLL);
        BinAddress[2] = 4096;
        BinAddress[1] = v11 & 0x7FFFFFFF;
        *BinAddress = 1852400232;
        BinAddress[8] = 4064;
        v50 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
      }
      if ( BinAddress[2] != 4096 )
      {
        v10 = BinAddress[2];
        HvpMapEntryReleaseBinAddress(v16, v15, &v53);
        HvpGetBinContextInitialize(&v53);
        if ( v10 + v11 > v22 )
        {
          v7 = v50;
          v8 = v45;
          goto LABEL_9;
        }
        v17 = HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 224, v11, v10, &v48);
        v20 = v17;
        if ( v17 < 0 )
        {
          v43 = 64;
          goto LABEL_32;
        }
        HvpPointMapEntriesToBuffer(BugCheckParameter2, v9, v9 & v44);
        BinAddress = (_DWORD *)HvpMapEntryGetBinAddress(v23, CellMap, &v53);
      }
      v17 = HvpEnlistFreeCells(BugCheckParameter2);
      v20 = v17;
      if ( v17 == 1073741833 )
      {
        v7 = 1;
        v50 = 1;
      }
      else
      {
        if ( v17 < 0 )
        {
          v43 = 80;
          goto LABEL_32;
        }
        v7 = v50;
      }
      v11 += BinAddress[2];
      HvpMapEntryReleaseBinAddress(v19, v18, &v53);
      HvpGetBinContextInitialize(&v53);
      v8 = v45;
      if ( v11 >= v46 )
        goto LABEL_9;
    }
  }
  v11 = v5;
LABEL_10:
  while ( v11 < v8 )
  {
    v48 = HvpGetCellMap(BugCheckParameter2, v11);
    v28 = (_DWORD *)HvpMapEntryGetBinAddress(v26, v48, &v53);
    if ( !(unsigned __int8)HvpValidateLoadedBin(v28, v11, v27) )
    {
      v20 = -1073741492;
      SetFailureLocation(v4, 1, 34, 0xC000014C, 0x60u);
      if ( (a2 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
      {
        v43 = 112;
LABEL_30:
        v25 = -1073741492;
LABEL_33:
        SetFailureLocation(v4, 0, 34, v25, v43);
        return v20;
      }
      v24 = HvpMarkDirty(BugCheckParameter2);
      v20 = v24;
      if ( v24 < 0 )
      {
        v43 = 128;
LABEL_27:
        v25 = v24;
        goto LABEL_33;
      }
      memset(v28, 0, 0x1000uLL);
      v28[2] = 4096;
      *v28 = 1852400232;
      v28[1] = v11 & 0x7FFFFFFF;
      v28[8] = 4064;
      v50 = 1;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    if ( v28[2] != 4096 )
    {
      v10 = v28[2];
      HvpMapEntryReleaseBinAddress(v30, v29, &v53);
      HvpGetBinContextInitialize(&v53);
      Bin = HvpAllocateBin(BugCheckParameter2, v10, 0, 825445699, (__int64)&v47);
      v20 = Bin;
      if ( Bin < 0 )
      {
        SetFailureLocation(v4, 0, 34, Bin, 0x90u);
        v9 = v47;
        goto LABEL_13;
      }
      v9 = v47;
      v32 = 0;
      if ( v10 )
      {
        do
        {
          v48 = HvpGetCellMap(BugCheckParameter2, v32 + v11);
          v33 = v48;
          v35 = (const void *)HvpMapEntryGetBinAddress(v34, v48, &v53);
          memmove((void *)(v9 + v32), v35, 0x1000uLL);
          HvpMapEntryReleaseBinAddress(v37, v36, &v53);
          HvpGetBinContextInitialize(&v53);
          if ( (*(_BYTE *)(v33 + 8) & 8) != 0 )
            HvpFreeBin(BugCheckParameter2, 4096LL, v35);
          else
            CmpReleaseGlobalQuota(4096LL);
          v32 += 4096;
          *(_QWORD *)v33 = 0LL;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_DWORD *)(v33 + 16) = 0;
        }
        while ( v32 < v10 );
        v4 = a3;
      }
      if ( !(unsigned __int8)HvIsRangeDirty(BugCheckParameter2, v11, v10) )
      {
        v39 = HvpProtectBinPartial(BugCheckParameter2, v9, v38, 0, v10, 0);
        v20 = v39;
        if ( v39 < 0 )
        {
          SetFailureLocation(v4, 0, 34, v39, 0xA0u);
          goto LABEL_13;
        }
      }
      HvpPointMapEntriesToBuffer(BugCheckParameter2, 1, 0LL);
      v9 = 0LL;
      v28 = (_DWORD *)HvpMapEntryGetBinAddress(v40, v48, &v53);
      v47 = 0LL;
    }
    v17 = HvpEnlistFreeCells(BugCheckParameter2);
    v20 = v17;
    if ( v17 == 1073741833 )
    {
      v7 = 1;
      v50 = 1;
    }
    else
    {
      if ( v17 < 0 )
      {
        v43 = 176;
LABEL_32:
        v25 = v17;
        goto LABEL_33;
      }
      v7 = v50;
    }
    v11 += v28[2];
    HvpMapEntryReleaseBinAddress(v42, v41, &v53);
    HvpGetBinContextInitialize(&v53);
    v8 = v45;
  }
  if ( v7 )
  {
    return 1073741833;
  }
  else
  {
    v20 = v5;
LABEL_13:
    if ( v9 )
      HvpFreeBin(BugCheckParameter2, v10, v9);
  }
  return v20;
}
