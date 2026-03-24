/*
 * XREFs of MiLockCode @ 0x1403235B0
 * Callers:
 *     MmResetDriverPaging @ 0x1406D0A20 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x1406EF0DC (MiLockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x14075C910 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x14075EEA0 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140777740 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFileOnly @ 0x140218D60 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiWriteValidPteVolatile @ 0x140241370 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiTradeActivePage @ 0x1402B65F0 (MiTradeActivePage.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiRemoveSystemImagePage @ 0x1402C1688 (MiRemoveSystemImagePage.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14031CBD0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAreChargesNeededToLockPage @ 0x140323430 (MiAreChargesNeededToLockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiUnlockCodePage @ 0x1403A1050 (MiUnlockCodePage.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055BEF8 (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x1406885A0 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x1406D1A78 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rbx
  char v8; // si
  int v9; // r13d
  int SystemRegionType; // eax
  char *AnyMultiplexedVm; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int8 v16; // di
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // r11
  __int64 v20; // r9
  __int64 v21; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // r13
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rsi
  struct _LIST_ENTRY *v33; // rdx
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  ULONG_PTR v36; // rdi
  int v37; // ebx
  __int64 v38; // rdx
  __int64 v39; // r8
  _DWORD *v40; // r9
  unsigned __int64 v41; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v43; // r11
  char v44; // r10
  char v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  unsigned __int64 v49; // rbx
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  char v54; // r15
  __int64 v55; // rdx
  char WsleContents; // r15
  __int64 v57; // r9
  __int64 v58; // r14
  unsigned __int64 v59; // r8
  __int64 v60; // rdx
  unsigned __int64 v61; // rsi
  __int64 v62; // r9
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // r8
  _DWORD *v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  char v69; // al
  __int64 v70; // rax
  int v72; // [rsp+28h] [rbp-D8h]
  char v73; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v74; // [rsp+31h] [rbp-CFh]
  __int64 DriverPage; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v77; // [rsp+40h] [rbp-C0h]
  bool v78; // [rsp+48h] [rbp-B8h]
  int v79; // [rsp+4Ch] [rbp-B4h]
  char *SessionVm; // [rsp+50h] [rbp-B0h]
  int v81; // [rsp+58h] [rbp-A8h] BYREF
  int v82; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v83; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v84; // [rsp+68h] [rbp-98h]
  unsigned __int64 v85; // [rsp+70h] [rbp-90h]
  __int64 v86; // [rsp+78h] [rbp-88h]
  __int64 v87; // [rsp+80h] [rbp-80h]
  __int64 v88; // [rsp+88h] [rbp-78h]
  unsigned __int64 v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v91; // [rsp+A4h] [rbp-5Ch]
  __int16 v92; // [rsp+A6h] [rbp-5Ah]
  __int64 v93; // [rsp+A8h] [rbp-58h]
  __int64 v94; // [rsp+B0h] [rbp-50h]
  __int64 v95; // [rsp+B8h] [rbp-48h]
  __int128 v96; // [rsp+C0h] [rbp-40h]
  __int128 v97; // [rsp+D0h] [rbp-30h]
  __int128 v98; // [rsp+E0h] [rbp-20h]
  __int128 v99; // [rsp+F0h] [rbp-10h]
  __int128 v100; // [rsp+100h] [rbp+0h]
  __int128 v101; // [rsp+110h] [rbp+10h]
  __int128 v102; // [rsp+120h] [rbp+20h]
  __int128 v103; // [rsp+130h] [rbp+30h]
  __int128 v104; // [rsp+140h] [rbp+40h]
  __int64 v105; // [rsp+150h] [rbp+50h]

  v85 = a3;
  v92 = 0;
  v105 = 0LL;
  v5 = a2;
  v89 = a2;
  v86 = a1;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v88 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v8 = 1;
  v9 = 0;
  v73 = 1;
  v79 = 0;
  SystemRegionType = MiGetSystemRegionType(v7);
  if ( SystemRegionType == 1 )
  {
    v84 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v9 = 2;
    SessionVm = (char *)MiGetSessionVm();
    v79 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v84 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140C4F140;
      SessionVm = (char *)&unk_140C4F140;
    }
  }
  v78 = 0;
  if ( a1 && v9 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v78 = (dword_140CFB174 & 1) != 0;
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  v93 = 20LL;
  v12 = 0LL;
  v90 = v9;
  v91 = 0;
  v94 = 0LL;
  v95 = 0LL;
  v77 = 0LL;
  v16 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v13, v14, v15);
  v74 = v16;
  do
  {
    v17 = 0xFFFFFA8000000000uLL;
    v18 = 0x1000000000LL;
    v19 = 0xFFFFF6FB7DBED7F8uLL;
    v20 = 0xFFFFFFFFFLL;
    if ( v12 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_16;
      MiFlushTbList(&v90);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
    }
    v12 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v77 = v12;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v12, 0LL);
    v19 = 0xFFFFF6FB7DBED7F8uLL;
    v20 = 0xFFFFFFFFFLL;
    v18 = 0x1000000000LL;
    v17 = 0xFFFFFA8000000000uLL;
LABEL_16:
    v21 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v21 & 1) != 0
      && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v23 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v24 = v21 | 0x20;
        if ( (v23 & 0x20) == 0 )
          v24 = v21;
        v21 = v24;
        if ( (v23 & 0x42) != 0 )
          v21 = v24 | 0x42;
      }
    }
    v83 = v21;
    v25 = (__int64)((v5 << 25) - v88) >> 16;
    if ( (v21 & 1) == 0 )
    {
      MiFlushTbList(&v90);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
      v26 = MmAccessFault(0LL, v25, 0, 0LL);
      if ( v26 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v25, v21, v26);
      v12 = 0LL;
      v77 = 0LL;
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v27, v28, v29);
      goto LABEL_132;
    }
    if ( (unsigned __int64)&v83 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v83 > v19 )
    {
      v32 = v21;
    }
    else
    {
      v32 = v21;
      if ( (unsigned int)MiPteHasShadow() && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v33 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v33 )
        {
          v32 = v21 | 0x20;
          v34 = *((_QWORD *)&v33->Flink + (((unsigned __int64)&v83 >> 3) & 0x1FF));
          if ( (v34 & 0x20) == 0 )
            v32 = v21;
          if ( (v34 & 0x42) != 0 )
            v32 |= 0x42uLL;
        }
      }
    }
    v35 = v20 & (v32 >> 12);
    v36 = v17 + 48 * v35;
    if ( (*(_QWORD *)(v36 + 40) & v18) == 0 && *(__int64 *)(v36 + 8) > 0 )
    {
      MiFlushTbList(&v90);
      v37 = MiCopyOnWrite(v25, (ULONG_PTR *)v5, -1LL, 0);
      if ( v37 >= 0 )
      {
        v16 = v74;
      }
      else
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
        v16 = v74;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v37);
        v12 = 0LL;
        v77 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v38, v39, v40);
      }
LABEL_131:
      v8 = v73;
LABEL_132:
      v63 = DriverPage;
      continue;
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v17 + 48 * v35) && (!v84 || v78) )
    {
      v44 = a4;
      if ( (a4 & 1) != 0 )
      {
        MiFlushTbList(&v90);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
        v16 = v74;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
        v45 = 0;
LABEL_50:
        MiMakeDriverPagesPrivate(v86, v5, v85, v45);
        v12 = 0LL;
        v77 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v46, v47, v48);
        goto LABEL_131;
      }
    }
    else
    {
      v44 = a4;
    }
    if ( (v21 & 0x800) == 0 && (v21 & 0x200) != 0 )
    {
      MiFlushTbList(&v90);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
      v16 = v74;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
      v45 = 1;
      goto LABEL_50;
    }
    v49 = 0LL;
    v50 = *(_QWORD *)(qword_140C4E648 + 8 * ((v41 >> 39) & 0x3FF));
    v87 = v50;
    v31 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = *(_QWORD *)v31;
    if ( v31 >= 0xFFFFF6FB7DBED000uLL
      && v31 <= v43
      && (unsigned int)MiPteHasShadow()
      && (v51 & 1) != 0
      && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v52 = *(_QWORD *)(Process + 1928);
      if ( v52 )
      {
        v53 = *(_QWORD *)(v52 + 8 * ((v31 >> 3) & 0x1FF));
        v31 = v51 | 0x20;
        Process = (unsigned __int8)v53;
        LOBYTE(Process) = v53 & 0x20;
        if ( (v53 & 0x20) == 0 )
          v31 = v51;
        v51 = v31;
        if ( (v53 & 0x42) != 0 )
          v51 = v31 | 0x42;
      }
    }
    v54 = (v51 >> 60) & 7;
    v55 = HIBYTE(v51);
    LOBYTE(v55) = v55 & 0xF;
    WsleContents = v55 | (16 * v54);
    if ( DriverPage != -1 )
    {
      Process = 48 * DriverPage - 0x58000000000LL;
      v55 = (*(_QWORD *)(Process + 40) >> 39) & 0x3FFLL;
      if ( v50 == *(_QWORD *)(qword_140C4E648 + 8 * v55) )
        goto LABEL_71;
      MiReleaseFreshPage(Process, v55, v31);
      v44 = a4;
      DriverPage = -1LL;
    }
    if ( (v44 & 2) != 0 )
    {
      if ( (WsleContents & 0xF) == 9 )
        goto LABEL_71;
    }
    else if ( *(_WORD *)(v36 + 32) != 1 )
    {
      goto LABEL_71;
    }
    Process = qword_140C4CCF0 & 0x1FF;
    if ( (v35 & 0x1FF) >= Process || MiIsPfnFromSlabAllocation(v36) )
    {
LABEL_71:
      v81 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v81, v55, v31, v50);
          while ( *(__int64 *)(v36 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
        v44 = a4;
      }
      if ( DriverPage != -1 && (v44 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(Process, v25);
        if ( (WsleContents & 0xF) != 9
          && !MiIsPfnFileOnly(v36)
          && !MiIsPfnFromSlabAllocation(v36)
          && (v35 & 0x1FF) < ((unsigned __int16)v57 & 0x1FFu) )
        {
          v58 = 48 * v57 - 0x58000000000LL;
          _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned int)MI_PFN_IS_PROTO(v36) && (*(_DWORD *)(v36 + 16) & 0x400LL) != 0 )
          {
            v61 = MiLockProtoPoolPage(v59, 0LL);
            if ( v61 )
              goto LABEL_90;
          }
          else
          {
            v61 = 1LL;
LABEL_90:
            if ( (unsigned int)MiTradeActivePage(v36, v58, v25, 0, 2u, v72) == 1 )
            {
              *(_QWORD *)(v36 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList(v36 + 16);
              MiReleaseFreshPage(v36, v67, v68);
              v36 = v58;
              DriverPage = -1LL;
            }
          }
          if ( v61 > 1 )
            MiUnlockProtoPoolPage(v61, 0x11u);
          v82 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v82, v60, v31, v62);
            while ( *(__int64 *)(v36 + 24) < 0 );
          }
          AnyMultiplexedVm = SessionVm;
        }
      }
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) != 9 )
          MiRemoveSystemImagePage((__int64)AnyMultiplexedVm, v5, v36);
        goto LABEL_107;
      }
      if ( v79 == 2 )
      {
        if ( (unsigned int)MiAddLockedPageCharge(v36, 0) )
          goto LABEL_107;
        v8 = 0;
        v73 = 0;
      }
      else
      {
        if ( (unsigned int)MiAreChargesNeededToLockPage(v36) )
          *(_BYTE *)(v36 + 35) |= 0x20u;
        ++*(_WORD *)(v36 + 32);
LABEL_107:
        v8 = v73;
      }
      if ( (*(_DWORD *)(v36 + 16) & 0x400LL) == 0 )
      {
        v69 = *(_BYTE *)(v36 + 34);
        if ( (v69 & 0x10) == 0 )
        {
          if ( (v69 & 8) == 0 )
          {
            v49 = MiCapturePageFileInfoInline((unsigned __int64 *)(v36 + 16), 1, 0);
            v69 = *(_BYTE *)(v36 + 34);
          }
          *(_BYTE *)(v36 + 34) = v69 | 0x10;
        }
      }
      v30 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        v31 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v31 )
        {
          v70 = *(_QWORD *)(v31 + 8 * ((v5 >> 3) & 0x1FF));
          v31 = v30 | 0x20;
          if ( (v70 & 0x20) == 0 )
            v31 = v30;
          v30 = v31;
          if ( (v70 & 0x42) != 0 )
            v30 = v31 | 0x42;
        }
      }
      if ( (v30 & 0x800) != 0 && (v30 & 0x42) == 0 )
      {
        MiWriteValidPteVolatile((volatile signed __int64 *)v5, 2, 0);
        MiInsertTbFlushEntry(&v90, v25, 1LL, 0LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v49 )
        MiReleasePageFileInfo(v87, v49, 1);
      v12 = v77;
      v5 += 8LL;
      v16 = v74;
      goto LABEL_132;
    }
    MiFlushTbList(&v90);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v77);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v74);
    v12 = 0LL;
    DriverPage = MiAllocateDriverPage(v87, 0LL, 0LL);
    v77 = 0LL;
    v63 = DriverPage;
    v8 = v73;
    v16 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v64, v65, v66);
    v74 = v16;
  }
  while ( v5 <= v85 && v8 == 1 );
  if ( v16 != 17 )
  {
    MiFlushTbList(&v90);
    if ( v12 )
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
  }
  if ( v63 != -1 )
    MiReleaseFreshPage(48 * v63 - 0x58000000000LL, v30, v31);
  if ( !v8 )
  {
    MiUnlockCodePage(v89, v5 - 16, 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
