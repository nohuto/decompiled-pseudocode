/*
 * XREFs of HvpAddBin @ 0x1406FAA84
 * Callers:
 *     HvpDoAllocateCell @ 0x140720248 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     HvpGrowDirtyVectors @ 0x1402F8E1C (HvpGrowDirtyVectors.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvpFreeBin @ 0x140621684 (HvpFreeBin.c)
 *     CmpClaimGlobalQuota @ 0x1406F82B4 (CmpClaimGlobalQuota.c)
 *     HvpPointMapEntriesToBuffer @ 0x1406FB088 (HvpPointMapEntriesToBuffer.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1406FB148 (HvpAdjustHiveFreeDisplay.c)
 *     HvpExpandMap @ 0x1406FB2BC (HvpExpandMap.c)
 *     CmpCanGrowHive @ 0x1406FB420 (CmpCanGrowHive.c)
 *     HvpViewMapCOWAndUnsealRange @ 0x1406FBDAC (HvpViewMapCOWAndUnsealRange.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1406FC92C (CmpUpdateSystemHiveHysteresis.c)
 *     HvpProtectBin @ 0x1406FC97C (HvpProtectBin.c)
 *     HvpAllocateBin @ 0x1406FC9B8 (HvpAllocateBin.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x1406FCB88 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapExtendStorage @ 0x1406FCEC4 (HvpViewMapExtendStorage.c)
 *     HvpMarkDirty @ 0x14071F940 (HvpMarkDirty.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x14072122C (CmpReleaseGlobalQuota.c)
 *     HvpSetRangeProtection @ 0x140721258 (HvpSetRangeProtection.c)
 *     HvpViewMapShrinkStorage @ 0x140873788 (HvpViewMapShrinkStorage.c)
 *     HvpShrinkMap @ 0x140880CC0 (HvpShrinkMap.c)
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
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  signed __int64 v17; // rax
  char v18; // cl
  __int64 v19; // rcx
  __int64 v20; // r9
  int v21; // eax
  _DWORD *v22; // rcx
  void *v23; // rdx
  int v24; // eax
  char v25; // dl
  unsigned int v27; // edx
  __int64 *v28; // rax
  __int64 **v29; // rcx
  int v30; // edi
  __int64 v31; // r8
  __int64 CellMap; // rax
  unsigned int v33; // r8d
  unsigned int v34; // r11d
  _QWORD *v35; // r10
  __int64 v36; // rax
  int v37; // eax
  _DWORD *v38; // rdx
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r9
  int v45; // ebx
  ULONG v46; // eax
  __int64 v47; // rax
  __int64 *v48; // rax
  char v49; // [rsp+30h] [rbp-48h]
  unsigned int j; // [rsp+34h] [rbp-44h]
  size_t Size; // [rsp+38h] [rbp-40h]
  void *v52; // [rsp+40h] [rbp-38h] BYREF
  void *v53; // [rsp+48h] [rbp-30h] BYREF
  __int64 v54; // [rsp+50h] [rbp-28h]
  __int64 v55; // [rsp+58h] [rbp-20h]
  __int64 *v56; // [rsp+60h] [rbp-18h]
  char v57; // [rsp+C0h] [rbp+48h]
  char v58; // [rsp+C8h] [rbp+50h]
  char v59; // [rsp+D0h] [rbp+58h]
  char v60; // [rsp+D8h] [rbp+60h]

  v3 = a3;
  v4 = -1;
  Size = 0LL;
  j = -1;
  v5 = (a2 + 4127) & 0xFFFFF000;
  v49 = 0;
  v52 = 0LL;
  v54 = 0LL;
  v7 = 0;
  v53 = 0LL;
  v59 = 0;
  v58 = 0;
  if ( v5 <= 0x3000 && v5 - (unsigned __int64)a2 - 32 < 0xE00 )
    v5 += 4096;
  v8 = 632LL * a3;
  v9 = 632 * v3 + BugCheckParameter2 + 880;
  v55 = 632 * v3;
  v56 = (__int64 *)v9;
  for ( i = *(__int64 **)v9; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v9 )
    {
      i = 0LL;
      goto LABEL_7;
    }
    v27 = *((_DWORD *)i + 4);
    if ( v27 >= v5 && v27 + *((_DWORD *)i + 5) <= *(_DWORD *)(v8 + BugCheckParameter2 + 272) )
      break;
  }
  v7 = *((_DWORD *)i + 4);
LABEL_7:
  if ( i )
  {
    v28 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) != i )
      goto LABEL_93;
    v29 = (__int64 **)i[1];
    if ( *v29 != i )
      goto LABEL_93;
    *v29 = v28;
    v28[1] = (__int64)v29;
    v30 = (_DWORD)v3 << 31;
    if ( (unsigned __int8)HvpMarkDirty(BugCheckParameter2) )
    {
      v31 = 0LL;
      v4 = v30 + *((_DWORD *)i + 5);
      for ( j = v4; (unsigned int)v31 < v7; *v35 = v36 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)(v31 + v4));
        v35 = (_QWORD *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v34, 0x267uLL);
        *(_QWORD *)(CellMap + 8) &= ~2uLL;
        v36 = v33;
        v31 = v33 + 4096;
      }
    }
LABEL_55:
    if ( !i )
      return j;
    if ( v4 != -1 )
    {
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(BugCheckParameter2 + 32))(i, 24LL, v31);
      return j;
    }
    v48 = *(__int64 **)v9;
    if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) == v9 )
    {
      *i = (__int64)v48;
      i[1] = v9;
      v48[1] = (__int64)i;
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
  *(_DWORD *)(v55 + BugCheckParameter2 + 272) = v13;
  if ( (int)HvpAdjustHiveFreeDisplay(BugCheckParameter2, v13, (unsigned int)v3) < 0 )
  {
LABEL_77:
    HvpShrinkMap(BugCheckParameter2, (unsigned int)v3, v13, v11);
    *(_DWORD *)(v55 + BugCheckParameter2 + 272) = v11;
    if ( v49 )
    {
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v11 >> 9;
      v45 = *(_DWORD *)(BugCheckParameter2 + 104);
      v46 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 104) = v46;
      _InterlockedExchangeAdd(&CmpDirtySectorCount, v46 - v45);
      v47 = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v11 >> 9;
      *(_QWORD *)(BugCheckParameter2 + 120) = v47;
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    }
    if ( v58 )
      HvpViewMapShrinkStorage(BugCheckParameter2 + 216, v11);
    if ( v52 && !v59 )
      HvpFreeBin(BugCheckParameter2, v12 - v11, (__int64)v52);
    if ( v54 )
      (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter2 + 32))(v54, 24LL);
    if ( v53 && !v59 )
      HvpFreeBin(BugCheckParameter2, v13 - v12, (__int64)v53);
    if ( !HIDWORD(Size) )
      return j;
    CmpReleaseGlobalQuota(HIDWORD(Size));
    v9 = (ULONG_PTR)v56;
    v4 = -1;
    goto LABEL_55;
  }
  v57 = 1;
  v60 = 1;
  if ( (_DWORD)v3 )
    goto LABEL_31;
  v15 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v15 & 1) == 0 )
  {
    if ( (int)HvpGrowDirtyVectors(BugCheckParameter2, v13) < 0 )
      goto LABEL_76;
    v15 = *(_DWORD *)(BugCheckParameter2 + 160);
    v49 = 1;
  }
  if ( (v15 & 0x8001) == 0 )
  {
    if ( (int)CmpDoFileSetSizeEx(BugCheckParameter2, 0LL, v13 + 4096, 1LL) < 0 )
      goto LABEL_76;
    if ( (*(_DWORD *)(BugCheckParameter2 + 4152) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4268) )
      *(_DWORD *)(BugCheckParameter2 + 4268) = v11;
  }
  v57 = 1;
  v60 = 1;
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
    goto LABEL_31;
  if ( (*(_DWORD *)(BugCheckParameter2 + 248) & 1) != 0 )
    v16 = *(_QWORD *)(BugCheckParameter2 + 232);
  else
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  v17 = v16 & 0xFFFFFFFFFFFFF000uLL;
  v57 = 1;
  v14 = 2147479552LL;
  v60 = 1;
  if ( v17 >= 2147479552 )
    LODWORD(v17) = 2147479552;
  if ( v13 > (int)v17 - 4096 )
  {
LABEL_31:
    v18 = 0;
  }
  else
  {
    if ( (int)HvpViewMapExtendStorage(BugCheckParameter2 + 216, v13) < 0 )
      goto LABEL_76;
    v18 = 1;
    v57 = 0;
    v59 = 1;
    v60 = 0;
  }
  if ( (_DWORD)Size )
  {
    if ( v18 )
    {
      v58 = v18;
      if ( !CmpClaimGlobalQuota((unsigned int)Size, v14) )
        goto LABEL_76;
      v58 = v59;
      HIDWORD(Size) = Size;
      if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v11, (unsigned int)Size, &v52) < 0 )
        goto LABEL_76;
      v58 = v59;
      v37 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v11, (unsigned int)Size);
    }
    else
    {
      v58 = 0;
      if ( (int)HvpAllocateBin(BugCheckParameter2, Size, v3, 808602947, (__int64)&v52) < 0 )
        goto LABEL_76;
      LOBYTE(v44) = 1;
      v58 = 0;
      v37 = HvpProtectBin(v43, (unsigned int)Size, v52, v44);
    }
    if ( v37 < 0 )
      goto LABEL_76;
    memset(v52, 0, (unsigned int)Size);
    v38 = v52;
    *((_DWORD *)v52 + 7) = 0;
    v38[1] = v11 & 0x7FFFFFFF;
    v38[2] = Size;
    v38[8] = Size - 32;
    *v38 = 1852400232;
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter2 + 24))(24LL, 0LL, 825380163LL);
    v18 = v59;
    v14 = v39;
    v58 = v59;
    v54 = v39;
    if ( !v39 )
      goto LABEL_76;
    *(_DWORD *)(v39 + 16) = Size;
    *(_DWORD *)(v39 + 20) = v11;
  }
  if ( !v18 )
  {
    v58 = 0;
    if ( (int)HvpAllocateBin(BugCheckParameter2, v5, v3, 909200707, (__int64)&v53) >= 0 )
    {
      LOBYTE(v20) = 1;
      v58 = 0;
      v21 = HvpProtectBin(v19, v5, v53, v20);
      goto LABEL_36;
    }
LABEL_76:
    HvpAdjustHiveFreeDisplay(BugCheckParameter2, v11, (unsigned int)v3);
    goto LABEL_77;
  }
  v58 = v18;
  if ( !CmpClaimGlobalQuota(v5, v14) )
    goto LABEL_76;
  HIDWORD(Size) += v5;
  v58 = v59;
  if ( (int)HvpViewMapPromoteRangeToMapping(BugCheckParameter2 + 216, v12, v5, &v53) < 0 )
    goto LABEL_76;
  v58 = v59;
  v21 = HvpViewMapCOWAndUnsealRange(BugCheckParameter2 + 216, v12, v5);
LABEL_36:
  if ( v21 < 0 )
    goto LABEL_76;
  memset(v53, 0, v5);
  v22 = v53;
  v23 = v52;
  *((_DWORD *)v53 + 7) = 0;
  v22[1] = v12 & 0x7FFFFFFF;
  v22[8] = v5 - 32;
  v24 = (_DWORD)v3 << 31;
  *v22 = 1852400232;
  v22[2] = v5;
  if ( v23 )
  {
    HvpPointMapEntriesToBuffer(BugCheckParameter2, v57, v54);
    v40 = v56;
    v41 = *v56;
    if ( *(__int64 **)(*v56 + 8) != v56 )
      goto LABEL_93;
    v42 = v54;
    *(_QWORD *)v54 = v41;
    *(_QWORD *)(v42 + 8) = v40;
    *(_QWORD *)(v41 + 8) = v42;
    *v40 = v42;
    v24 = (_DWORD)v3 << 31;
    v25 = v57;
  }
  else
  {
    v25 = v60;
  }
  v12 += v24;
  HvpPointMapEntriesToBuffer(BugCheckParameter2, v25, 0LL);
  if ( !(_DWORD)v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0
      || (v58 = v59, (unsigned __int8)HvpMarkDirty(BugCheckParameter2)) )
    {
      CmpUpdateSystemHiveHysteresis(BugCheckParameter2, v13, v11);
      HvpSetRangeProtection(BugCheckParameter2, v11);
      return v12;
    }
    goto LABEL_76;
  }
  return v12;
}
