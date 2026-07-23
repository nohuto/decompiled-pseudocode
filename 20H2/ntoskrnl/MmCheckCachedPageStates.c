/*
 * XREFs of MmCheckCachedPageStates @ 0x1402A4CE0
 * Callers:
 *     CcMapDataForOverwrite @ 0x14024106C (CcMapDataForOverwrite.c)
 *     CcPinFileData @ 0x1402A2D80 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x1402A4180 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1402A4B30 (CcMapAndRead.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiReferenceControlAreaPfn @ 0x140232A28 (MiReferenceControlAreaPfn.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiMarkPteDirty @ 0x14024F530 (MiMarkPteDirty.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiInitializePfn @ 0x14028E040 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     MiWriteValidPteVolatile @ 0x14028F7D0 (MiWriteValidPteVolatile.c)
 *     MiIsAddressGlobal @ 0x1402A2260 (MiIsAddressGlobal.c)
 *     MiMakeSystemCacheRangeValid @ 0x1402A22E0 (MiMakeSystemCacheRangeValid.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402AAA20 (MiIsPfnCommitNotCharged.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiControlAreaUsingExtents @ 0x1402B5EA0 (MiControlAreaUsingExtents.c)
 *     MiPfnZeroingNeeded @ 0x1402C7380 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x1402CABD0 (MiLockOwnedProtoPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiUserPdeOrAbove @ 0x14030CD44 (MiUserPdeOrAbove.c)
 *     MiChargePartitionResidentAvailable @ 0x14031056C (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1403332D4 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiUnlinkStandbyBatch @ 0x14034CE80 (MiUnlinkStandbyBatch.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
 *     MiFreeTransitionPageHeatList @ 0x14055DB24 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055DFA0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055E32C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055E590 (MiReplenishTransitionPageHeatList.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  unsigned int v5; // r12d
  ULONG_PTR v6; // r14
  __int64 v7; // r13
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  struct _LIST_ENTRY *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  struct _LIST_ENTRY *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 *v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  unsigned __int64 v31; // r11
  unsigned __int64 Process; // rcx
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r8
  struct _LIST_ENTRY *v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  ULONG_PTR v40; // rbx
  __int64 v41; // r14
  __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  __int64 v44; // rbx
  struct _LIST_ENTRY *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rcx
  signed __int32 v50; // eax
  __int64 Page; // rax
  ULONG_PTR v52; // r15
  __int64 v53; // rsi
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  int v56; // eax
  char v57; // di
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 *v60; // r12
  __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  BOOL v63; // r14d
  struct _LIST_ENTRY *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned __int8 CurrentIrql; // r15
  _DWORD *SchedulerAssist; // r8
  unsigned __int64 v69; // rax
  struct _LIST_ENTRY *v70; // r8
  __int64 v71; // rcx
  unsigned __int8 v72; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v74; // r9
  int v75; // edx
  bool v76; // zf
  _DWORD *v77; // r9
  char v78; // bl
  int IsPfnCommitNotCharged; // eax
  char v80; // r10
  __int64 v81; // rcx
  ULONG_PTR *v82; // rdi
  signed __int32 v83; // eax
  signed __int32 v84; // ett
  volatile signed __int64 *v85; // r14
  char v86; // al
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  unsigned int v89; // ebx
  __int64 v90; // rax
  __int64 v91; // rbx
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  struct _LIST_ENTRY *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned __int64 v97; // r12
  __int64 v98; // rax
  unsigned __int64 v99; // rsi
  _SLIST_ENTRY *TransitionHeatBatch; // rbx
  __int64 v101; // rax
  unsigned __int64 v102; // rcx
  unsigned __int64 v103; // r15
  __int64 v104; // rbx
  __int64 PfnPriority; // r14
  int v106; // esi
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r9
  __int64 v111; // r14
  char v112; // al
  _QWORD *v113; // r14
  __int64 v114; // r8
  unsigned __int64 v115; // r10
  struct _LIST_ENTRY *v116; // rax
  char v117; // dl
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rdx
  unsigned __int64 v122; // rbx
  unsigned __int64 v123; // rbx
  unsigned __int64 v124; // rdx
  unsigned __int64 v125; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v127; // rax
  __int64 v128; // rbx
  ULONG_PTR v129; // rdx
  char v130; // di
  unsigned __int64 v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r9
  unsigned __int64 v135; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  int v137; // eax
  unsigned int v138; // ecx
  unsigned int v139; // edi
  __int64 v140; // rax
  int v141; // eax
  int v142; // ecx
  unsigned __int64 v143; // rax
  __int64 v144; // rdx
  unsigned __int64 v145; // r9
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rax
  unsigned __int8 v149; // bl
  _DWORD *v150; // r9
  unsigned __int8 v151; // al
  struct _KPRCB *v152; // r10
  _DWORD *v153; // r9
  int v154; // eax
  unsigned __int64 v155; // rax
  __int64 v156; // rcx
  __int16 v157; // bx
  __int16 v158; // bx
  unsigned __int64 v159; // rdx
  char v160; // al
  unsigned __int64 v161; // rdx
  unsigned __int64 v162; // r8
  unsigned __int64 v163; // r9
  unsigned __int64 v164; // r14
  int v165; // r12d
  __int64 v166; // rcx
  __int64 v167; // rdi
  struct _KPRCB *v168; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v170; // eax
  unsigned __int8 v171; // al
  unsigned __int8 v172; // bl
  struct _KPRCB *v173; // r9
  _DWORD *v174; // r8
  int v175; // eax
  unsigned __int8 v177; // [rsp+30h] [rbp-198h] BYREF
  char i; // [rsp+31h] [rbp-197h]
  unsigned int v179; // [rsp+34h] [rbp-194h]
  char v180; // [rsp+38h] [rbp-190h]
  int v181; // [rsp+3Ch] [rbp-18Ch]
  __int64 ValidPte; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v183; // [rsp+48h] [rbp-180h]
  int v184; // [rsp+50h] [rbp-178h]
  unsigned __int64 v185; // [rsp+58h] [rbp-170h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-168h]
  __int64 v187; // [rsp+68h] [rbp-160h] BYREF
  __int64 v188; // [rsp+70h] [rbp-158h]
  volatile signed __int64 *v189; // [rsp+78h] [rbp-150h]
  int v190; // [rsp+80h] [rbp-148h] BYREF
  int v191; // [rsp+84h] [rbp-144h] BYREF
  int v192; // [rsp+88h] [rbp-140h] BYREF
  int v193; // [rsp+8Ch] [rbp-13Ch] BYREF
  __int64 v194; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v195; // [rsp+98h] [rbp-130h]
  __int64 v196; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v197; // [rsp+A8h] [rbp-120h] BYREF
  unsigned __int64 v198; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v199; // [rsp+B8h] [rbp-110h]
  __int64 v200; // [rsp+C0h] [rbp-108h]
  __int64 v201; // [rsp+C8h] [rbp-100h]
  __int128 v202; // [rsp+D0h] [rbp-F8h] BYREF
  char *v203; // [rsp+E0h] [rbp-E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v205[16]; // [rsp+100h] [rbp-C8h] BYREF

  v203 = a4;
  v181 = a3;
  v194 = 0LL;
  ValidPte = 0LL;
  v187 = 0LL;
  v180 = 1;
  v202 = 0LL;
  v184 = 0;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v179 = 0;
  v7 = 0LL;
  v177 = 17;
  v196 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v183 = v8;
  v195 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = *(_QWORD *)v9;
  if ( v9 >= 0xFFFFF6FB7DBED000uLL
    && v9 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
      v13 = v10 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v10;
      v10 = v13;
      if ( (v12 & 0x42) != 0 )
        v10 = v13 | 0x42;
    }
  }
  v197 = v10;
  if ( MiPteInShadowRange((unsigned __int64)&v197)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v197 >> 3) & 0x1FF));
      v16 = v10 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v10;
      v10 = v16;
      if ( (v15 & 0x42) != 0 )
        v10 = v16 | 0x42;
    }
  }
  v17 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v188 = v17;
  v18 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v19 = *(_QWORD *)v18;
  if ( v18 >= 0xFFFFF6FB7DBED000uLL
    && v18 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v20 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v20 )
    {
      v21 = *((_QWORD *)&v20->Flink + ((v18 >> 3) & 0x1FF));
      v22 = v19 | 0x20;
      if ( (v21 & 0x20) == 0 )
        v22 = v19;
      v19 = v22;
      if ( (v21 & 0x42) != 0 )
        v19 = v22 | 0x42;
    }
  }
  v198 = v19;
  if ( MiPteInShadowRange((unsigned __int64)&v198)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v23 )
    {
      v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v198 >> 3) & 0x1FF));
      v25 = v19 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v19;
      v19 = v25;
      if ( (v24 & 0x42) != 0 )
        v19 = v25 | 0x42;
    }
  }
  v26 = 0xFFFFFFFFFLL;
  v27 = *(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v27 )
    v27 += 40 * ((a1 >> 18) & 7);
  v28 = *(__int64 **)(v27 + 24);
  v29 = (__int64 *)((unsigned __int64)v28 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( ((unsigned __int8)v28 & 1) == 0 )
    v29 = v28;
  v201 = *v29;
  v30 = 0LL;
  v200 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v201 + 60) & 0x3FF));
  while ( 1 )
  {
    v31 = 0xFFFFFA8000000028uLL;
    if ( v8 > v195 )
      break;
    Process = *(_QWORD *)v8;
    LODWORD(v33) = 0;
    v34 = *(_QWORD *)v8;
    v35 = 0xFFFFF6FB7DBED000uLL;
    v36 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v34 & 1) != 0
        && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        v37 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v37 )
        {
          LOBYTE(v34) = v34 | 0x20;
          v38 = *((_QWORD *)&v37->Flink + ((v8 >> 3) & 0x1FF));
          if ( (v38 & 0x20) == 0 )
            v34 = *(_QWORD *)v8;
          if ( (v38 & 0x42) != 0 )
            LOBYTE(v34) = v34 | 0x42;
        }
      }
      v36 = 0xFFFFF6FB7DBED7F8uLL;
      v35 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (v34 & 1) != 0 )
    {
      if ( (v181 & 4) == 0 )
        goto LABEL_371;
      if ( v177 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v177);
        v177 = 17;
      }
LABEL_70:
      MiMarkPteDirty(v8);
      goto LABEL_371;
    }
    if ( v8 >= 0xFFFFF6FB7DBED000uLL
      && v8 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (Process & 1) != 0
      && ((Process & 0x20) == 0 || (Process & 0x42) == 0) )
    {
      v36 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v36 )
      {
        v39 = *(_QWORD *)(v36 + 8 * ((v8 >> 3) & 0x1FF));
        v36 = Process | 0x20;
        if ( (v39 & 0x20) == 0 )
          v36 = *(_QWORD *)v8;
        Process = v36;
        if ( (v39 & 0x42) != 0 )
          Process = v36 | 0x42;
      }
    }
    ValidPte = Process;
    if ( (Process & 1) != 0 )
    {
      if ( (v181 & 4) == 0 )
        goto LABEL_371;
      if ( v177 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v177);
        v177 = 17;
      }
      goto LABEL_70;
    }
    v40 = v6;
    v33 = (Process >> 3) & 1;
    v41 = Process;
    v199 = v33;
    if ( qword_140C4DDC0 && (Process & 0x10) == 0 )
      v41 = Process & ~qword_140C4DDC0;
    v42 = v177;
    v43 = v40 & 0xFFFFFFFFFFFFF000uLL;
    v6 = v41 >> 16;
    BugCheckParameter1 = v6;
    if ( v177 != 17 )
    {
      if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == v43 )
        goto LABEL_219;
      MiUnlockProtoPoolPage(v7, v177);
      v177 = 17;
    }
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != v43 && v179 )
    {
      MiMakeSystemCacheRangeValid(v8 - 8LL * v179, (unsigned __int64)v205, v179, v17);
      v179 = 0;
    }
    v44 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v44 & 1) != 0
      && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
    {
      v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v45 )
      {
        v46 = *((_QWORD *)&v45->Flink + ((v6 >> 3) & 0x1FF));
        v47 = v44 | 0x20;
        if ( (v46 & 0x20) == 0 )
          v47 = *(_QWORD *)v6;
        v44 = v47;
        if ( (v46 & 0x42) != 0 )
          v44 = v47 | 0x42;
      }
    }
    v187 = v44;
    if ( (v44 & 1) == 0 && ((v44 & 0x400) != 0 || (v44 & 0x800) == 0) )
    {
      v7 = 0LL;
      goto LABEL_113;
    }
    v60 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( 2 )
    {
      v185 = *v60;
      v61 = v185 & 1;
      do
      {
        if ( !v61 )
          goto LABEL_177;
        v62 = v185;
        if ( (v185 & 0x200) != 0 )
          goto LABEL_177;
        v63 = MiPteInShadowRange((unsigned __int64)&v185);
        if ( v63
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v62 & 0x20) == 0 || (v62 & 0x42) == 0) )
        {
          v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v64 )
          {
            v65 = *((_QWORD *)&v64->Flink + (((unsigned __int64)&v185 >> 3) & 0x1FF));
            if ( (v65 & 0x20) != 0 )
              v62 |= 0x20uLL;
            if ( (v65 & 0x42) != 0 )
              v62 |= 0x42uLL;
          }
          else
          {
            v62 = v185;
          }
        }
        v66 = (v62 >> 12) & 0xFFFFFFFFFLL;
      }
      while ( (*(_QWORD *)(48 * v66 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v7 = 48 * v66 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      v190 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v190);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v69 = *v60;
      v185 = v69;
      if ( (v69 & 1) == 0 || (v69 & 0x200) != 0 )
        goto LABEL_168;
      if ( v63
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
      {
        v70 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v70 )
        {
          v71 = *((_QWORD *)&v70->Flink + (((unsigned __int64)&v185 >> 3) & 0x1FF));
          if ( (v71 & 0x20) != 0 )
            v69 |= 0x20uLL;
          if ( (v71 & 0x42) != 0 )
            v69 |= 0x42uLL;
        }
        else
        {
          v69 = v185;
        }
      }
      if ( v66 != ((v69 >> 12) & 0xFFFFFFFFFLL) )
      {
LABEL_168:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v72 = KeGetCurrentIrql();
              if ( v72 <= 0xFu && CurrentIrql <= 0xFu && v72 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v74 = CurrentPrcb->SchedulerAssist;
                v75 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v76 = (v75 & v74[5]) == 0;
                v74[5] &= v75;
                if ( v76 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
LABEL_177:
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
        continue;
      }
      break;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v7) )
      goto LABEL_194;
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
    {
      v78 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged();
      v78 = v80;
      if ( IsPfnCommitNotCharged )
        v78 = 1;
    }
    v81 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
    v82 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * v81);
    if ( v78 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v81), 1uLL, 4u) )
      goto LABEL_195;
    if ( v82 == &MiSystemPartition )
    {
      v42 = (__int64)KeGetCurrentPrcb();
      v83 = *(_DWORD *)(v42 + 33564);
      while ( v83 )
      {
        if ( v83 == -1 )
          break;
        Process = (unsigned int)(v83 - 1);
        v84 = v83;
        v83 = _InterlockedCompareExchange((volatile signed __int32 *)(v42 + 33564), Process, v83);
        if ( v84 == v83 )
          goto LABEL_194;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v82, 1LL, 0xFFFFFFFFLL, v77) )
    {
LABEL_194:
      ++*(_WORD *)(v7 + 32);
    }
    else if ( v78 )
    {
      MiReturnCommit((__int64)v82, 1LL);
    }
LABEL_195:
    if ( CurrentIrql == 17 )
    {
      LOBYTE(v42) = 17;
      MiLockOwnedProtoPage(v7, v42);
    }
    else
    {
      v85 = (volatile signed __int64 *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
      v177 = CurrentIrql;
      v86 = *(_BYTE *)(v7 + 34);
      i = 0;
      v189 = v85;
      if ( (v86 & 0x20) != 0 )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v87 = KeGetCurrentIrql();
              if ( v87 <= 0xFu && CurrentIrql <= 0xFu && v87 >= 2u )
              {
                v88 = KeGetCurrentPrcb();
                Process = (unsigned int)CurrentIrql + 1;
                v77 = v88->SchedulerAssist;
                v42 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v76 = ((unsigned int)v42 & v77[5]) == 0;
                v36 = (unsigned int)v42 & v77[5];
                v77[5] = v36;
                if ( v76 )
                  KiRemoveSystemWorkPriorityKick(v88);
              }
            }
          }
          __writecr8(CurrentIrql);
          v89 = 0;
          for ( i = *(_BYTE *)(v7 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v7 + 34) )
          {
            if ( (++v89 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, v42, v36, v77) )
            {
              HvlNotifyLongSpinWait(v89);
            }
            else
            {
              _mm_pause();
            }
          }
          MiLockPageInline(v7);
          v86 = *(_BYTE *)(v7 + 34);
        }
        while ( (v86 & 0x20) != 0 );
        v85 = v189;
      }
      *(_BYTE *)(v7 + 34) = v86 | 0x20;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v85 & 0x20) == 0 )
        MiWriteValidPteVolatile(v85, 1, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v17 = v188;
    v30 = 0LL;
    v6 = BugCheckParameter1;
    v26 = 0xFFFFFFFFFLL;
    LODWORD(v33) = v199;
    v8 = v183;
    v31 = 0xFFFFFA8000000028uLL;
    v35 = 0xFFFFF6FB7DBED000uLL;
LABEL_219:
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_371;
    v44 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, v42, v36, 0xFFFFF6FB7DBED000uLL)
      && (v44 & 1) != 0
      && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
    {
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      v42 = *(_QWORD *)(Process + 1928);
      if ( v42 )
      {
        v90 = *(_QWORD *)(v42 + 8 * ((v6 >> 3) & 0x1FF));
        v42 = v44 | 0x20;
        Process = (unsigned __int8)v90;
        LOBYTE(Process) = v90 & 0x20;
        if ( (v90 & 0x20) == 0 )
          v42 = v44;
        v44 = v42;
        if ( (v90 & 0x42) != 0 )
          v44 = v42 | 0x42;
      }
    }
    v187 = v44;
    if ( (v44 & 1) == 0 && ((v44 & 0x400) != 0 || (v44 & 0x800) == 0) )
      goto LABEL_113;
    while ( 1 )
    {
      while ( 1 )
      {
        v91 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 1) == 0 )
          break;
        v92 = *(_QWORD *)v6;
LABEL_244:
        v42 = 6 * (v26 & (v92 >> 12));
        Process = *(_QWORD *)(v31 + 48 * (v26 & (v92 >> 12)));
        if ( (Process & 0x4000000000000LL) != 0 )
        {
          v93 = 48 * (v26 & (v92 >> 12)) - 0x58000000000LL;
          v191 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v191);
              while ( *(__int64 *)(v93 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL) );
            v26 = 0xFFFFFFFFFLL;
            v31 = 0xFFFFFA8000000028uLL;
          }
          if ( *(_QWORD *)v6 == v91 )
            goto LABEL_252;
          _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v91 & 0x400) != 0 || (v91 & 0x800) == 0 )
        break;
      if ( !v91 || !qword_140C4DDC0 || (v91 & qword_140C4DDC0) != 0 )
      {
        v92 = *(_QWORD *)v6;
        if ( qword_140C4DDC0 && (v91 & 0x10) == 0 )
          v92 = v91 & ~qword_140C4DDC0;
        goto LABEL_244;
      }
    }
    v93 = 0LL;
LABEL_252:
    v44 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(Process, v42, v36, v35)
      && (v44 & 1) != 0
      && ((v44 & 0x20) == 0 || (v44 & 0x42) == 0) )
    {
      v94 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v94 )
      {
        v95 = *((_QWORD *)&v94->Flink + ((v6 >> 3) & 0x1FF));
        v96 = v44 | 0x20;
        if ( (v95 & 0x20) == 0 )
          v96 = v44;
        v44 = v96;
        if ( (v95 & 0x42) != 0 )
          v44 = v96 | 0x42;
      }
    }
    v187 = v44;
    if ( v93 )
    {
      if ( (v44 & 1) != 0 )
      {
        v76 = (*(_BYTE *)(v93 + 35) & 0x40) == 0;
        ValidPte = v44;
        if ( !v76 )
          goto LABEL_266;
        *(_QWORD *)(v93 + 24) ^= (*(_QWORD *)(v93 + 24) ^ (*(_QWORD *)(v93 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_345:
        _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v30 = 0LL;
        goto LABEL_406;
      }
      if ( (*(_BYTE *)(v93 + 34) & 0x20) != 0 || (*(_BYTE *)(v93 + 35) & 0x40) != 0 )
      {
LABEL_266:
        _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_370;
      }
      v97 = v93 + 16;
      v98 = *(_QWORD *)(v93 + 16) >> 11;
      v99 = ((__int64)(v195 - v8) >> 3) + 1;
      if ( (*(_QWORD *)(v93 + 16) & 0x400LL) == 0 )
        v98 = *(_QWORD *)(v93 + 16) >> 3;
      if ( (v98 & 1) == 0
        || (TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v93, 0LL, ((__int64)(v195 - v8) >> 3) + 1)) == 0LL )
      {
        if ( (*(_BYTE *)(v93 + 34) & 7) != 2
          || v99 <= 1
          || (unsigned int)MiIsPfnFromSlabAllocation(v93) && !*(_WORD *)(v93 + 32) && *(__int64 *)v93 < 0 )
        {
          goto LABEL_297;
        }
        v101 = *(_QWORD *)v97;
        if ( qword_140C4DDC0 && (v101 & 0x10) == 0 )
          v101 &= ~qword_140C4DDC0;
        if ( (__int64)(*(_QWORD *)((v101 >> 16) + 8) + 8LL * *(unsigned int *)((v101 >> 16) + 0x2C) - v6) >> 3 < v99 )
          v99 = (__int64)(*(_QWORD *)((v101 >> 16) + 8) + 8LL * *(unsigned int *)((v101 >> 16) + 0x2C) - v6) >> 3;
        v102 = (unsigned __int64)(4096 - (unsigned int)(v6 & 0xFFF)) >> 3;
        if ( v99 <= v102 )
          v102 = v99;
        v103 = 16 - v179;
        if ( v102 <= v103 )
          v103 = v102;
        if ( v103 > 1 )
        {
          v104 = 0LL;
          v194 = 0LL;
          PfnPriority = (unsigned int)MiGetPfnPriority(v93);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v200 + 8 * (PfnPriority + 4 * (PfnPriority + 77)));
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
          v106 = MiUnlinkPageFromList(v93, 1);
          if ( v106 == 1 )
          {
            v107 = MiUnlinkStandbyBatch(
                     (unsigned int)&v194,
                     (int)BugCheckParameter1 + 8,
                     PfnPriority,
                     v183,
                     v103 - 1,
                     (__int64)&v194);
            v104 = v194;
            v196 = v107;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v104 )
          {
            MiDiscardTransitionPteEx(v104, 0LL);
            v110 = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v104 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_299;
          }
        }
        else
        {
LABEL_297:
          v106 = MiUnlinkPageFromList(v93, 0);
        }
        v110 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_299:
        if ( !v106 )
        {
          MiDiscardTransitionPteEx(v93, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v8 = v183;
          goto LABEL_277;
        }
        v111 = *(_QWORD *)(v93 + 8);
        v112 = *(_BYTE *)(v93 + 34) & 0xFE;
        ++*(_WORD *)(v93 + 32);
        *(_BYTE *)(v93 + 34) = v112 | 6;
        v113 = (_QWORD *)(v111 | 0x8000000000000000uLL);
        v114 = *(_QWORD *)v97;
        v115 = 0xFFFFF6FB7DBED000uLL;
        if ( v97 >= 0xFFFFF6FB7DBED000uLL
          && v97 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v109, v108, v114, 0x7FFFFFFFFFFFFFFFLL)
          && (v114 & 1) != 0
          && ((v114 & 0x20) == 0 || (v114 & 0x42) == 0) )
        {
          v116 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v116 )
          {
            v117 = v114 | 0x20;
            v118 = *((_QWORD *)&v116->Flink + ((v97 >> 3) & 0x1FF));
            if ( (v118 & 0x20) == 0 )
              v117 = v114;
            LOBYTE(v114) = v117;
            if ( (v118 & 0x42) != 0 )
              LOBYTE(v114) = v117 | 0x42;
          }
        }
        v36 = (unsigned __int8)v114 >> 5;
        v119 = *(unsigned __int8 *)(v93 + 34) >> 6;
        if ( v119 != 1 )
        {
          if ( v119 )
          {
            if ( v119 == 2 )
              v36 = (unsigned int)v36 | 0x18;
          }
          else
          {
            v36 = (unsigned int)v36 | 8;
          }
        }
        v120 = v93 + 0x58000000000LL;
        v121 = (((v93 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
        v122 = v121 | MmProtectToPteMask[v36] & 0xFFFF000000000E7FuLL | 0x21;
        v8 = v183;
        if ( v183 < 0xFFFFF68000000000uLL || v183 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v123 = v121 | MmProtectToPteMask[v36] & 0xFFFF000000000E7FuLL | 0x121;
        }
        else
        {
          if ( v183 >= 0xFFFFF6FB40000000uLL && v183 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v183 == 0xFFFFF6FB7DBEDF68uLL )
              v122 = v121 | MmProtectToPteMask[v36] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
            else
              v122 &= v110;
            if ( (unsigned int)MiUserPdeOrAbove(v183, v121, v36, v110) )
              v122 |= 4uLL;
          }
          if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
            v122 |= 4uLL;
          v123 = v122 | 0x100;
          if ( !(unsigned int)MiIsAddressGlobal((__int64)(v8 << 25) >> 16) )
            v123 = v36;
        }
        v124 = v123 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140C4DE88 & 1 | 0xA000000000000LL) << 8);
        v125 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v113 >= v115 && (unsigned __int64)v113 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v120, v124, v36, v110) )
          {
            if ( !HIBYTE(word_140C4DE88) )
              v124 |= 0x8000000000000000uLL;
            *v113 = v124;
            MiWritePteShadow(v113, v124);
            v115 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_341;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            v124 |= 0x8000000000000000uLL;
        }
        *v113 = v124;
LABEL_341:
        v6 = BugCheckParameter1;
        *(_QWORD *)(v93 + 24) = *(_QWORD *)(v93 + 24) & 0xC000000000000000uLL | 1;
        PteShadow = *(_QWORD *)v6;
        if ( v6 >= v115 && v6 <= v125 )
          PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
        LODWORD(v33) = v199;
        ValidPte = PteShadow;
        goto LABEL_345;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v7, v177);
      v177 = 17;
      if ( TransitionHeatBatch == (_SLIST_ENTRY *)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiProcessTransitionHeatBatch(TransitionHeatBatch);
        MiFreeTransitionPageHeatList(TransitionHeatBatch);
      }
LABEL_277:
      v17 = v188;
      v30 = 0LL;
      v5 = v179;
      v6 = 0LL;
      v26 = 0xFFFFFFFFFLL;
    }
    else
    {
LABEL_113:
      if ( qword_140C4DDC0 && (v44 & 0x10) == 0 )
        v44 &= ~qword_140C4DDC0;
      v48 = v44 >> 16;
      if ( (unsigned int)MiControlAreaUsingExtents(v201) || (v181 & 1) == 0 )
        goto LABEL_357;
      MiInitializePageColorBase(0LL, (*(_DWORD *)(v49 + 56) >> 20) & 0x3F, (__int64)&v202);
      v50 = _InterlockedExchangeAdd((volatile signed __int32 *)v202, 1u);
      Page = MiGetPage(v200, DWORD2(v202) & (unsigned int)v50 | HIDWORD(v202), 2LL);
      v52 = Page;
      if ( Page == -1 )
      {
        v8 = v183;
LABEL_357:
        if ( (v181 & 2) == 0 )
        {
          if ( v177 != 17 )
          {
            MiUnlockProtoPoolPage(v7, v177);
            v177 = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v137 = BYTE4(CurrentThread[1].Queue);
          v138 = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v139 = v137 + 4 * v138;
          v140 = (__int64)(v195 - v8) >> 3;
          if ( (unsigned int)v140 > v138 )
          {
            if ( (unsigned int)v140 > 0xF )
              LODWORD(v140) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v140;
          }
          v141 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16, 0, 0LL);
          if ( v141 < 0 )
          {
            v142 = v184;
            if ( v184 >= 0 )
              v142 = v141;
            v184 = v142;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v139 >> 2;
          BYTE4(CurrentThread[1].Queue) = v139 & 3;
        }
        v180 = 0;
LABEL_370:
        v30 = 0LL;
LABEL_371:
        v143 = 0LL;
        goto LABEL_372;
      }
      v53 = 48 * Page - 0x58000000000LL;
      v189 = (volatile signed __int64 *)v53;
      v54 = MI_READ_PTE_LOCK_FREE(&v187);
      v55 = MiProtectionToCacheAttribute((v54 >> 5) & 0x1F);
      v56 = MiPfnZeroingNeeded(v53, v55);
      v57 = v177;
      if ( v56 )
      {
        if ( v177 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v177);
          v57 = 17;
          v177 = 17;
        }
        MiZeroPhysicalPage(v52);
        *(_QWORD *)(v53 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      }
      v6 = BugCheckParameter1;
      if ( v57 == 17 )
      {
        v7 = MiLockProtoPoolPage(BugCheckParameter1, &v177);
        if ( !v7 )
        {
          do
          {
            MmAccessFault(2uLL, v6, 0, 0LL);
            v7 = MiLockProtoPoolPage(v6, &v177);
          }
          while ( !v7 );
          v53 = (__int64)v189;
        }
        v58 = MI_READ_PTE_LOCK_FREE(v6);
        v187 = v58;
        if ( (v58 & 1) != 0 || (v58 & 0x800) != 0 && (v58 & 0x400) == 0 )
        {
          MiUnlockProtoPoolPage(v7, v177);
          MiReleaseFreshPage(v53, v59);
          v8 = v183;
          v177 = 17;
          goto LABEL_277;
        }
      }
      MiReferenceControlAreaPfn(v201, v48, 1u);
      v127 = MI_READ_PTE_LOCK_FREE(&v187);
      v128 = (v127 >> 5) & 0x1F;
      MiInitializePfn(v53, v6, (v127 >> 5) & 0x1F, 18);
      v129 = v52;
      v8 = v183;
      ValidPte = MiMakeValidPte(v183, v129, (unsigned int)v128 | 0x20000000);
      v130 = ValidPte;
      v131 = ValidPte;
      if ( MiPteInShadowRange(v6) )
      {
        if ( (unsigned int)MiPteHasShadow(v133, v132, v36, v134) )
        {
          v135 = v131;
          if ( !HIBYTE(word_140C4DE88) && (v130 & 1) != 0 )
            v135 = v131 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v135;
          MiWritePteShadow(v6, v135);
          v30 = 0LL;
          goto LABEL_406;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v130 & 1) != 0 )
        {
          v131 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v131;
      v30 = 0LL;
      while ( 1 )
      {
LABEL_406:
        v149 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v149 <= 0xFu )
        {
          v150 = KeGetCurrentPrcb()->SchedulerAssist;
          v36 = (-1 << (v149 + 1)) & 4u | v150[5];
          v150[5] = v36;
        }
        v17 = v188;
        v192 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v192);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        *(_QWORD *)(v17 + 24) ^= ((*(_QWORD *)(v17 + 24) + 1LL) ^ *(_QWORD *)(v17 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v151 = KeGetCurrentIrql();
            if ( v151 <= 0xFu && v149 <= 0xFu && v151 >= 2u )
            {
              v152 = KeGetCurrentPrcb();
              v153 = v152->SchedulerAssist;
              v154 = ~(unsigned __int16)(-1LL << (v149 + 1));
              v76 = (v154 & v153[5]) == 0;
              v36 = (unsigned int)v154 & v153[5];
              v153[5] = v36;
              if ( v76 )
                KiRemoveSystemWorkPriorityKick(v152);
            }
          }
        }
        __writecr8(v149);
        if ( (v33 & 1) != 0 )
        {
          v155 = MI_READ_PTE_LOCK_FREE(&ValidPte);
          v156 = MiMakeValidPte(v8, (v155 >> 12) & 0xFFFFFFFFFLL, 536870913LL);
        }
        else
        {
          v156 = ValidPte;
          if ( (v181 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
            v156 = ValidPte | 0x42;
        }
        v143 = v156 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4DE88 & 1) << 8);
LABEL_372:
        v8 += 8LL;
        ValidPte = v143;
        if ( (unsigned int)v33 >= 2 )
        {
          v143 &= ~1uLL;
          ValidPte = v143;
        }
        v5 = v179;
        if ( v179 || v143 )
        {
          v205[v179] = v143;
          v179 = ++v5;
          if ( v5 == 16 )
          {
            if ( v177 != 17 )
            {
              MiUnlockProtoPoolPage(v7, v177);
              v177 = 17;
            }
            MiMakeSystemCacheRangeValid(v8 - 128, (unsigned __int64)v205, 0x10u, v17);
            v5 = 0;
            v179 = 0;
          }
        }
        if ( !v196 )
          break;
        v144 = *(_QWORD *)(v6 + 8);
        v6 += 8LL;
        v145 = 0xFFFFF6FB7DBED000uLL;
        --v196;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v144, v36, 0xFFFFF6FB7DBED000uLL)
          && (v144 & 1) != 0
          && ((v144 & 0x20) == 0 || (v144 & 0x42) == 0) )
        {
          v36 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v36 )
          {
            v146 = *(_QWORD *)(v36 + 8 * ((v6 >> 3) & 0x1FF));
            v36 = v144 | 0x20;
            if ( (v146 & 0x20) == 0 )
              v36 = v144;
            v144 = v36;
            if ( (v146 & 0x42) != 0 )
              v144 = v36 | 0x42;
          }
        }
        ValidPte = v144;
        v147 = *(_QWORD *)v8;
        if ( v8 >= v145
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v147, v36, v145)
          && (v147 & 1) != 0
          && ((v147 & 0x20) == 0 || (v147 & 0x42) == 0) )
        {
          v36 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v36 )
          {
            v148 = *(_QWORD *)(v36 + 8 * ((v8 >> 3) & 0x1FF));
            v36 = v147 | 0x20;
            if ( (v148 & 0x20) == 0 )
              v36 = v147;
            v147 = v36;
            if ( (v148 & 0x42) != 0 )
              v147 = v36 | 0x42;
          }
        }
        v197 = v147;
        if ( (v147 & 1) != 0 )
          LODWORD(v33) = 2;
        else
          LODWORD(v33) = (v147 & 8) != 0;
      }
      v183 = v8;
      v26 = 0xFFFFFFFFFLL;
    }
  }
  if ( v177 != 17 )
  {
    v193 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v193);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_BYTE *)(v7 + 34) &= ~0x20u;
    v157 = *(_WORD *)(v7 + 32);
    if ( !v157 )
      MiBadRefCount(v7);
    v158 = v157 - 1;
    *(_WORD *)(v7 + 32) = v158;
    if ( !v158 && MiIsPfnFileOnly(v7) )
      goto LABEL_467;
    if ( (unsigned int)MiAreChargesNeededToLockPage(v7) )
    {
      v159 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
      if ( v159 > 0xFFFFF6BFFFFFFF78uLL || v159 < 0xFFFFF68000000000uLL )
      {
        v160 = *(_BYTE *)(v7 + 35);
        if ( (v160 & 0x20) != 0 )
        {
          *(_BYTE *)(v7 + 35) = v160 & 0xDF;
          goto LABEL_466;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v164 = 1LL;
        v165 = 1;
      }
      else if ( v161 <= v162 && v161 >= v163 && (*(_BYTE *)(v7 + 35) & 0x20) != 0 )
      {
        v164 = 1LL;
        v165 = 1;
      }
      else
      {
        v164 = 1LL;
        if ( v158 )
        {
          v165 = 0;
        }
        else
        {
          if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
            v30 = 1LL;
          v189 = (volatile signed __int64 *)v30;
          v165 = v30;
        }
      }
      v166 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v167 = *(_QWORD *)(qword_140C4E4C8 + 8 * v166);
      if ( v165 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v166), 1LL);
      if ( (ULONG_PTR *)v167 != &MiSystemPartition )
        goto LABEL_464;
      v168 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v168->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_464;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v170 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&v168->CachedResidentAvailable,
                   CachedResidentAvailable + 1,
                   CachedResidentAvailable);
          v76 = (_DWORD)CachedResidentAvailable == v170;
          LODWORD(CachedResidentAvailable) = v170;
          if ( v76 )
            goto LABEL_465;
        }
        while ( v170 != -1 && (unsigned __int64)(v170 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v168->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v164 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v164 )
LABEL_464:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v167 + 7168), v164);
LABEL_465:
      v5 = v179;
LABEL_466:
      if ( !v158 )
LABEL_467:
        MiPfnReferenceCountIsZero(v7, (v7 + 0x58000000000LL) / 48);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v171 = KeGetCurrentIrql(), v171 <= 0xFu) )
    {
      v172 = v177;
      if ( v177 <= 0xFu && v171 >= 2u )
      {
        v173 = KeGetCurrentPrcb();
        v174 = v173->SchedulerAssist;
        v172 = v177;
        v175 = ~(unsigned __int16)(-1LL << (v177 + 1));
        v76 = (v175 & v174[5]) == 0;
        v174[5] &= v175;
        if ( v76 )
          KiRemoveSystemWorkPriorityKick(v173);
      }
    }
    else
    {
      v172 = v177;
    }
    __writecr8(v172);
  }
  if ( v5 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v5, (unsigned __int64)v205, v5, v17);
  if ( v203 )
    *v203 = v180;
  return (unsigned int)v184;
}
