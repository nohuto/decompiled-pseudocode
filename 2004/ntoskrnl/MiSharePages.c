/*
 * XREFs of MiSharePages @ 0x1403660D0
 * Callers:
 *     MiProcessCrcList @ 0x1407150D0 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     RtlAvlInsertNodeEx @ 0x140249BF0 (RtlAvlInsertNodeEx.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14024D7DC (KeForceAttachProcess.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiFlushTbListEarly @ 0x14027C660 (MiFlushTbListEarly.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiVadSupportsPrivateCommit @ 0x1402AD6E0 (MiVadSupportsPrivateCommit.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiIsStoreProcess @ 0x1402D55C0 (MiIsStoreProcess.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiAttachThreadDone @ 0x14031E494 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x14031E524 (MiPrepareAttachThread.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     KeForceDetachProcess @ 0x140346394 (KeForceDetachProcess.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiCrcStillIntact @ 0x1403658E4 (MiCrcStillIntact.c)
 *     MiAllocateCombineProto @ 0x140365B80 (MiAllocateCombineProto.c)
 *     MiRecheckVaVm @ 0x140367304 (MiRecheckVaVm.c)
 *     MiMapArbitraryPage @ 0x140367380 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x140367510 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x140367910 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1403679F0 (MiPerformCombineScan.c)
 *     MiHashIsCommon @ 0x140367A9C (MiHashIsCommon.c)
 *     MiMakeCombineCandidateClean @ 0x140367AFC (MiMakeCombineCandidateClean.c)
 *     MiGetCombineDomain @ 0x140367BDC (MiGetCombineDomain.c)
 *     MiPageMightBeZero @ 0x140367BF4 (MiPageMightBeZero.c)
 *     MiDereferenceCombineBlock @ 0x140367CD0 (MiDereferenceCombineBlock.c)
 *     MiConfirmPageIsZero @ 0x140367D00 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x140367DC0 (MiConvertPrivateToProto.c)
 *     MiPopCombineBlock @ 0x140368BC4 (MiPopCombineBlock.c)
 *     MiIncrementCombineMdl @ 0x140368C1C (MiIncrementCombineMdl.c)
 *     MiComputeHash64 @ 0x14036E600 (MiComputeHash64.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  int v25; // edi
  __int64 v26; // rbx
  char v27; // r15
  unsigned __int64 v28; // r14
  unsigned __int8 v29; // r12
  unsigned __int8 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int64 valid; // rax
  __int64 v38; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  ULONG_PTR BugCheckParameter2; // rsi
  int v47; // r13d
  char v48; // r14
  unsigned int v49; // r12d
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // r10
  __int64 v55; // r8
  __int64 **Address; // rax
  unsigned int v57; // r14d
  unsigned __int64 **v58; // rbx
  _KPROCESS *v59; // rdx
  unsigned __int64 v60; // r11
  __int64 v61; // r8
  __int64 v62; // r9
  int IsZero; // eax
  unsigned __int64 *v64; // rcx
  unsigned __int64 *v65; // rax
  unsigned __int64 v66; // r8
  __int64 v67; // rbx
  unsigned __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // r8
  unsigned __int64 v71; // r11
  __int64 v72; // rax
  __int64 v73; // r13
  __int64 v74; // rdx
  unsigned __int64 v75; // rax
  unsigned __int64 *v76; // r14
  __int64 v77; // rsi
  unsigned __int64 v78; // rax
  bool v79; // si
  char v80; // r13
  unsigned __int64 UltraMapping; // rax
  int v82; // r9d
  unsigned __int64 *v83; // r14
  int v84; // r8d
  __int64 CombineDomain; // rax
  int v86; // ecx
  __int64 v87; // rdx
  unsigned __int64 v88; // rbx
  __int64 v89; // r8
  char v90; // al
  __int64 v91; // rbx
  __int64 v92; // rcx
  unsigned __int64 v93; // rbx
  __int64 v94; // r8
  unsigned __int64 v95; // rax
  int v96; // esi
  unsigned __int64 v97; // rbx
  unsigned int v98; // esi
  __int64 v99; // r13
  unsigned __int64 v100; // r12
  bool v101; // r8
  unsigned __int64 *v102; // rbx
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  unsigned int v105; // eax
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r10
  _DWORD *v108; // r9
  int v109; // eax
  __int64 *v110; // r15
  int i; // r14d
  __int64 v112; // rbx
  __int64 v113; // rsi
  __int64 v114; // rdx
  __int64 v115; // r8
  _DWORD *v116; // r9
  unsigned __int64 *v117; // rsi
  __int64 v118; // rbx
  unsigned __int64 v119; // r14
  unsigned __int8 v120; // al
  struct _KPRCB *v121; // r10
  int v122; // eax
  unsigned __int64 *v123; // rbx
  char v124; // [rsp+40h] [rbp-C0h]
  char v125; // [rsp+44h] [rbp-BCh]
  __int64 v126; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v127; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v128; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v130; // [rsp+68h] [rbp-98h]
  unsigned int v131; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v132; // [rsp+70h] [rbp-90h] BYREF
  int v133; // [rsp+78h] [rbp-88h]
  unsigned int v134; // [rsp+7Ch] [rbp-84h]
  int v135; // [rsp+80h] [rbp-80h]
  int v136[2]; // [rsp+88h] [rbp-78h]
  unsigned __int64 v137; // [rsp+90h] [rbp-70h]
  __int64 v138; // [rsp+98h] [rbp-68h]
  int v139; // [rsp+A0h] [rbp-60h]
  int v140; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 *v141; // [rsp+A8h] [rbp-58h]
  _BYTE *Pool; // [rsp+B0h] [rbp-50h]
  int v143; // [rsp+B8h] [rbp-48h]
  int v144; // [rsp+BCh] [rbp-44h]
  __int64 v145; // [rsp+C0h] [rbp-40h]
  _QWORD *v146; // [rsp+C8h] [rbp-38h]
  _KPROCESS *v147; // [rsp+D0h] [rbp-30h]
  __int64 *v148; // [rsp+D8h] [rbp-28h]
  __int64 v149; // [rsp+E0h] [rbp-20h]
  int v150[2]; // [rsp+E8h] [rbp-18h]
  int v151; // [rsp+F0h] [rbp-10h] BYREF
  int v152; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v153; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v154; // [rsp+100h] [rbp+0h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  unsigned __int64 v156; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  __int128 v158; // [rsp+130h] [rbp+30h]
  unsigned __int64 v159; // [rsp+140h] [rbp+40h]
  _OWORD v160[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v161; // [rsp+168h] [rbp+68h]
  _OWORD v162[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v163[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v164[208]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 *v165; // [rsp+330h] [rbp+230h]
  __int64 v166; // [rsp+358h] [rbp+258h]
  _QWORD v167[5]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v168; // [rsp+3A8h] [rbp+2A8h] BYREF

  v145 = a1;
  v5 = a3;
  v161 = 0LL;
  v159 = 0LL;
  v8 = 0LL;
  v153 = 0LL;
  v156 = 0LL;
  memset(v160, 0, sizeof(v160));
  memset(v162, 0, sizeof(v162));
  v158 = 0LL;
  memset(v163, 0, 0xB8uLL);
  memset(v164, 0, 0xB8uLL);
  v10 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)v150 = *(_QWORD *)(a1 + 16);
  v131 = *(_DWORD *)(a1 + 60);
  *(_QWORD *)v136 = *a4;
  v11 = a2[4];
  v132 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v146 = v10;
  v134 = 0;
  v138 = 0LL;
  v126 = v11;
  v12 = MiTbFlushType(v11);
  v13 = a2[3];
  v14 = (unsigned __int64 *)a2[6];
  v139 = v12;
  v135 = 0;
  v140 = 0;
  v154 = a1 + 64;
  v15 = v164;
  Pool = v164;
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
      v15 = v164;
      Pool = v164;
      LODWORD(v16) = 20;
    }
  }
  v17 = v139;
  *((_DWORD *)v15 + 3) = 0;
  *((_WORD *)v15 + 2) = 0;
  *((_QWORD *)v15 + 2) = 0LL;
  *((_QWORD *)v15 + 3) = 0LL;
  *(_DWORD *)v15 = v17;
  *((_DWORD *)v15 + 2) = v16;
  v18 = (_KPROCESS *)a2[5];
  v147 = v18;
  if ( v18 && v18 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v140 = MiPrepareAttachThread((__int64)v18, (__int64)&v18[1].ActiveProcessorsPadding[6]);
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
          v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v140 )
      goto LABEL_229;
    KeForceAttachProcess((ULONG_PTR)v18, (__int64)v162);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v25 = a5;
  v26 = v126;
  while ( 2 )
  {
    v27 = 0;
    v165 = 0LL;
    v166 = 0LL;
    v28 = 0LL;
    v167[0] = 0LL;
    v29 = 0;
    v168 = 0LL;
    v127 = 0LL;
    v124 = 0;
    v30 = MiLockWorkingSetShared(v26);
    v130 = v30;
    if ( v147
      && ((HIDWORD(v147[1].DirectoryTableBase) & 0xC00u) < 0xC00
       || *(_QWORD *)(v26 + 104)
       || (unsigned int)MiIsStoreProcess((__int64)v147)) )
    {
      MiUnlockWorkingSetShared(v26, v30);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v15 = Pool;
      goto LABEL_228;
    }
    while ( 1 )
    {
      v31 = v29;
      v29 = 0;
      v141 = v14;
      if ( (_BYTE)v31 != 1 )
        v29 = v31;
      v32 = 0LL;
      v125 = v29;
      if ( (_BYTE)v31 != 1 )
        v32 = (unsigned int)(v135 + 1);
      v135 = v32;
      if ( v27 )
      {
        v124 = 0;
        LOBYTE(v31) = 1;
        goto LABEL_38;
      }
      if ( (v32 & 7) != 0 )
        goto LABEL_35;
      if ( MiWorkingSetIsContended(v26) )
      {
        LOBYTE(v31) = 1;
        goto LABEL_38;
      }
      if ( v28 && (unsigned int)MiPageTableLockIsContended(v26, v28) )
      {
        LOBYTE(v31) = 1;
      }
      else
      {
LABEL_35:
        if ( KeShouldYieldProcessor() )
          LOBYTE(v31) = 1;
        else
          v31 = (unsigned int)MiFlushTbListEarly((__int64)Pool, (_KPROCESS *)2) != 0;
      }
LABEL_38:
      if ( !v14 )
        break;
      if ( (_BYTE)v31 )
        goto LABEL_202;
      v33 = v14[4];
      v34 = v14[1];
      v128 = (unsigned __int64 *)v14[2];
      v137 = *v14;
      v148 = (__int64 *)v34;
      if ( v33 >= 0x100 )
      {
        v143 = *(_DWORD *)(v33 + 40) & 0x1F;
      }
      else
      {
        v143 = v33;
        v33 = 0LL;
      }
      v35 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v149 = v35;
      v36 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v127 == v36 )
        goto LABEL_48;
      if ( v127 )
      {
        v26 = v126;
        v27 = 1;
        v124 = 1;
        v28 = v127;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v126, ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v156);
        v127 = valid;
        if ( valid == v36 )
        {
LABEL_48:
          if ( !(unsigned int)MiRecheckVaVm(v31, v34) )
            goto LABEL_70;
          v38 = *(_QWORD *)v35;
          if ( MiPteInShadowRange(((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            && (unsigned int)MiPteHasShadow()
            && (v38 & 1) != 0
            && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v40 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v35 >> 3) & 0x1FF));
              v41 = v38 | 0x20;
              if ( (v40 & 0x20) == 0 )
                v41 = v38;
              v38 = v41;
              if ( (v40 & 0x42) != 0 )
                v38 = v41 | 0x42;
            }
          }
          v153 = v38;
          if ( (v38 & 1) != 0 )
          {
            v42 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v153);
            v45 = 6 * ((v42 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = 48 * ((v42 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v151 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v151, v45, v43, v44);
              while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
            }
          }
          else
          {
            if ( (v38 & 0x400) != 0 )
              goto LABEL_70;
            if ( (v38 & 0x800) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = MiLockTransitionLeafPage(((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
            if ( !BugCheckParameter2 )
              goto LABEL_70;
          }
          v144 = MiCombineCandidate(*(_QWORD *)v136, v131, BugCheckParameter2);
          v47 = v144;
          if ( !v144 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_70:
            MiDereferenceCombineBlock(a3);
            goto LABEL_71;
          }
          v48 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
          v49 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
          v133 = 3;
          v132 = v141[3];
          if ( *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2) != v25 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_74;
          }
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v48 == 6 )
          {
            if ( v149 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
              goto LABEL_74;
            if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
              goto LABEL_74;
            v50 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v50 & 0x1000000000LL) != 0 )
              goto LABEL_74;
            if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
              goto LABEL_74;
            v51 = v50 & 0xFFFFFFFFFLL;
            if ( v51 == 0xFFFFFFFFDLL )
              goto LABEL_74;
            v52 = (unsigned __int64)v148;
            if ( (MiGetWsleContents(v51, (unsigned __int64)v148) & 0xF) == 8 )
              goto LABEL_74;
            if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
              goto LABEL_74;
            v55 = 0LL;
            if ( v47 == 1 )
            {
              Address = MiLocateAddress(v52);
              if ( !Address
                || MiVadPageSizes[((unsigned __int64)*((unsigned int *)Address + 12) >> 18) & 3] == 16
                || !MiVadSupportsPrivateCommit((__int64)Address) )
              {
                goto LABEL_74;
              }
            }
            v57 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
            if ( v57 != v143 )
              goto LABEL_74;
            if ( (v38 & 0x42) != 0 )
            {
              if ( v134 < 8 )
              {
                v58 = (unsigned __int64 **)v167;
LABEL_104:
                MiInsertTbFlushEntry((__int64)Pool, v52, 1LL, 0);
                v64 = v141;
                v65 = *v58;
                v29 = v125;
                *v58 = v141;
                v64[2] = (unsigned __int64)v65;
                goto LABEL_71;
              }
              MiMakeCombineCandidateClean(v54, v55);
              WORD2(v163[0]) = 0;
              v163[2] = 0LL;
              v163[3] = 0LL;
              v163[1] = 1LL;
              LODWORD(v163[0]) = v139;
              MiInsertTbFlushEntry((__int64)v163, v52, 1LL, 0);
              MiFlushTbList((__int64)v163, v59);
              v54 = v149;
              v60 = v137;
              goto LABEL_92;
            }
            v60 = v137;
            if ( v137 == qword_140C4EB98 )
            {
              if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x18) == 0 && (v38 & 0x20) != 0 && v134 < 3 )
              {
                v58 = (unsigned __int64 **)&v168;
                goto LABEL_104;
              }
LABEL_92:
              v26 = v126;
              if ( v60 != qword_140C4EB98 || !(unsigned int)MiPageMightBeZero(v126, BugCheckParameter2, v54) )
                goto LABEL_107;
              v152 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v152, v53, v61, v62);
                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
              }
              IsZero = MiConfirmPageIsZero(BugCheckParameter2);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !IsZero )
                goto LABEL_107;
              v163[2] = 0LL;
              v163[3] = 0LL;
              v163[1] = 1LL;
              LODWORD(v163[0]) = v139;
              WORD2(v163[0]) = 4;
              MiInsertTbFlushEntry((__int64)v163, v52, 1LL, 0);
              MiFreeWsleList(v126, (__int64)v163, 0);
              ++v138;
              ++v146[1];
              MiDereferenceCombineBlock(a3);
              v29 = v125;
              v14 = v128;
              v28 = v127;
              v27 = v124;
            }
            else
            {
              v26 = v126;
LABEL_107:
              v66 = v132;
              v29 = v125;
              if ( (v57 & 0x18) != 0 )
                v29 = 1;
              v125 = v29;
              if ( v132 == qword_140C4E350
                || v47 != 1
                || (v66 = v132, v132 == *(_QWORD *)(v26 + 864)) && (HIDWORD(v147[2].ReadyListHead.Blink) & 0x1000) == 0 )
              {
                v67 = -1LL;
                if ( v33 )
                {
                  LODWORD(v73) = v133;
LABEL_128:
                  v76 = v141;
                  goto LABEL_129;
                }
                v68 = (unsigned __int64)v148;
                v69 = MiComputeHash64(v148, v53, v66);
                if ( v69 != v71 )
                  goto LABEL_71;
                if ( v70 == qword_140C4E350 )
                {
                  if ( !(unsigned int)MiHashIsCommon(v145, v71, v68) )
                    goto LABEL_71;
                  v71 = v137;
                }
                v72 = MiAllocateCombineProto(*(__int64 *)v136, v71, v57, &v132, 0);
                v33 = v72;
                if ( !v72 )
                {
                  v33 = MiPopCombineBlock(a3);
                  if ( !v33 )
                    goto LABEL_71;
                  v73 = (int)MiProtectionToCacheAttribute(v57);
                  v74 = *(_QWORD *)(v154 + 8 * v73);
                  if ( !v74 || *(_DWORD *)(v74 + 44) >= *(_DWORD *)(v74 + 40) )
                  {
                    v75 = *a3;
                    if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
                      __fastfail(3u);
                    *(_QWORD *)v33 = v75;
                    *(_QWORD *)(v33 + 8) = a3;
                    *(_QWORD *)(v75 + 8) = v33;
                    *a3 = v33;
                    goto LABEL_71;
                  }
                  *(_DWORD *)(v33 + 40) = v57 | *(_DWORD *)(v33 + 40) & 0xFFFFFFE0;
                  *(_QWORD *)(v33 + 64) = v132;
                  v67 = *(_QWORD *)(v74 + 8 * ((unsigned __int64)*(unsigned int *)(v74 + 44) >> 12) + 48);
                  goto LABEL_128;
                }
                v76 = v141;
                LODWORD(v73) = v133;
                v141[4] = v72;
LABEL_129:
                v77 = MiConvertPrivateToProto(v126, v149, v33, v131, *(__int64 *)v136, (__int64)Pool, v67);
                if ( !v77 )
                  goto LABEL_70;
                ++v146[1];
                if ( v67 == -1 )
                {
                  v33 = 0LL;
                  ++v138;
                }
                else
                {
                  MiIncrementCombineMdl(v145, (unsigned int)v73);
                }
                v78 = (unsigned __int64)v165;
                v76[1] = v77;
                v79 = v67 != -1;
                v76[2] = v78;
                v165 = v76;
LABEL_180:
                if ( v79 )
                {
                  v95 = v137;
                  v96 = *(_DWORD *)(v33 + 40);
                  v97 = v137 & 0xF;
                  *(_QWORD *)(v33 + 24) = v137;
                  *(_QWORD *)&v158 = v95;
                  v98 = v96 & 0x1F;
                  v99 = *(_QWORD *)v136 + 16LL * (unsigned int)v97;
                  DWORD2(v158) = v98;
                  v159 = v33 + 64;
                  v100 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v99 + 104));
                  v101 = 0;
                  v102 = (unsigned __int64 *)(*(_QWORD *)v136 + 16 * (v97 + 6));
                  v103 = *v102;
                  if ( *v102 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v104 = *(_QWORD *)(v103 + 24);
                        if ( v137 > v104 )
                          break;
                        if ( v137 >= v104 )
                        {
                          v105 = *(_DWORD *)(v103 + 40) & 0x1F;
                          if ( v98 > v105
                            || v98 >= v105 && (v33 == -64LL || *(_QWORD *)(v33 + 64) >= *(_QWORD *)(v103 + 64)) )
                          {
                            break;
                          }
                        }
                        if ( !*(_QWORD *)v103 )
                          goto LABEL_193;
                        v103 = *(_QWORD *)v103;
                      }
                      if ( !*(_QWORD *)(v103 + 8) )
                        break;
                      v103 = *(_QWORD *)(v103 + 8);
                    }
                    v101 = 1;
                  }
LABEL_193:
                  RtlAvlInsertNodeEx(v102, v103, v101, (_QWORD *)v33);
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v99 + 104));
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v106 = KeGetCurrentIrql();
                      if ( v106 <= 0xFu && (unsigned __int8)v100 <= 0xFu && v106 >= 2u )
                      {
                        v107 = KeGetCurrentPrcb();
                        v108 = v107->SchedulerAssist;
                        v109 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v100 + 1));
                        v24 = (v109 & v108[5]) == 0;
                        v108[5] &= v109;
                        if ( v24 )
                          KiRemoveSystemWorkPriorityKick(v107);
                      }
                    }
                  }
                  __writecr8(v100);
                  v29 = v125;
                }
LABEL_71:
                v14 = v128;
                v28 = v127;
                v27 = v124;
                v26 = v126;
              }
              else
              {
                MiDereferenceCombineBlock(a3);
                v14 = v128;
                v28 = v127;
                v27 = v124;
              }
            }
          }
          else
          {
            v80 = 0;
            UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v145 + 208), 3u, 1LL, 0);
            v82 = v144;
            v83 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v84 = 1;
            v26 = v126;
            if ( v132 == qword_140C4E350
              || v144 != 1
              || (CombineDomain = MiGetCombineDomain(1LL, v126), v132 == CombineDomain)
              && (HIDWORD(v147[2].ReadyListHead.Blink) & 0x1000) == 0 )
            {
              if ( v83 )
              {
                v86 = v136[0];
                v87 = *(_QWORD *)v150;
                *(_QWORD *)(*(_QWORD *)v150 + 72LL) = v83;
                *(_QWORD *)(v87 + 64) = BugCheckParameter2;
                if ( !(unsigned int)MiMapArbitraryPage(v86, v87, v131, v82, v84) )
                {
                  v88 = ZeroPte;
                  if ( MiPteInShadowRange((unsigned __int64)v83) )
                  {
                    if ( (unsigned int)MiPteHasShadow() )
                    {
                      if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
                        v88 = ZeroPte | 0x8000000000000000uLL;
                      *v83 = v88;
                      MiWritePteShadow((__int64)v83, v88, v89);
                      goto LABEL_74;
                    }
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (ZeroPte & 1) != 0 )
                    {
                      v88 = ZeroPte | 0x8000000000000000uLL;
                    }
                  }
                  *v83 = v88;
LABEL_74:
                  MiDereferenceCombineBlock(a3);
                  v29 = v125;
                  goto LABEL_71;
                }
                v90 = v125;
                if ( (v49 & 0x18) != 0 )
                  v90 = 1;
                v125 = v90;
                v91 = -1LL;
                if ( !v33 )
                {
                  if ( !(unsigned int)MiPerformCombineScan(v145, *(_QWORD *)v150, v132 == qword_140C4E350, v160)
                    || *(_QWORD *)&v160[0] != v137 )
                  {
                    goto LABEL_167;
                  }
                  v33 = MiAllocateCombineProto(*(__int64 *)v136, v137, v49, &v132, 0);
                  if ( !v33 )
                  {
                    v33 = MiPopCombineBlock(a3);
                    if ( v33 )
                    {
                      v133 = MiProtectionToCacheAttribute(v49);
                      v92 = *(_QWORD *)(v154 + 8LL * v133);
                      if ( v92 )
                      {
                        if ( *(_DWORD *)(v92 + 44) < *(_DWORD *)(v92 + 40) )
                        {
                          *(_DWORD *)(v33 + 40) = v49 | *(_DWORD *)(v33 + 40) & 0xFFFFFFE0;
                          *(_QWORD *)(v33 + 64) = v132;
                          v91 = *(_QWORD *)(v92 + 8 * ((unsigned __int64)*(unsigned int *)(v92 + 44) >> 12) + 48);
                          goto LABEL_163;
                        }
                      }
                    }
LABEL_167:
                    v79 = 0;
LABEL_168:
                    MiReleaseArbitraryPage(*(_QWORD *)v150);
                    v93 = ZeroPte;
                    if ( MiPteInShadowRange((unsigned __int64)v83) )
                    {
                      if ( (unsigned int)MiPteHasShadow() )
                      {
                        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
                          v93 = ZeroPte | 0x8000000000000000uLL;
                        *v83 = v93;
                        MiWritePteShadow((__int64)v83, v93, v94);
                        goto LABEL_178;
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (ZeroPte & 1) != 0 )
                      {
                        v93 = ZeroPte | 0x8000000000000000uLL;
                      }
                    }
                    *v83 = v93;
LABEL_178:
                    if ( !v80 )
                      goto LABEL_74;
                    v29 = v125;
                    goto LABEL_180;
                  }
                  v141[4] = v33;
                }
LABEL_163:
                if ( !(unsigned int)MiConvertStandbyToProto(
                                      v126,
                                      *(__int64 *)v136,
                                      *(__int64 *)v150,
                                      v131,
                                      v33,
                                      BugCheckParameter2,
                                      v149,
                                      v91) )
                  goto LABEL_167;
                ++v146[1];
                if ( v91 == -1 )
                {
                  v33 = 0LL;
                  v80 = 1;
                  ++v138;
                  v79 = 0;
                }
                else
                {
                  MiIncrementCombineMdl(v145, (unsigned int)v133);
                  v79 = 1;
                  v80 = 1;
                }
                goto LABEL_168;
              }
            }
            MiDereferenceCombineBlock(a3);
            v29 = v125;
            v14 = v128;
            v28 = v127;
            v27 = v124;
          }
        }
        else
        {
          v26 = v126;
          MiUnlockPageTable(v126, valid);
          v28 = 0LL;
          v127 = 0LL;
          MiDereferenceCombineBlock(a3);
          v14 = v128;
          v27 = v124;
        }
      }
    }
    ++v134;
LABEL_202:
    v110 = v167;
    v148 = v167;
    for ( i = 2; i <= 3; ++i )
    {
      v112 = *v110;
      if ( *v110 )
      {
        do
        {
          v113 = *(_QWORD *)(v112 + 16);
          if ( (unsigned int)MiCrcStillIntact(*(__int64 *)v136, v126, v131, v112, i) )
          {
            *(_QWORD *)(v112 + 16) = v14;
            v14 = (unsigned __int64 *)v112;
          }
          else
          {
            v32 = *(_QWORD *)(v112 + 32);
            if ( v32 >= 0x100 )
              MiDereferenceCombineBlock(a3);
          }
          v112 = v113;
        }
        while ( v113 );
        v110 = v148;
      }
      *v110 = 0LL;
      v110 += 5;
      v148 = v110;
    }
    v15 = Pool;
    v25 = a5;
    MiFlushTbList((__int64)Pool, (_KPROCESS *)v32);
    v26 = v126;
    if ( v127 )
      MiUnlockPageTable(v126, v127);
    MiUnlockWorkingSetShared(v126, v130);
    v117 = v165;
    if ( v165 )
    {
      do
      {
        v118 = v117[1];
        v119 = (unsigned __int8)MiLockPageInline(v118, v114, v115, v116);
        *(_BYTE *)(v118 + 34) = *(_BYTE *)(v118 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v118);
        _InterlockedAnd64((volatile signed __int64 *)(v118 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v120 = KeGetCurrentIrql();
            if ( v120 <= 0xFu && (unsigned __int8)v119 <= 0xFu && v120 >= 2u )
            {
              v121 = KeGetCurrentPrcb();
              v114 = -1LL << ((unsigned __int8)v119 + 1);
              v116 = v121->SchedulerAssist;
              v122 = ~(unsigned __int16)v114;
              v24 = (v122 & v116[5]) == 0;
              v115 = (unsigned int)v122 & v116[5];
              v116[5] = v115;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v121);
            }
          }
        }
        __writecr8(v119);
        v117 = (unsigned __int64 *)v117[2];
      }
      while ( v117 );
      v25 = a5;
      v26 = v126;
    }
    if ( v14 )
    {
      v5 = a3;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v5 = a3;
LABEL_228:
  v18 = v147;
  v10 = v146;
  v8 = v138;
LABEL_229:
  if ( v14 )
  {
    do
    {
      v123 = (unsigned __int64 *)v14[2];
      if ( v14[4] >= 0x100 )
        MiDereferenceCombineBlock(v5);
      v14 = v123;
    }
    while ( v123 );
  }
  if ( v140 == 1 )
  {
    KeForceDetachProcess(v162, 0);
    MiAttachThreadDone((__int64)&v18[1].ActiveProcessorsPadding[6]);
  }
  if ( v15 != v164 )
    ExFreePoolWithTag(v15, 0);
  *v10 += v8;
}
