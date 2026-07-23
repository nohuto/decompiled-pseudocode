/*
 * XREFs of MmCheckCachedPageStates @ 0x140288A80
 * Callers:
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     CcPinFileData @ 0x140286B20 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x140287F20 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1402888D0 (CcMapAndRead.c)
 *     CcMapDataForOverwrite @ 0x1402FFAB8 (CcMapDataForOverwrite.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiInitializePfn @ 0x1402253F0 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiControlAreaUsingExtents @ 0x14027D210 (MiControlAreaUsingExtents.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiUnlinkStandbyBatch @ 0x14027FFE0 (MiUnlinkStandbyBatch.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiLockOwnedProtoPage @ 0x140282FE0 (MiLockOwnedProtoPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnCommitNotCharged @ 0x140285FB0 (MiIsPfnCommitNotCharged.c)
 *     MiIsAddressGlobal @ 0x140286000 (MiIsAddressGlobal.c)
 *     MiMakeSystemCacheRangeValid @ 0x140286080 (MiMakeSystemCacheRangeValid.c)
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiReferenceControlAreaPfn @ 0x1402B875C (MiReferenceControlAreaPfn.c)
 *     MiMarkPteDirty @ 0x1402BD9E0 (MiMarkPteDirty.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiPfnZeroingNeeded @ 0x140349390 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x1403510C0 (MiZeroPhysicalPage.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403ED8CC (MiBadRefCount.c)
 *     MiFreeTransitionPageHeatList @ 0x140559B04 (MiFreeTransitionPageHeatList.c)
 *     MiMakeTransitionHeatBatch @ 0x140559F80 (MiMakeTransitionHeatBatch.c)
 *     MiProcessTransitionHeatBatch @ 0x14055A30C (MiProcessTransitionHeatBatch.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055A570 (MiReplenishTransitionPageHeatList.c)
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
  struct _LIST_ENTRY *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  struct _LIST_ENTRY *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r9
  struct _LIST_ENTRY *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rdx
  __int64 Process; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rdi
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rcx
  __int64 v33; // r12
  struct _LIST_ENTRY *v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  ULONG_PTR v38; // rbx
  __int64 v39; // r14
  unsigned __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rcx
  signed __int32 v45; // eax
  __int64 Page; // rax
  ULONG_PTR v47; // r15
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  unsigned int v50; // eax
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // di
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned __int64 *v58; // r12
  __int64 v59; // rsi
  unsigned __int64 v60; // rbx
  _DWORD *SchedulerAssist; // r8
  __int64 v62; // r9
  int v63; // r14d
  struct _LIST_ENTRY *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rbx
  unsigned __int8 CurrentIrql; // r15
  unsigned __int64 v68; // rax
  struct _LIST_ENTRY *v69; // r8
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
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // r15
  ULONG_PTR v105; // rbx
  __int64 PfnPriority; // r14
  int v107; // esi
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
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
  unsigned __int64 v124; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v126; // rax
  __int64 v127; // rbx
  ULONG_PTR v128; // rdx
  char v129; // di
  unsigned __int64 v130; // rbx
  __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  int v135; // eax
  unsigned int v136; // ecx
  unsigned int v137; // edi
  __int64 v138; // rax
  int v139; // eax
  int v140; // ecx
  unsigned __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rax
  __int64 v144; // rax
  unsigned __int8 v145; // bl
  unsigned __int8 v146; // al
  struct _KPRCB *v147; // r10
  int v148; // eax
  unsigned __int64 v149; // rax
  __int64 v150; // rcx
  __int16 v151; // bx
  __int16 v152; // bx
  unsigned __int64 v153; // rdx
  char v154; // al
  unsigned __int64 v155; // rdx
  unsigned __int64 v156; // r8
  unsigned __int64 v157; // r9
  unsigned __int64 v158; // r14
  int v159; // r12d
  __int64 v160; // rcx
  __int64 v161; // rdi
  struct _KPRCB *v162; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v164; // eax
  unsigned __int8 v165; // al
  unsigned __int8 v166; // bl
  struct _KPRCB *v167; // r9
  _DWORD *v168; // r8
  int v169; // eax
  unsigned __int8 v171; // [rsp+30h] [rbp-198h] BYREF
  char i; // [rsp+31h] [rbp-197h]
  unsigned int v173; // [rsp+34h] [rbp-194h]
  char v174; // [rsp+38h] [rbp-190h]
  int v175; // [rsp+3Ch] [rbp-18Ch]
  __int64 ValidPte; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v177; // [rsp+48h] [rbp-180h]
  int v178; // [rsp+50h] [rbp-178h]
  unsigned __int64 v179; // [rsp+58h] [rbp-170h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-168h]
  __int64 v181; // [rsp+68h] [rbp-160h] BYREF
  __int64 v182; // [rsp+70h] [rbp-158h]
  _BYTE *v183; // [rsp+78h] [rbp-150h]
  int v184; // [rsp+80h] [rbp-148h] BYREF
  int v185; // [rsp+84h] [rbp-144h] BYREF
  int v186; // [rsp+88h] [rbp-140h] BYREF
  int v187; // [rsp+8Ch] [rbp-13Ch] BYREF
  ULONG_PTR v188; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v189; // [rsp+98h] [rbp-130h]
  __int64 v190; // [rsp+A0h] [rbp-128h]
  unsigned __int64 v191; // [rsp+A8h] [rbp-120h] BYREF
  unsigned __int64 v192; // [rsp+B0h] [rbp-118h] BYREF
  __int64 v193; // [rsp+B8h] [rbp-110h]
  __int64 v194; // [rsp+C0h] [rbp-108h]
  __int64 v195; // [rsp+C8h] [rbp-100h]
  __int128 v196; // [rsp+D0h] [rbp-F8h] BYREF
  char *v197; // [rsp+E0h] [rbp-E8h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-E0h] BYREF
  _QWORD v199[16]; // [rsp+100h] [rbp-C8h] BYREF

  v197 = a4;
  v175 = a3;
  v188 = 0LL;
  ValidPte = 0LL;
  v181 = 0LL;
  v174 = 1;
  v196 = 0LL;
  v178 = 0;
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0LL;
  v173 = 0;
  v7 = 0LL;
  v171 = 17;
  v190 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v177 = v8;
  v189 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
      v9 = v10 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v9 = v10;
      v10 = v9;
      if ( (v12 & 0x42) != 0 )
        v10 = v9 | 0x42;
    }
  }
  v191 = v10;
  if ( (unsigned int)MiPteInShadowRange(&v191, v9)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    v13 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v13 )
    {
      v14 = *((_QWORD *)&v13->Flink + (((unsigned __int64)&v191 >> 3) & 0x1FF));
      v15 = v10 | 0x20;
      if ( (v14 & 0x20) == 0 )
        v15 = v10;
      v10 = v15;
      if ( (v14 & 0x42) != 0 )
        v10 = v15 | 0x42;
    }
  }
  v16 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v182 = v16;
  v17 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v18 = *(_QWORD *)v17;
  if ( v17 >= 0xFFFFF6FB7DBED000uLL
    && v17 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v20 = *((_QWORD *)&v19->Flink + ((v17 >> 3) & 0x1FF));
      v17 = v18 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v17 = v18;
      v18 = v17;
      if ( (v20 & 0x42) != 0 )
        v18 = v17 | 0x42;
    }
  }
  v192 = v18;
  if ( (unsigned int)MiPteInShadowRange(&v192, v17)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v18 & 1) != 0
    && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
  {
    v23 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v23 )
    {
      v24 = *((_QWORD *)&v23->Flink + (((unsigned __int64)&v192 >> 3) & 0x1FF));
      v25 = v18 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v18;
      v18 = v25;
      if ( (v24 & 0x42) != 0 )
        v18 = v25 | 0x42;
    }
  }
  v26 = 0xFFFFFFFFFLL;
  v27 = *(_QWORD *)(48 * ((v18 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFF0LL);
  if ( v27 )
    v27 += 40 * ((a1 >> 18) & 7);
  Process = *(_QWORD *)(v27 + 24);
  v29 = (__int64 *)(Process & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (Process & 1) == 0 )
    v29 = (__int64 *)Process;
  v195 = *v29;
  v30 = 0LL;
  v194 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v195 + 60) & 0x3FF));
  while ( 1 )
  {
    v31 = 0xFFFFFA8000000028uLL;
    if ( v8 > v189 )
      break;
    v32 = *(_QWORD *)v8;
    LODWORD(v33) = 0;
    Process = *(_QWORD *)v8;
    v22 = 0xFFFFF6FB7DBED000uLL;
    v21 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (Process & 1) != 0
        && ((Process & 0x20) == 0 || (Process & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v34 )
        {
          Process |= 0x20uLL;
          v35 = *((_QWORD *)&v34->Flink + ((v8 >> 3) & 0x1FF));
          if ( (v35 & 0x20) == 0 )
            Process = *(_QWORD *)v8;
          if ( (v35 & 0x42) != 0 )
            Process |= 0x42uLL;
        }
      }
      v21 = 0xFFFFF6FB7DBED7F8uLL;
      v22 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (Process & 1) != 0 )
    {
      if ( (v175 & 4) == 0 )
        goto LABEL_371;
      v36 = v171;
      if ( v171 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v171, 0xFFFFF6FB7DBED7F8uLL, 0xFFFFF6FB7DBED000uLL);
        v171 = 17;
      }
LABEL_70:
      MiMarkPteDirty(v8, v36, v21);
      goto LABEL_371;
    }
    if ( v8 >= 0xFFFFF6FB7DBED000uLL && v8 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Process + 912) != 1 && (v32 & 1) != 0 && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v21 = *(_QWORD *)(Process + 1928);
        if ( v21 )
        {
          v37 = *(_QWORD *)(v21 + 8 * ((v8 >> 3) & 0x1FF));
          v21 = v32 | 0x20;
          Process = (unsigned __int8)v37;
          LOBYTE(Process) = v37 & 0x20;
          if ( (v37 & 0x20) == 0 )
            v21 = *(_QWORD *)v8;
          v32 = v21;
          if ( (v37 & 0x42) != 0 )
            v32 = v21 | 0x42;
        }
      }
    }
    ValidPte = v32;
    if ( (v32 & 1) != 0 )
    {
      if ( (v175 & 4) == 0 )
        goto LABEL_371;
      v36 = v171;
      if ( v171 != 17 )
      {
        MiUnlockProtoPoolPage(v7, v171, v21, 0xFFFFF6FB7DBED000uLL);
        v171 = 17;
      }
      goto LABEL_70;
    }
    v38 = v6;
    v33 = (v32 >> 3) & 1;
    v39 = v32;
    v193 = v33;
    if ( qword_140C4DE80 && (v32 & 0x10) == 0 )
      v39 = v32 & ~qword_140C4DE80;
    Process = v171;
    v40 = v38 & 0xFFFFFFFFFFFFF000uLL;
    v6 = v39 >> 16;
    BugCheckParameter1 = v6;
    if ( v171 != 17 )
    {
      if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == v40 )
        goto LABEL_219;
      MiUnlockProtoPoolPage(v7, v171, v21, 0xFFFFF6FB7DBED000uLL);
      v171 = 17;
    }
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) != v40 )
    {
      Process = v173;
      if ( v173 )
      {
        MiMakeSystemCacheRangeValid(v8 - 8LL * v173, (unsigned __int64)v199, v173, v16);
        v173 = 0;
      }
    }
    v41 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v41 & 1) != 0
      && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v42 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v41 | 0x20;
        if ( (v42 & 0x20) == 0 )
          Process = *(_QWORD *)v6;
        v41 = Process;
        if ( (v42 & 0x42) != 0 )
          v41 = Process | 0x42;
      }
    }
    v181 = v41;
    if ( (v41 & 1) == 0 && ((v41 & 0x400) != 0 || (v41 & 0x800) == 0) )
    {
      v7 = 0LL;
      goto LABEL_113;
    }
    v58 = (unsigned __int64 *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    while ( 2 )
    {
      v179 = *v58;
      v59 = v179 & 1;
      do
      {
        if ( !v59 )
          goto LABEL_177;
        v60 = v179;
        if ( (v179 & 0x200) != 0 )
          goto LABEL_177;
        v63 = MiPteInShadowRange(&v179, Process);
        if ( v63
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
        {
          v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v64 )
          {
            v65 = *((_QWORD *)&v64->Flink + (((unsigned __int64)&v179 >> 3) & 0x1FF));
            if ( (v65 & 0x20) != 0 )
              v60 |= 0x20uLL;
            if ( (v65 & 0x42) != 0 )
              v60 |= 0x42uLL;
          }
          else
          {
            v60 = v179;
          }
        }
        v66 = (v60 >> 12) & 0xFFFFFFFFFLL;
        Process = 6 * v66;
      }
      while ( (*(_QWORD *)(48 * v66 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
      v7 = 48 * v66 - 0x58000000000LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        Process = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
        SchedulerAssist[5] = Process;
      }
      v184 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v184, Process, (__int64)SchedulerAssist, v62);
        while ( *(__int64 *)(v7 + 24) < 0 );
      }
      v68 = *v58;
      v179 = v68;
      if ( (v68 & 1) == 0 || (v68 & 0x200) != 0 )
        goto LABEL_168;
      if ( v63
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
      {
        v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v69 )
        {
          v70 = *((_QWORD *)&v69->Flink + (((unsigned __int64)&v179 >> 3) & 0x1FF));
          if ( (v70 & 0x20) != 0 )
            v68 |= 0x20uLL;
          if ( (v70 & 0x42) != 0 )
            v68 |= 0x42uLL;
        }
        else
        {
          v68 = v179;
        }
      }
      if ( v66 != ((v68 >> 12) & 0xFFFFFFFFFLL) )
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
    if ( (unsigned int)MI_PFN_IS_PROTO(v7, Process, v21) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
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
    v82 = *(ULONG_PTR **)(qword_140C4E588 + 8 * v81);
    if ( v78 && !(unsigned int)MiChargeCommit(*(_QWORD *)(qword_140C4E588 + 8 * v81), 1uLL, 4u) )
      goto LABEL_195;
    if ( v82 == &MiSystemPartition )
    {
      Process = (__int64)KeGetCurrentPrcb();
      v83 = *(_DWORD *)(Process + 33564);
      while ( v83 )
      {
        if ( v83 == -1 )
          break;
        v32 = (unsigned int)(v83 - 1);
        v84 = v83;
        v83 = _InterlockedCompareExchange((volatile signed __int32 *)(Process + 33564), v32, v83);
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
      MiLockOwnedProtoPage(v7, Process, v21, v76);
    }
    else
    {
      v85 = (_BYTE *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL);
      v171 = CurrentIrql;
      v86 = *(_BYTE *)(v7 + 34);
      i = 0;
      v183 = v85;
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
                v32 = (unsigned int)CurrentIrql + 1;
                v76 = v88->SchedulerAssist;
                Process = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v75 = ((unsigned int)Process & v76[5]) == 0;
                v21 = (unsigned int)Process & v76[5];
                v76[5] = v21;
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
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32, Process, v21, v76) )
            {
              HvlNotifyLongSpinWait(v89);
            }
            else
            {
              _mm_pause();
            }
          }
          MiLockPageInline(v7, Process, v21);
          v86 = *(_BYTE *)(v7 + 34);
        }
        while ( (v86 & 0x20) != 0 );
        v85 = v183;
      }
      *(_BYTE *)(v7 + 34) = v86 | 0x20;
      if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) == 0 && (*v85 & 0x20) == 0 )
        MiWriteValidPteVolatile(v85, 1LL, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v16 = v182;
    v30 = 0LL;
    v6 = BugCheckParameter1;
    v26 = 0xFFFFFFFFFLL;
    LODWORD(v33) = v193;
    v8 = v177;
    v31 = 0xFFFFFA8000000028uLL;
    v22 = 0xFFFFF6FB7DBED000uLL;
LABEL_219:
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_371;
    v41 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v32, Process)
      && (v41 & 1) != 0
      && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
    {
      v32 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      Process = *(_QWORD *)(v32 + 1928);
      if ( Process )
      {
        v90 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v41 | 0x20;
        v32 = (unsigned __int8)v90;
        LOBYTE(v32) = v90 & 0x20;
        if ( (v90 & 0x20) == 0 )
          Process = v41;
        v41 = Process;
        if ( (v90 & 0x42) != 0 )
          v41 = Process | 0x42;
      }
    }
    v181 = v41;
    if ( (v41 & 1) == 0 && ((v41 & 0x400) != 0 || (v41 & 0x800) == 0) )
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
        Process = 6 * (v26 & (v92 >> 12));
        v32 = *(_QWORD *)(v31 + 48 * (v26 & (v92 >> 12)));
        if ( (v32 & 0x4000000000000LL) != 0 )
        {
          v93 = 48 * (v26 & (v92 >> 12)) - 0x58000000000LL;
          v185 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v185, Process, v21, v22);
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
      if ( !v91 || !qword_140C4DE80 || (v91 & qword_140C4DE80) != 0 )
      {
        v92 = *(_QWORD *)v6;
        if ( qword_140C4DE80 && (v91 & 0x10) == 0 )
          v92 = v91 & ~qword_140C4DE80;
        goto LABEL_244;
      }
    }
    v93 = 0LL;
LABEL_252:
    v41 = *(_QWORD *)v6;
    if ( v6 >= 0xFFFFF6FB7DBED000uLL
      && v6 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v32, Process)
      && (v41 & 1) != 0
      && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Process )
      {
        v94 = *(_QWORD *)(Process + 8 * ((v6 >> 3) & 0x1FF));
        Process = v41 | 0x20;
        if ( (v94 & 0x20) == 0 )
          Process = v41;
        v41 = Process;
        if ( (v94 & 0x42) != 0 )
          v41 = Process | 0x42;
      }
    }
    v181 = v41;
    if ( v93 )
    {
      if ( (v41 & 1) != 0 )
      {
        v75 = (*(_BYTE *)(v93 + 35) & 0x40) == 0;
        ValidPte = v41;
        if ( !v75 )
          goto LABEL_266;
        v95 = 0x3FFFFFFFFFFFFFFFLL;
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
      v96 = v93 + 16;
      v97 = *(_QWORD *)(v93 + 16) >> 11;
      v98 = ((__int64)(v189 - v8) >> 3) + 1;
      if ( (*(_QWORD *)(v93 + 16) & 0x400LL) == 0 )
        v97 = *(_QWORD *)(v93 + 16) >> 3;
      if ( (v97 & 1) == 0
        || (TransitionHeatBatch = (_SLIST_ENTRY *)MiMakeTransitionHeatBatch(v93, 0LL, ((__int64)(v189 - v8) >> 3) + 1)) == 0LL )
      {
        if ( (*(_BYTE *)(v93 + 34) & 7) != 2
          || v98 <= 1
          || MiIsPfnFromSlabAllocation(v93) && !*(_WORD *)(v93 + 32) && *(__int64 *)v93 < 0 )
        {
          goto LABEL_297;
        }
        v102 = *(_QWORD *)v96;
        if ( qword_140C4DE80 && (v102 & 0x10) == 0 )
          v102 &= ~qword_140C4DE80;
        if ( (__int64)(*(_QWORD *)((v102 >> 16) + 8) + 8LL * *(unsigned int *)((v102 >> 16) + 0x2C) - v6) >> 3 < v98 )
          v98 = (__int64)(*(_QWORD *)((v102 >> 16) + 8) + 8LL * *(unsigned int *)((v102 >> 16) + 0x2C) - v6) >> 3;
        v103 = (unsigned __int64)(4096 - (unsigned int)(v6 & 0xFFF)) >> 3;
        if ( v98 <= v103 )
          v103 = v98;
        v104 = 16 - v173;
        if ( v103 <= v104 )
          v104 = v103;
        if ( v104 > 1 )
        {
          v105 = 0LL;
          v188 = 0LL;
          PfnPriority = (unsigned int)MiGetPfnPriority(v93);
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v194 + 8 * (PfnPriority + 4 * (PfnPriority + 77)));
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
          v107 = MiUnlinkPageFromList(v93, 1);
          if ( v107 == 1 )
          {
            v108 = MiUnlinkStandbyBatch((__int64)&v188, BugCheckParameter1 + 8, PfnPriority, v177, v104 - 1, &v188);
            v105 = v188;
            v190 = v108;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          if ( v105 )
          {
            MiDiscardTransitionPteEx(v105, 0LL);
            v22 = 0x7FFFFFFFFFFFFFFFLL;
            _InterlockedAnd64((volatile signed __int64 *)(v105 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_299;
          }
        }
        else
        {
LABEL_297:
          v107 = MiUnlinkPageFromList(v93, 0);
        }
        v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_299:
        if ( !v107 )
        {
          MiDiscardTransitionPteEx(v93, 0LL);
          _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v8 = v177;
          goto LABEL_277;
        }
        v111 = *(_QWORD *)(v93 + 8);
        v112 = *(_BYTE *)(v93 + 34) & 0xFE;
        ++*(_WORD *)(v93 + 32);
        *(_BYTE *)(v93 + 34) = v112 | 6;
        v113 = (_QWORD *)(v111 | 0x8000000000000000uLL);
        v114 = *(_QWORD *)v96;
        v115 = 0xFFFFF6FB7DBED000uLL;
        if ( v96 >= 0xFFFFF6FB7DBED000uLL
          && v96 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v110, v109)
          && (v114 & 1) != 0
          && ((v114 & 0x20) == 0 || (v114 & 0x42) == 0) )
        {
          v116 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v116 )
          {
            v117 = v114 | 0x20;
            v118 = *((_QWORD *)&v116->Flink + ((v96 >> 3) & 0x1FF));
            if ( (v118 & 0x20) == 0 )
              v117 = v114;
            LOBYTE(v114) = v117;
            if ( (v118 & 0x42) != 0 )
              LOBYTE(v114) = v117 | 0x42;
          }
        }
        v21 = (unsigned __int8)v114 >> 5;
        v119 = *(unsigned __int8 *)(v93 + 34) >> 6;
        if ( v119 != 1 )
        {
          if ( v119 )
          {
            if ( v119 == 2 )
              v21 = (unsigned int)v21 | 0x18;
          }
          else
          {
            v21 = (unsigned int)v21 | 8;
          }
        }
        v120 = v93 + 0x58000000000LL;
        v121 = (((v93 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12;
        v122 = v121 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x21;
        v8 = v177;
        if ( v177 < 0xFFFFF68000000000uLL || v177 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v123 = v121 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x121;
        }
        else
        {
          if ( v177 >= 0xFFFFF6FB40000000uLL && v177 <= 0xFFFFF6FB7FFFFFFFuLL )
          {
            if ( v177 == 0xFFFFF6FB7DBEDF68uLL )
              v122 = v121 | MmProtectToPteMask[v21] & 0xFFFF000000000E7FuLL | 0x8000000000000021uLL;
            else
              v122 &= v22;
            if ( (unsigned int)MiUserPdeOrAbove(v177, v121, v21, v22) )
              v122 |= 4uLL;
          }
          if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
            v122 |= 4uLL;
          v123 = v122 | 0x100;
          if ( !(unsigned int)MiIsAddressGlobal((__int64)(v8 << 25) >> 16) )
            v123 = v21;
        }
        v95 = v123 & 0xFAFFFFFFFFFFFEFFuLL | ((word_140C4DF48 & 1 | 0xA000000000000LL) << 8);
        v124 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)v113 >= v115 && (unsigned __int64)v113 <= 0xFFFFF6FB7DBED7F8uLL )
        {
          if ( (unsigned int)MiPteHasShadow(v120, v95) )
          {
            if ( !HIBYTE(word_140C4DF48) )
              v95 |= 0x8000000000000000uLL;
            *v113 = v95;
            MiWritePteShadow(v113, v95);
            v115 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_341;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            v95 |= 0x8000000000000000uLL;
        }
        *v113 = v95;
LABEL_341:
        v6 = BugCheckParameter1;
        *(_QWORD *)(v93 + 24) = *(_QWORD *)(v93 + 24) & 0xC000000000000000uLL | 1;
        PteShadow = *(_QWORD *)v6;
        if ( v6 >= v115 && v6 <= v124 )
          PteShadow = MiReadPteShadow(v6, *(_QWORD *)v6);
        LODWORD(v33) = v193;
        ValidPte = PteShadow;
        goto LABEL_345;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v7, v171, v100, v101);
      v171 = 17;
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
      v16 = v182;
      v30 = 0LL;
      v5 = v173;
      v6 = 0LL;
      v26 = 0xFFFFFFFFFLL;
    }
    else
    {
LABEL_113:
      if ( qword_140C4DE80 && (v41 & 0x10) == 0 )
        v41 &= ~qword_140C4DE80;
      v43 = v41 >> 16;
      if ( MiControlAreaUsingExtents(v195) || (v175 & 1) == 0 )
        goto LABEL_357;
      MiInitializePageColorBase(0LL, (*(_DWORD *)(v44 + 56) >> 20) & 0x3F, &v196);
      v45 = _InterlockedExchangeAdd((volatile signed __int32 *)v196, 1u);
      Page = MiGetPage(v194, DWORD2(v196) & (unsigned int)v45 | HIDWORD(v196), 2LL);
      v47 = Page;
      if ( Page == -1 )
      {
        v8 = v177;
LABEL_357:
        if ( (v175 & 2) == 0 )
        {
          if ( v171 != 17 )
          {
            MiUnlockProtoPoolPage(v7, v171, v21, v22);
            v171 = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v135 = BYTE4(CurrentThread[1].Queue);
          v136 = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v137 = v135 + 4 * v136;
          v138 = (__int64)(v189 - v8) >> 3;
          if ( (unsigned int)v138 > v136 )
          {
            if ( (unsigned int)v138 > 0xF )
              LODWORD(v138) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v138;
          }
          v139 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16, 0, 0LL);
          if ( v139 < 0 )
          {
            v140 = v178;
            if ( v178 >= 0 )
              v140 = v139;
            v178 = v140;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v137 >> 2;
          BYTE4(CurrentThread[1].Queue) = v137 & 3;
        }
        v174 = 0;
LABEL_370:
        v30 = 0LL;
LABEL_371:
        v141 = 0LL;
        goto LABEL_372;
      }
      v48 = 48 * Page - 0x58000000000LL;
      v183 = (_BYTE *)v48;
      v49 = MI_READ_PTE_LOCK_FREE(&v181);
      v50 = MiProtectionToCacheAttribute((v49 >> 5) & 0x1F);
      v51 = MiPfnZeroingNeeded(v48, v50);
      v54 = v171;
      if ( v51 )
      {
        if ( v171 != 17 )
        {
          MiUnlockProtoPoolPage(v7, v171, v52, v53);
          v54 = 17;
          v171 = 17;
        }
        MiZeroPhysicalPage(v47);
        *(_QWORD *)(v48 + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
      }
      v6 = BugCheckParameter1;
      if ( v54 == 17 )
      {
        v7 = MiLockProtoPoolPage(BugCheckParameter1, (__int64)&v171);
        if ( !v7 )
        {
          do
          {
            MmAccessFault(2uLL, v6, 0, 0LL);
            v7 = MiLockProtoPoolPage(v6, (__int64)&v171);
          }
          while ( !v7 );
          v48 = (__int64)v183;
        }
        v55 = MI_READ_PTE_LOCK_FREE(v6);
        v181 = v55;
        if ( (v55 & 1) != 0 || (v55 & 0x800) != 0 && (v55 & 0x400) == 0 )
        {
          MiUnlockProtoPoolPage(v7, v171, v56, v57);
          MiReleaseFreshPage(v48);
          v8 = v177;
          v171 = 17;
          goto LABEL_277;
        }
      }
      MiReferenceControlAreaPfn(v195, v43, 1LL);
      v126 = MI_READ_PTE_LOCK_FREE(&v181);
      v127 = (v126 >> 5) & 0x1F;
      MiInitializePfn(v48, (unsigned __int64 *)v6, (v126 >> 5) & 0x1F, 18);
      v128 = v47;
      v8 = v177;
      ValidPte = MiMakeValidPte(v177, v128, (unsigned int)v127 | 0x20000000);
      v129 = ValidPte;
      v130 = ValidPte;
      if ( (unsigned int)MiPteInShadowRange(v6, v131) )
      {
        if ( (unsigned int)MiPteHasShadow(v132, v95) )
        {
          v133 = v130;
          if ( !HIBYTE(word_140C4DF48) && (v129 & 1) != 0 )
            v133 = v130 | 0x8000000000000000uLL;
          *(_QWORD *)v6 = v133;
          MiWritePteShadow(v6, v133);
          v30 = 0LL;
          goto LABEL_406;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v129 & 1) != 0 )
        {
          v130 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v130;
      v30 = 0LL;
      while ( 1 )
      {
LABEL_406:
        v145 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v145 <= 0xFu )
        {
          v22 = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
          v95 = (-1LL << (v145 + 1)) & 4;
          v21 = (unsigned int)v95 | *(_DWORD *)(v22 + 20);
          *(_DWORD *)(v22 + 20) = v21;
        }
        v16 = v182;
        v186 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v186, v95, v21, v22);
          while ( *(__int64 *)(v16 + 24) < 0 );
        }
        Process = *(_QWORD *)(v16 + 24);
        *(_QWORD *)(v16 + 24) = Process ^ ((Process + 1) ^ Process) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v146 = KeGetCurrentIrql();
            if ( v146 <= 0xFu && v145 <= 0xFu && v146 >= 2u )
            {
              v147 = KeGetCurrentPrcb();
              Process = -1LL << (v145 + 1);
              v22 = (unsigned __int64)v147->SchedulerAssist;
              v148 = ~(unsigned __int16)Process;
              v75 = (v148 & *(_DWORD *)(v22 + 20)) == 0;
              v21 = (unsigned int)v148 & *(_DWORD *)(v22 + 20);
              *(_DWORD *)(v22 + 20) = v21;
              if ( v75 )
                KiRemoveSystemWorkPriorityKick(v147);
            }
          }
        }
        __writecr8(v145);
        if ( (v33 & 1) != 0 )
        {
          v149 = MI_READ_PTE_LOCK_FREE(&ValidPte);
          v150 = MiMakeValidPte(v8, (v149 >> 12) & 0xFFFFFFFFFLL, 536870913LL);
        }
        else
        {
          v150 = ValidPte;
          if ( (v175 & 4) != 0 && (ValidPte & 0x42) == 0 && (ValidPte & 0x800) != 0 )
            v150 = ValidPte | 0x42;
        }
        v141 = v150 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140C4DF48 & 1) << 8);
LABEL_372:
        v8 += 8LL;
        ValidPte = v141;
        if ( (unsigned int)v33 >= 2 )
        {
          v141 &= ~1uLL;
          ValidPte = v141;
        }
        v5 = v173;
        if ( v173 || v141 )
        {
          v199[v173] = v141;
          v173 = ++v5;
          if ( v5 == 16 )
          {
            if ( v171 != 17 )
            {
              MiUnlockProtoPoolPage(v7, v171, v21, v22);
              v171 = 17;
            }
            MiMakeSystemCacheRangeValid(v8 - 128, (unsigned __int64)v199, 0x10u, v16);
            v5 = 0;
            v173 = 0;
          }
        }
        if ( !v190 )
          break;
        v142 = *(_QWORD *)(v6 + 8);
        v6 += 8LL;
        v22 = 0xFFFFF6FB7DBED000uLL;
        --v190;
        if ( v6 >= 0xFFFFF6FB7DBED000uLL
          && v6 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v142)
          && (v142 & 1) != 0
          && ((v142 & 0x20) == 0 || (v142 & 0x42) == 0) )
        {
          v21 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v21 )
          {
            v143 = *(_QWORD *)(v21 + 8 * ((v6 >> 3) & 0x1FF));
            v21 = v142 | 0x20;
            if ( (v143 & 0x20) == 0 )
              v21 = v142;
            v142 = v21;
            if ( (v143 & 0x42) != 0 )
              v142 = v21 | 0x42;
          }
        }
        ValidPte = v142;
        v95 = *(_QWORD *)v8;
        if ( v8 >= v22
          && v8 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v95)
          && (v95 & 1) != 0
          && ((v95 & 0x20) == 0 || (v95 & 0x42) == 0) )
        {
          v21 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v21 )
          {
            v144 = *(_QWORD *)(v21 + 8 * ((v8 >> 3) & 0x1FF));
            v21 = v95 | 0x20;
            if ( (v144 & 0x20) == 0 )
              v21 = v95;
            v95 = v21;
            if ( (v144 & 0x42) != 0 )
              v95 = v21 | 0x42;
          }
        }
        v191 = v95;
        if ( (v95 & 1) != 0 )
          LODWORD(v33) = 2;
        else
          LODWORD(v33) = (v95 & 8) != 0;
      }
      v177 = v8;
      v26 = 0xFFFFFFFFFLL;
    }
  }
  if ( v171 != 17 )
  {
    v187 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v187, Process, v21, v22);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    *(_BYTE *)(v7 + 34) &= ~0x20u;
    v151 = *(_WORD *)(v7 + 32);
    if ( !v151 )
      MiBadRefCount(v7);
    v152 = v151 - 1;
    *(_WORD *)(v7 + 32) = v152;
    if ( !v152 && MiIsPfnFileOnly(v7) )
      goto LABEL_467;
    if ( (unsigned int)MiAreChargesNeededToLockPage(v7) )
    {
      v153 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
      if ( v153 > 0xFFFFF6BFFFFFFF78uLL || v153 < 0xFFFFF68000000000uLL )
      {
        v154 = *(_BYTE *)(v7 + 35);
        if ( (v154 & 0x20) != 0 )
        {
          *(_BYTE *)(v7 + 35) = v154 & 0xDF;
          goto LABEL_466;
        }
      }
      if ( (unsigned int)MI_PFN_IS_PROTO(v7, v153, 0xFFFFF6BFFFFFFF78uLL) && (*(_DWORD *)(v7 + 16) & 0x400LL) != 0 )
      {
        v158 = 1LL;
        v159 = 1;
      }
      else if ( v155 <= v156 && v155 >= v157 && (*(_BYTE *)(v7 + 35) & 0x20) != 0 )
      {
        v158 = 1LL;
        v159 = 1;
      }
      else
      {
        v158 = 1LL;
        if ( v152 )
        {
          v159 = 0;
        }
        else
        {
          if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 )
            v30 = 1LL;
          v183 = (_BYTE *)v30;
          v159 = v30;
        }
      }
      v160 = (*(_QWORD *)(v7 + 40) >> 39) & 0x3FFLL;
      v161 = *(_QWORD *)(qword_140C4E588 + 8 * v160);
      if ( v159 == 1 )
        MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8 * v160), 1LL);
      if ( (ULONG_PTR *)v161 != &MiSystemPartition )
        goto LABEL_464;
      v162 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v162->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_464;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v164 = _InterlockedCompareExchange(
                   (volatile signed __int32 *)&v162->CachedResidentAvailable,
                   CachedResidentAvailable + 1,
                   CachedResidentAvailable);
          v75 = (_DWORD)CachedResidentAvailable == v164;
          LODWORD(CachedResidentAvailable) = v164;
          if ( v75 )
            goto LABEL_465;
        }
        while ( v164 != -1 && (unsigned __int64)(v164 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&v162->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v158 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v158 )
LABEL_464:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v161 + 7168), v158);
LABEL_465:
      v5 = v173;
LABEL_466:
      if ( !v152 )
LABEL_467:
        MiPfnReferenceCountIsZero(v7, (v7 + 0x58000000000LL) / 48);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v165 = KeGetCurrentIrql(), v165 <= 0xFu) )
    {
      v166 = v171;
      if ( v171 <= 0xFu && v165 >= 2u )
      {
        v167 = KeGetCurrentPrcb();
        v168 = v167->SchedulerAssist;
        v166 = v171;
        v169 = ~(unsigned __int16)(-1LL << (v171 + 1));
        v75 = (v169 & v168[5]) == 0;
        v168[5] &= v169;
        if ( v75 )
          KiRemoveSystemWorkPriorityKick(v167);
      }
    }
    else
    {
      v166 = v171;
    }
    __writecr8(v166);
  }
  if ( v5 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v5, (unsigned __int64)v199, v5, v16);
  if ( v197 )
    *v197 = v174;
  return (unsigned int)v178;
}
