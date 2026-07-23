/*
 * XREFs of MmCheckCachedPageStates @ 0x14032C2E0
 * Callers:
 *     CcMapDataForOverwrite @ 0x14022D728 (CcMapDataForOverwrite.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x14032A380 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x14032B780 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x14032C130 (CcMapAndRead.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiZeroPhysicalPage @ 0x1402976D0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     MiInitializePfn @ 0x1402E6250 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiMarkPteDirty @ 0x14030529C (MiMarkPteDirty.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiUnlinkStandbyBatch @ 0x14030D930 (MiUnlinkStandbyBatch.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReferenceControlAreaPfn @ 0x140324CD0 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x140325070 (MiLockOwnedProtoPage.c)
 *     MiIsAddressGlobal @ 0x140329860 (MiIsAddressGlobal.c)
 *     MiMakeSystemCacheRangeValid @ 0x1403298E0 (MiMakeSystemCacheRangeValid.c)
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x140332020 (MiIsPfnCommitNotCharged.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiControlAreaUsingExtents @ 0x14033D9A0 (MiControlAreaUsingExtents.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F834 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x14055FCB0 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14056003C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405602A0 (MiReplenishTransitionPageHeatList.c)
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
  __int64 v38; // rax
  ULONG_PTR v39; // rbx
  __int64 v40; // r14
  unsigned __int64 v41; // rbx
  __int64 v42; // rbx
  struct _LIST_ENTRY *v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // rcx
  signed __int32 v48; // eax
  __int64 Page; // rax
  ULONG_PTR v50; // r15
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  int v53; // r14d
  BOOL v54; // eax
  unsigned __int8 v55; // di
  __int64 v56; // rax
  unsigned __int64 *v57; // r12
  __int64 v58; // rsi
  unsigned __int64 v59; // rbx
  _DWORD *SchedulerAssist; // r8
  __int64 v61; // r9
  int v62; // r14d
  struct _LIST_ENTRY *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rdx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v68; // rax
  struct _LIST_ENTRY *v69; // r8
  __int64 v70; // rcx
  unsigned __int8 v71; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v73; // r9
  int v74; // edx
  bool v75; // zf
  __int64 v76; // rcx
  _DWORD *v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  char v80; // bl
  int IsPfnCommitNotCharged; // eax
  char v82; // r10
  __int64 v83; // rcx
  ULONG_PTR *v84; // rdi
  signed __int32 v85; // eax
  signed __int32 v86; // ett
  volatile signed __int64 *v87; // r14
  char v88; // al
  unsigned __int8 v89; // al
  struct _KPRCB *v90; // r10
  unsigned int v91; // ebx
  __int64 v92; // rax
  __int64 v93; // rbx
  unsigned __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // rdx
  unsigned __int64 v98; // r12
  __int64 v99; // rax
  unsigned __int64 v100; // rsi
  _SLIST_ENTRY *TransitionHeatBatch; // rbx
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // r15
  ULONG_PTR v105; // rbx
  __int64 PfnPriority; // r14
  __int64 v107; // r8
  __int64 v108; // r9
  int v109; // esi
  __int64 v110; // rax
  __int64 v111; // r14
  char v112; // al
  _QWORD *v113; // r14
  __int64 v114; // r8
  unsigned __int64 v115; // r10
  struct _LIST_ENTRY *v116; // rax
  char v117; // dl
  __int64 v118; // rax
  int v119; // eax
  __int64 v120; // rdx
  unsigned __int64 v121; // rbx
  unsigned __int64 v122; // rbx
  unsigned __int64 v123; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v125; // rax
  __int64 v126; // rbx
  ULONG_PTR v127; // rdx
  char v128; // di
  unsigned __int64 v129; // rbx
  unsigned __int64 v130; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  int v132; // eax
  unsigned int v133; // ecx
  unsigned int v134; // edi
  __int64 v135; // rax
  int v136; // eax
  int v137; // ecx
  unsigned __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned __int8 v142; // bl
  unsigned __int8 v143; // al
  struct _KPRCB *v144; // r10
  int v145; // eax
  unsigned __int64 v146; // rax
  __int64 v147; // rcx
  __int16 v148; // bx
  __int16 v149; // bx
  unsigned __int64 v150; // rdx
  char v151; // al
  unsigned __int64 v152; // rdx
  unsigned __int64 v153; // r8
  unsigned __int64 v154; // r9
  unsigned __int64 v155; // r14
  int v156; // r12d
  __int64 v157; // rcx
  __int64 v158; // rdi
  struct _KPRCB *v159; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v161; // eax
  unsigned __int8 v162; // al
  unsigned __int8 v163; // bl
  struct _KPRCB *v164; // r9
  _DWORD *v165; // r8
  int v166; // eax
  unsigned __int8 v168; // [rsp+30h] [rbp-198h] BYREF
  char i; // [rsp+31h] [rbp-197h]
  unsigned int v170; // [rsp+34h] [rbp-194h]
  char v171; // [rsp+38h] [rbp-190h]
  int v172; // [rsp+3Ch] [rbp-18Ch]
  __int64 ValidPte; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v174; // [rsp+48h] [rbp-180h]
  int v175; // [rsp+50h] [rbp-178h]
  unsigned __int64 v176; // [rsp+58h] [rbp-170h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-168h]
  __int64 v178; // [rsp+68h] [rbp-160h] BYREF
  __int64 v179; // [rsp+70h] [rbp-158h]
  volatile signed __int64 *v180; // [rsp+78h] [rbp-150h]
  int v181; // [rsp+80h] [rbp-148h] BYREF
  int v182; // [rsp+84h] [rbp-144h] BYREF
  int v183; // [rsp+88h] [rbp-140h] BYREF
  int v184; // [rsp+8Ch] [rbp-13Ch] BYREF
  ULONG_PTR v185; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v186; // [rsp+98h] [rbp-130h]
  __int64 v187; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v188; // [rsp+A8h] [rbp-120h] BYREF
  unsigned __int64 v189; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v190; // [rsp+B8h] [rbp-110h]
  __int64 v191; // [rsp+C0h] [rbp-108h]
  __int64 v192; // [rsp+C8h] [rbp-100h]
  __int128 v193; // [rsp+D0h] [rbp-F8h] BYREF
  char *v194; // [rsp+E0h] [rbp-E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v196[16]; // [rsp+100h] [rbp-C8h] BYREF

  v194 = a4;
  v172 = a3;
  v185 = 0LL;
  ValidPte = 0LL;
  v178 = 0LL;
  v171 = 1;
  v193 = 0LL;
  v175 = 0;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v170 = 0;
  v7 = 0LL;
  v168 = 17;
  v187 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v174 = v8;
  v186 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
  v188 = v10;
  if ( (unsigned int)MiPteInShadowRange(&v188)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v188 >> 3) & 0x1FF));
      v16 = v10 | 0x20;
      if ( (v15 & 0x20) == 0 )
        v16 = v10;
      v10 = v16;
      if ( (v15 & 0x42) != 0 )
        v10 = v16 | 0x42;
    }
  }
  v17 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v179 = v17;
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
  v189 = v19;
  if ( (unsigned int)MiPteInShadowRange(&v189)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v19 & 1) != 0
    && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
  {
    v25 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v25 )
    {
      v26 = *((_QWORD *)&v25->Flink + (((unsigned __int64)&v189 >> 3) & 0x1FF));
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
  v192 = *v31;
  v32 = 0LL;
  v191 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v192 + 60) & 0x3FF));
  while ( 1 )
  {
    v33 = 0xFFFFFA8000000028uLL;
    if ( v8 > v186 )
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
      if ( (v172 & 4) == 0 )
        goto LABEL_371;
      if ( v168 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v168);
        v168 = 17;
      }
LABEL_70:
      MiMarkPteDirty(v8);
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
          v38 = *(_QWORD *)(v23 + 8 * ((v8 >> 3) & 0x1FF));
          v23 = v34 | 0x20;
          Process = (unsigned __int8)v38;
          LOBYTE(Process) = v38 & 0x20;
          if ( (v38 & 0x20) == 0 )
            v23 = *(_QWORD *)v8;
          v34 = v23;
          if ( (v38 & 0x42) != 0 )
            v34 = v23 | 0x42;
        }
      }
    }
    ValidPte = v34;
    if ( (v34 & 1) != 0 )
    {
      if ( (v172 & 4) == 0 )
        goto LABEL_371;
      if ( v168 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v168);
        v168 = 17;
      }
      goto LABEL_70;
    }
    v39 = v6;
    v35 = (v34 >> 3) & 1;
    v40 = v34;
    v190 = v35;
    if ( qword_140C4DF80 && (v34 & 0x10) == 0 )
      v40 = v34 & ~qword_140C4DF80;
    Process = v168;
    v41 = v39 & 0xFFFFFFFFFFFFF000uLL;
    v6 = v40 >> 16;
    BugCheckParameter1 = v6;
    if ( v168 != 17 )
    {
      if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == v41 )
        goto LABEL_219;
      MiUnlockProtoPoolPage(v7, v168);
      v168 = 17;
    }
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != v41 && v170 )
    {
      MiMakeSystemCacheRangeValid(v8 - 8LL * v170, (unsigned __int64)v196, v170, v17);
      v170 = 0;
    }
    v42 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v42 & 1) != 0
      && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
    {
      v43 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v43 )
      {
        v44 = *((_QWORD *)&v43->Flink + ((v6 >> 3) & 0x1FF));
        v45 = v42 | 0x20;
        if ( (v44 & 0x20) == 0 )
          v45 = *(_QWORD *)v6;
        v42 = v45;
        if ( (v44 & 0x42) != 0 )
          v42 = v45 | 0x42;
      }
    }
    v178 = v42;
    if ( (v42 & 1) == 0 && ((v42 & 0x400) != 0 || (v42 & 0x800) == 0) )
    {
      v7 = 0LL;
      goto LABEL_113;
    }
    v57 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( 2 )
    {
      v176 = *v57;
      v58 = v176 & 1;
      do
      {
        if ( !v58 )
          goto LABEL_177;
        v59 = v176;
        if ( (v176 & 0x200) != 0 )
          goto LABEL_177;
        v62 = MiPteInShadowRange(&v176);
        if ( v62
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
        {
          v63 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v63 )
          {
            v64 = *((_QWORD *)&v63->Flink + (((unsigned __int64)&v176 >> 3) & 0x1FF));
            if ( (v64 & 0x20) != 0 )
              v59 |= 0x20uLL;
            if ( (v64 & 0x42) != 0 )
              v59 |= 0x42uLL;
          }
          else
          {
            v59 = v176;
          }
        }
        v65 = (v59 >> 12) & 0xFFFFFFFFFLL;
        v66 = 6 * v65;
      }
      while ( (*(_QWORD *)(48 * v65 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v7 = 48 * v65 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v66 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = v66;
      }
      v181 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v181, v66, (__int64)SchedulerAssist, v61);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v68 = *v57;
      v176 = v68;
      if ( (v68 & 1) == 0 || (v68 & 0x200) != 0 )
        goto LABEL_168;
      if ( v62
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
      {
        v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v69 )
        {
          v70 = *((_QWORD *)&v69->Flink + (((unsigned __int64)&v176 >> 3) & 0x1FF));
          if ( (v70 & 0x20) != 0 )
            v68 |= 0x20uLL;
          if ( (v70 & 0x42) != 0 )
            v68 |= 0x42uLL;
        }
        else
        {
          v68 = v176;
        }
      }
      if ( v65 != ((v68 >> 12) & 0xFFFFFFFFFLL) )
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
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
        continue;
      }
      break;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v7) )
      goto LABEL_194;
    if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
    {
      v80 = 1;
    }
    else
    {
      IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v79, v78, v23);
      v80 = v82;
      if ( IsPfnCommitNotCharged )
        v80 = 1;
    }
    v83 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
    v84 = *(ULONG_PTR **)(qword_140C4E688 + 8 * v83);
    if ( v80 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E688 + 8 * v83), 1uLL, 4u) )
      goto LABEL_195;
    if ( v84 == &MiSystemPartition )
    {
      Process = (__int64)KeGetCurrentPrcb();
      v85 = *(_DWORD *)(Process + 33564);
      while ( v85 )
      {
        if ( v85 == -1 )
          break;
        v76 = (unsigned int)(v85 - 1);
        v86 = v85;
        v85 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 33564), v76, v85);
        if ( v86 == v85 )
          goto LABEL_194;
      }
    }
    if ( (unsigned int)MiChargePartitionResidentAvailable((__int64)v84, 1uLL, 0xFFFFFFFFLL) )
    {
LABEL_194:
      ++*(_WORD *)(v7 + 32);
    }
    else if ( v80 )
    {
      MiReturnCommit((__int64)v84, 1LL);
    }
LABEL_195:
    if ( CurrentIrql == 17 )
    {
      LOBYTE(Process) = 17;
      MiLockOwnedProtoPage(v7, Process, v23, v77);
    }
    else
    {
      v87 = (volatile signed __int64 *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
      v168 = CurrentIrql;
      v88 = *(_BYTE *)(v7 + 34);
      i = 0;
      v180 = v87;
      if ( (v88 & 0x20) != 0 )
      {
        do
        {
          _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v89 = KeGetCurrentIrql();
              if ( v89 <= 0xFu && CurrentIrql <= 0xFu && v89 >= 2u )
              {
                v90 = KeGetCurrentPrcb();
                v76 = (unsigned int)CurrentIrql + 1;
                v77 = v90->SchedulerAssist;
                Process = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v75 = ((unsigned int)Process & v77[5]) == 0;
                v23 = (unsigned int)Process & v77[5];
                v77[5] = v23;
                if ( v75 )
                  KiRemoveSystemWorkPriorityKick(v90);
              }
            }
          }
          __writecr8(CurrentIrql);
          v91 = 0;
          for ( i = *(_BYTE *)(v7 + 34); (i & 0x20) != 0; i = *(_BYTE *)(v7 + 34) )
          {
            if ( (++v91 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v76, Process, v23, v77) )
            {
              HvlNotifyLongSpinWait(v91);
            }
            else
            {
              _mm_pause();
            }
          }
          MiLockPageInline(v7, Process, v23, v77);
          v88 = *(_BYTE *)(v7 + 34);
        }
        while ( (v88 & 0x20) != 0 );
        v87 = v180;
      }
      *(_BYTE *)(v7 + 34) = v88 | 0x20;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v87 & 0x20) == 0 )
        MiWriteValidPteVolatile(v87, 1, 0);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v17 = v179;
    v32 = 0LL;
    v6 = BugCheckParameter1;
    v28 = 0xFFFFFFFFFLL;
    LODWORD(v35) = v190;
    v8 = v174;
    v33 = 0xFFFFFA8000000028uLL;
    v24 = 0xFFFFF6FB7DBED000uLL;
LABEL_219:
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_371;
    v42 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v42 & 1) != 0
      && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v92 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v42 | 0x20;
        if ( (v92 & 0x20) == 0 )
          Process = v42;
        v42 = Process;
        if ( (v92 & 0x42) != 0 )
          v42 = Process | 0x42;
      }
    }
    v178 = v42;
    if ( (v42 & 1) == 0 && ((v42 & 0x400) != 0 || (v42 & 0x800) == 0) )
      goto LABEL_113;
    while ( 1 )
    {
      while ( 1 )
      {
        v93 = *(_QWORD *)v6;
        if ( (*(_QWORD *)v6 & 1) == 0 )
          break;
        v94 = *(_QWORD *)v6;
LABEL_244:
        Process = 6 * (v28 & (v94 >> 12));
        if ( (*(_QWORD *)(v33 + 48 * (v28 & (v94 >> 12))) & 0x4000000000000LL) != 0 )
        {
          v95 = 48 * (v28 & (v94 >> 12)) - 0x58000000000LL;
          v182 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v95 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v182, Process, v23, v24);
              while ( *(__int64 *)(v95 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v95 + 24), 0x3FuLL) );
            v28 = 0xFFFFFFFFFLL;
            v33 = 0xFFFFFA8000000028uLL;
          }
          if ( *(_QWORD *)v6 == v93 )
            goto LABEL_252;
          _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v93 & 0x400) != 0 || (v93 & 0x800) == 0 )
        break;
      if ( !v93 || !qword_140C4DF80 || (v93 & qword_140C4DF80) != 0 )
      {
        v94 = *(_QWORD *)v6;
        if ( qword_140C4DF80 && (v93 & 0x10) == 0 )
          v94 = v93 & ~qword_140C4DF80;
        goto LABEL_244;
      }
    }
    v95 = 0LL;
LABEL_252:
    v42 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v42 & 1) != 0
      && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v96 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v42 | 0x20;
        if ( (v96 & 0x20) == 0 )
          Process = v42;
        v42 = Process;
        if ( (v96 & 0x42) != 0 )
          v42 = Process | 0x42;
      }
    }
    v178 = v42;
    if ( v95 )
    {
      if ( (v42 & 1) != 0 )
      {
        v75 = (*(_BYTE *)(v95 + 35) & 0x40) == 0;
        ValidPte = v42;
        if ( !v75 )
          goto LABEL_266;
        v97 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v95 + 24) ^= (*(_QWORD *)(v95 + 24) ^ (*(_QWORD *)(v95 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_345:
        _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v32 = 0LL;
        goto LABEL_406;
      }
      if ( (*(_BYTE *)(v95 + 34) & 0x20) != 0 || (*(_BYTE *)(v95 + 35) & 0x40) != 0 )
      {
LABEL_266:
        _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_370;
      }
      v98 = v95 + 16;
      v99 = *(_QWORD *)(v95 + 16) >> 11;
      v100 = ((__int64)(v186 - v8) >> 3) + 1;
      if ( (*(_QWORD *)(v95 + 16) & 0x400LL) == 0 )
        v99 = *(_QWORD *)(v95 + 16) >> 3;
      if ( (v99 & 1) == 0
        || (TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v95, 0LL, ((__int64)(v186 - v8) >> 3) + 1)) == 0LL )
      {
        if ( (*(_BYTE *)(v95 + 34) & 7) != 2
          || v100 <= 1
          || MiIsPfnFromSlabAllocation(v95) && !*(_WORD *)(v95 + 32) && *(__int64 *)v95 < 0 )
        {
          goto LABEL_297;
        }
        v102 = *(_QWORD *)v98;
        if ( qword_140C4DF80 && (v102 & 0x10) == 0 )
          v102 &= ~qword_140C4DF80;
        if ( (__int64)(*(_QWORD *)((v102 >> 16) + 8) + 8LL * *(unsigned int *)((v102 >> 16) + 0x2C) - v6) >> 3 < v100 )
          v100 = (__int64)(*(_QWORD *)((v102 >> 16) + 8) + 8LL * *(unsigned int *)((v102 >> 16) + 0x2C) - v6) >> 3;
        v103 = (unsigned __int64)(4096 - (unsigned int)(v6 & 0xFFF)) >> 3;
        if ( v100 <= v103 )
          v103 = v100;
        v104 = 16 - v170;
        if ( v103 <= v104 )
          v104 = v103;
        if ( v104 > 1 )
        {
          v105 = 0LL;
          v185 = 0LL;
          PfnPriority = (unsigned int)MiGetPfnPriority(v95);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v191 + 8 * (PfnPriority + 4 * (PfnPriority + 77)));
          KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock, v107, v108);
          v109 = MiUnlinkPageFromList(v95, 1);
          if ( v109 == 1 )
          {
            v110 = MiUnlinkStandbyBatch((__int64)&v185, BugCheckParameter1 + 8, PfnPriority, v174, v104 - 1, &v185);
            v105 = v185;
            v187 = v110;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v105 )
          {
            MiDiscardTransitionPteEx(v105, 0LL);
            v24 = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v105 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_299;
          }
        }
        else
        {
LABEL_297:
          v109 = MiUnlinkPageFromList(v95, 0);
        }
        v24 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_299:
        if ( !v109 )
        {
          MiDiscardTransitionPteEx(v95, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v8 = v174;
          goto LABEL_277;
        }
        v111 = *(_QWORD *)(v95 + 8);
        v112 = *(_BYTE *)(v95 + 34) & 0xFE;
        ++*(_WORD *)(v95 + 32);
        *(_BYTE *)(v95 + 34) = v112 | 6;
        v113 = (_QWORD *)(v111 | 0x8000000000000000uLL);
        v114 = *(_QWORD *)v98;
        v115 = 0xFFFFF6FB7DBED000uLL;
        if ( v98 >= 0xFFFFF6FB7DBED000uLL
          && v98 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v114 & 1) != 0
          && ((v114 & 0x20) == 0 || (v114 & 0x42) == 0) )
        {
          v116 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v116 )
          {
            v117 = v114 | 0x20;
            v118 = *((_QWORD *)&v116->Flink + ((v98 >> 3) & 0x1FF));
            if ( (v118 & 0x20) == 0 )
              v117 = v114;
            LOBYTE(v114) = v117;
            if ( (v118 & 0x42) != 0 )
              LOBYTE(v114) = v117 | 0x42;
          }
        }
        v23 = (unsigned __int8)v114 >> 5;
        v119 = *(unsigned __int8 *)(v95 + 34) >> 6;
        if ( v119 != 1 )
        {
          if ( v119 )
          {
            if ( v119 == 2 )
              v23 = (unsigned int)v23 | 0x18;
          }
          else
          {
            v23 = (unsigned int)v23 | 8;
          }
        }
        v120 = (((v95 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
        v121 = v120 | MmProtectToPteMask[v23] & 0xFFFF000000000E7FuLL | 0x21;
        v8 = v174;
        if ( v174 < 0xFFFFF68000000000uLL || v174 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v122 = v120 | MmProtectToPteMask[v23] & 0xFFFF000000000E7FuLL | 0x121;
        }
        else
        {
          if ( v174 >= 0xFFFFF6FB40000000uLL && v174 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v174 == 0xFFFFF6FB7DBEDF68uLL )
              v121 = v120 | MmProtectToPteMask[v23] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
            else
              v121 &= v24;
            if ( (unsigned int)MiUserPdeOrAbove(v174) )
              v121 |= 4uLL;
          }
          if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
            v121 |= 4uLL;
          v122 = v121 | 0x100;
          if ( !(unsigned int)MiIsAddressGlobal((__int64)(v8 << 25) >> 16) )
            v122 = v23;
        }
        v97 = v122 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140C4E048 & 1 | 0xA000000000000LL) << 8);
        v123 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v113 >= v115 && (unsigned __int64)v113 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) )
              v97 |= 0x8000000000000000uLL;
            *v113 = v97;
            MiWritePteShadow((__int64)v113, v97);
            v115 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_341;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            v97 |= 0x8000000000000000uLL;
        }
        *v113 = v97;
LABEL_341:
        v6 = BugCheckParameter1;
        *(_QWORD *)(v95 + 24) = *(_QWORD *)(v95 + 24) & 0xC000000000000000uLL | 1;
        PteShadow = *(_QWORD *)v6;
        if ( v6 >= v115 && v6 <= v123 )
          PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
        LODWORD(v35) = v190;
        ValidPte = PteShadow;
        goto LABEL_345;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v7, v168);
      v168 = 17;
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
      v17 = v179;
      v32 = 0LL;
      v5 = v170;
      v6 = 0LL;
      v28 = 0xFFFFFFFFFLL;
    }
    else
    {
LABEL_113:
      if ( qword_140C4DF80 && (v42 & 0x10) == 0 )
        v42 &= ~qword_140C4DF80;
      v46 = v42 >> 16;
      if ( (unsigned int)MiControlAreaUsingExtents(v192) || (v172 & 1) == 0 )
        goto LABEL_357;
      MiInitializePageColorBase(0LL, (*(_DWORD *)(v47 + 56) >> 20) & 0x3F, (__int64)&v193);
      v48 = _InterlockedExchangeAdd((volatile signed __int32 *)v193, 1u);
      Page = MiGetPage(v191, DWORD2(v193) & (unsigned int)v48 | HIDWORD(v193), 2LL);
      v50 = Page;
      if ( Page == -1 )
      {
        v8 = v174;
LABEL_357:
        if ( (v172 & 2) == 0 )
        {
          if ( v168 != 17 )
          {
            MiUnlockProtoPoolPage(v7, v168);
            v168 = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v132 = BYTE4(CurrentThread[1].Queue);
          v133 = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v134 = v132 + 4 * v133;
          v135 = (__int64)(v186 - v8) >> 3;
          if ( (unsigned int)v135 > v133 )
          {
            if ( (unsigned int)v135 > 0xF )
              LODWORD(v135) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v135;
          }
          v136 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16, 0, 0LL);
          if ( v136 < 0 )
          {
            v137 = v175;
            if ( v175 >= 0 )
              v137 = v136;
            v175 = v137;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v134 >> 2;
          BYTE4(CurrentThread[1].Queue) = v134 & 3;
        }
        v171 = 0;
LABEL_370:
        v32 = 0LL;
LABEL_371:
        v138 = 0LL;
        goto LABEL_372;
      }
      v51 = 48 * Page - 0x58000000000LL;
      v180 = (volatile signed __int64 *)v51;
      v52 = MI_READ_PTE_LOCK_FREE(&v178);
      v53 = MiProtectionToCacheAttribute((v52 >> 5) & 0x1F);
      v54 = MiPfnZeroingNeeded(v51, v53);
      v55 = v168;
      if ( v54 )
      {
        if ( v168 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v168);
          v55 = 17;
          v168 = 17;
        }
        MiZeroPhysicalPage(v50, 1, v53);
        *(_QWORD *)(v51 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      }
      v6 = BugCheckParameter1;
      if ( v55 == 17 )
      {
        v7 = MiLockProtoPoolPage(BugCheckParameter1, &v168);
        if ( !v7 )
        {
          do
          {
            MmAccessFault(2uLL, v6, 0, 0LL);
            v7 = MiLockProtoPoolPage(v6, &v168);
          }
          while ( !v7 );
          v51 = (__int64)v180;
        }
        v56 = MI_READ_PTE_LOCK_FREE(v6);
        v178 = v56;
        if ( (v56 & 1) != 0 || (v56 & 0x800) != 0 && (v56 & 0x400) == 0 )
        {
          MiUnlockProtoPoolPage(v7, v168);
          MiReleaseFreshPage(v51);
          v8 = v174;
          v168 = 17;
          goto LABEL_277;
        }
      }
      MiReferenceControlAreaPfn(v192, v46, 1u);
      v125 = MI_READ_PTE_LOCK_FREE(&v178);
      v126 = (v125 >> 5) & 0x1F;
      MiInitializePfn(v51, (__int64 *)v6, (v125 >> 5) & 0x1F, 18);
      v127 = v50;
      v8 = v174;
      ValidPte = MiMakeValidPte(v174, v127, (unsigned int)v126 | 0x20000000);
      v128 = ValidPte;
      v129 = ValidPte;
      if ( (unsigned int)MiPteInShadowRange(v6) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v130 = v129;
          if ( !HIBYTE(word_140C4E048) && (v128 & 1) != 0 )
            v130 = v129 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v130;
          MiWritePteShadow(v6, v130);
          v32 = 0LL;
          goto LABEL_406;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v128 & 1) != 0 )
        {
          v129 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v129;
      v32 = 0LL;
      while ( 1 )
      {
LABEL_406:
        v142 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v142 <= 0xFu )
        {
          v24 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
          v97 = (-1LL << (v142 + 1)) & 4;
          v23 = (unsigned int)v97 | *(_DWORD *)(v24 + 20);
          *(_DWORD *)(v24 + 20) = v23;
        }
        v17 = v179;
        v183 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v183, v97, v23, v24);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
        Process = *(_QWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 24) = Process ^ ((Process + 1) ^ Process) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v143 = KeGetCurrentIrql();
            if ( v143 <= 0xFu && v142 <= 0xFu && v143 >= 2u )
            {
              v144 = KeGetCurrentPrcb();
              Process = -1LL << (v142 + 1);
              v24 = (unsigned __int64)v144->SchedulerAssist;
              v145 = ~(unsigned __int16)Process;
              v75 = (v145 & *(_DWORD *)(v24 + 20)) == 0;
              v23 = (unsigned int)v145 & *(_DWORD *)(v24 + 20);
              *(_DWORD *)(v24 + 20) = v23;
              if ( v75 )
                KiRemoveSystemWorkPriorityKick(v144);
            }
          }
        }
        __writecr8(v142);
        if ( (v35 & 1) != 0 )
        {
          v146 = MI_READ_PTE_LOCK_FREE(&ValidPte);
          v147 = MiMakeValidPte(v8, (v146 >> 12) & 0xFFFFFFFFFLL, 536870913LL);
        }
        else
        {
          v147 = ValidPte;
          if ( (v172 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
            v147 = ValidPte | 0x42;
        }
        v138 = v147 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4E048 & 1) << 8);
LABEL_372:
        v8 += 8LL;
        ValidPte = v138;
        if ( (unsigned int)v35 >= 2 )
        {
          v138 &= ~1uLL;
          ValidPte = v138;
        }
        v5 = v170;
        if ( v170 || v138 )
        {
          v196[v170] = v138;
          v170 = ++v5;
          if ( v5 == 16 )
          {
            if ( v168 != 17 )
            {
              MiUnlockProtoPoolPage(v7, v168);
              v168 = 17;
            }
            MiMakeSystemCacheRangeValid(v8 - 128, (unsigned __int64)v196, 0x10u, v17);
            v5 = 0;
            v170 = 0;
          }
        }
        if ( !v187 )
          break;
        v139 = *(_QWORD *)(v6 + 8);
        v6 += 8LL;
        v24 = 0xFFFFF6FB7DBED000uLL;
        --v187;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v139 & 1) != 0
          && ((v139 & 0x20) == 0 || (v139 & 0x42) == 0) )
        {
          v23 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v23 )
          {
            v140 = *(_QWORD *)(v23 + 8 * ((v6 >> 3) & 0x1FF));
            v23 = v139 | 0x20;
            if ( (v140 & 0x20) == 0 )
              v23 = v139;
            v139 = v23;
            if ( (v140 & 0x42) != 0 )
              v139 = v23 | 0x42;
          }
        }
        ValidPte = v139;
        v97 = *(_QWORD *)v8;
        if ( v8 >= v24
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v97 & 1) != 0
          && ((v97 & 0x20) == 0 || (v97 & 0x42) == 0) )
        {
          v23 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v23 )
          {
            v141 = *(_QWORD *)(v23 + 8 * ((v8 >> 3) & 0x1FF));
            v23 = v97 | 0x20;
            if ( (v141 & 0x20) == 0 )
              v23 = v97;
            v97 = v23;
            if ( (v141 & 0x42) != 0 )
              v97 = v23 | 0x42;
          }
        }
        v188 = v97;
        if ( (v97 & 1) != 0 )
          LODWORD(v35) = 2;
        else
          LODWORD(v35) = (v97 & 8) != 0;
      }
      v174 = v8;
      v28 = 0xFFFFFFFFFLL;
    }
  }
  if ( v168 != 17 )
  {
    v184 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v184, Process, v23, v24);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_BYTE *)(v7 + 34) &= ~0x20u;
    v148 = *(_WORD *)(v7 + 32);
    if ( !v148 )
      MiBadRefCount(v7);
    v149 = v148 - 1;
    *(_WORD *)(v7 + 32) = v149;
    if ( !v149 && MiIsPfnFileOnly(v7) )
      goto LABEL_467;
    if ( (unsigned int)MiAreChargesNeededToLockPage(v7) )
    {
      v150 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
      if ( v150 > 0xFFFFF6BFFFFFFF78uLL || v150 < 0xFFFFF68000000000uLL )
      {
        v151 = *(_BYTE *)(v7 + 35);
        if ( (v151 & 0x20) != 0 )
        {
          *(_BYTE *)(v7 + 35) = v151 & 0xDF;
          goto LABEL_466;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v7) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v155 = 1LL;
        v156 = 1;
      }
      else if ( v152 <= v153 && v152 >= v154 && (*(_BYTE *)(v7 + 35) & 0x20) != 0 )
      {
        v155 = 1LL;
        v156 = 1;
      }
      else
      {
        v155 = 1LL;
        if ( v149 )
        {
          v156 = 0;
        }
        else
        {
          if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
            v32 = 1LL;
          v180 = (volatile signed __int64 *)v32;
          v156 = v32;
        }
      }
      v157 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v158 = *(_QWORD *)(qword_140C4E688 + 8 * v157);
      if ( v156 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * v157), 1LL);
      if ( (ULONG_PTR *)v158 != &MiSystemPartition )
        goto LABEL_464;
      v159 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v159->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_464;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v161 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&v159->CachedResidentAvailable,
                   CachedResidentAvailable + 1,
                   CachedResidentAvailable);
          v75 = (_DWORD)CachedResidentAvailable == v161;
          LODWORD(CachedResidentAvailable) = v161;
          if ( v75 )
            goto LABEL_465;
        }
        while ( v161 != -1 && (unsigned __int64)(v161 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v159->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v155 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v155 )
LABEL_464:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v158 + 7168), v155);
LABEL_465:
      v5 = v170;
LABEL_466:
      if ( !v149 )
LABEL_467:
        MiPfnReferenceCountIsZero(v7, (v7 + 0x58000000000LL) / 48);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v162 = KeGetCurrentIrql(), v162 <= 0xFu) )
    {
      v163 = v168;
      if ( v168 <= 0xFu && v162 >= 2u )
      {
        v164 = KeGetCurrentPrcb();
        v165 = v164->SchedulerAssist;
        v163 = v168;
        v166 = ~(unsigned __int16)(-1LL << (v168 + 1));
        v75 = (v166 & v165[5]) == 0;
        v165[5] &= v166;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v164);
      }
    }
    else
    {
      v163 = v168;
    }
    __writecr8(v163);
  }
  if ( v5 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v5, (unsigned __int64)v196, v5, v17);
  if ( v194 )
    *v194 = v171;
  return (unsigned int)v175;
}
