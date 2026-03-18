/*
 * XREFs of MiSharePages @ 0x140365710
 * Callers:
 *     MiProcessCrcList @ 0x140712D40 (MiProcessCrcList.c)
 * Callees:
 *     MiFlushTbListEarly @ 0x140203350 (MiFlushTbListEarly.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiVadSupportsPrivateCommit @ 0x14021AA60 (MiVadSupportsPrivateCommit.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetUltraMapping @ 0x1402968A0 (MiGetUltraMapping.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x1402A2C20 (RtlAvlInsertNodeEx.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x1402A680C (KeForceAttachProcess.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiAttachThreadDone @ 0x1402CFF94 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1402D0024 (MiPrepareAttachThread.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeForceDetachProcess @ 0x140308594 (KeForceDetachProcess.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiIsStoreProcess @ 0x14034D700 (MiIsStoreProcess.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiCrcStillIntact @ 0x140364F24 (MiCrcStillIntact.c)
 *     MiAllocateCombineProto @ 0x1403651C0 (MiAllocateCombineProto.c)
 *     MiRecheckVaVm @ 0x140366944 (MiRecheckVaVm.c)
 *     MiMapArbitraryPage @ 0x1403669C0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x140366B50 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x140366F50 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x140367030 (MiPerformCombineScan.c)
 *     MiHashIsCommon @ 0x1403670DC (MiHashIsCommon.c)
 *     MiMakeCombineCandidateClean @ 0x14036713C (MiMakeCombineCandidateClean.c)
 *     MiGetCombineDomain @ 0x14036721C (MiGetCombineDomain.c)
 *     MiPageMightBeZero @ 0x140367234 (MiPageMightBeZero.c)
 *     MiDereferenceCombineBlock @ 0x140367310 (MiDereferenceCombineBlock.c)
 *     MiConfirmPageIsZero @ 0x140367340 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiPopCombineBlock @ 0x140368204 (MiPopCombineBlock.c)
 *     MiIncrementCombineMdl @ 0x14036825C (MiIncrementCombineMdl.c)
 *     MiComputeHash64 @ 0x14036D9D0 (MiComputeHash64.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiSharePages(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4, int a5)
{
  unsigned __int64 *v5; // rsi
  __int64 v8; // r14
  _QWORD *v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // r13
  _BYTE *v15; // r12
  __int64 v16; // rbx
  int v17; // eax
  _KPROCESS *v18; // rdi
  __int64 v19; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  int v24; // eax
  bool v25; // zf
  int v26; // edi
  __int64 v27; // rbx
  char v28; // r15
  unsigned __int64 v29; // r14
  unsigned __int8 v30; // r12
  unsigned __int8 v31; // r9
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r15
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // r14
  __int64 v37; // rbx
  unsigned __int64 valid; // rax
  __int64 v39; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  ULONG_PTR BugCheckParameter2; // rsi
  int v48; // r13d
  char v49; // r14
  unsigned int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // rcx
  unsigned __int64 v55; // r12
  __int64 v56; // rdx
  __int64 v57; // r10
  __int64 v58; // r8
  __int64 **Address; // rax
  unsigned int v60; // r14d
  unsigned __int64 **v61; // rbx
  _KPROCESS *v62; // rdx
  unsigned __int64 v63; // r11
  __int64 v64; // r8
  __int64 v65; // r9
  int IsZero; // eax
  unsigned __int64 *v67; // rcx
  unsigned __int64 *v68; // rax
  unsigned __int64 v69; // r8
  __int64 v70; // rbx
  unsigned __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // r8
  unsigned __int64 v74; // r11
  __int64 v75; // rax
  __int64 v76; // r13
  __int64 v77; // rdx
  unsigned __int64 v78; // rax
  unsigned __int64 *v79; // r14
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  bool v82; // si
  char v83; // r13
  unsigned __int64 UltraMapping; // rax
  int v85; // r9d
  unsigned __int64 *v86; // r14
  int v87; // r8d
  __int64 CombineDomain; // rax
  int v89; // ecx
  __int64 v90; // rdx
  unsigned __int64 v91; // rbx
  char v92; // al
  __int64 v93; // rbx
  __int64 v94; // rcx
  unsigned __int64 v95; // rbx
  unsigned __int64 v96; // rax
  int v97; // esi
  unsigned __int64 v98; // rbx
  unsigned int v99; // esi
  __int64 v100; // r13
  unsigned __int64 v101; // r12
  bool v102; // r8
  unsigned __int64 *v103; // rbx
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // rcx
  unsigned int v106; // eax
  unsigned __int8 v107; // al
  struct _KPRCB *v108; // r10
  _DWORD *v109; // r9
  int v110; // eax
  __int64 *v111; // r15
  int i; // r14d
  __int64 v113; // rbx
  __int64 v114; // rsi
  __int64 v115; // rdx
  __int64 v116; // r8
  _DWORD *v117; // r9
  unsigned __int64 *v118; // rsi
  __int64 v119; // rbx
  unsigned __int64 v120; // r14
  unsigned __int8 v121; // al
  struct _KPRCB *v122; // r10
  int v123; // eax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  unsigned __int64 *v127; // rbx
  char v128; // [rsp+40h] [rbp-C0h]
  char v129; // [rsp+44h] [rbp-BCh]
  __int64 v130; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v131; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v132; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v134; // [rsp+68h] [rbp-98h]
  unsigned int v135; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v136; // [rsp+70h] [rbp-90h] BYREF
  int v137; // [rsp+78h] [rbp-88h]
  unsigned int v138; // [rsp+7Ch] [rbp-84h]
  int v139; // [rsp+80h] [rbp-80h]
  int v140[2]; // [rsp+88h] [rbp-78h]
  unsigned __int64 v141; // [rsp+90h] [rbp-70h]
  __int64 v142; // [rsp+98h] [rbp-68h]
  int v143; // [rsp+A0h] [rbp-60h]
  int v144; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 *v145; // [rsp+A8h] [rbp-58h]
  _BYTE *Pool; // [rsp+B0h] [rbp-50h]
  int v147; // [rsp+B8h] [rbp-48h]
  int v148; // [rsp+BCh] [rbp-44h]
  __int64 v149; // [rsp+C0h] [rbp-40h]
  _QWORD *v150; // [rsp+C8h] [rbp-38h]
  _KPROCESS *v151; // [rsp+D0h] [rbp-30h]
  __int64 *v152; // [rsp+D8h] [rbp-28h]
  __int64 v153; // [rsp+E0h] [rbp-20h]
  int v154[2]; // [rsp+E8h] [rbp-18h]
  int v155; // [rsp+F0h] [rbp-10h] BYREF
  int v156; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v157; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v158; // [rsp+100h] [rbp+0h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  unsigned __int64 v160; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  __int128 v162; // [rsp+130h] [rbp+30h]
  unsigned __int64 v163; // [rsp+140h] [rbp+40h]
  _OWORD v164[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v165; // [rsp+168h] [rbp+68h]
  _OWORD v166[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v167[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v168[208]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 *v169; // [rsp+330h] [rbp+230h]
  __int64 v170; // [rsp+358h] [rbp+258h]
  _QWORD v171[5]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v172; // [rsp+3A8h] [rbp+2A8h] BYREF

  v149 = a1;
  v5 = a3;
  v165 = 0LL;
  v163 = 0LL;
  v8 = 0LL;
  v157 = 0LL;
  v160 = 0LL;
  memset(v164, 0, sizeof(v164));
  memset(v166, 0, sizeof(v166));
  v162 = 0LL;
  memset(v167, 0, 0xB8uLL);
  memset(v168, 0, 0xB8uLL);
  v10 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)v154 = *(_QWORD *)(a1 + 16);
  v135 = *(_DWORD *)(a1 + 60);
  *(_QWORD *)v140 = *a4;
  v11 = a2[4];
  v136 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v150 = v10;
  v138 = 0;
  v142 = 0LL;
  v130 = v11;
  v12 = MiTbFlushType(v11);
  v13 = a2[3];
  v14 = (unsigned __int64 *)a2[6];
  v143 = v12;
  v139 = 0;
  v144 = 0;
  v158 = a1 + 64;
  v15 = v168;
  Pool = v168;
  if ( v13 <= 0x14 )
  {
    LODWORD(v16) = v13;
  }
  else
  {
    v16 = 509LL;
    if ( v13 < 0x1FD )
      v16 = v13;
    Pool = MiAllocatePool(64, 8 * v16 + 24, 0x73576D4Du);
    v15 = Pool;
    if ( !Pool )
    {
      v15 = v168;
      Pool = v168;
      LODWORD(v16) = 20;
    }
  }
  v17 = v143;
  *((_DWORD *)v15 + 3) = 0;
  *((_WORD *)v15 + 2) = 0;
  *((_QWORD *)v15 + 2) = 0LL;
  *((_QWORD *)v15 + 3) = 0LL;
  *(_DWORD *)v15 = v17;
  *((_DWORD *)v15 + 2) = v16;
  v18 = (_KPROCESS *)a2[5];
  v151 = v18;
  if ( v18 && v18 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
    v144 = MiPrepareAttachThread((__int64)v18, (__int64)&v18[1].ActiveProcessorsPadding[6]);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          v19 = (unsigned int)v24 & SchedulerAssist[5];
          SchedulerAssist[5] = v19;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v144 )
      goto LABEL_229;
    KeForceAttachProcess((ULONG_PTR)v18, (__int64)v166);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v26 = a5;
  v27 = v130;
  while ( 2 )
  {
    v28 = 0;
    v169 = 0LL;
    v170 = 0LL;
    v29 = 0LL;
    v171[0] = 0LL;
    v30 = 0;
    v172 = 0LL;
    v131 = 0LL;
    v128 = 0;
    v31 = MiLockWorkingSetShared(v27);
    v134 = v31;
    if ( v151
      && ((HIDWORD(v151[1].DirectoryTableBase) & 0xC00u) < 0xC00
       || *(_QWORD *)(v27 + 104)
       || (unsigned int)MiIsStoreProcess((__int64)v151)) )
    {
      MiUnlockWorkingSetShared(v27, v31);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v124, v125, v126);
      v15 = Pool;
      goto LABEL_228;
    }
    while ( 1 )
    {
      v32 = v30;
      v30 = 0;
      v145 = v14;
      if ( (_BYTE)v32 != 1 )
        v30 = v32;
      v33 = 0LL;
      v129 = v30;
      if ( (_BYTE)v32 != 1 )
        v33 = (unsigned int)(v139 + 1);
      v139 = v33;
      if ( v28 )
      {
        v128 = 0;
        LOBYTE(v32) = 1;
        goto LABEL_38;
      }
      if ( (v33 & 7) != 0 )
        goto LABEL_35;
      if ( MiWorkingSetIsContended(v27) )
      {
        LOBYTE(v32) = 1;
        goto LABEL_38;
      }
      if ( v29 && (unsigned int)MiPageTableLockIsContended(v27, v29) )
      {
        LOBYTE(v32) = 1;
      }
      else
      {
LABEL_35:
        if ( KeShouldYieldProcessor() )
          LOBYTE(v32) = 1;
        else
          v32 = (unsigned int)MiFlushTbListEarly((__int64)Pool, 2) != 0;
      }
LABEL_38:
      if ( !v14 )
        break;
      if ( (_BYTE)v32 )
        goto LABEL_202;
      v34 = v14[4];
      v35 = v14[1];
      v132 = (unsigned __int64 *)v14[2];
      v141 = *v14;
      v152 = (__int64 *)v35;
      if ( v34 >= 0x100 )
      {
        v147 = *(_DWORD *)(v34 + 40) & 0x1F;
      }
      else
      {
        v147 = v34;
        v34 = 0LL;
      }
      v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v153 = v36;
      v37 = ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v131 == v37 )
        goto LABEL_48;
      if ( v131 )
      {
        v27 = v130;
        v28 = 1;
        v128 = 1;
        v29 = v131;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v130, ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v160);
        v131 = valid;
        if ( valid == v37 )
        {
LABEL_48:
          if ( !(unsigned int)MiRecheckVaVm(v32, v35) )
            goto LABEL_70;
          v39 = *(_QWORD *)v36;
          if ( MiPteInShadowRange(((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            && (unsigned int)MiPteHasShadow()
            && (v39 & 1) != 0
            && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v41 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v36 >> 3) & 0x1FF));
              v42 = v39 | 0x20;
              if ( (v41 & 0x20) == 0 )
                v42 = v39;
              v39 = v42;
              if ( (v41 & 0x42) != 0 )
                v39 = v42 | 0x42;
            }
          }
          v157 = v39;
          if ( (v39 & 1) != 0 )
          {
            v43 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v157);
            v46 = 6 * ((v43 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = 48 * ((v43 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v155 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v155, v46, v44, v45);
              while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
            }
          }
          else
          {
            if ( (v39 & 0x400) != 0 )
              goto LABEL_70;
            if ( (v39 & 0x800) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = MiLockTransitionLeafPage(((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
            if ( !BugCheckParameter2 )
              goto LABEL_70;
          }
          v148 = MiCombineCandidate(*(_QWORD *)v140, v135, BugCheckParameter2);
          v48 = v148;
          if ( !v148 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_70:
            MiDereferenceCombineBlock(a3);
            goto LABEL_71;
          }
          v49 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
          v50 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
          v137 = 3;
          v136 = v145[3];
          if ( *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2) != v26 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_74;
          }
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v49 == 6 )
          {
            if ( v153 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
              goto LABEL_74;
            if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2, v51, v52) )
              goto LABEL_74;
            v53 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v53 & 0x1000000000LL) != 0 )
              goto LABEL_74;
            if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
              goto LABEL_74;
            v54 = v53 & 0xFFFFFFFFFLL;
            if ( v54 == 0xFFFFFFFFDLL )
              goto LABEL_74;
            v55 = (unsigned __int64)v152;
            if ( (MiGetWsleContents(v54, (unsigned __int64)v152) & 0xF) == 8 )
              goto LABEL_74;
            if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
              goto LABEL_74;
            v58 = 0LL;
            if ( v48 == 1 )
            {
              Address = MiLocateAddress(v55);
              if ( !Address
                || MiVadPageSizes[((unsigned __int64)*((unsigned int *)Address + 12) >> 18) & 3] == 16
                || !MiVadSupportsPrivateCommit((__int64)Address) )
              {
                goto LABEL_74;
              }
            }
            v60 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
            if ( v60 != v147 )
              goto LABEL_74;
            if ( (v39 & 0x42) != 0 )
            {
              if ( v138 < 8 )
              {
                v61 = (unsigned __int64 **)v171;
LABEL_104:
                MiInsertTbFlushEntry((__int64)Pool, v55, 1LL, 0);
                v67 = v145;
                v68 = *v61;
                v30 = v129;
                *v61 = v145;
                v67[2] = (unsigned __int64)v68;
                goto LABEL_71;
              }
              MiMakeCombineCandidateClean(v57, v58);
              WORD2(v167[0]) = 0;
              v167[2] = 0LL;
              v167[3] = 0LL;
              v167[1] = 1LL;
              LODWORD(v167[0]) = v143;
              MiInsertTbFlushEntry((__int64)v167, v55, 1LL, 0);
              MiFlushTbList((__int64)v167, v62);
              v57 = v153;
              v63 = v141;
              goto LABEL_92;
            }
            v63 = v141;
            if ( v141 == qword_140C4ECD8 )
            {
              if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x18) == 0 && (v39 & 0x20) != 0 && v138 < 3 )
              {
                v61 = (unsigned __int64 **)&v172;
                goto LABEL_104;
              }
LABEL_92:
              v27 = v130;
              if ( v63 != qword_140C4ECD8 || !(unsigned int)MiPageMightBeZero(v130, BugCheckParameter2, v57) )
                goto LABEL_107;
              v156 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v156, v56, v64, v65);
                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
              }
              IsZero = MiConfirmPageIsZero(BugCheckParameter2);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !IsZero )
                goto LABEL_107;
              v167[2] = 0LL;
              v167[3] = 0LL;
              v167[1] = 1LL;
              LODWORD(v167[0]) = v143;
              WORD2(v167[0]) = 4;
              MiInsertTbFlushEntry((__int64)v167, v55, 1LL, 0);
              MiFreeWsleList(v130, (__int64)v167, 0);
              ++v142;
              ++v150[1];
              MiDereferenceCombineBlock(a3);
              v30 = v129;
              v14 = v132;
              v29 = v131;
              v28 = v128;
            }
            else
            {
              v27 = v130;
LABEL_107:
              v69 = v136;
              v30 = v129;
              if ( (v60 & 0x18) != 0 )
                v30 = 1;
              v129 = v30;
              if ( v136 == qword_140C4E490
                || v48 != 1
                || (v69 = v136, v136 == *(_QWORD *)(v27 + 864)) && (HIDWORD(v151[2].ReadyListHead.Blink) & 0x1000) == 0 )
              {
                v70 = -1LL;
                if ( v34 )
                {
                  LODWORD(v76) = v137;
LABEL_128:
                  v79 = v145;
                  goto LABEL_129;
                }
                v71 = (unsigned __int64)v152;
                v72 = MiComputeHash64(v152, v56, v69);
                if ( v72 != v74 )
                  goto LABEL_71;
                if ( v73 == qword_140C4E490 )
                {
                  if ( !(unsigned int)MiHashIsCommon(v149, v74, v71) )
                    goto LABEL_71;
                  v74 = v141;
                }
                v75 = MiAllocateCombineProto(*(__int64 *)v140, v74, v60, &v136, 0);
                v34 = v75;
                if ( !v75 )
                {
                  v34 = MiPopCombineBlock(a3);
                  if ( !v34 )
                    goto LABEL_71;
                  v76 = (int)MiProtectionToCacheAttribute(v60);
                  v77 = *(_QWORD *)(v158 + 8 * v76);
                  if ( !v77 || *(_DWORD *)(v77 + 44) >= *(_DWORD *)(v77 + 40) )
                  {
                    v78 = *a3;
                    if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
                      __fastfail(3u);
                    *(_QWORD *)v34 = v78;
                    *(_QWORD *)(v34 + 8) = a3;
                    *(_QWORD *)(v78 + 8) = v34;
                    *a3 = v34;
                    goto LABEL_71;
                  }
                  *(_DWORD *)(v34 + 40) = v60 | *(_DWORD *)(v34 + 40) & 0xFFFFFFE0;
                  *(_QWORD *)(v34 + 64) = v136;
                  v70 = *(_QWORD *)(v77 + 8 * ((unsigned __int64)*(unsigned int *)(v77 + 44) >> 12) + 48);
                  goto LABEL_128;
                }
                v79 = v145;
                LODWORD(v76) = v137;
                v145[4] = v75;
LABEL_129:
                v80 = MiConvertPrivateToProto(v130, v153, v34, v135, *(__int64 *)v140, (__int64)Pool, v70);
                if ( !v80 )
                  goto LABEL_70;
                ++v150[1];
                if ( v70 == -1 )
                {
                  v34 = 0LL;
                  ++v142;
                }
                else
                {
                  MiIncrementCombineMdl(v149, (unsigned int)v76);
                }
                v81 = (unsigned __int64)v169;
                v79[1] = v80;
                v82 = v70 != -1;
                v79[2] = v81;
                v169 = v79;
LABEL_180:
                if ( v82 )
                {
                  v96 = v141;
                  v97 = *(_DWORD *)(v34 + 40);
                  v98 = v141 & 0xF;
                  *(_QWORD *)(v34 + 24) = v141;
                  *(_QWORD *)&v162 = v96;
                  v99 = v97 & 0x1F;
                  v100 = *(_QWORD *)v140 + 16LL * (unsigned int)v98;
                  DWORD2(v162) = v99;
                  v163 = v34 + 64;
                  v101 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v100 + 104));
                  v102 = 0;
                  v103 = (unsigned __int64 *)(*(_QWORD *)v140 + 16 * (v98 + 6));
                  v104 = *v103;
                  if ( *v103 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v105 = *(_QWORD *)(v104 + 24);
                        if ( v141 > v105 )
                          break;
                        if ( v141 >= v105 )
                        {
                          v106 = *(_DWORD *)(v104 + 40) & 0x1F;
                          if ( v99 > v106
                            || v99 >= v106 && (v34 == -64LL || *(_QWORD *)(v34 + 64) >= *(_QWORD *)(v104 + 64)) )
                          {
                            break;
                          }
                        }
                        if ( !*(_QWORD *)v104 )
                          goto LABEL_193;
                        v104 = *(_QWORD *)v104;
                      }
                      if ( !*(_QWORD *)(v104 + 8) )
                        break;
                      v104 = *(_QWORD *)(v104 + 8);
                    }
                    v102 = 1;
                  }
LABEL_193:
                  RtlAvlInsertNodeEx(v103, v104, v102, (_QWORD *)v34);
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v100 + 104));
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v107 = KeGetCurrentIrql();
                      if ( v107 <= 0xFu && (unsigned __int8)v101 <= 0xFu && v107 >= 2u )
                      {
                        v108 = KeGetCurrentPrcb();
                        v109 = v108->SchedulerAssist;
                        v110 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v101 + 1));
                        v25 = (v110 & v109[5]) == 0;
                        v109[5] &= v110;
                        if ( v25 )
                          KiRemoveSystemWorkPriorityKick(v108);
                      }
                    }
                  }
                  __writecr8(v101);
                  v30 = v129;
                }
LABEL_71:
                v14 = v132;
                v29 = v131;
                v28 = v128;
                v27 = v130;
              }
              else
              {
                MiDereferenceCombineBlock(a3);
                v14 = v132;
                v29 = v131;
                v28 = v128;
              }
            }
          }
          else
          {
            v83 = 0;
            UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v149 + 208), 3u, 1LL, 0);
            v85 = v148;
            v86 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v87 = 1;
            v27 = v130;
            if ( v136 == qword_140C4E490
              || v148 != 1
              || (CombineDomain = MiGetCombineDomain(1LL, v130), v136 == CombineDomain)
              && (HIDWORD(v151[2].ReadyListHead.Blink) & 0x1000) == 0 )
            {
              if ( v86 )
              {
                v89 = v140[0];
                v90 = *(_QWORD *)v154;
                *(_QWORD *)(*(_QWORD *)v154 + 72LL) = v86;
                *(_QWORD *)(v90 + 64) = BugCheckParameter2;
                if ( !(unsigned int)MiMapArbitraryPage(v89, v90, v135, v85, v87) )
                {
                  v91 = ZeroPte;
                  if ( MiPteInShadowRange((unsigned __int64)v86) )
                  {
                    if ( (unsigned int)MiPteHasShadow() )
                    {
                      if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                        v91 = ZeroPte | 0x8000000000000000uLL;
                      *v86 = v91;
                      MiWritePteShadow((__int64)v86, v91);
                      goto LABEL_74;
                    }
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (ZeroPte & 1) != 0 )
                    {
                      v91 = ZeroPte | 0x8000000000000000uLL;
                    }
                  }
                  *v86 = v91;
LABEL_74:
                  MiDereferenceCombineBlock(a3);
                  v30 = v129;
                  goto LABEL_71;
                }
                v92 = v129;
                if ( (v50 & 0x18) != 0 )
                  v92 = 1;
                v129 = v92;
                v93 = -1LL;
                if ( !v34 )
                {
                  if ( !(unsigned int)MiPerformCombineScan(v149, *(_QWORD *)v154, v136 == qword_140C4E490, v164)
                    || *(_QWORD *)&v164[0] != v141 )
                  {
                    goto LABEL_167;
                  }
                  v34 = MiAllocateCombineProto(*(__int64 *)v140, v141, v50, &v136, 0);
                  if ( !v34 )
                  {
                    v34 = MiPopCombineBlock(a3);
                    if ( v34 )
                    {
                      v137 = MiProtectionToCacheAttribute(v50);
                      v94 = *(_QWORD *)(v158 + 8LL * v137);
                      if ( v94 )
                      {
                        if ( *(_DWORD *)(v94 + 44) < *(_DWORD *)(v94 + 40) )
                        {
                          *(_DWORD *)(v34 + 40) = v50 | *(_DWORD *)(v34 + 40) & 0xFFFFFFE0;
                          *(_QWORD *)(v34 + 64) = v136;
                          v93 = *(_QWORD *)(v94 + 8 * ((unsigned __int64)*(unsigned int *)(v94 + 44) >> 12) + 48);
                          goto LABEL_163;
                        }
                      }
                    }
LABEL_167:
                    v82 = 0;
LABEL_168:
                    MiReleaseArbitraryPage(*(_QWORD *)v154);
                    v95 = ZeroPte;
                    if ( MiPteInShadowRange((unsigned __int64)v86) )
                    {
                      if ( (unsigned int)MiPteHasShadow() )
                      {
                        if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
                          v95 = ZeroPte | 0x8000000000000000uLL;
                        *v86 = v95;
                        MiWritePteShadow((__int64)v86, v95);
                        goto LABEL_178;
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (ZeroPte & 1) != 0 )
                      {
                        v95 = ZeroPte | 0x8000000000000000uLL;
                      }
                    }
                    *v86 = v95;
LABEL_178:
                    if ( !v83 )
                      goto LABEL_74;
                    v30 = v129;
                    goto LABEL_180;
                  }
                  v145[4] = v34;
                }
LABEL_163:
                if ( !(unsigned int)MiConvertStandbyToProto(
                                      v130,
                                      *(__int64 *)v140,
                                      *(__int64 *)v154,
                                      v135,
                                      v34,
                                      BugCheckParameter2,
                                      v153,
                                      v93) )
                  goto LABEL_167;
                ++v150[1];
                if ( v93 == -1 )
                {
                  v34 = 0LL;
                  v83 = 1;
                  ++v142;
                  v82 = 0;
                }
                else
                {
                  MiIncrementCombineMdl(v149, (unsigned int)v137);
                  v82 = 1;
                  v83 = 1;
                }
                goto LABEL_168;
              }
            }
            MiDereferenceCombineBlock(a3);
            v30 = v129;
            v14 = v132;
            v29 = v131;
            v28 = v128;
          }
        }
        else
        {
          v27 = v130;
          MiUnlockPageTable(v130, valid);
          v29 = 0LL;
          v131 = 0LL;
          MiDereferenceCombineBlock(a3);
          v14 = v132;
          v28 = v128;
        }
      }
    }
    ++v138;
LABEL_202:
    v111 = v171;
    v152 = v171;
    for ( i = 2; i <= 3; ++i )
    {
      v113 = *v111;
      if ( *v111 )
      {
        do
        {
          v114 = *(_QWORD *)(v113 + 16);
          if ( (unsigned int)MiCrcStillIntact(*(__int64 *)v140, v130, v135, v113, i) )
          {
            *(_QWORD *)(v113 + 16) = v14;
            v14 = (unsigned __int64 *)v113;
          }
          else
          {
            v33 = *(_QWORD *)(v113 + 32);
            if ( v33 >= 0x100 )
              MiDereferenceCombineBlock(a3);
          }
          v113 = v114;
        }
        while ( v114 );
        v111 = v152;
      }
      *v111 = 0LL;
      v111 += 5;
      v152 = v111;
    }
    v15 = Pool;
    v26 = a5;
    MiFlushTbList((__int64)Pool, (_KPROCESS *)v33);
    v27 = v130;
    if ( v131 )
      MiUnlockPageTable(v130, v131);
    MiUnlockWorkingSetShared(v130, v134);
    v118 = v169;
    if ( v169 )
    {
      do
      {
        v119 = v118[1];
        v120 = (unsigned __int8)MiLockPageInline(v119, v115, v116, v117);
        *(_BYTE *)(v119 + 34) = *(_BYTE *)(v119 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v119);
        _InterlockedAnd64((volatile signed __int64 *)(v119 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v121 = KeGetCurrentIrql();
            if ( v121 <= 0xFu && (unsigned __int8)v120 <= 0xFu && v121 >= 2u )
            {
              v122 = KeGetCurrentPrcb();
              v115 = -1LL << ((unsigned __int8)v120 + 1);
              v117 = v122->SchedulerAssist;
              v123 = ~(unsigned __int16)v115;
              v25 = (v123 & v117[5]) == 0;
              v116 = (unsigned int)v123 & v117[5];
              v117[5] = v116;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick(v122);
            }
          }
        }
        __writecr8(v120);
        v118 = (unsigned __int64 *)v118[2];
      }
      while ( v118 );
      v26 = a5;
      v27 = v130;
    }
    if ( v14 )
    {
      v5 = a3;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v115, v116, (__int64)v117);
  v5 = a3;
LABEL_228:
  v18 = v151;
  v10 = v150;
  v8 = v142;
LABEL_229:
  if ( v14 )
  {
    do
    {
      v127 = (unsigned __int64 *)v14[2];
      if ( v14[4] >= 0x100 )
        MiDereferenceCombineBlock(v5);
      v14 = v127;
    }
    while ( v127 );
  }
  if ( v144 == 1 )
  {
    KeForceDetachProcess(v166, 0, v19, SchedulerAssist);
    MiAttachThreadDone((__int64)&v18[1].ActiveProcessorsPadding[6]);
  }
  if ( v15 != v168 )
    ExFreePoolWithTag(v15, 0);
  *v10 += v8;
}
