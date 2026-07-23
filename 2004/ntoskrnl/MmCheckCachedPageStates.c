/*
 * XREFs of MmCheckCachedPageStates @ 0x14022FA30
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x14022DAD0 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x14022EED0 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x14022F880 (CcMapAndRead.c)
 *     CcMapDataForOverwrite @ 0x14033C3B8 (CcMapDataForOverwrite.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x1402241C0 (MiControlAreaUsingExtents.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiUnlinkStandbyBatch @ 0x140226F90 (MiUnlinkStandbyBatch.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x140229F90 (MiLockOwnedProtoPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14022CF60 (MiIsPfnCommitNotCharged.c)
 *     MiIsAddressGlobal @ 0x14022CFB0 (MiIsAddressGlobal.c)
 *     MiMakeSystemCacheRangeValid @ 0x14022D030 (MiMakeSystemCacheRangeValid.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiReferenceControlAreaPfn @ 0x14025F72C (MiReferenceControlAreaPfn.c)
 *     MiMarkPteDirty @ 0x1402649B0 (MiMarkPteDirty.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiInitializePfn @ 0x1402B8070 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiZeroPhysicalPage @ 0x1402F50E4 (MiZeroPhysicalPage.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiPfnZeroingNeeded @ 0x14031A050 (MiPfnZeroingNeeded.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403EEC2C (MiBadRefCount.c)
 *     MiFreeTransitionPageHeatList @ 0x14055A154 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055A5D0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A95C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055ABC0 (MiReplenishTransitionPageHeatList.c)
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
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r9
  struct _LIST_ENTRY *v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rdx
  __int64 Process; // rdx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  unsigned __int64 v33; // r11
  unsigned __int64 v34; // rcx
  __int64 v35; // r12
  struct _LIST_ENTRY *v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  ULONG_PTR v40; // rbx
  __int64 v41; // r14
  unsigned __int64 v42; // rbx
  __int64 v43; // rbx
  struct _LIST_ENTRY *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rcx
  signed __int32 v49; // eax
  __int64 Page; // rax
  ULONG_PTR v51; // r15
  __int64 v52; // rsi
  unsigned __int64 v53; // rax
  unsigned int v54; // eax
  int v55; // eax
  unsigned __int8 v56; // di
  __int64 v57; // rax
  unsigned __int64 *v58; // r12
  __int64 v59; // rsi
  unsigned __int64 v60; // rbx
  _DWORD *SchedulerAssist; // r8
  __int64 v62; // r9
  int v63; // r14d
  struct _LIST_ENTRY *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v69; // rax
  __int64 v70; // rcx
  unsigned __int8 v71; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v73; // r9
  int v74; // edx
  bool v75; // zf
  _DWORD *v76; // r9
  __int64 v77; // rcx
  char v78; // bl
  int IsPfnCommitNotCharged; // eax
  char v80; // r10
  __int64 v81; // rcx
  ULONG_PTR *v82; // rdi
  signed __int32 v83; // eax
  signed __int32 v84; // ett
  _BYTE *v85; // r14
  char v86; // al
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  unsigned int v89; // ebx
  __int64 v90; // rax
  __int64 v91; // rbx
  unsigned __int64 v92; // rax
  __int64 v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // r12
  __int64 v97; // rax
  unsigned __int64 v98; // rsi
  _SLIST_ENTRY *TransitionHeatBatch; // rbx
  __int64 v100; // rax
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // r15
  ULONG_PTR v103; // rbx
  __int64 PfnPriority; // r14
  int v105; // esi
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r14
  char v110; // al
  _QWORD *v111; // r14
  __int64 v112; // r8
  unsigned __int64 v113; // r10
  struct _LIST_ENTRY *v114; // rax
  char v115; // dl
  __int64 v116; // rax
  int v117; // eax
  __int64 v118; // rcx
  __int64 v119; // rdx
  unsigned __int64 v120; // rbx
  unsigned __int64 v121; // rbx
  unsigned __int64 v122; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v124; // rbx
  ULONG_PTR v125; // rdx
  char v126; // di
  unsigned __int64 v127; // rbx
  __int64 v128; // rcx
  unsigned __int64 v129; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  int v131; // eax
  unsigned int v132; // ecx
  unsigned int v133; // edi
  __int64 v134; // rax
  int v135; // eax
  int v136; // ecx
  unsigned __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rax
  __int64 v140; // rax
  unsigned __int8 v141; // bl
  unsigned __int8 v142; // al
  struct _KPRCB *v143; // r10
  int v144; // eax
  unsigned __int64 v145; // rax
  __int64 v146; // rcx
  __int16 v147; // bx
  __int16 v148; // bx
  unsigned __int64 v149; // rdx
  char v150; // al
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // r8
  unsigned __int64 v153; // r9
  unsigned __int64 v154; // r14
  int v155; // r12d
  __int64 v156; // rcx
  __int64 v157; // rdi
  struct _KPRCB *v158; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v160; // eax
  unsigned __int8 v161; // al
  unsigned __int8 v162; // bl
  struct _KPRCB *v163; // r9
  _DWORD *v164; // r8
  int v165; // eax
  unsigned __int8 v167; // [rsp+30h] [rbp-198h] BYREF
  char i; // [rsp+31h] [rbp-197h]
  unsigned int v169; // [rsp+34h] [rbp-194h]
  char v170; // [rsp+38h] [rbp-190h]
  int v171; // [rsp+3Ch] [rbp-18Ch]
  __int64 ValidPte; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v173; // [rsp+48h] [rbp-180h]
  int v174; // [rsp+50h] [rbp-178h]
  unsigned __int64 v175; // [rsp+58h] [rbp-170h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-168h]
  __int64 v177; // [rsp+68h] [rbp-160h] BYREF
  __int64 v178; // [rsp+70h] [rbp-158h]
  _BYTE *v179; // [rsp+78h] [rbp-150h]
  int v180; // [rsp+80h] [rbp-148h] BYREF
  int v181; // [rsp+84h] [rbp-144h] BYREF
  int v182; // [rsp+88h] [rbp-140h] BYREF
  int v183; // [rsp+8Ch] [rbp-13Ch] BYREF
  ULONG_PTR v184; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v185; // [rsp+98h] [rbp-130h]
  __int64 v186; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v187; // [rsp+A8h] [rbp-120h] BYREF
  unsigned __int64 v188; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v189; // [rsp+B8h] [rbp-110h]
  __int64 v190; // [rsp+C0h] [rbp-108h]
  __int64 v191; // [rsp+C8h] [rbp-100h]
  __int128 v192; // [rsp+D0h] [rbp-F8h] BYREF
  char *v193; // [rsp+E0h] [rbp-E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v195[16]; // [rsp+100h] [rbp-C8h] BYREF

  v193 = a4;
  v171 = a3;
  v184 = 0LL;
  ValidPte = 0LL;
  v177 = 0LL;
  v170 = 1;
  v192 = 0LL;
  v174 = 0;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v169 = 0;
  v7 = 0LL;
  v167 = 17;
  v186 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v173 = v8;
  v185 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
  v187 = v10;
  if ( (unsigned int)MiPteInShadowRange(&v187)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v187 >> 3) & 0x1FF));
      v16 = v10 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v10;
      v10 = v16;
      if ( (v15 & 0x42) != 0 )
        v10 = v16 | 0x42;
    }
  }
  v17 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v178 = v17;
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
  v188 = v19;
  if ( (unsigned int)MiPteInShadowRange(&v188)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v25 )
    {
      v26 = *((_QWORD *)&v25->Flink + (((unsigned __int64)&v188 >> 3) & 0x1FF));
      v27 = v19 | 0x20;
      if ( (v26 & 0x20) == 0 )
        v27 = v19;
      v19 = v27;
      if ( (v26 & 0x42) != 0 )
        v19 = v27 | 0x42;
    }
  }
  v28 = 0xFFFFFFFFFLL;
  v29 = *(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v29 )
    v29 += 40 * ((a1 >> 18) & 7);
  Process = *(_QWORD *)(v29 + 24);
  v31 = (__int64 *)(Process & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (Process & 1) == 0 )
    v31 = (__int64 *)Process;
  v191 = *v31;
  v32 = 0LL;
  v190 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v191 + 60) & 0x3FF));
  while ( 1 )
  {
    v33 = 0xFFFFFA8000000028uLL;
    if ( v8 > v185 )
      break;
    v34 = *(_QWORD *)v8;
    LODWORD(v35) = 0;
    Process = *(_QWORD *)v8;
    v24 = 0xFFFFF6FB7DBED000uLL;
    v23 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (Process & 1) != 0
        && ((Process & 0x20) == 0 || (Process & 0x42) == 0) )
      {
        v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v36 )
        {
          Process |= 0x20uLL;
          v37 = *((_QWORD *)&v36->Flink + ((v8 >> 3) & 0x1FF));
          if ( (v37 & 0x20) == 0 )
            Process = *(_QWORD *)v8;
          if ( (v37 & 0x42) != 0 )
            Process |= 0x42uLL;
        }
      }
      v23 = 0xFFFFF6FB7DBED7F8uLL;
      v24 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (Process & 1) != 0 )
    {
      if ( (v171 & 4) == 0 )
        goto LABEL_371;
      v38 = v167;
      if ( v167 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v167);
        v167 = 17;
      }
LABEL_70:
      MiMarkPteDirty(v8, v38, v23);
      goto LABEL_371;
    }
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v34 & 1) != 0 && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v23 = *(_QWORD *)(Process + 1928);
        if ( v23 )
        {
          v39 = *(_QWORD *)(v23 + 8 * ((v8 >> 3) & 0x1FF));
          v23 = v34 | 0x20;
          Process = (unsigned __int8)v39;
          LOBYTE(Process) = v39 & 0x20;
          if ( (v39 & 0x20) == 0 )
            v23 = *(_QWORD *)v8;
          v34 = v23;
          if ( (v39 & 0x42) != 0 )
            v34 = v23 | 0x42;
        }
      }
    }
    ValidPte = v34;
    if ( (v34 & 1) != 0 )
    {
      if ( (v171 & 4) == 0 )
        goto LABEL_371;
      v38 = v167;
      if ( v167 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v167);
        v167 = 17;
      }
      goto LABEL_70;
    }
    v40 = v6;
    v35 = (v34 >> 3) & 1;
    v41 = v34;
    v189 = v35;
    if ( qword_140C4DD40 && (v34 & 0x10) == 0 )
      v41 = v34 & ~qword_140C4DD40;
    Process = v167;
    v42 = v40 & 0xFFFFFFFFFFFFF000uLL;
    v6 = v41 >> 16;
    BugCheckParameter1 = v6;
    if ( v167 != 17 )
    {
      if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == v42 )
        goto LABEL_219;
      MiUnlockProtoPoolPage(v7, v167);
      v167 = 17;
    }
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != v42 && v169 )
    {
      MiMakeSystemCacheRangeValid(v8 - 8LL * v169, (unsigned __int64)v195, v169, v17);
      v169 = 0;
    }
    v43 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v43 & 1) != 0
      && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      v44 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v44 )
      {
        v45 = *((_QWORD *)&v44->Flink + ((v6 >> 3) & 0x1FF));
        v46 = v43 | 0x20;
        if ( (v45 & 0x20) == 0 )
          v46 = *(_QWORD *)v6;
        v43 = v46;
        if ( (v45 & 0x42) != 0 )
          v43 = v46 | 0x42;
      }
    }
    v177 = v43;
    if ( (v43 & 1) == 0 && ((v43 & 0x400) != 0 || (v43 & 0x800) == 0) )
    {
      v7 = 0LL;
      goto LABEL_113;
    }
    v58 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( 2 )
    {
      v175 = *v58;
      v59 = v175 & 1;
      do
      {
        if ( !v59 )
          goto LABEL_177;
        v60 = v175;
        if ( (v175 & 0x200) != 0 )
          goto LABEL_177;
        v63 = MiPteInShadowRange(&v175);
        if ( v63
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
        {
          v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v64 )
          {
            v65 = *((_QWORD *)&v64->Flink + (((unsigned __int64)&v175 >> 3) & 0x1FF));
            if ( (v65 & 0x20) != 0 )
              v60 |= 0x20uLL;
            if ( (v65 & 0x42) != 0 )
              v60 |= 0x42uLL;
          }
          else
          {
            v60 = v175;
          }
        }
        v66 = (v60 >> 12) & 0xFFFFFFFFFLL;
        v67 = 6 * v66;
      }
      while ( (*(_QWORD *)(48 * v66 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v7 = 48 * v66 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v67 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v67;
      }
      v180 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v180, v67);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v69 = *v58;
      v175 = v69;
      if ( (v69 & 1) == 0 || (v69 & 0x200) != 0 )
        goto LABEL_168;
      if ( v63 )
      {
        if ( (MiFlags & 0xC00000) != 0 )
        {
          v67 = (__int64)KeGetCurrentThread()->ApcState.Process;
          if ( *(_BYTE *)(v67 + 912) != 1 && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
          {
            v67 = (__int64)KeGetCurrentThread()->ApcState.Process;
            SchedulerAssist = *(_DWORD **)(v67 + 1928);
            if ( SchedulerAssist )
            {
              v70 = *(_QWORD *)&SchedulerAssist[2 * (((unsigned __int64)&v175 >> 3) & 0x1FF)];
              if ( (v70 & 0x20) != 0 )
                v69 |= 0x20uLL;
              if ( (v70 & 0x42) != 0 )
                v69 |= 0x42uLL;
            }
            else
            {
              v69 = v175;
            }
          }
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
              v71 = KeGetCurrentIrql();
              if ( v71 <= 0xFu && CurrentIrql <= 0xFu && v71 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v73 = CurrentPrcb->SchedulerAssist;
                v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v75 = (v74 & v73[5]) == 0;
                v73[5] &= v74;
                if ( v75 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
LABEL_177:
        MmAccessFault(2uLL, BugCheckParameter1);
        continue;
      }
      break;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v7, v67, SchedulerAssist, v62) )
      goto LABEL_194;
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
    {
      v78 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v77);
      v78 = v80;
      if ( IsPfnCommitNotCharged )
        v78 = 1;
    }
    v81 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
    v82 = *(ULONG_PTR **)(qword_140C4E448 + 8 * v81);
    if ( v78 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E448 + 8 * v81), 1LL, 4LL) )
      goto LABEL_195;
    if ( v82 == &MiSystemPartition )
    {
      Process = (__int64)KeGetCurrentPrcb();
      v83 = *(_DWORD *)(Process + 33564);
      while ( v83 )
      {
        if ( v83 == -1 )
          break;
        v34 = (unsigned int)(v83 - 1);
        v84 = v83;
        v83 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 33564), v34, v83);
        if ( v84 == v83 )
          goto LABEL_194;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable(v82, 1LL, 0xFFFFFFFFLL) )
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
      LOBYTE(Process) = 17;
      MiLockOwnedProtoPage(v7, Process, v23, v76);
    }
    else
    {
      v85 = (_BYTE *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
      v167 = CurrentIrql;
      v86 = *(_BYTE *)(v7 + 34);
      i = 0;
      v179 = v85;
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
                v34 = (unsigned int)CurrentIrql + 1;
                v76 = v88->SchedulerAssist;
                Process = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v75 = ((unsigned int)Process & v76[5]) == 0;
                v23 = (unsigned int)Process & v76[5];
                v76[5] = v23;
                if ( v75 )
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
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v34, Process, v23, v76) )
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
        v85 = v179;
      }
      *(_BYTE *)(v7 + 34) = v86 | 0x20;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 && (*v85 & 0x20) == 0 )
        MiWriteValidPteVolatile(v85, 1LL);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v17 = v178;
    v32 = 0LL;
    v6 = BugCheckParameter1;
    v28 = 0xFFFFFFFFFLL;
    LODWORD(v35) = v189;
    v8 = v173;
    v33 = 0xFFFFFA8000000028uLL;
    v24 = 0xFFFFF6FB7DBED000uLL;
LABEL_219:
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_371;
    v43 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v34, Process, v23, 0xFFFFF6FB7DBED000uLL)
      && (v43 & 1) != 0
      && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      v34 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      Process = *(_QWORD *)(v34 + 1928);
      if ( Process )
      {
        v90 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v43 | 0x20;
        v34 = (unsigned __int8)v90;
        LOBYTE(v34) = v90 & 0x20;
        if ( (v90 & 0x20) == 0 )
          Process = v43;
        v43 = Process;
        if ( (v90 & 0x42) != 0 )
          v43 = Process | 0x42;
      }
    }
    v177 = v43;
    if ( (v43 & 1) == 0 && ((v43 & 0x400) != 0 || (v43 & 0x800) == 0) )
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
        Process = 6 * (v28 & (v92 >> 12));
        v34 = *(_QWORD *)(v33 + 48 * (v28 & (v92 >> 12)));
        if ( (v34 & 0x4000000000000LL) != 0 )
        {
          v93 = 48 * (v28 & (v92 >> 12)) - 0x58000000000LL;
          v181 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v181, Process);
              while ( *(__int64 *)(v93 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL) );
            v28 = 0xFFFFFFFFFLL;
            v33 = 0xFFFFFA8000000028uLL;
          }
          if ( *(_QWORD *)v6 == v91 )
            goto LABEL_252;
          _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v91 & 0x400) != 0 || (v91 & 0x800) == 0 )
        break;
      if ( !v91 || !qword_140C4DD40 || (v91 & qword_140C4DD40) != 0 )
      {
        v92 = *(_QWORD *)v6;
        if ( qword_140C4DD40 && (v91 & 0x10) == 0 )
          v92 = v91 & ~qword_140C4DD40;
        goto LABEL_244;
      }
    }
    v93 = 0LL;
LABEL_252:
    v43 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v34, Process, v23, v24)
      && (v43 & 1) != 0
      && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v94 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v43 | 0x20;
        if ( (v94 & 0x20) == 0 )
          Process = v43;
        v43 = Process;
        if ( (v94 & 0x42) != 0 )
          v43 = Process | 0x42;
      }
    }
    v177 = v43;
    if ( v93 )
    {
      if ( (v43 & 1) != 0 )
      {
        v75 = (*(_BYTE *)(v93 + 35) & 0x40) == 0;
        ValidPte = v43;
        if ( !v75 )
          goto LABEL_266;
        v95 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v93 + 24) ^= (*(_QWORD *)(v93 + 24) ^ (*(_QWORD *)(v93 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_345:
        _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v32 = 0LL;
        goto LABEL_406;
      }
      if ( (*(_BYTE *)(v93 + 34) & 0x20) != 0 || (*(_BYTE *)(v93 + 35) & 0x40) != 0 )
      {
LABEL_266:
        _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_370;
      }
      v96 = v93 + 16;
      v97 = *(_QWORD *)(v93 + 16) >> 11;
      v98 = ((__int64)(v185 - v8) >> 3) + 1;
      if ( (*(_QWORD *)(v93 + 16) & 0x400LL) == 0 )
        v97 = *(_QWORD *)(v93 + 16) >> 3;
      if ( (v97 & 1) == 0
        || (TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v93, 0LL, ((__int64)(v185 - v8) >> 3) + 1)) == 0LL )
      {
        if ( (*(_BYTE *)(v93 + 34) & 7) != 2
          || v98 <= 1
          || MiIsPfnFromSlabAllocation(v93) && !*(_WORD *)(v93 + 32) && *(__int64 *)v93 < 0 )
        {
          goto LABEL_297;
        }
        v100 = *(_QWORD *)v96;
        if ( qword_140C4DD40 && (v100 & 0x10) == 0 )
          v100 &= ~qword_140C4DD40;
        if ( (__int64)(*(_QWORD *)((v100 >> 16) + 8) + 8LL * *(unsigned int *)((v100 >> 16) + 0x2C) - v6) >> 3 < v98 )
          v98 = (__int64)(*(_QWORD *)((v100 >> 16) + 8) + 8LL * *(unsigned int *)((v100 >> 16) + 0x2C) - v6) >> 3;
        v101 = (unsigned __int64)(4096 - (unsigned int)(v6 & 0xFFF)) >> 3;
        if ( v98 <= v101 )
          v101 = v98;
        v102 = 16 - v169;
        if ( v101 <= v102 )
          v102 = v101;
        if ( v102 > 1 )
        {
          v103 = 0LL;
          v184 = 0LL;
          PfnPriority = (unsigned int)MiGetPfnPriority(v93);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v190 + 8 * (PfnPriority + 4 * (PfnPriority + 77)));
          KxAcquireQueuedSpinLock(&LockHandle);
          v105 = MiUnlinkPageFromList(v93);
          if ( v105 == 1 )
          {
            v106 = MiUnlinkStandbyBatch((__int64)&v184, BugCheckParameter1 + 8, PfnPriority, v173, v102 - 1, &v184);
            v103 = v184;
            v186 = v106;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v103 )
          {
            MiDiscardTransitionPteEx(v103, 0LL);
            v24 = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_299;
          }
        }
        else
        {
LABEL_297:
          v105 = MiUnlinkPageFromList(v93);
        }
        v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_299:
        if ( !v105 )
        {
          MiDiscardTransitionPteEx(v93, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v8 = v173;
          goto LABEL_277;
        }
        v109 = *(_QWORD *)(v93 + 8);
        v110 = *(_BYTE *)(v93 + 34) & 0xFE;
        ++*(_WORD *)(v93 + 32);
        *(_BYTE *)(v93 + 34) = v110 | 6;
        v111 = (_QWORD *)(v109 | 0x8000000000000000uLL);
        v112 = *(_QWORD *)v96;
        v113 = 0xFFFFF6FB7DBED000uLL;
        if ( v96 >= 0xFFFFF6FB7DBED000uLL
          && v96 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v108, v107, v112, 0x7FFFFFFFFFFFFFFFLL)
          && (v112 & 1) != 0
          && ((v112 & 0x20) == 0 || (v112 & 0x42) == 0) )
        {
          v114 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v114 )
          {
            v115 = v112 | 0x20;
            v116 = *((_QWORD *)&v114->Flink + ((v96 >> 3) & 0x1FF));
            if ( (v116 & 0x20) == 0 )
              v115 = v112;
            LOBYTE(v112) = v115;
            if ( (v116 & 0x42) != 0 )
              LOBYTE(v112) = v115 | 0x42;
          }
        }
        v23 = (unsigned __int8)v112 >> 5;
        v117 = *(unsigned __int8 *)(v93 + 34) >> 6;
        if ( v117 != 1 )
        {
          if ( v117 )
          {
            if ( v117 == 2 )
              v23 = (unsigned int)v23 | 0x18;
          }
          else
          {
            v23 = (unsigned int)v23 | 8;
          }
        }
        v118 = v93 + 0x58000000000LL;
        v119 = (((v93 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
        v120 = v119 | MmProtectToPteMask[v23] & 0xFFFF000000000E7FuLL | 0x21;
        v8 = v173;
        if ( v173 < 0xFFFFF68000000000uLL || v173 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v121 = v119 | MmProtectToPteMask[v23] & 0xFFFF000000000E7FuLL | 0x121;
        }
        else
        {
          if ( v173 >= 0xFFFFF6FB40000000uLL && v173 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v173 == 0xFFFFF6FB7DBEDF68uLL )
              v120 = v119 | MmProtectToPteMask[v23] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
            else
              v120 &= v24;
            if ( (unsigned int)MiUserPdeOrAbove(v173) )
              v120 |= 4uLL;
          }
          if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
            v120 |= 4uLL;
          v121 = v120 | 0x100;
          if ( !(unsigned int)MiIsAddressGlobal((__int64)(v8 << 25) >> 16) )
            v121 = v23;
        }
        v95 = v121 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140C4DE08 & 1 | 0xA000000000000LL) << 8);
        v122 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v111 >= v113 && (unsigned __int64)v111 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v118, v95, v23, v24) )
          {
            if ( !HIBYTE(word_140C4DE08) )
              v95 |= 0x8000000000000000uLL;
            *v111 = v95;
            MiWritePteShadow(v111, v95);
            v113 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_341;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            v95 |= 0x8000000000000000uLL;
        }
        *v111 = v95;
LABEL_341:
        v6 = BugCheckParameter1;
        *(_QWORD *)(v93 + 24) = *(_QWORD *)(v93 + 24) & 0xC000000000000000uLL | 1;
        PteShadow = *(_QWORD *)v6;
        if ( v6 >= v113 && v6 <= v122 )
          PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
        LODWORD(v35) = v189;
        ValidPte = PteShadow;
        goto LABEL_345;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v7, v167);
      v167 = 17;
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
      v17 = v178;
      v32 = 0LL;
      v5 = v169;
      v6 = 0LL;
      v28 = 0xFFFFFFFFFLL;
    }
    else
    {
LABEL_113:
      if ( qword_140C4DD40 && (v43 & 0x10) == 0 )
        v43 &= ~qword_140C4DD40;
      v47 = v43 >> 16;
      if ( MiControlAreaUsingExtents(v191) || (v171 & 1) == 0 )
        goto LABEL_357;
      MiInitializePageColorBase(0LL, (*(_DWORD *)(v48 + 56) >> 20) & 0x3F, &v192);
      v49 = _InterlockedExchangeAdd((volatile signed __int32 *)v192, 1u);
      Page = MiGetPage(v190, DWORD2(v192) & (unsigned int)v49 | HIDWORD(v192), 2LL);
      v51 = Page;
      if ( Page == -1 )
      {
        v8 = v173;
LABEL_357:
        if ( (v171 & 2) == 0 )
        {
          if ( v167 != 17 )
          {
            MiUnlockProtoPoolPage(v7, v167);
            v167 = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v131 = BYTE4(CurrentThread[1].Queue);
          v132 = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v133 = v131 + 4 * v132;
          v134 = (__int64)(v185 - v8) >> 3;
          if ( (unsigned int)v134 > v132 )
          {
            if ( (unsigned int)v134 > 0xF )
              LODWORD(v134) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v134;
          }
          v135 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16);
          if ( v135 < 0 )
          {
            v136 = v174;
            if ( v174 >= 0 )
              v136 = v135;
            v174 = v136;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v133 >> 2;
          BYTE4(CurrentThread[1].Queue) = v133 & 3;
        }
        v170 = 0;
LABEL_370:
        v32 = 0LL;
LABEL_371:
        v137 = 0LL;
        goto LABEL_372;
      }
      v52 = 48 * Page - 0x58000000000LL;
      v179 = (_BYTE *)v52;
      v53 = MI_READ_PTE_LOCK_FREE(&v177);
      v54 = MiProtectionToCacheAttribute((v53 >> 5) & 0x1F);
      v55 = MiPfnZeroingNeeded(v52, v54);
      v56 = v167;
      if ( v55 )
      {
        if ( v167 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v167);
          v56 = 17;
          v167 = 17;
        }
        MiZeroPhysicalPage(v51);
        *(_QWORD *)(v52 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      }
      v6 = BugCheckParameter1;
      if ( v56 == 17 )
      {
        v7 = MiLockProtoPoolPage(BugCheckParameter1, &v167);
        if ( !v7 )
        {
          do
          {
            MmAccessFault(2uLL, v6);
            v7 = MiLockProtoPoolPage(v6, &v167);
          }
          while ( !v7 );
          v52 = (__int64)v179;
        }
        v57 = MI_READ_PTE_LOCK_FREE(v6);
        v177 = v57;
        if ( (v57 & 1) != 0 || (v57 & 0x800) != 0 && (v57 & 0x400) == 0 )
        {
          MiUnlockProtoPoolPage(v7, v167);
          MiReleaseFreshPage(v52);
          v8 = v173;
          v167 = 17;
          goto LABEL_277;
        }
      }
      MiReferenceControlAreaPfn(v191, v47, 1LL);
      v124 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v177) >> 5) & 0x1F;
      MiInitializePfn(v52, v6, v124, 18LL);
      v125 = v51;
      v8 = v173;
      ValidPte = MiMakeValidPte(v173, v125, (unsigned int)v124 | 0x20000000);
      v126 = ValidPte;
      v127 = ValidPte;
      if ( (unsigned int)MiPteInShadowRange(v6) )
      {
        if ( (unsigned int)MiPteHasShadow(v128, v95, v23, v24) )
        {
          v129 = v127;
          if ( !HIBYTE(word_140C4DE08) && (v126 & 1) != 0 )
            v129 = v127 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v129;
          MiWritePteShadow(v6, v129);
          v32 = 0LL;
          goto LABEL_406;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v126 & 1) != 0 )
        {
          v127 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v127;
      v32 = 0LL;
      while ( 1 )
      {
LABEL_406:
        v141 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v141 <= 0xFu )
        {
          v24 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
          v95 = (-1LL << (v141 + 1)) & 4;
          v23 = (unsigned int)v95 | *(_DWORD *)(v24 + 20);
          *(_DWORD *)(v24 + 20) = v23;
        }
        v17 = v178;
        v182 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v182, v95);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        Process = *(_QWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 24) = Process ^ ((Process + 1) ^ Process) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v142 = KeGetCurrentIrql();
            if ( v142 <= 0xFu && v141 <= 0xFu && v142 >= 2u )
            {
              v143 = KeGetCurrentPrcb();
              Process = -1LL << (v141 + 1);
              v24 = (unsigned __int64)v143->SchedulerAssist;
              v144 = ~(unsigned __int16)Process;
              v75 = (v144 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v144 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v75 )
                KiRemoveSystemWorkPriorityKick(v143);
            }
          }
        }
        __writecr8(v141);
        if ( (v35 & 1) != 0 )
        {
          v145 = MI_READ_PTE_LOCK_FREE(&ValidPte);
          v146 = MiMakeValidPte(v8, (v145 >> 12) & 0xFFFFFFFFFLL, 536870913LL);
        }
        else
        {
          v146 = ValidPte;
          if ( (v171 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
            v146 = ValidPte | 0x42;
        }
        v137 = v146 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4DE08 & 1) << 8);
LABEL_372:
        v8 += 8LL;
        ValidPte = v137;
        if ( (unsigned int)v35 >= 2 )
        {
          v137 &= ~1uLL;
          ValidPte = v137;
        }
        v5 = v169;
        if ( v169 || v137 )
        {
          v195[v169] = v137;
          v169 = ++v5;
          if ( v5 == 16 )
          {
            if ( v167 != 17 )
            {
              MiUnlockProtoPoolPage(v7, v167);
              v167 = 17;
            }
            MiMakeSystemCacheRangeValid(v8 - 128, (unsigned __int64)v195, 0x10u, v17);
            v5 = 0;
            v169 = 0;
          }
        }
        if ( !v186 )
          break;
        v138 = *(_QWORD *)(v6 + 8);
        v6 += 8LL;
        v24 = 0xFFFFF6FB7DBED000uLL;
        --v186;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v138, v23, 0xFFFFF6FB7DBED000uLL)
          && (v138 & 1) != 0
          && ((v138 & 0x20) == 0 || (v138 & 0x42) == 0) )
        {
          v23 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v23 )
          {
            v139 = *(_QWORD *)(v23 + 8 * ((v6 >> 3) & 0x1FF));
            v23 = v138 | 0x20;
            if ( (v139 & 0x20) == 0 )
              v23 = v138;
            v138 = v23;
            if ( (v139 & 0x42) != 0 )
              v138 = v23 | 0x42;
          }
        }
        ValidPte = v138;
        v95 = *(_QWORD *)v8;
        if ( v8 >= v24
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v95, v23, v24)
          && (v95 & 1) != 0
          && ((v95 & 0x20) == 0 || (v95 & 0x42) == 0) )
        {
          v23 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v23 )
          {
            v140 = *(_QWORD *)(v23 + 8 * ((v8 >> 3) & 0x1FF));
            v23 = v95 | 0x20;
            if ( (v140 & 0x20) == 0 )
              v23 = v95;
            v95 = v23;
            if ( (v140 & 0x42) != 0 )
              v95 = v23 | 0x42;
          }
        }
        v187 = v95;
        if ( (v95 & 1) != 0 )
          LODWORD(v35) = 2;
        else
          LODWORD(v35) = (v95 & 8) != 0;
      }
      v173 = v8;
      v28 = 0xFFFFFFFFFLL;
    }
  }
  if ( v167 != 17 )
  {
    v183 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v183, Process);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_BYTE *)(v7 + 34) &= ~0x20u;
    v147 = *(_WORD *)(v7 + 32);
    if ( !v147 )
      MiBadRefCount(v7);
    v148 = v147 - 1;
    *(_WORD *)(v7 + 32) = v148;
    if ( !v148 && (unsigned int)MiIsPfnFileOnly(v7, Process, v23, v24) )
      goto LABEL_467;
    if ( (unsigned int)MiAreChargesNeededToLockPage(v7, Process, v23, v24) )
    {
      v149 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
      if ( v149 > 0xFFFFF6BFFFFFFF78uLL || v149 < 0xFFFFF68000000000uLL )
      {
        v150 = *(_BYTE *)(v7 + 35);
        if ( (v150 & 0x20) != 0 )
        {
          *(_BYTE *)(v7 + 35) = v150 & 0xDF;
          goto LABEL_466;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v154 = 1LL;
        v155 = 1;
      }
      else if ( v151 <= v152 && v151 >= v153 && (*(_BYTE *)(v7 + 35) & 0x20) != 0 )
      {
        v154 = 1LL;
        v155 = 1;
      }
      else
      {
        v154 = 1LL;
        if ( v148 )
        {
          v155 = 0;
        }
        else
        {
          if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
            v32 = 1LL;
          v179 = (_BYTE *)v32;
          v155 = v32;
        }
      }
      v156 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v157 = *(_QWORD *)(qword_140C4E448 + 8 * v156);
      if ( v155 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8 * v156), 1LL);
      if ( (ULONG_PTR *)v157 != &MiSystemPartition )
        goto LABEL_464;
      v158 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v158->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_464;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v160 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&v158->CachedResidentAvailable,
                   CachedResidentAvailable + 1,
                   CachedResidentAvailable);
          v75 = (_DWORD)CachedResidentAvailable == v160;
          LODWORD(CachedResidentAvailable) = v160;
          if ( v75 )
            goto LABEL_465;
        }
        while ( v160 != -1 && (unsigned __int64)(v160 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v158->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v154 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v154 )
LABEL_464:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v157 + 7168), v154);
LABEL_465:
      v5 = v169;
LABEL_466:
      if ( !v148 )
LABEL_467:
        MiPfnReferenceCountIsZero(v7, (v7 + 0x58000000000LL) / 48);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v161 = KeGetCurrentIrql(), v161 <= 0xFu) )
    {
      v162 = v167;
      if ( v167 <= 0xFu && v161 >= 2u )
      {
        v163 = KeGetCurrentPrcb();
        v164 = v163->SchedulerAssist;
        v162 = v167;
        v165 = ~(unsigned __int16)(-1LL << (v167 + 1));
        v75 = (v165 & v164[5]) == 0;
        v164[5] &= v165;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v163);
      }
    }
    else
    {
      v162 = v167;
    }
    __writecr8(v162);
  }
  if ( v5 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v5, (unsigned __int64)v195, v5, v17);
  if ( v193 )
    *v193 = v170;
  return (unsigned int)v174;
}
