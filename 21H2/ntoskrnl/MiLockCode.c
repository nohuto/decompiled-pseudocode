/*
 * XREFs of MiLockCode @ 0x140312BB0
 * Callers:
 *     MmLockRegistryRecoverySections @ 0x140582708 (MmLockRegistryRecoverySections.c)
 *     MiDisablePagingOfDriver @ 0x140760730 (MiDisablePagingOfDriver.c)
 *     MiHandleDriverNonPagedSections @ 0x1407608BC (MiHandleDriverNonPagedSections.c)
 *     MmResetDriverPaging @ 0x140760ED0 (MmResetDriverPaging.c)
 *     MiLockImageSection @ 0x1407EDA2C (MiLockImageSection.c)
 *     MmLockPreChargedPagedPool @ 0x140808190 (MmLockPreChargedPagedPool.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiRemoveSystemImagePage @ 0x140247A74 (MiRemoveSystemImagePage.c)
 *     MiBetterDriverPageNeeded @ 0x140247FBC (MiBetterDriverPageNeeded.c)
 *     MiUnlockCodePage @ 0x140256158 (MiUnlockCodePage.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MmIsExecutivePagingDisabled @ 0x140313790 (MmIsExecutivePagingDisabled.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     MiDriverPageRangeCompare @ 0x1403CB264 (MiDriverPageRangeCompare.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 *     MiPrefetchDriverPages @ 0x1406F4650 (MiPrefetchDriverPages.c)
 *     MiAllocateDriverPage @ 0x14079D08C (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiLockCode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v5; // r13
  char v7; // di
  int v8; // r15d
  int SystemRegionType; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  char *AnyMultiplexedVm; // rbx
  __int64 v14; // r9
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  ULONG_PTR v17; // rbx
  ULONG_PTR v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r12
  __int64 v22; // r8
  __m128i *v23; // rdi
  bool v24; // si
  _KPROCESS *Process; // rdx
  __int64 v26; // r8
  __int64 SchedulerAssist; // r9
  unsigned __int64 v28; // rbx
  __int64 v29; // r8
  unsigned __int64 v30; // rsi
  __int64 CurrentThread; // rcx
  unsigned __int64 v32; // rax
  unsigned __int8 WsleContents; // r15
  unsigned __int64 v34; // rax
  bool v35; // zf
  char v36; // dl
  __int64 v37; // r12
  __int64 v38; // rax
  __int16 v39; // cx
  __int64 v40; // rax
  __int64 v41; // r15
  unsigned __int8 v42; // r8
  ULONG_PTR v43; // rax
  unsigned __int64 v45; // r8
  __int64 v46; // r9
  int v47; // eax
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  unsigned __int64 v50; // rsi
  __int64 v51; // r9
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // r14
  int v56; // r15d
  int v57; // eax
  unsigned __int64 v58; // rax
  int IsExecutivePagingDisabled; // eax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v61; // rax
  int v62; // eax
  unsigned int v63; // ebx
  struct _LIST_ENTRY *v64; // r8
  struct _KPRCB *v65; // r10
  int v66; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v69; // eax
  __int64 v70; // rax
  struct _LIST_ENTRY *v71; // r8
  __int64 v72; // rcx
  char v73; // [rsp+30h] [rbp-188h]
  unsigned __int8 v74; // [rsp+31h] [rbp-187h]
  char *SessionVm; // [rsp+38h] [rbp-180h]
  ULONG_PTR *v77; // [rsp+40h] [rbp-178h]
  unsigned __int64 DriverPage; // [rsp+48h] [rbp-170h]
  unsigned __int64 v79; // [rsp+50h] [rbp-168h]
  int v80; // [rsp+58h] [rbp-160h]
  char v81; // [rsp+68h] [rbp-150h]
  int v82; // [rsp+6Ch] [rbp-14Ch]
  int v83; // [rsp+70h] [rbp-148h] BYREF
  int v84; // [rsp+74h] [rbp-144h] BYREF
  unsigned __int64 v85; // [rsp+78h] [rbp-140h]
  unsigned __int64 v86; // [rsp+80h] [rbp-138h]
  ULONG_PTR v87; // [rsp+88h] [rbp-130h]
  unsigned __int64 v88; // [rsp+90h] [rbp-128h]
  __int64 v89; // [rsp+98h] [rbp-120h]
  unsigned __int64 v90; // [rsp+A0h] [rbp-118h] BYREF
  ULONG_PTR v91; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v92; // [rsp+B0h] [rbp-108h]
  unsigned __int64 v93; // [rsp+B8h] [rbp-100h]
  int v94; // [rsp+C0h] [rbp-F8h] BYREF
  __int16 v95; // [rsp+C4h] [rbp-F4h]
  __int16 v96; // [rsp+C6h] [rbp-F2h]
  __int64 v97; // [rsp+C8h] [rbp-F0h]
  __int64 v98; // [rsp+D0h] [rbp-E8h]
  __int64 v99; // [rsp+D8h] [rbp-E0h]
  _BYTE v100[152]; // [rsp+E0h] [rbp-D8h] BYREF

  v88 = a3;
  v5 = a2;
  v93 = a2;
  v89 = a1;
  v96 = 0;
  memset(v100, 0, sizeof(v100));
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS((__int64)(v5 << 25) >> 16) )
    return 0LL;
  v7 = 1;
  v8 = 0;
  v73 = 1;
  v82 = 0;
  SystemRegionType = MiGetSystemRegionType((__int64)(v5 << 25) >> 16);
  if ( SystemRegionType == 1 )
  {
    v85 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    v8 = 2;
    SessionVm = (char *)MiGetSessionVm();
    v82 = 2;
    AnyMultiplexedVm = SessionVm;
    v12 = 0LL;
  }
  else
  {
    v12 = 0LL;
    v85 = 0LL;
    if ( SystemRegionType == 6 )
    {
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
      SessionVm = AnyMultiplexedVm;
    }
    else
    {
      AnyMultiplexedVm = (char *)&unk_140C536C0;
      SessionVm = (char *)&unk_140C536C0;
    }
  }
  LOBYTE(v11) = 0;
  v80 = v12;
  v81 = 0;
  v14 = 1LL;
  if ( a1 )
  {
    if ( v8 == 2 && (*(_DWORD *)(a1 + 104) & 0x8000000) == 0 )
    {
      IsExecutivePagingDisabled = MmIsExecutivePagingDisabled(v10, v12, v11, 1LL);
      v11 = (unsigned __int8)v11;
      if ( IsExecutivePagingDisabled == (_DWORD)v14 )
        v11 = (unsigned int)v14;
      v81 = v11;
    }
    if ( (*(_DWORD *)(a1 + 196) & 0x100) == 0 )
      v80 = 2;
  }
  MiPrefetchDriverPages(v5, a3, v11, v14);
  v97 = 20LL;
  v15 = -1LL;
  v95 = 0;
  v98 = 0LL;
  v99 = 0LL;
  v16 = 0LL;
  v79 = 0LL;
  DriverPage = -1LL;
  v94 = v8;
  v74 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
  while ( 1 )
  {
    if ( v16 )
    {
      if ( (v5 & 0xFFF) != 0 )
        goto LABEL_13;
      MiFlushTbList(&v94);
      MiUnlockPageTableInternal((__int64)AnyMultiplexedVm, v16);
    }
    v16 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v79 = v16;
    MiLockPageTableInternal(AnyMultiplexedVm, v16, 0LL);
LABEL_13:
    v17 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v61 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        if ( (v61 & 0x20) != 0 )
          v17 |= 0x20uLL;
        if ( (v61 & 0x42) != 0 )
          v17 |= 0x42uLL;
      }
    }
    v91 = v17;
    v18 = (__int64)(v5 << 25) >> 16;
    v87 = v18;
    if ( (v17 & 1) != 0 )
    {
      v21 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v91) >> 12) & 0xFFFFFFFFFFLL;
      v86 = v21;
      v22 = *(_QWORD *)(48 * v21 - 0x220000000000LL + 40);
      v23 = (__m128i *)(48 * v21 - 0x220000000000LL);
      if ( (v22 & 0x10000000000LL) == 0 && v23->m128i_i64[1] > 0 )
      {
        MiFlushTbList(&v94);
        v62 = MiCopyOnWrite(v18);
        v41 = (__int64)SessionVm;
        v63 = v62;
        if ( v62 >= 0 )
          goto LABEL_155;
        MiUnlockPageTableInternal((__int64)SessionVm, v16);
        MiUnlockWorkingSetShared((__int64)SessionVm, v74);
        MiCopyOnWriteCheckConditions(SessionVm, v63);
LABEL_154:
        v16 = 0LL;
        v79 = 0LL;
        MiLockWorkingSetShared(v41);
LABEL_155:
        v15 = DriverPage;
LABEL_62:
        v7 = v73;
        goto LABEL_63;
      }
      v24 = 0;
      if ( (unsigned int)MmIsExecutivePagingDisabled(v20, v19, v22, 0xFFFFDE0000000000uLL) && (a4 & 4) != 0 )
        v24 = (((unsigned __int8)v23[1].m128i_i8[0] >> 5) & 2) == 0;
      if ( v26 < 0 && (!v85 || v81 || v24) && (a4 & 1) != 0 )
      {
        MiFlushTbList(&v94);
        v41 = (__int64)SessionVm;
        MiUnlockPageTableInternal((__int64)SessionVm, v79);
        MiUnlockWorkingSetShared((__int64)SessionVm, v74);
        v45 = v88;
        if ( v24 )
          v45 = v5;
        v46 = 0LL;
        goto LABEL_153;
      }
      if ( (v17 & 0x800) == 0 && (v17 & 0x200) != 0 )
      {
        MiFlushTbList(&v94);
        v41 = (__int64)SessionVm;
        MiUnlockPageTableInternal((__int64)SessionVm, v79);
        MiUnlockWorkingSetShared((__int64)SessionVm, v74);
        v45 = v88;
        v46 = 1LL;
LABEL_153:
        MiMakeDriverPagesPrivate(v89, v5, v45, v46);
        goto LABEL_154;
      }
      v28 = 0LL;
      v29 = *(_QWORD *)(qword_140C51F48 + 8 * (((unsigned __int64)v26 >> 43) & 0x3FF));
      v77 = (ULONG_PTR *)v29;
      v30 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      CurrentThread = 0xFFFFF6FB7DBED000uLL;
      v32 = *(_QWORD *)v30;
      if ( v30 >= 0xFFFFF6FB7DBED000uLL )
      {
        CurrentThread = 0xFFFFF6FB7DBED7F8uLL;
        if ( v30 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
        {
          CurrentThread = (__int64)KeGetCurrentThread();
          Process = *(_KPROCESS **)(CurrentThread + 184);
          if ( Process->AddressPolicy != 1 && (v32 & 1) != 0 && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
          {
            CurrentThread = (__int64)KeGetCurrentThread();
            Process = *(_KPROCESS **)(CurrentThread + 184);
            v64 = Process[1].ProcessListEntry.Flink;
            if ( v64 )
            {
              CurrentThread = *((_QWORD *)&v64->Flink + ((v30 >> 3) & 0x1FF));
              if ( (CurrentThread & 0x20) != 0 )
                v32 |= 0x20uLL;
              if ( (CurrentThread & 0x42) != 0 )
                v32 |= 0x42uLL;
            }
            v29 = (__int64)v77;
          }
        }
      }
      WsleContents = HIBYTE(v32) & 0xF | (16 * ((v32 >> 60) & 7));
      v92 = WsleContents;
      if ( DriverPage != -1LL )
      {
        CurrentThread = SchedulerAssist + 48 * DriverPage;
        Process = *(_KPROCESS **)(qword_140C51F48 + 8 * ((*(_QWORD *)(CurrentThread + 40) >> 43) & 0x3FFLL));
        if ( (_KPROCESS *)v29 == Process )
          goto LABEL_42;
        MiReleaseFreshPage(CurrentThread);
        v29 = (__int64)v77;
        DriverPage = -1LL;
      }
      if ( (a4 & 2) != 0 )
      {
        if ( (WsleContents & 0xF) == 9 )
          goto LABEL_42;
      }
      else if ( v23[2].m128i_i16[0] != 1 )
      {
        goto LABEL_42;
      }
      if ( (!byte_140C58C66
         || !_bittest64(
               (const signed __int64 *)qword_140C58DE0,
               (0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v21) >> 4)) >> 9))
        && !_bittest64(&v23[2].m128i_i64[1], 0x35u) )
      {
        CurrentThread = 0x3FFFFFFFFFFFFFFFLL;
        if ( (v23[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v23[2].m128i_i16[0] == 1 )
        {
          if ( (MiFlags & 0x4000) != 0 )
          {
            if ( (unsigned int)MiGetPagePrivilege(48 * v21 - 0x220000000000LL) )
              goto LABEL_42;
            v29 = (__int64)v77;
          }
          if ( (MiFlags & 0x20000) != 0 )
          {
            if ( (unsigned int)MiGetPagePrivilege(48 * v21 - 0x220000000000LL) )
              goto LABEL_42;
            v29 = (__int64)v77;
          }
          v34 = *(_QWORD *)v30;
          CurrentThread = 0xFFFFF6FB7DBED000uLL;
          if ( v30 >= 0xFFFFF6FB7DBED000uLL
            && (CurrentThread = 0xFFFFF6FB7DBED7F8uLL, v30 <= 0xFFFFF6FB7DBED7F8uLL)
            && (MiFlags & 0xC00000) != 0
            && (CurrentThread = (__int64)KeGetCurrentThread(),
                Process = *(_KPROCESS **)(CurrentThread + 184),
                Process->AddressPolicy != 1)
            && (v34 & 1) != 0 )
          {
            if ( (v34 & 0x20) == 0 || (v35 = (v34 & 0x42) == 0, (v34 & 0x42) == 0) )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              CurrentThread = (__int64)Process[1].ProcessListEntry.Flink;
              if ( CurrentThread )
              {
                CurrentThread = *(_QWORD *)(CurrentThread + 8 * ((v30 >> 3) & 0x1FF));
                if ( (CurrentThread & 0x20) != 0 )
                  LOBYTE(v34) = v34 | 0x20;
                if ( (CurrentThread & 0x42) != 0 )
                  LOBYTE(v34) = v34 | 0x42;
              }
              goto LABEL_38;
            }
          }
          else
          {
LABEL_38:
            v35 = (v34 & 0x42) == 0;
          }
          LOBYTE(CurrentThread) = !v35;
          if ( !v35 && (v80 & 2) == 0 )
            goto LABEL_42;
          v90 = v21;
          if ( dword_140C4F514 && (ULONG_PTR *)v29 == &MiSystemPartition )
          {
            v52 = qword_140C4F518;
            if ( (qword_140C4F520 & 1) != 0 )
            {
              if ( !qword_140C4F518 )
                goto LABEL_117;
              v52 = (unsigned __int64)&qword_140C4F518 ^ qword_140C4F518;
            }
            if ( !v52 )
              goto LABEL_117;
            v53 = ExAcquireSpinLockShared(&dword_140C4F510);
            if ( dword_140C4F514 )
            {
              v54 = qword_140C4F538;
              if ( qword_140C4F538 )
              {
                if ( !(unsigned int)MiDriverPageRangeCompare(&v90, qword_140C4F538) )
                  goto LABEL_115;
                v54 = 0LL;
              }
              v55 = v86 & 0xFFFFFFFFFFFFFE00uLL;
              if ( qword_140C4F540 == (v86 & 0xFFFFFFFFFFFFFE00uLL) )
                goto LABEL_115;
              v54 = qword_140C4F518;
              if ( (qword_140C4F520 & 1) != 0 )
              {
                if ( !qword_140C4F518 )
                {
                  qword_140C4F540 = v86 & 0xFFFFFFFFFFFFFE00uLL;
                  goto LABEL_115;
                }
                v54 = (unsigned __int64)&qword_140C4F518 ^ qword_140C4F518;
              }
              v56 = qword_140C4F520 & 1;
              if ( !v54 )
                goto LABEL_130;
              while ( 2 )
              {
                v57 = MiDriverPageRangeCompare(&v90, v54);
                if ( v57 >= 0 )
                {
                  if ( v57 <= 0 )
                  {
LABEL_129:
                    if ( v54 )
                      qword_140C4F538 = v54;
                    else
LABEL_130:
                      qword_140C4F540 = v55;
LABEL_115:
                    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F510);
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        CurrentIrql = KeGetCurrentIrql();
                        if ( CurrentIrql <= 0xFu && (unsigned __int8)v53 <= 0xFu && CurrentIrql >= 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          CurrentThread = (unsigned int)(v53 + 1);
                          Process = (_KPROCESS *)(-1LL << ((unsigned __int8)v53 + 1));
                          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
                          v69 = ~(unsigned __int16)Process;
                          v35 = (v69 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                          v29 = (unsigned int)v69 & *(_DWORD *)(SchedulerAssist + 20);
                          *(_DWORD *)(SchedulerAssist + 20) = v29;
                          if ( v35 )
                            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                      }
                    }
                    __writecr8(v53);
                    if ( !v54 )
                    {
LABEL_117:
                      MiFlushTbList(&v94);
                      MiUnlockPageTableInternal((__int64)SessionVm, v79);
                      MiUnlockWorkingSetShared((__int64)SessionVm, v74);
                      v16 = 0LL;
                      DriverPage = MiAllocateDriverPage(v77, 0LL, 0LL);
                      v79 = 0LL;
                      v15 = DriverPage;
                      v74 = MiLockWorkingSetShared((__int64)SessionVm);
                      v41 = (__int64)SessionVm;
                      goto LABEL_62;
                    }
                    WsleContents = v92;
                    v21 = v86;
                    goto LABEL_42;
                  }
                  v58 = *(_QWORD *)(v54 + 8);
                  if ( !v56 || !v58 )
                    goto LABEL_127;
LABEL_136:
                  v54 ^= v58;
                }
                else
                {
                  v58 = *(_QWORD *)v54;
                  if ( v56 && v58 )
                    goto LABEL_136;
LABEL_127:
                  v54 = v58;
                }
                if ( !v54 )
                  goto LABEL_129;
                continue;
              }
            }
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F510);
            CurrentThread = (unsigned int)KiIrqlFlags;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentThread = KeGetCurrentIrql();
                if ( (unsigned __int8)CurrentThread <= 0xFu
                  && (unsigned __int8)v53 <= 0xFu
                  && (unsigned __int8)CurrentThread >= 2u )
                {
                  v65 = KeGetCurrentPrcb();
                  CurrentThread = (unsigned int)(v53 + 1);
                  Process = (_KPROCESS *)(-1LL << ((unsigned __int8)v53 + 1));
                  SchedulerAssist = (__int64)v65->SchedulerAssist;
                  v66 = ~(unsigned __int16)Process;
                  v35 = (v66 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                  v29 = (unsigned int)v66 & *(_DWORD *)(SchedulerAssist + 20);
                  *(_DWORD *)(SchedulerAssist + 20) = v29;
                  if ( v35 )
                    KiRemoveSystemWorkPriorityKick(v65);
                }
              }
            }
            __writecr8(v53);
            v21 = v86;
          }
          if ( v21 < qword_140C4F5D0 )
            goto LABEL_117;
        }
      }
LABEL_42:
      v83 = 0;
      while ( _interlockedbittestandset64(&v23[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v83, (__int64)Process, v29, SchedulerAssist);
        while ( v23[1].m128i_i64[1] < 0 );
      }
      v15 = DriverPage;
      v36 = a4;
      if ( DriverPage == -1LL )
        goto LABEL_44;
      if ( (a4 & 2) != 0 )
      {
        WsleContents = MiGetWsleContents(CurrentThread, v87);
        if ( (WsleContents & 0xF) == 9 )
        {
          v37 = (__int64)v77;
          goto LABEL_86;
        }
        v36 = a4;
      }
      else if ( v23[2].m128i_i16[0] != 1 )
      {
        v37 = (__int64)v77;
LABEL_46:
        if ( v82 == 2 )
        {
          v41 = (__int64)SessionVm;
          if ( !(unsigned int)MiAddLockedPageCharge((__int64)v23, 0LL, v29) )
            v73 = 0;
          goto LABEL_54;
        }
        v38 = v23[2].m128i_i64[1];
        if ( (v38 & 0x10000000000LL) == 0 && (v38 & 0x20000000000000LL) == 0 )
        {
          v39 = v23[2].m128i_i16[0];
          v40 = v23[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL;
          if ( v39 )
          {
            if ( v39 == 1 )
            {
              if ( !v40 && (v23[2].m128i_i8[2] & 8) == 0 )
                goto LABEL_53;
            }
            else if ( v39 != 2 || !v40 || (v23[2].m128i_i8[2] & 8) == 0 )
            {
              goto LABEL_53;
            }
          }
          v23[2].m128i_i8[3] |= 0x20u;
        }
LABEL_53:
        ++v23[2].m128i_i16[0];
        v41 = (__int64)SessionVm;
LABEL_54:
        if ( (v23[1].m128i_i64[0] & 0x400) == 0 )
        {
          v42 = v23[2].m128i_u8[2];
          if ( (v42 & 0x10) == 0 )
          {
            if ( (((v23[1].m128i_i64[0] & 0x400) == 0) & (unsigned __int8)~(v42 >> 3)) != 0 )
            {
              v70 = MiCapturePageFileInfoInline((unsigned __int64 *)&v23[1], 1, 0);
              v42 = v23[2].m128i_u8[2];
              v28 = v70;
            }
            v23[2].m128i_i8[2] = v42 | 0x10;
          }
        }
        v43 = *(_QWORD *)v5;
        if ( v5 >= 0xFFFFF6FB7DBED000uLL
          && v5 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v43 & 1) != 0
          && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
        {
          v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v71 )
          {
            v72 = *((_QWORD *)&v71->Flink + ((v5 >> 3) & 0x1FF));
            if ( (v72 & 0x20) != 0 )
              LOWORD(v43) = v43 | 0x20;
            if ( (v72 & 0x42) != 0 )
              LOWORD(v43) = v43 | 0x42;
          }
        }
        if ( (v43 & 0x800) != 0 && (v43 & 0x42) == 0 )
        {
          MiWriteValidPteVolatile(v5, 2LL);
          MiInsertTbFlushEntry((__int64)&v94, v87, 1LL, 0);
        }
        _InterlockedAnd64(&v23[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
        if ( v28 )
          MiReleasePageFileInfo(v37, v28, 1);
        v16 = v79;
        v5 += 8LL;
        goto LABEL_62;
      }
      if ( _bittest64(&v23[2].m128i_i64[1], 0x35u) || MiIsPfnFromSlabAllocation((__int64)v23) )
      {
LABEL_44:
        v37 = (__int64)v77;
        goto LABEL_45;
      }
      v48 = v21;
      v37 = (__int64)v77;
      if ( !(unsigned int)MiBetterDriverPageNeeded(v77, v48, DriverPage) )
      {
LABEL_106:
        v36 = a4;
LABEL_45:
        if ( (v36 & 2) == 0 )
          goto LABEL_46;
LABEL_86:
        v35 = (WsleContents & 0xF) == 9;
        v41 = (__int64)SessionVm;
        if ( !v35 )
          MiRemoveSystemImagePage(SessionVm, v5, v23);
        goto LABEL_54;
      }
      _InterlockedAnd64(&v23[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
      if ( v23[2].m128i_i64[1] < 0 && (v23[1].m128i_i32[0] & 0x400LL) != 0 )
      {
        v50 = MiLockProtoPoolPage(v23->m128i_i64[1] | 0x8000000000000000uLL, 0LL);
        if ( !v50 )
          goto LABEL_214;
      }
      else
      {
        v50 = 1LL;
      }
      if ( (unsigned int)MiTradeActivePage(v23, (__m128i *)(48 * DriverPage - 0x220000000000LL), v87, 0, 2u, v80) == 1 )
      {
        v23[1].m128i_i64[0] = ZeroPte;
        MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v23[1]);
        MiReleaseFreshPage((__int64)v23);
        v23 = (__m128i *)(48 * DriverPage - 0x220000000000LL);
        v15 = -1LL;
        DriverPage = -1LL;
LABEL_103:
        if ( v50 > 1 )
        {
          LOBYTE(v49) = 17;
          MiUnlockProtoPoolPage(v50, v49);
        }
        v84 = 0;
        while ( _interlockedbittestandset64(&v23[1].m128i_i32[2], 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v84, v49, v29, v51);
          while ( v23[1].m128i_i64[1] < 0 );
        }
        goto LABEL_106;
      }
LABEL_214:
      v15 = DriverPage;
      goto LABEL_103;
    }
    MiFlushTbList(&v94);
    MiUnlockPageTableInternal((__int64)SessionVm, v16);
    MiUnlockWorkingSetShared((__int64)SessionVm, v74);
    v47 = MmAccessFault(0LL, (__int64)(v5 << 25) >> 16);
    if ( v47 < 0 )
      KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v5 << 25) >> 16, v17, v47);
    v41 = (__int64)SessionVm;
    v16 = 0LL;
    v79 = 0LL;
    MiLockWorkingSetShared((__int64)SessionVm);
LABEL_63:
    if ( v5 > v88 || v7 != 1 )
      break;
    AnyMultiplexedVm = SessionVm;
  }
  if ( v74 != 17 )
  {
    MiFlushTbList(&v94);
    if ( v16 )
      MiUnlockPageTableInternal(v41, v16);
    MiUnlockWorkingSetShared(v41, v74);
  }
  if ( v15 != -1 )
    MiReleaseFreshPage(48 * v15 - 0x220000000000LL);
  if ( v7 )
    return 0LL;
  MiUnlockCodePage(v93, v5 - 16, 0);
  return 3221225626LL;
}
