/*
 * XREFs of HvpAddBin @ 0x140638040
 * Callers:
 *     HvpDoAllocateCell @ 0x14069F174 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpGrowDirtyVectors @ 0x140270168 (HvpGrowDirtyVectors.c)
 *     RtlNumberOfSetBits @ 0x1402F24B0 (RtlNumberOfSetBits.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HvpViewMapExtendStorage @ 0x1406375BC (HvpViewMapExtendStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406376C4 (HvpViewMapPromoteRangeToMapping.c)
 *     CmpDoFileSetSizeEx @ 0x140637A3C (CmpDoFileSetSizeEx.c)
 *     HvpAllocateBin @ 0x140637B8C (HvpAllocateBin.c)
 *     HvpProtectBin @ 0x140637BD0 (HvpProtectBin.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x140637C0C (CmpUpdateSystemHiveHysteresis.c)
 *     HvpPointMapEntriesToBuffer @ 0x140638644 (HvpPointMapEntriesToBuffer.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140638704 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x140638878 (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x1406389DC (CmpCanGrowHive.c)
 *     CmpClaimGlobalQuota @ 0x14063B714 (CmpClaimGlobalQuota.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x14069C914 (HvpViewMapCOWAndUnsealRange.c)
 *     HvpSetRangeProtection @ 0x14069E2BC (HvpSetRangeProtection.c)
 *     CmpReleaseGlobalQuota @ 0x14069E60C (CmpReleaseGlobalQuota.c)
 *     HvpMarkDirty @ 0x14069FD40 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14069FF10 (HvpGetCellMap.c)
 *     HvpFreeBin @ 0x1407105B4 (HvpFreeBin.c)
 *     HvpViewMapShrinkStorage @ 0x1408701EC (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x14087DA08 (HvpShrinkMap.c)
 */

__int64 __fastcall HvpAddBin(ULONG_PTR BugCheckParameter2, unsigned int a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r13d
  unsigned int v5; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r8
  ULONG_PTR v9; // r12
  __int64 *i; // r14
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  int v14; // eax
  __int64 v15; // rax
  signed __int64 v16; // rax
  char v17; // cl
  __int64 v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  void *v21; // rdx
  int v22; // eax
  char v23; // dl
  unsigned int v25; // edx
  __int64 *v26; // rax
  __int64 **v27; // rcx
  int v28; // edi
  __int64 v29; // r8
  __int64 CellMap; // rax
  unsigned int v31; // r8d
  unsigned int v32; // r11d
  _QWORD *v33; // r10
  __int64 v34; // rax
  int v35; // eax
  _DWORD *v36; // rdx
  __int64 v37; // rax
  __int64 *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ebx
  ULONG v43; // eax
  __int64 v44; // rax
  __int64 *v45; // rax
  char v46; // [rsp+30h] [rbp-48h]
  unsigned int j; // [rsp+34h] [rbp-44h]
  size_t Size; // [rsp+38h] [rbp-40h]
  void *v49; // [rsp+40h] [rbp-38h] BYREF
  void *v50; // [rsp+48h] [rbp-30h] BYREF
  __int64 v51; // [rsp+50h] [rbp-28h]
  __int64 v52; // [rsp+58h] [rbp-20h]
  __int64 *v53; // [rsp+60h] [rbp-18h]
  char v54; // [rsp+C0h] [rbp+48h]
  char v55; // [rsp+C8h] [rbp+50h]
  char v56; // [rsp+D0h] [rbp+58h]
  char v57; // [rsp+D8h] [rbp+60h]

  v3 = a3;
  v4 = -1;
  Size = 0LL;
  j = -1;
  v5 = (a2 + 4127) & 0xFFFFF000;
  v46 = 0;
  v49 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v50 = 0LL;
  v56 = 0;
  v55 = 0;
  if ( v5 <= 0x3000 && v5 - (unsigned __int64)a2 - 32 < 0xE00 )
    v5 += 4096;
  v8 = 632LL * a3;
  v9 = 632 * v3 + BugCheckParameter2 + 880;
  v52 = 632 * v3;
  v53 = (__int64 *)v9;
  for ( i = *(__int64 **)v9; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v9 )
    {
      i = 0LL;
      goto LABEL_7;
    }
    v25 = *((_DWORD *)i + 4);
    if ( v25 >= v5 && v25 + *((_DWORD *)i + 5) <= *(_DWORD *)(v8 + BugCheckParameter2 + 272) )
      break;
  }
  v7 = *((_DWORD *)i + 4);
LABEL_7:
  if ( i )
  {
    v26 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i )
      goto LABEL_93;
    v27 = (__int64 **)i[1];
    if ( *v27 != i )
      goto LABEL_93;
    *v27 = v26;
    v26[1] = (__int64)v27;
    v28 = (_DWORD)v3 << 31;
    if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
    {
      v29 = 0LL;
      v4 = v28 + *((_DWORD *)i + 5);
      for ( j = v4; (unsigned int)v29 < v7; *v33 = v34 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)(v29 + v4));
        v33 = (_QWORD *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v32, 0x267uLL);
        *(_QWORD *)(CellMap + 8) &= ~2uLL;
        v34 = v31;
        v29 = v31 + 4096;
      }
    }
LABEL_55:
    if ( !i )
      return j;
    if ( v4 != -1 )
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(BugCheckParameter2 + 32))(i, 24LL, v29);
      return j;
    }
    v45 = *(__int64 **)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) == v9 )
    {
      *i = (__int64)v45;
      i[1] = v9;
      v45[1] = (__int64)i;
      *(_QWORD *)v9 = i;
      return j;
    }
LABEL_93:
    __fastfail(3u);
  }
  v11 = *(_DWORD *)(v8 + BugCheckParameter2 + 272);
  v12 = v11;
  v13 = v11 + v5;
  if ( !(_DWORD)v3 && v5 <= 0x40000 && (((v11 + 4096) ^ (v13 + 4095)) & 0xFFFC0000) != 0 )
  {
    v12 = ((v11 + 266239) & 0xFFFC0000) - 4096;
    LODWORD(Size) = v12 - v11;
    v13 = v12 + v5;
  }
  if ( v13 < v11
    || !(unsigned __int8)CmpCanGrowHive(BugCheckParameter2, v13)
    || (int)HvpExpandMap(BugCheckParameter2, (unsigned int)v3, v11, v13) < 0 )
  {
    return j;
  }
  *(_DWORD *)(v52 + BugCheckParameter2 + 272) = v13;
  if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, (unsigned int)v3) < 0 )
  {
LABEL_77:
    HvpShrinkMap(BugCheckParameter2, (unsigned int)v3, v13, v11);
    *(_DWORD *)(v52 + BugCheckParameter2 + 272) = v11;
    if ( v46 )
    {
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v11 >> 9;
      v42 = *(_DWORD *)(BugCheckParameter2 + 104);
      v43 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 104) = v43;
      _InterlockedExchangeAdd(&CmpDirtySectorCount, v43 - v42);
      v44 = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v11 >> 9;
      *(_QWORD *)(BugCheckParameter2 + 120) = v44;
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    }
    if ( v55 )
      HvpViewMapShrinkStorage(BugCheckParameter2 + 216, v11);
    if ( v49 && !v56 )
      HvpFreeBin(BugCheckParameter2, v12 - v11, v49);
    if ( v51 )
      (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v51, 24LL);
    if ( v50 && !v56 )
      HvpFreeBin(BugCheckParameter2, v13 - v12, v50);
    if ( !HIDWORD(Size) )
      return j;
    CmpReleaseGlobalQuota(HIDWORD(Size));
    v9 = (ULONG_PTR)v53;
    v4 = -1;
    goto LABEL_55;
  }
  v54 = 1;
  v57 = 1;
  if ( (_DWORD)v3 )
    goto LABEL_31;
  v14 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v14 & 1) == 0 )
  {
    if ( (int)HvpGrowDirtyVectors(BugCheckParameter2, v13) < 0 )
      goto LABEL_76;
    v14 = *(_DWORD *)(BugCheckParameter2 + 160);
    v46 = 1;
  }
  if ( (v14 & 0x8001) == 0 )
  {
    if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0, v13 + 4096, 1) < 0 )
      goto LABEL_76;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4268) )
      *(_DWORD *)(BugCheckParameter2 + 4268) = v11;
  }
  v54 = 1;
  v57 = 1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
    goto LABEL_31;
  if ( (*(_DWORD *)(BugCheckParameter2 + 248) & 1) != 0 )
    v15 = *(_QWORD *)(BugCheckParameter2 + 232);
  else
    v15 = 0x7FFFFFFFFFFFFFFFLL;
  v16 = v15 & 0xFFFFFFFFFFFFF000uLL;
  v54 = 1;
  v57 = 1;
  if ( v16 >= 2147479552 )
    LODWORD(v16) = 2147479552;
  if ( v13 > (int)v16 - 4096 )
  {
LABEL_31:
    v17 = 0;
  }
  else
  {
    if ( HvpViewMapExtendStorage(BugCheckParameter2 + 216, v13) < 0 )
      goto LABEL_76;
    v17 = 1;
    v54 = 0;
    v56 = 1;
    v57 = 0;
  }
  if ( (_DWORD)Size )
  {
    if ( v17 )
    {
      v55 = v17;
      if ( !(unsigned __int8)CmpClaimGlobalQuota((unsigned int)Size) )
        goto LABEL_76;
      v55 = v56;
      HIDWORD(Size) = Size;
      if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v11, Size, (__int64 *)&v49) < 0 )
        goto LABEL_76;
      v55 = v56;
      v35 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v11, (unsigned int)Size);
    }
    else
    {
      v55 = 0;
      if ( (int)HvpAllocateBin(BugCheckParameter2, (unsigned int)Size, v3, 0x30324D43u, (__int64 *)&v49) < 0 )
        goto LABEL_76;
      v55 = 0;
      v35 = HvpProtectBin(v41, Size, (__int64)v49, 1);
    }
    if ( v35 < 0 )
      goto LABEL_76;
    memset(v49, 0, (unsigned int)Size);
    v36 = v49;
    *((_DWORD *)v49 + 7) = 0;
    v36[1] = v11 & 0x7FFFFFFF;
    v36[2] = Size;
    v36[8] = Size - 32;
    *v36 = 1852400232;
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 825380163LL);
    v17 = v56;
    v55 = v56;
    v51 = v37;
    if ( !v37 )
      goto LABEL_76;
    *(_DWORD *)(v37 + 16) = Size;
    *(_DWORD *)(v37 + 20) = v11;
  }
  if ( !v17 )
  {
    v55 = 0;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v5, v3, 0x36314D43u, (__int64 *)&v50) >= 0 )
    {
      v55 = 0;
      v19 = HvpProtectBin(v18, v5, (__int64)v50, 1);
      goto LABEL_36;
    }
LABEL_76:
    HvpAdjustHiveFreeDisplay(BugCheckParameter2, v11, (unsigned int)v3);
    goto LABEL_77;
  }
  v55 = v17;
  if ( !(unsigned __int8)CmpClaimGlobalQuota(v5) )
    goto LABEL_76;
  HIDWORD(Size) += v5;
  v55 = v56;
  if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v12, v5, (__int64 *)&v50) < 0 )
    goto LABEL_76;
  v55 = v56;
  v19 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v12, v5);
LABEL_36:
  if ( v19 < 0 )
    goto LABEL_76;
  memset(v50, 0, v5);
  v20 = v50;
  v21 = v49;
  *((_DWORD *)v50 + 7) = 0;
  v20[1] = v12 & 0x7FFFFFFF;
  v20[8] = v5 - 32;
  v22 = (_DWORD)v3 << 31;
  *v20 = 1852400232;
  v20[2] = v5;
  if ( v21 )
  {
    HvpPointMapEntriesToBuffer(BugCheckParameter2, v54, v51);
    v38 = v53;
    v39 = *v53;
    if ( *(__int64 **)(*v53 + 8) != v53 )
      goto LABEL_93;
    v40 = v51;
    *(_QWORD *)v51 = v39;
    *(_QWORD *)(v40 + 8) = v38;
    *(_QWORD *)(v39 + 8) = v40;
    *v38 = v40;
    v22 = (_DWORD)v3 << 31;
    v23 = v54;
  }
  else
  {
    v23 = v57;
  }
  v12 += v22;
  HvpPointMapEntriesToBuffer(BugCheckParameter2, v23, 0LL);
  if ( !(_DWORD)v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0
      || (v55 = v56, (unsigned __int8)HvpMarkDirty(BugCheckParameter2)) )
    {
      CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v13, v11);
      HvpSetRangeProtection(BugCheckParameter2, v11);
      return v12;
    }
    goto LABEL_76;
  }
  return v12;
}
