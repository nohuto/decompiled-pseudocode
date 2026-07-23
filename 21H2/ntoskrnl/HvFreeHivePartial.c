/*
 * XREFs of HvFreeHivePartial @ 0x1406F8D94
 * Callers:
 *     HvpTruncateBins @ 0x1406F8CDC (HvpTruncateBins.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140274DA0 (RtlNumberOfSetBits.c)
 *     RtlClearBits @ 0x1402AB730 (RtlClearBits.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvpFreeMap @ 0x14061A3C8 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x140621684 (HvpFreeBin.c)
 *     HvpAdjustHiveFreeDisplay @ 0x1406FB148 (HvpAdjustHiveFreeDisplay.c)
 *     CmpUpdateSystemHiveHysteresis @ 0x1406FC92C (CmpUpdateSystemHiveHysteresis.c)
 *     HvpMapEntryGetFreeBin @ 0x14071F4EC (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x14072122C (CmpReleaseGlobalQuota.c)
 *     HvpViewMapShrinkStorage @ 0x140873788 (HvpViewMapShrinkStorage.c)
 */

__int64 __fastcall HvFreeHivePartial(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3)
{
  __int64 v5; // r15
  unsigned int v7; // esi
  __int64 result; // rax
  int v9; // r13d
  unsigned int v10; // ebx
  __int64 CellMap; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  _QWORD *FreeBin; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rdx
  ULONG v24; // r14d
  ULONG v25; // ebx
  int v26; // ebx
  unsigned int v27; // [rsp+68h] [rbp+10h]

  v5 = 632LL * (int)a3;
  v7 = a2;
  result = *(unsigned int *)(v5 + BugCheckParameter2 + 272);
  v27 = result;
  if ( a2 != (_DWORD)result )
  {
    v9 = a3 << 31;
    do
    {
      v10 = v7 + v9;
      CellMap = HvpGetCellMap(BugCheckParameter2, v7 + v9);
      v14 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x165uLL);
      FreeBin = (_QWORD *)HvpMapEntryGetFreeBin(CellMap, v12, v13);
      v16 = FreeBin;
      if ( FreeBin )
      {
        v17 = *FreeBin;
        if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v18 = (_QWORD *)FreeBin[1], (_QWORD *)*v18 != v16) )
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        (*(void (__fastcall **)(_QWORD *, __int64))(BugCheckParameter2 + 32))(v16, 24LL);
      }
      v19 = *(_QWORD *)(v14 + 8);
      v20 = *(unsigned int *)(v14 + 16);
      if ( (v19 & 8) != 0 )
        HvpFreeBin(BugCheckParameter2, v20, v19 & 0xFFFFFFFFFFFFFFF0uLL);
      else
        CmpReleaseGlobalQuota(v20);
      v7 += *(_DWORD *)(v14 + 16);
      do
      {
        v21 = HvpGetCellMap(BugCheckParameter2, v10);
        if ( !v21 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v10, 0x19EuLL);
        v10 += 4096;
        *(_OWORD *)v21 = 0LL;
        *(_QWORD *)(v21 + 16) = 0LL;
      }
      while ( v10 - v9 < v7 );
    }
    while ( v7 < v27 );
    if ( a2 )
      v22 = (a2 - 1) >> 21;
    else
      v22 = -1;
    HvpFreeMap(
      BugCheckParameter2,
      *(_QWORD *)(v5 + BugCheckParameter2 + 280),
      v22 + 1,
      (unsigned int)((*(_DWORD *)(v5 + BugCheckParameter2 + 272) >> 12) - 1) >> 9);
    if ( !a3 )
    {
      CmpUpdateSystemHiveHysteresis(
        BugCheckParameter2,
        a2 & 0x7FFFFFFF,
        *(unsigned int *)(v5 + BugCheckParameter2 + 272));
      if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
        HvpViewMapShrinkStorage(BugCheckParameter2 + 216, a2 & 0x7FFFFFFF);
    }
    v23 = a2 & 0x7FFFFFFF;
    *(_DWORD *)(v5 + BugCheckParameter2 + 272) = v23;
    if ( !a3 )
    {
      v24 = a2 >> 9;
      v25 = *(_DWORD *)(BugCheckParameter2 + 88) - v24;
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 88), v24, v25);
      RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + 112), v24, v25);
      *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
      *(_DWORD *)(BugCheckParameter2 + 88) = v24;
      *(_QWORD *)(BugCheckParameter2 + 120) = *(_QWORD *)(BugCheckParameter2 + 120);
      *(_DWORD *)(BugCheckParameter2 + 112) = v24;
      v26 = *(_DWORD *)(BugCheckParameter2 + 104);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      _InterlockedExchangeAdd(&CmpDirtySectorCount, *(_DWORD *)(BugCheckParameter2 + 104) - v26);
      v23 = *(unsigned int *)(v5 + BugCheckParameter2 + 272);
    }
    return HvpAdjustHiveFreeDisplay(BugCheckParameter2, v23, a3);
  }
  return result;
}
