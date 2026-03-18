/*
 * XREFs of MiLockCode @ 0x1402A6D00
 * Callers:
 *     MiLockImageSection @ 0x1406A57A0 (MiLockImageSection.c)
 *     MmResetDriverPaging @ 0x1406B9310 (MmResetDriverPaging.c)
 *     MiHandleDriverNonPagedSections @ 0x140755A30 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x140757FE0 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140773790 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiWriteValidPteVolatile @ 0x14028F7D0 (MiWriteValidPteVolatile.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140295510 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiTradeActivePage @ 0x140313B60 (MiTradeActivePage.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiRemoveSystemImagePage @ 0x1403200E8 (MiRemoveSystemImagePage.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiUnlockCodePage @ 0x1403A0790 (MiUnlockCodePage.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055A428 (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x1406B26C0 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x1406ED7B8 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rbx
  char v8; // si
  int v9; // r13d
  int SystemRegionType; // eax
  char *AnyMultiplexedVm; // r14
  unsigned __int64 v12; // r15
  __int64 Flink; // rdx
  unsigned __int8 v14; // di
  unsigned __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // r13
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
  char v34; // r9
  __int64 v35; // rbx
  __int64 v36; // r9
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  char WsleContents; // r15
  __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // r8
  __int64 v46; // rdx
  unsigned __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // r9
  __int64 v52; // rcx
  char v53; // al
  struct _LIST_ENTRY *v54; // r8
  __int64 v55; // rax
  __int64 v56; // r8
  int v58; // [rsp+28h] [rbp-D8h]
  char v59; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v60; // [rsp+31h] [rbp-CFh]
  __int64 DriverPage; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v63; // [rsp+40h] [rbp-C0h]
  bool v64; // [rsp+48h] [rbp-B8h]
  int v65; // [rsp+4Ch] [rbp-B4h]
  char *SessionVm; // [rsp+50h] [rbp-B0h]
  int v67; // [rsp+58h] [rbp-A8h] BYREF
  int v68; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v70; // [rsp+68h] [rbp-98h]
  unsigned __int64 v71; // [rsp+70h] [rbp-90h]
  __int64 v72; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h]
  __int64 v74; // [rsp+88h] [rbp-78h]
  unsigned __int64 v75; // [rsp+90h] [rbp-70h]
  int v76; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v77; // [rsp+A4h] [rbp-5Ch]
  __int16 v78; // [rsp+A6h] [rbp-5Ah]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+B8h] [rbp-48h]
  __int128 v82; // [rsp+C0h] [rbp-40h]
  __int128 v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+E0h] [rbp-20h]
  __int128 v85; // [rsp+F0h] [rbp-10h]
  __int128 v86; // [rsp+100h] [rbp+0h]
  __int128 v87; // [rsp+110h] [rbp+10h]
  __int128 v88; // [rsp+120h] [rbp+20h]
  __int128 v89; // [rsp+130h] [rbp+30h]
  __int128 v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+150h] [rbp+50h]

  v71 = a3;
  v78 = 0;
  v91 = 0LL;
  v5 = a2;
  v75 = a2;
  v72 = a1;
  v82 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v74 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v8 = 1;
  v9 = 0;
  v59 = 1;
  v65 = 0;
  SystemRegionType = MiGetSystemRegionType(v7);
  if ( SystemRegionType == 1 )
  {
    v70 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v9 = 2;
    SessionVm = (char *)MiGetSessionVm();
    v65 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v70 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140C4EFC0;
      SessionVm = (char *)&unk_140C4EFC0;
    }
  }
  v64 = 0;
  if ( a1 && v9 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v64 = (dword_140CFB174 & 1) != 0;
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  v79 = 20LL;
  v12 = 0LL;
  v76 = v9;
  v77 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v63 = 0LL;
  v14 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  v60 = v14;
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
      MiFlushTbList(&v76, Flink);
      MiUnlockPageTableInternal(AnyMultiplexedVm);
    }
    v12 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v63 = v12;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v12, 0LL);
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
    v69 = v19;
    v21 = (__int64)((v5 << 25) - v74) >> 16;
    if ( (v19 & 1) == 0 )
    {
      MiFlushTbList(&v76, Flink);
      MiUnlockPageTableInternal(AnyMultiplexedVm);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v14);
      v22 = MmAccessFault(0LL, v21, 0, 0LL);
      if ( v22 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v21, v19, v22);
      v12 = 0LL;
      v63 = 0LL;
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      goto LABEL_132;
    }
    if ( (unsigned __int64)&v69 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v69 > v17 )
    {
      v23 = v19;
    }
    else
    {
      v23 = v19;
      if ( (unsigned int)MiPteHasShadow(&v69, Flink, v15, v18) && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
      {
        v24 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v24 )
        {
          v23 = v19 | 0x20;
          v25 = *((_QWORD *)&v24->Flink + (((unsigned __int64)&v69 >> 3) & 0x1FF));
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
      MiFlushTbList(&v76, v28);
      v29 = MiCopyOnWrite(v21, (ULONG_PTR *)v5, -1LL, 0);
      if ( v29 >= 0 )
      {
        v14 = v60;
      }
      else
      {
        MiUnlockPageTableInternal(AnyMultiplexedVm);
        v14 = v60;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v60);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v29);
        v12 = 0LL;
        v63 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
      }
LABEL_131:
      v8 = v59;
LABEL_132:
      v49 = DriverPage;
      continue;
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v15 + 48 * v26) && (!v70 || v64) )
    {
      v33 = a4;
      if ( (a4 & 1) != 0 )
      {
        MiFlushTbList(&v76, v30);
        MiUnlockPageTableInternal(AnyMultiplexedVm);
        v14 = v60;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v60);
        v34 = 0;
LABEL_50:
        MiMakeDriverPagesPrivate(v72, v5, v71, v34);
        v12 = 0LL;
        v63 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
        goto LABEL_131;
      }
    }
    else
    {
      v33 = a4;
    }
    if ( (v19 & 0x800) == 0 && (v19 & 0x200) != 0 )
    {
      MiFlushTbList(&v76, v30);
      MiUnlockPageTableInternal(AnyMultiplexedVm);
      v14 = v60;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v60);
      v34 = 1;
      goto LABEL_50;
    }
    v35 = 0LL;
    v36 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v30 >> 39) & 0x3FF));
    v73 = v36;
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
    WsleContents = HIBYTE(v38) & 0xF | (16 * ((v38 >> 60) & 7));
    if ( DriverPage != -1 )
    {
      Process = 48 * DriverPage - 0x58000000000LL;
      v42 = (*(_QWORD *)(Process + 40) >> 39) & 0x3FFLL;
      if ( v36 == *(_QWORD *)(qword_140C4E4C8 + 8 * v42) )
        goto LABEL_71;
      MiReleaseFreshPage(Process, v42);
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
    Process = qword_140C4CB70 & 0x1FF;
    if ( (v26 & 0x1FF) >= Process || (unsigned int)MiIsPfnFromSlabAllocation(v27) )
    {
LABEL_71:
      v67 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v67);
          while ( *(__int64 *)(v27 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) );
        v33 = a4;
      }
      if ( DriverPage != -1 && (v33 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(Process, v21);
        if ( (WsleContents & 0xF) != 9
          && !MiIsPfnFileOnly(v27)
          && !(unsigned int)MiIsPfnFromSlabAllocation(v27)
          && (v26 & 0x1FF) < ((unsigned __int16)v43 & 0x1FFu) )
        {
          v44 = 48 * v43 - 0x58000000000LL;
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned int)MI_PFN_IS_PROTO(v27) && (*(_DWORD *)(v27 + 16) & 0x400LL) != 0 )
          {
            v47 = MiLockProtoPoolPage(v45, 0LL);
            if ( v47 )
              goto LABEL_90;
          }
          else
          {
            v47 = 1LL;
LABEL_90:
            if ( (unsigned int)MiTradeActivePage(v27, v44, v21, 0, 2, v58) == 1 )
            {
              *(_QWORD *)(v27 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList(v27 + 16);
              MiReleaseFreshPage(v27, v50);
              v27 = v44;
              DriverPage = -1LL;
            }
          }
          if ( v47 > 1 )
          {
            LOBYTE(v46) = 17;
            MiUnlockProtoPoolPage(v47, v46);
          }
          v68 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v68);
            while ( *(__int64 *)(v27 + 24) < 0 );
          }
          AnyMultiplexedVm = SessionVm;
        }
      }
      v51 = a4;
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) != 9 )
          MiRemoveSystemImagePage(AnyMultiplexedVm, v5, v27);
        goto LABEL_107;
      }
      if ( v65 == 2 )
      {
        if ( (unsigned int)MiAddLockedPageCharge(v27, 0LL) )
          goto LABEL_107;
        v8 = 0;
        v59 = 0;
      }
      else
      {
        if ( (unsigned int)MiAreChargesNeededToLockPage(v27) )
          *(_BYTE *)(v27 + 35) |= 0x20u;
        ++*(_WORD *)(v27 + 32);
LABEL_107:
        v8 = v59;
      }
      v52 = v27 + 16;
      if ( (*(_DWORD *)(v27 + 16) & 0x400LL) == 0 )
      {
        v53 = *(_BYTE *)(v27 + 34);
        if ( (v53 & 0x10) == 0 )
        {
          if ( (v53 & 8) == 0 )
          {
            v35 = MiCapturePageFileInfoInline(v52, 1LL);
            v53 = *(_BYTE *)(v27 + 34);
          }
          *(_BYTE *)(v27 + 34) = v53 | 0x10;
        }
      }
      Flink = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v52, Flink, v37, v51)
        && (Flink & 1) != 0
        && ((Flink & 0x20) == 0 || (Flink & 0x42) == 0) )
      {
        v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v54 )
        {
          v55 = *((_QWORD *)&v54->Flink + ((v5 >> 3) & 0x1FF));
          v56 = Flink | 0x20;
          if ( (v55 & 0x20) == 0 )
            v56 = Flink;
          Flink = v56;
          if ( (v55 & 0x42) != 0 )
            Flink = v56 | 0x42;
        }
      }
      if ( (Flink & 0x800) != 0 && (Flink & 0x42) == 0 )
      {
        MiWriteValidPteVolatile((volatile signed __int64 *)v5, 2, 0);
        MiInsertTbFlushEntry(&v76, v21, 1LL, 0LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v35 )
        MiReleasePageFileInfo(v73, v35, 1LL);
      v12 = v63;
      v5 += 8LL;
      v14 = v60;
      goto LABEL_132;
    }
    MiFlushTbList(&v76, v48);
    MiUnlockPageTableInternal(AnyMultiplexedVm);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v60);
    v12 = 0LL;
    DriverPage = MiAllocateDriverPage(v73, 0LL, 0LL);
    v63 = 0LL;
    v49 = DriverPage;
    v8 = v59;
    v14 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    v60 = v14;
  }
  while ( v5 <= v71 && v8 == 1 );
  if ( v14 != 17 )
  {
    MiFlushTbList(&v76, Flink);
    if ( v12 )
      MiUnlockPageTableInternal(AnyMultiplexedVm);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v14);
  }
  if ( v49 != -1 )
    MiReleaseFreshPage(48 * v49 - 0x58000000000LL, Flink);
  if ( !v8 )
  {
    MiUnlockCodePage(v75, v5 - 16, 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
