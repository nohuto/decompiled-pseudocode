/*
 * XREFs of MiLockCode @ 0x140231A50
 * Callers:
 *     MmResetDriverPaging @ 0x1406A8720 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x1406D4538 (MiLockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x140746E50 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140749400 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140764760 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140224D10 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiTradeActivePage @ 0x14032D448 (MiTradeActivePage.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiRemoveSystemImagePage @ 0x14034F2E8 (MiRemoveSystemImagePage.c)
 *     MiUnlockCodePage @ 0x14039E2C0 (MiUnlockCodePage.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 *     MiAllocateDriverPage @ 0x1406A9548 (MiAllocateDriverPage.c)
 *     MiPrefetchDriverPages @ 0x1406DAAC0 (MiPrefetchDriverPages.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rbx
  char v8; // si
  int v9; // r13d
  int SystemRegionType; // eax
  void *AnyMultiplexedVm; // r14
  __int64 v12; // r15
  __int64 Flink; // rdx
  unsigned __int8 v14; // di
  unsigned __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // r9
  ULONG_PTR v19; // rbx
  __int64 v20; // rax
  ULONG_PTR v21; // r13
  int v22; // eax
  unsigned __int64 v23; // rsi
  struct _LIST_ENTRY *v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  int v29; // ebx
  unsigned __int64 v30; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v32; // r11
  char v33; // r10
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // r9
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // r15
  unsigned __int64 v42; // rdx
  char WsleContents; // r15
  __int64 v44; // rdx
  __int64 v45; // r9
  __int64 v46; // r9
  __int64 v47; // r14
  unsigned __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  __int64 v51; // rbx
  __int64 v52; // r9
  __int64 v53; // rcx
  char v54; // al
  struct _LIST_ENTRY *v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  int v59; // [rsp+28h] [rbp-D8h]
  char v60; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v61; // [rsp+31h] [rbp-CFh]
  __int64 DriverPage; // [rsp+38h] [rbp-C8h]
  __int64 v64; // [rsp+40h] [rbp-C0h]
  bool v65; // [rsp+48h] [rbp-B8h]
  int v66; // [rsp+4Ch] [rbp-B4h]
  void *SessionVm; // [rsp+50h] [rbp-B0h]
  int v68; // [rsp+58h] [rbp-A8h] BYREF
  int v69; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG_PTR v70; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v71; // [rsp+68h] [rbp-98h]
  unsigned __int64 v72; // [rsp+70h] [rbp-90h]
  __int64 v73; // [rsp+78h] [rbp-88h]
  __int64 v74; // [rsp+80h] [rbp-80h]
  __int64 v75; // [rsp+88h] [rbp-78h]
  unsigned __int64 v76; // [rsp+90h] [rbp-70h]
  int v77; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v78; // [rsp+A4h] [rbp-5Ch]
  __int16 v79; // [rsp+A6h] [rbp-5Ah]
  __int64 v80; // [rsp+A8h] [rbp-58h]
  __int64 v81; // [rsp+B0h] [rbp-50h]
  __int64 v82; // [rsp+B8h] [rbp-48h]
  __int128 v83; // [rsp+C0h] [rbp-40h]
  __int128 v84; // [rsp+D0h] [rbp-30h]
  __int128 v85; // [rsp+E0h] [rbp-20h]
  __int128 v86; // [rsp+F0h] [rbp-10h]
  __int128 v87; // [rsp+100h] [rbp+0h]
  __int128 v88; // [rsp+110h] [rbp+10h]
  __int128 v89; // [rsp+120h] [rbp+20h]
  __int128 v90; // [rsp+130h] [rbp+30h]
  __int128 v91; // [rsp+140h] [rbp+40h]
  __int64 v92; // [rsp+150h] [rbp+50h]

  v72 = a3;
  v79 = 0;
  v92 = 0LL;
  v5 = a2;
  v76 = a2;
  v73 = a1;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v91 = 0LL;
  v75 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v8 = 1;
  v9 = 0;
  v60 = 1;
  v66 = 0;
  SystemRegionType = MiGetSystemRegionType(v7);
  if ( SystemRegionType == 1 )
  {
    v71 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v9 = 2;
    SessionVm = (void *)MiGetSessionVm();
    v66 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v71 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = (void *)MiGetAnyMultiplexedVm(2LL);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = &unk_140C4EF40;
      SessionVm = &unk_140C4EF40;
    }
  }
  v65 = 0;
  if ( a1 && v9 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v65 = (dword_140CFB174 & 1) != 0;
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  v80 = 20LL;
  v12 = 0LL;
  v77 = v9;
  v78 = 0;
  v81 = 0LL;
  v82 = 0LL;
  v64 = 0LL;
  v14 = MiLockWorkingSetShared(AnyMultiplexedVm);
  v61 = v14;
  do
  {
    v15 = 0xFFFFFA8000000000uLL;
    v16 = 0x1000000000LL;
    v17 = 0xFFFFF6FB7DBED7F8uLL;
    v18 = 0xFFFFFFFFFLL;
    if ( v12 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_16;
      MiFlushTbList(&v77, Flink);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
    }
    v12 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v64 = v12;
    MiLockPageTableInternal(AnyMultiplexedVm, v12, 0LL);
    v17 = 0xFFFFF6FB7DBED7F8uLL;
    v18 = 0xFFFFFFFFFLL;
    v16 = 0x1000000000LL;
    v15 = 0xFFFFFA8000000000uLL;
LABEL_16:
    v19 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED000uLL, Flink, 0xFFFFFA8000000000uLL, 0xFFFFFFFFFLL)
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v20 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
        Flink = v19 | 0x20;
        if ( (v20 & 0x20) == 0 )
          Flink = v19;
        v19 = Flink;
        if ( (v20 & 0x42) != 0 )
          v19 = Flink | 0x42;
      }
    }
    v70 = v19;
    v21 = (__int64)((v5 << 25) - v75) >> 16;
    if ( (v19 & 1) == 0 )
    {
      MiFlushTbList(&v77, Flink);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v14);
      v22 = MmAccessFault(0LL, v21);
      if ( v22 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v21, v19, v22);
      v12 = 0LL;
      v64 = 0LL;
      MiLockWorkingSetShared(AnyMultiplexedVm);
      goto LABEL_132;
    }
    if ( (unsigned __int64)&v70 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v70 > v17 )
    {
      v23 = v19;
    }
    else
    {
      v23 = v19;
      if ( (unsigned int)MiPteHasShadow(&v70, Flink, v15, v18) && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v24 )
        {
          v23 = v19 | 0x20;
          v25 = *((_QWORD *)&v24->Flink + (((unsigned __int64)&v70 >> 3) & 0x1FF));
          if ( (v25 & 0x20) == 0 )
            v23 = v19;
          if ( (v25 & 0x42) != 0 )
            v23 |= 0x42uLL;
        }
      }
    }
    v26 = v18 & (v23 >> 12);
    v27 = v15 + 48 * v26;
    v28 = *(_QWORD *)(v27 + 40);
    if ( (v28 & v16) == 0 && *(__int64 *)(v27 + 8) > 0 )
    {
      MiFlushTbList(&v77, v28);
      v29 = MiCopyOnWrite(v21, v5, -1LL);
      if ( v29 >= 0 )
      {
        v14 = v61;
      }
      else
      {
        MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
        v14 = v61;
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v61);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v29);
        v12 = 0LL;
        v64 = 0LL;
        MiLockWorkingSetShared(AnyMultiplexedVm);
      }
LABEL_131:
      v8 = v60;
LABEL_132:
      v51 = DriverPage;
      continue;
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v15 + 48 * v26) && (!v71 || v65) )
    {
      v33 = a4;
      if ( (a4 & 1) != 0 )
      {
        MiFlushTbList(&v77, v30);
        MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
        v14 = v61;
        MiUnlockWorkingSetShared(AnyMultiplexedVm, v61);
        v34 = 0LL;
LABEL_50:
        MiMakeDriverPagesPrivate(v73, v5, v72, v34);
        v12 = 0LL;
        v64 = 0LL;
        MiLockWorkingSetShared(AnyMultiplexedVm);
        goto LABEL_131;
      }
    }
    else
    {
      v33 = a4;
    }
    if ( (v19 & 0x800) == 0 && (v19 & 0x200) != 0 )
    {
      MiFlushTbList(&v77, v30);
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
      v14 = v61;
      MiUnlockWorkingSetShared(AnyMultiplexedVm, v61);
      v34 = 1LL;
      goto LABEL_50;
    }
    v35 = 0LL;
    v36 = *(_QWORD *)(qword_140C4E448 + 8 * ((v30 >> 39) & 0x3FF));
    v74 = v36;
    v37 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v38 = *(_QWORD *)v37;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL
      && v37 <= v32
      && (unsigned int)MiPteHasShadow(Process, v38, v37, v36)
      && (v38 & 1) != 0
      && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v39 = *(_QWORD *)(Process + 1928);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 8 * ((v37 >> 3) & 0x1FF));
        v37 = v38 | 0x20;
        Process = (unsigned __int8)v40;
        LOBYTE(Process) = v40 & 0x20;
        if ( (v40 & 0x20) == 0 )
          v37 = v38;
        v38 = v37;
        if ( (v40 & 0x42) != 0 )
          v38 = v37 | 0x42;
      }
    }
    v41 = (v38 >> 60) & 7;
    v42 = HIBYTE(v38);
    LOBYTE(v42) = v42 & 0xF;
    WsleContents = v42 | (16 * v41);
    if ( DriverPage != -1 )
    {
      Process = 48 * DriverPage - 0x58000000000LL;
      v42 = (*(_QWORD *)(Process + 40) >> 39) & 0x3FFLL;
      if ( v36 == *(_QWORD *)(qword_140C4E448 + 8 * v42) )
        goto LABEL_71;
      MiReleaseFreshPage(Process);
      v33 = a4;
      DriverPage = -1LL;
    }
    if ( (v33 & 2) != 0 )
    {
      if ( (WsleContents & 0xF) == 9 )
        goto LABEL_71;
    }
    else if ( *(_WORD *)(v27 + 32) != 1 )
    {
      goto LABEL_71;
    }
    Process = qword_140C4CAF0 & 0x1FF;
    if ( (v26 & 0x1FF) >= Process || MiIsPfnFromSlabAllocation(v27) )
    {
LABEL_71:
      v68 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v68, v42);
          while ( *(__int64 *)(v27 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
        v33 = a4;
      }
      if ( DriverPage != -1 && (v33 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(Process, v21);
        if ( (WsleContents & 0xF) != 9
          && !(unsigned int)MiIsPfnFileOnly(v27, v44, v37, v45)
          && !MiIsPfnFromSlabAllocation(v27)
          && (v26 & 0x1FF) < ((unsigned __int16)v46 & 0x1FFu) )
        {
          v47 = 48 * v46 - 0x58000000000LL;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned int)MI_PFN_IS_PROTO(v27) && (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
          {
            v50 = MiLockProtoPoolPage(v48, 0LL);
            if ( v50 )
              goto LABEL_90;
          }
          else
          {
            v50 = 1LL;
LABEL_90:
            if ( (unsigned int)MiTradeActivePage(v27, v47, v21, 0, 2, v59) == 1 )
            {
              *(_QWORD *)(v27 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList();
              MiReleaseFreshPage(v27);
              v27 = v47;
              DriverPage = -1LL;
            }
          }
          if ( v50 > 1 )
          {
            LOBYTE(v49) = 17;
            MiUnlockProtoPoolPage(v50, v49);
          }
          v69 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v69, v49);
            while ( *(__int64 *)(v27 + 24) < 0 );
          }
          AnyMultiplexedVm = SessionVm;
        }
      }
      v52 = a4;
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) != 9 )
          MiRemoveSystemImagePage(AnyMultiplexedVm, v5, v27);
        goto LABEL_107;
      }
      if ( v66 == 2 )
      {
        if ( (unsigned int)MiAddLockedPageCharge(v27, 0LL, v37) )
          goto LABEL_107;
        v8 = 0;
        v60 = 0;
      }
      else
      {
        if ( (unsigned int)MiAreChargesNeededToLockPage(v27) )
          *(_BYTE *)(v27 + 35) |= 0x20u;
        ++*(_WORD *)(v27 + 32);
LABEL_107:
        v8 = v60;
      }
      v53 = v27 + 16;
      if ( (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 )
      {
        v54 = *(_BYTE *)(v27 + 34);
        if ( (v54 & 0x10) == 0 )
        {
          if ( (v54 & 8) == 0 )
          {
            v35 = MiCapturePageFileInfoInline(v53, 1LL);
            v54 = *(_BYTE *)(v27 + 34);
          }
          *(_BYTE *)(v27 + 34) = v54 | 0x10;
        }
      }
      Flink = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v53, Flink, v37, v52)
        && (Flink & 1) != 0
        && ((Flink & 0x20) == 0 || (Flink & 0x42) == 0) )
      {
        v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v55 )
        {
          v56 = *((_QWORD *)&v55->Flink + ((v5 >> 3) & 0x1FF));
          v57 = Flink | 0x20;
          if ( (v56 & 0x20) == 0 )
            v57 = Flink;
          Flink = v57;
          if ( (v56 & 0x42) != 0 )
            Flink = v57 | 0x42;
        }
      }
      if ( (Flink & 0x800) != 0 && (Flink & 0x42) == 0 )
      {
        MiWriteValidPteVolatile(v5, 2LL);
        MiInsertTbFlushEntry(&v77, v21, 1LL, 0LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v35 )
        MiReleasePageFileInfo(v74, v35, 1LL);
      v12 = v64;
      v5 += 8LL;
      v14 = v61;
      goto LABEL_132;
    }
    MiFlushTbList(&v77, v42);
    MiUnlockPageTableInternal(AnyMultiplexedVm, v64);
    MiUnlockWorkingSetShared(AnyMultiplexedVm, v61);
    v12 = 0LL;
    DriverPage = MiAllocateDriverPage(v74, 0LL, 0LL);
    v64 = 0LL;
    v51 = DriverPage;
    v8 = v60;
    v14 = MiLockWorkingSetShared(AnyMultiplexedVm);
    v61 = v14;
  }
  while ( v5 <= v72 && v8 == 1 );
  if ( v14 != 17 )
  {
    MiFlushTbList(&v77, Flink);
    if ( v12 )
      MiUnlockPageTableInternal(AnyMultiplexedVm, v12);
    MiUnlockWorkingSetShared(AnyMultiplexedVm, v14);
  }
  if ( v51 != -1 )
    MiReleaseFreshPage(48 * v51 - 0x58000000000LL);
  if ( !v8 )
  {
    MiUnlockCodePage(v76, v5 - 16, 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
