/*
 * XREFs of MiLockCode @ 0x14032E300
 * Callers:
 *     MmResetDriverPaging @ 0x1406A7D00 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x1407064BC (MiLockImageSection.c)
 *     MiHandleDriverNonPagedSections @ 0x14075CAD0 (MiHandleDriverNonPagedSections.c)
 *     MiDisablePagingOfDriver @ 0x14075F060 (MiDisablePagingOfDriver.c)
 *     MmLockPreChargedPagedPool @ 0x140777900 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiRemoveSystemImagePage @ 0x14023FB28 (MiRemoveSystemImagePage.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140327920 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiUnlockCodePage @ 0x1403A11A0 (MiUnlockCodePage.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x1405E7A30 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
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
  unsigned __int64 v30; // rsi
  struct _LIST_ENTRY *v31; // rdx
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  ULONG_PTR v34; // rdi
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // r8
  _DWORD *v38; // r9
  unsigned __int64 v39; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v41; // r11
  char v42; // r10
  char v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  _DWORD *v46; // r9
  unsigned __int64 v47; // rbx
  __int64 v48; // r9
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  char v53; // r15
  __int64 v54; // rdx
  char WsleContents; // r15
  __int64 v56; // r9
  __int64 v57; // r14
  unsigned __int64 v58; // r8
  __int64 v59; // rdx
  unsigned __int64 v60; // rsi
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // r8
  _DWORD *v66; // r9
  char v67; // al
  ULONG_PTR v68; // rdx
  struct _LIST_ENTRY *v69; // r8
  __int64 v70; // rax
  __int16 v71; // r8
  int v73; // [rsp+28h] [rbp-D8h]
  char v74; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v75; // [rsp+31h] [rbp-CFh]
  __int64 DriverPage; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v78; // [rsp+40h] [rbp-C0h]
  bool v79; // [rsp+48h] [rbp-B8h]
  int v80; // [rsp+4Ch] [rbp-B4h]
  char *SessionVm; // [rsp+50h] [rbp-B0h]
  int v82; // [rsp+58h] [rbp-A8h] BYREF
  int v83; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v84; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v85; // [rsp+68h] [rbp-98h]
  unsigned __int64 v86; // [rsp+70h] [rbp-90h]
  __int64 v87; // [rsp+78h] [rbp-88h]
  __int64 v88; // [rsp+80h] [rbp-80h]
  __int64 v89; // [rsp+88h] [rbp-78h]
  unsigned __int64 v90; // [rsp+90h] [rbp-70h]
  int v91; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v92; // [rsp+A4h] [rbp-5Ch]
  __int16 v93; // [rsp+A6h] [rbp-5Ah]
  __int64 v94; // [rsp+A8h] [rbp-58h]
  __int64 v95; // [rsp+B0h] [rbp-50h]
  __int64 v96; // [rsp+B8h] [rbp-48h]
  __int128 v97; // [rsp+C0h] [rbp-40h]
  __int128 v98; // [rsp+D0h] [rbp-30h]
  __int128 v99; // [rsp+E0h] [rbp-20h]
  __int128 v100; // [rsp+F0h] [rbp-10h]
  __int128 v101; // [rsp+100h] [rbp+0h]
  __int128 v102; // [rsp+110h] [rbp+10h]
  __int128 v103; // [rsp+120h] [rbp+20h]
  __int128 v104; // [rsp+130h] [rbp+30h]
  __int128 v105; // [rsp+140h] [rbp+40h]
  __int64 v106; // [rsp+150h] [rbp+50h]

  v86 = a3;
  v93 = 0;
  v106 = 0LL;
  v5 = a2;
  v90 = a2;
  v87 = a1;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v89 = 0LL;
  v7 = (__int64)(a2 << 25) >> 16;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    return 0LL;
  v8 = 1;
  v9 = 0;
  v74 = 1;
  v80 = 0;
  SystemRegionType = MiGetSystemRegionType(v7);
  if ( SystemRegionType == 1 )
  {
    v85 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
    v9 = 2;
    SessionVm = (char *)MiGetSessionVm();
    v80 = 2;
    AnyMultiplexedVm = SessionVm;
  }
  else
  {
    v85 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140C4F180;
      SessionVm = (char *)&unk_140C4F180;
    }
  }
  v79 = 0;
  if ( a1 && v9 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    v79 = (dword_140CFB174 & 1) != 0;
  MiPrefetchDriverPages(v5, a3);
  DriverPage = -1LL;
  v94 = 20LL;
  v12 = 0LL;
  v91 = v9;
  v92 = 0;
  v95 = 0LL;
  v96 = 0LL;
  v78 = 0LL;
  v16 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v13, v14, v15);
  v75 = v16;
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
      MiFlushTbList(&v91);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
    }
    v12 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v78 = v12;
    MiLockPageTableInternal((__int64)AnyMultiplexedVm, v12, 0);
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
    v84 = v21;
    v25 = (__int64)((v5 << 25) - v89) >> 16;
    if ( (v21 & 1) == 0 )
    {
      MiFlushTbList(&v91);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
      v26 = MmAccessFault(0LL, v25, 0, 0LL);
      if ( v26 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, v25, v21, v26);
      v12 = 0LL;
      v78 = 0LL;
      MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v27, v28, v29);
      goto LABEL_132;
    }
    if ( (unsigned __int64)&v84 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)&v84 > v19 )
    {
      v30 = v21;
    }
    else
    {
      v30 = v21;
      if ( (unsigned int)MiPteHasShadow() && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
      {
        v31 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v31 )
        {
          v30 = v21 | 0x20;
          v32 = *((_QWORD *)&v31->Flink + (((unsigned __int64)&v84 >> 3) & 0x1FF));
          if ( (v32 & 0x20) == 0 )
            v30 = v21;
          if ( (v32 & 0x42) != 0 )
            v30 |= 0x42uLL;
        }
      }
    }
    v33 = v20 & (v30 >> 12);
    v34 = v17 + 48 * v33;
    if ( (*(_QWORD *)(v34 + 40) & v18) == 0 && *(__int64 *)(v34 + 8) > 0 )
    {
      MiFlushTbList(&v91);
      v35 = MiCopyOnWrite(v25, (ULONG_PTR *)v5, -1LL, 0);
      if ( v35 >= 0 )
      {
        v16 = v75;
      }
      else
      {
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
        v16 = v75;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v75);
        MiCopyOnWriteCheckConditions(AnyMultiplexedVm, (unsigned int)v35);
        v12 = 0LL;
        v78 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v36, v37, v38);
      }
LABEL_131:
      v8 = v74;
LABEL_132:
      v63 = DriverPage;
      continue;
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v17 + 48 * v33) && (!v85 || v79) )
    {
      v42 = a4;
      if ( (a4 & 1) != 0 )
      {
        MiFlushTbList(&v91);
        MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
        v16 = v75;
        MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v75);
        v43 = 0;
LABEL_50:
        MiMakeDriverPagesPrivate(v87, v5, v86, v43);
        v12 = 0LL;
        v78 = 0LL;
        MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v44, v45, v46);
        goto LABEL_131;
      }
    }
    else
    {
      v42 = a4;
    }
    if ( (v21 & 0x800) == 0 && (v21 & 0x200) != 0 )
    {
      MiFlushTbList(&v91);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
      v16 = v75;
      MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v75);
      v43 = 1;
      goto LABEL_50;
    }
    v47 = 0LL;
    v48 = *(_QWORD *)(qword_140C4E688 + 8 * ((v39 >> 39) & 0x3FF));
    v88 = v48;
    v49 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v50 = *(_QWORD *)v49;
    if ( v49 >= 0xFFFFF6FB7DBED000uLL
      && v49 <= v41
      && (unsigned int)MiPteHasShadow()
      && (v50 & 1) != 0
      && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v51 = *(_QWORD *)(Process + 1928);
      if ( v51 )
      {
        v52 = *(_QWORD *)(v51 + 8 * ((v49 >> 3) & 0x1FF));
        v49 = v50 | 0x20;
        Process = (unsigned __int8)v52;
        LOBYTE(Process) = v52 & 0x20;
        if ( (v52 & 0x20) == 0 )
          v49 = v50;
        v50 = v49;
        if ( (v52 & 0x42) != 0 )
          v50 = v49 | 0x42;
      }
    }
    v53 = (v50 >> 60) & 7;
    v54 = HIBYTE(v50);
    LOBYTE(v54) = v54 & 0xF;
    WsleContents = v54 | (16 * v53);
    if ( DriverPage != -1 )
    {
      Process = 48 * DriverPage - 0x58000000000LL;
      v54 = (*(_QWORD *)(Process + 40) >> 39) & 0x3FFLL;
      if ( v48 == *(_QWORD *)(qword_140C4E688 + 8 * v54) )
        goto LABEL_71;
      MiReleaseFreshPage(Process);
      v42 = a4;
      DriverPage = -1LL;
    }
    if ( (v42 & 2) != 0 )
    {
      if ( (WsleContents & 0xF) == 9 )
        goto LABEL_71;
    }
    else if ( *(_WORD *)(v34 + 32) != 1 )
    {
      goto LABEL_71;
    }
    Process = qword_140C4CD30 & 0x1FF;
    if ( (v33 & 0x1FF) >= Process || MiIsPfnFromSlabAllocation(v34) )
    {
LABEL_71:
      v82 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v82, v54, v49, v48);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) );
        v42 = a4;
      }
      if ( DriverPage != -1 && (v42 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(Process, v25);
        if ( (WsleContents & 0xF) != 9
          && !MiIsPfnFileOnly(v34)
          && !MiIsPfnFromSlabAllocation(v34)
          && (v33 & 0x1FF) < ((unsigned __int16)v56 & 0x1FFu) )
        {
          v57 = 48 * v56 - 0x58000000000LL;
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (unsigned int)MI_PFN_IS_PROTO(v34) && (*(_DWORD *)(v34 + 16) & 0x400LL) != 0 )
          {
            v60 = MiLockProtoPoolPage(v58, 0LL);
            if ( v60 )
              goto LABEL_90;
          }
          else
          {
            v60 = 1LL;
LABEL_90:
            if ( (unsigned int)MiTradeActivePage(v34, v57, v25, 0, 2u, v73) == 1 )
            {
              *(_QWORD *)(v34 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList(v34 + 16, v59);
              MiReleaseFreshPage(v34);
              v34 = v57;
              DriverPage = -1LL;
            }
          }
          if ( v60 > 1 )
            MiUnlockProtoPoolPage(v60, 0x11u);
          v83 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v83, v59, v61, v62);
            while ( *(__int64 *)(v34 + 24) < 0 );
          }
          AnyMultiplexedVm = SessionVm;
        }
      }
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) != 9 )
          MiRemoveSystemImagePage((__int64)AnyMultiplexedVm, v5, v34);
        goto LABEL_107;
      }
      if ( v80 == 2 )
      {
        if ( (unsigned int)MiAddLockedPageCharge(v34, 0) )
          goto LABEL_107;
        v8 = 0;
        v74 = 0;
      }
      else
      {
        if ( (unsigned int)MiAreChargesNeededToLockPage(v34) )
          *(_BYTE *)(v34 + 35) |= 0x20u;
        ++*(_WORD *)(v34 + 32);
LABEL_107:
        v8 = v74;
      }
      if ( (*(_DWORD *)(v34 + 16) & 0x400LL) == 0 )
      {
        v67 = *(_BYTE *)(v34 + 34);
        if ( (v67 & 0x10) == 0 )
        {
          if ( (v67 & 8) == 0 )
          {
            v47 = MiCapturePageFileInfoInline((unsigned __int64 *)(v34 + 16), 1, 0);
            v67 = *(_BYTE *)(v34 + 34);
          }
          *(_BYTE *)(v34 + 34) = v67 | 0x10;
        }
      }
      v68 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL
        && v5 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v68 & 1) != 0
        && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
      {
        v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v69 )
        {
          v70 = *((_QWORD *)&v69->Flink + ((v5 >> 3) & 0x1FF));
          v71 = v68 | 0x20;
          if ( (v70 & 0x20) == 0 )
            v71 = v68;
          LOWORD(v68) = v71;
          if ( (v70 & 0x42) != 0 )
            LOWORD(v68) = v71 | 0x42;
        }
      }
      if ( (v68 & 0x800) != 0 && (v68 & 0x42) == 0 )
      {
        MiWriteValidPteVolatile((volatile signed __int64 *)v5, 2, 0);
        MiInsertTbFlushEntry(&v91, v25, 1LL, 0LL);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v47 )
        MiReleasePageFileInfo(v88, v47, 1);
      v12 = v78;
      v5 += 8LL;
      v16 = v75;
      goto LABEL_132;
    }
    MiFlushTbList(&v91);
    MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v78);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v75);
    v12 = 0LL;
    DriverPage = MiAllocateDriverPage(v88, 0LL, 0LL);
    v78 = 0LL;
    v63 = DriverPage;
    v8 = v74;
    v16 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm, v64, v65, v66);
    v75 = v16;
  }
  while ( v5 <= v86 && v8 == 1 );
  if ( v16 != 17 )
  {
    MiFlushTbList(&v91);
    if ( v12 )
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v12);
    MiUnlockWorkingSetShared((__int64)AnyMultiplexedVm, v16);
  }
  if ( v63 != -1 )
    MiReleaseFreshPage(48 * v63 - 0x58000000000LL);
  if ( !v8 )
  {
    MiUnlockCodePage(v90, v5 - 16, 0LL);
    return 3221225626LL;
  }
  return 0LL;
}
