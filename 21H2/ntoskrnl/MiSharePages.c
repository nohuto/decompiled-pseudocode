/*
 * XREFs of MiSharePages @ 0x140368510
 * Callers:
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFlushTbListEarly @ 0x1402063F8 (MiFlushTbListEarly.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeForceDetachProcess @ 0x140238598 (KeForceDetachProcess.c)
 *     MiIsStoreProcess @ 0x140258450 (MiIsStoreProcess.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14027D7E8 (KeForceAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiVadSupportsPrivateCommit @ 0x1402BFB40 (MiVadSupportsPrivateCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiPrepareAttachThread @ 0x1402FA124 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1402FA198 (MiAttachThreadDone.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiCrcStillIntact @ 0x140367D24 (MiCrcStillIntact.c)
 *     MiAllocateCombineProto @ 0x140367FC0 (MiAllocateCombineProto.c)
 *     MiRecheckVaVm @ 0x140369744 (MiRecheckVaVm.c)
 *     MiMapArbitraryPage @ 0x1403697C0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x140369950 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x140369D50 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x140369E30 (MiPerformCombineScan.c)
 *     MiHashIsCommon @ 0x140369EDC (MiHashIsCommon.c)
 *     MiMakeCombineCandidateClean @ 0x140369F3C (MiMakeCombineCandidateClean.c)
 *     MiGetCombineDomain @ 0x14036A01C (MiGetCombineDomain.c)
 *     MiPageMightBeZero @ 0x14036A034 (MiPageMightBeZero.c)
 *     MiDereferenceCombineBlock @ 0x14036A110 (MiDereferenceCombineBlock.c)
 *     MiConfirmPageIsZero @ 0x14036A140 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiPopCombineBlock @ 0x14036B004 (MiPopCombineBlock.c)
 *     MiIncrementCombineMdl @ 0x14036B05C (MiIncrementCombineMdl.c)
 *     MiComputeHash64 @ 0x140370250 (MiComputeHash64.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall MiSharePages(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4, int a5)
{
  unsigned __int64 *v5; // rsi
  __int64 v8; // r14
  _QWORD *v10; // r15
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // r13
  _BYTE *v18; // r12
  __int64 v19; // rbx
  int v20; // eax
  _KPROCESS *v21; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  int v28; // edi
  __int64 v29; // rbx
  char v30; // r15
  unsigned __int64 v31; // r14
  unsigned __int8 v32; // r12
  unsigned __int8 v33; // r9
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // r14
  __int64 v39; // rbx
  unsigned __int64 valid; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  ULONG_PTR BugCheckParameter2; // rsi
  int v52; // r13d
  char v53; // r14
  unsigned int v54; // r12d
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned __int64 v57; // r12
  __int64 v58; // rdx
  __int64 v59; // r10
  __int64 v60; // r8
  __int64 **Address; // rax
  unsigned int v62; // r14d
  unsigned __int64 **v63; // rbx
  _KPROCESS *v64; // rdx
  unsigned __int64 v65; // r11
  __int64 v66; // r8
  __int64 v67; // r9
  int IsZero; // eax
  unsigned __int64 *v69; // rcx
  unsigned __int64 *v70; // rax
  unsigned __int64 v71; // r8
  __int64 v72; // rbx
  unsigned __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // r8
  unsigned __int64 v76; // r11
  __int64 v77; // rax
  __int64 v78; // r13
  __int64 v79; // rdx
  unsigned __int64 v80; // rax
  unsigned __int64 *v81; // r14
  __int64 v82; // rsi
  unsigned __int64 v83; // rax
  bool v84; // si
  char v85; // r13
  unsigned __int64 UltraMapping; // rax
  int v87; // r9d
  unsigned __int64 *v88; // r14
  int v89; // r8d
  __int64 CombineDomain; // rax
  int v91; // ecx
  __int64 v92; // rdx
  unsigned __int64 v93; // rbx
  char v94; // al
  __int64 v95; // rbx
  __int64 v96; // rcx
  unsigned __int64 v97; // rbx
  unsigned __int64 v98; // rax
  int v99; // esi
  unsigned __int64 v100; // rbx
  unsigned int v101; // esi
  __int64 v102; // r13
  unsigned __int64 v103; // r12
  bool v104; // r8
  unsigned __int64 *v105; // rbx
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // rcx
  unsigned int v108; // eax
  unsigned __int8 v109; // al
  struct _KPRCB *v110; // r10
  _DWORD *v111; // r9
  int v112; // eax
  __int64 *v113; // r15
  int i; // r14d
  __int64 v115; // rbx
  __int64 v116; // rsi
  __int64 v117; // r8
  __int64 v118; // r9
  unsigned __int64 *v119; // rsi
  __int64 v120; // rbx
  unsigned __int64 v121; // r14
  unsigned __int8 v122; // al
  struct _KPRCB *v123; // r10
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned __int64 *v128; // rbx
  char v129; // [rsp+40h] [rbp-C0h]
  char v130; // [rsp+44h] [rbp-BCh]
  __int64 v131; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v132; // [rsp+50h] [rbp-B0h]
  unsigned __int64 *v133; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v135; // [rsp+68h] [rbp-98h]
  unsigned int v136; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v137; // [rsp+70h] [rbp-90h] BYREF
  int v138; // [rsp+78h] [rbp-88h]
  unsigned int v139; // [rsp+7Ch] [rbp-84h]
  int v140; // [rsp+80h] [rbp-80h]
  int v141[2]; // [rsp+88h] [rbp-78h]
  unsigned __int64 v142; // [rsp+90h] [rbp-70h]
  __int64 v143; // [rsp+98h] [rbp-68h]
  int v144; // [rsp+A0h] [rbp-60h]
  int v145; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 *v146; // [rsp+A8h] [rbp-58h]
  _BYTE *Pool; // [rsp+B0h] [rbp-50h]
  int v148; // [rsp+B8h] [rbp-48h]
  int v149; // [rsp+BCh] [rbp-44h]
  __int64 v150; // [rsp+C0h] [rbp-40h]
  _QWORD *v151; // [rsp+C8h] [rbp-38h]
  _KPROCESS *v152; // [rsp+D0h] [rbp-30h]
  __int64 *v153; // [rsp+D8h] [rbp-28h]
  __int64 v154; // [rsp+E0h] [rbp-20h]
  int v155[2]; // [rsp+E8h] [rbp-18h]
  int v156; // [rsp+F0h] [rbp-10h] BYREF
  int v157; // [rsp+F4h] [rbp-Ch] BYREF
  __int64 v158; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v159; // [rsp+100h] [rbp+0h]
  struct _KTHREAD *CurrentThread; // [rsp+108h] [rbp+8h]
  unsigned __int64 v161; // [rsp+110h] [rbp+10h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+118h] [rbp+18h] BYREF
  __int128 v163; // [rsp+130h] [rbp+30h]
  unsigned __int64 v164; // [rsp+140h] [rbp+40h]
  _OWORD v165[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v166; // [rsp+168h] [rbp+68h]
  _OWORD v167[3]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v168[24]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v169[208]; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 *v170; // [rsp+330h] [rbp+230h]
  __int64 v171; // [rsp+358h] [rbp+258h]
  _QWORD v172[5]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v173; // [rsp+3A8h] [rbp+2A8h] BYREF

  v150 = a1;
  v5 = a3;
  v166 = 0LL;
  v164 = 0LL;
  v8 = 0LL;
  v158 = 0LL;
  v161 = 0LL;
  memset(v165, 0, sizeof(v165));
  memset(v167, 0, sizeof(v167));
  v163 = 0LL;
  memset(v168, 0, 0xB8uLL);
  memset(v169, 0, 0xB8uLL);
  v10 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)v155 = *(_QWORD *)(a1 + 16);
  v136 = *(_DWORD *)(a1 + 60);
  *(_QWORD *)v141 = *a4;
  v11 = a2[4];
  v137 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v151 = v10;
  v139 = 0;
  v143 = 0LL;
  v131 = v11;
  v12 = MiTbFlushType(v11);
  v16 = a2[3];
  v17 = (unsigned __int64 *)a2[6];
  v144 = v12;
  v140 = 0;
  v145 = 0;
  v159 = a1 + 64;
  v18 = v169;
  Pool = v169;
  if ( v16 <= 0x14 )
  {
    LODWORD(v19) = v16;
  }
  else
  {
    v19 = 509LL;
    if ( v16 < 0x1FD )
      v19 = v16;
    Pool = MiAllocatePool(64, 8 * v19 + 24, 0x73576D4Du);
    v18 = Pool;
    if ( !Pool )
    {
      v18 = v169;
      Pool = v169;
      LODWORD(v19) = 20;
    }
  }
  v20 = v144;
  *((_DWORD *)v18 + 3) = 0;
  *((_WORD *)v18 + 2) = 0;
  *((_QWORD *)v18 + 2) = 0LL;
  *((_QWORD *)v18 + 3) = 0LL;
  *(_DWORD *)v18 = v20;
  *((_DWORD *)v18 + 2) = v19;
  v21 = (_KPROCESS *)a2[5];
  v152 = v21;
  if ( v21 && v21 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v145 = MiPrepareAttachThread((__int64)v21, (__int64)&v21[1].ActiveProcessorsPadding[6]);
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
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v145 )
      goto LABEL_229;
    KeForceAttachProcess((ULONG_PTR)v21, (__int64)v167);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = a5;
  v29 = v131;
  while ( 2 )
  {
    v30 = 0;
    v170 = 0LL;
    v171 = 0LL;
    v31 = 0LL;
    v172[0] = 0LL;
    v32 = 0;
    v173 = 0LL;
    v132 = 0LL;
    v129 = 0;
    v33 = MiLockWorkingSetShared(v29, v13, v14, v15);
    v135 = v33;
    if ( v152
      && ((HIDWORD(v152[1].DirectoryTableBase) & 0xC00u) < 0xC00
       || *(_QWORD *)(v29 + 104)
       || (unsigned int)MiIsStoreProcess((__int64)v152)) )
    {
      MiUnlockWorkingSetShared(v29, v33);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v125, v126, v127);
      v18 = Pool;
      goto LABEL_228;
    }
    while ( 1 )
    {
      v34 = v32;
      v32 = 0;
      v146 = v17;
      if ( (_BYTE)v34 != 1 )
        v32 = v34;
      v35 = 0LL;
      v130 = v32;
      if ( (_BYTE)v34 != 1 )
        v35 = (unsigned int)(v140 + 1);
      v140 = v35;
      if ( v30 )
      {
        v129 = 0;
        LOBYTE(v34) = 1;
        goto LABEL_38;
      }
      if ( (v35 & 7) != 0 )
        goto LABEL_35;
      if ( MiWorkingSetIsContended(v29) )
      {
        LOBYTE(v34) = 1;
        goto LABEL_38;
      }
      if ( v31 && (unsigned int)MiPageTableLockIsContended(v29, v31) )
      {
        LOBYTE(v34) = 1;
      }
      else
      {
LABEL_35:
        if ( KeShouldYieldProcessor() )
          LOBYTE(v34) = 1;
        else
          v34 = (unsigned int)MiFlushTbListEarly((__int64)Pool, 2) != 0;
      }
LABEL_38:
      if ( !v17 )
        break;
      if ( (_BYTE)v34 )
        goto LABEL_202;
      v36 = v17[4];
      v37 = v17[1];
      v133 = (unsigned __int64 *)v17[2];
      v142 = *v17;
      v153 = (__int64 *)v37;
      if ( v36 >= 0x100 )
      {
        v148 = *(_DWORD *)(v36 + 40) & 0x1F;
      }
      else
      {
        v148 = v36;
        v36 = 0LL;
      }
      v38 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v154 = v38;
      v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v132 == v39 )
        goto LABEL_48;
      if ( v132 )
      {
        v29 = v131;
        v30 = 1;
        v129 = 1;
        v31 = v132;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v131, ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v161);
        v132 = valid;
        if ( valid == v39 )
        {
LABEL_48:
          if ( !(unsigned int)MiRecheckVaVm(v34, v37) )
            goto LABEL_70;
          v43 = *(_QWORD *)v38;
          if ( MiPteInShadowRange(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            && (unsigned int)MiPteHasShadow()
            && (v43 & 1) != 0
            && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v45 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v38 >> 3) & 0x1FF));
              v46 = v43 | 0x20;
              if ( (v45 & 0x20) == 0 )
                v46 = v43;
              v43 = v46;
              if ( (v45 & 0x42) != 0 )
                v43 = v46 | 0x42;
            }
          }
          v158 = v43;
          if ( (v43 & 1) != 0 )
          {
            v47 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v158);
            v50 = 6 * ((v47 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v47 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = 48 * ((v47 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v156 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v156, v50, v48, v49);
              while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
            }
          }
          else
          {
            if ( (v43 & 0x400) != 0 )
              goto LABEL_70;
            if ( (v43 & 0x800) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = MiLockTransitionLeafPage(((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0LL);
            if ( !BugCheckParameter2 )
              goto LABEL_70;
          }
          v149 = MiCombineCandidate(*(_QWORD *)v141, v136, BugCheckParameter2);
          v52 = v149;
          if ( !v149 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_70:
            MiDereferenceCombineBlock(a3);
            goto LABEL_71;
          }
          v53 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
          v54 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
          v138 = 3;
          v137 = v146[3];
          if ( *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2) != v28 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_74;
          }
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v53 == 6 )
          {
            if ( v154 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
              goto LABEL_74;
            if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
              goto LABEL_74;
            v55 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (v55 & 0x1000000000LL) != 0 )
              goto LABEL_74;
            if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
              goto LABEL_74;
            v56 = v55 & 0xFFFFFFFFFLL;
            if ( v56 == 0xFFFFFFFFDLL )
              goto LABEL_74;
            v57 = (unsigned __int64)v153;
            if ( (MiGetWsleContents(v56, (unsigned __int64)v153) & 0xF) == 8 )
              goto LABEL_74;
            if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
              goto LABEL_74;
            v60 = 0LL;
            if ( v52 == 1 )
            {
              Address = MiLocateAddress(v57);
              if ( !Address
                || MiVadPageSizes[((unsigned __int64)*((unsigned int *)Address + 12) >> 18) & 3] == 16
                || !MiVadSupportsPrivateCommit((__int64)Address) )
              {
                goto LABEL_74;
              }
            }
            v62 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
            if ( v62 != v148 )
              goto LABEL_74;
            if ( (v43 & 0x42) != 0 )
            {
              if ( v139 < 8 )
              {
                v63 = (unsigned __int64 **)v172;
LABEL_104:
                MiInsertTbFlushEntry((__int64)Pool, v57, 1LL, 0);
                v69 = v146;
                v70 = *v63;
                v32 = v130;
                *v63 = v146;
                v69[2] = (unsigned __int64)v70;
                goto LABEL_71;
              }
              MiMakeCombineCandidateClean(v59, v60);
              WORD2(v168[0]) = 0;
              v168[2] = 0LL;
              v168[3] = 0LL;
              v168[1] = 1LL;
              LODWORD(v168[0]) = v144;
              MiInsertTbFlushEntry((__int64)v168, v57, 1LL, 0);
              MiFlushTbList((__int64)v168, v64);
              v59 = v154;
              v65 = v142;
              goto LABEL_92;
            }
            v65 = v142;
            if ( v142 == qword_140C4EDD8 )
            {
              if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x18) == 0 && (v43 & 0x20) != 0 && v139 < 3 )
              {
                v63 = (unsigned __int64 **)&v173;
                goto LABEL_104;
              }
LABEL_92:
              v29 = v131;
              if ( v65 != qword_140C4EDD8 || !(unsigned int)MiPageMightBeZero(v131, BugCheckParameter2, v59) )
                goto LABEL_107;
              v157 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v157, v58, v66, v67);
                while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
              }
              IsZero = MiConfirmPageIsZero(BugCheckParameter2);
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( !IsZero )
                goto LABEL_107;
              v168[2] = 0LL;
              v168[3] = 0LL;
              v168[1] = 1LL;
              LODWORD(v168[0]) = v144;
              WORD2(v168[0]) = 4;
              MiInsertTbFlushEntry((__int64)v168, v57, 1LL, 0);
              MiFreeWsleList(v131, (__int64)v168, 0);
              ++v143;
              ++v151[1];
              MiDereferenceCombineBlock(a3);
              v32 = v130;
              v17 = v133;
              v31 = v132;
              v30 = v129;
            }
            else
            {
              v29 = v131;
LABEL_107:
              v71 = v137;
              v32 = v130;
              if ( (v62 & 0x18) != 0 )
                v32 = 1;
              v130 = v32;
              if ( v137 == qword_140C4E590
                || v52 != 1
                || (v71 = v137, v137 == *(_QWORD *)(v29 + 864)) && (HIDWORD(v152[2].ReadyListHead.Blink) & 0x1000) == 0 )
              {
                v72 = -1LL;
                if ( v36 )
                {
                  LODWORD(v78) = v138;
LABEL_128:
                  v81 = v146;
                  goto LABEL_129;
                }
                v73 = (unsigned __int64)v153;
                v74 = MiComputeHash64(v153, v58, v71);
                if ( v74 != v76 )
                  goto LABEL_71;
                if ( v75 == qword_140C4E590 )
                {
                  if ( !(unsigned int)MiHashIsCommon(v150, v76, v73) )
                    goto LABEL_71;
                  v76 = v142;
                }
                v77 = MiAllocateCombineProto(*(__int64 *)v141, v76, v62, &v137, 0);
                v36 = v77;
                if ( !v77 )
                {
                  v36 = MiPopCombineBlock(a3);
                  if ( !v36 )
                    goto LABEL_71;
                  v78 = (int)MiProtectionToCacheAttribute(v62);
                  v79 = *(_QWORD *)(v159 + 8 * v78);
                  if ( !v79 || *(_DWORD *)(v79 + 44) >= *(_DWORD *)(v79 + 40) )
                  {
                    v80 = *a3;
                    if ( *(unsigned __int64 **)(*a3 + 8) != a3 )
                      __fastfail(3u);
                    *(_QWORD *)v36 = v80;
                    *(_QWORD *)(v36 + 8) = a3;
                    *(_QWORD *)(v80 + 8) = v36;
                    *a3 = v36;
                    goto LABEL_71;
                  }
                  *(_DWORD *)(v36 + 40) = v62 | *(_DWORD *)(v36 + 40) & 0xFFFFFFE0;
                  *(_QWORD *)(v36 + 64) = v137;
                  v72 = *(_QWORD *)(v79 + 8 * ((unsigned __int64)*(unsigned int *)(v79 + 44) >> 12) + 48);
                  goto LABEL_128;
                }
                v81 = v146;
                LODWORD(v78) = v138;
                v146[4] = v77;
LABEL_129:
                v82 = MiConvertPrivateToProto(v131, v154, v36, v136, *(__int64 *)v141, (__int64)Pool, v72);
                if ( !v82 )
                  goto LABEL_70;
                ++v151[1];
                if ( v72 == -1 )
                {
                  v36 = 0LL;
                  ++v143;
                }
                else
                {
                  MiIncrementCombineMdl(v150, (unsigned int)v78);
                }
                v83 = (unsigned __int64)v170;
                v81[1] = v82;
                v84 = v72 != -1;
                v81[2] = v83;
                v170 = v81;
LABEL_180:
                if ( v84 )
                {
                  v98 = v142;
                  v99 = *(_DWORD *)(v36 + 40);
                  v100 = v142 & 0xF;
                  *(_QWORD *)(v36 + 24) = v142;
                  *(_QWORD *)&v163 = v98;
                  v101 = v99 & 0x1F;
                  v102 = *(_QWORD *)v141 + 16LL * (unsigned int)v100;
                  DWORD2(v163) = v101;
                  v164 = v36 + 64;
                  v103 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v102 + 104));
                  v104 = 0;
                  v105 = (unsigned __int64 *)(*(_QWORD *)v141 + 16 * (v100 + 6));
                  v106 = *v105;
                  if ( *v105 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v107 = *(_QWORD *)(v106 + 24);
                        if ( v142 > v107 )
                          break;
                        if ( v142 >= v107 )
                        {
                          v108 = *(_DWORD *)(v106 + 40) & 0x1F;
                          if ( v101 > v108
                            || v101 >= v108 && (v36 == -64LL || *(_QWORD *)(v36 + 64) >= *(_QWORD *)(v106 + 64)) )
                          {
                            break;
                          }
                        }
                        if ( !*(_QWORD *)v106 )
                          goto LABEL_193;
                        v106 = *(_QWORD *)v106;
                      }
                      if ( !*(_QWORD *)(v106 + 8) )
                        break;
                      v106 = *(_QWORD *)(v106 + 8);
                    }
                    v104 = 1;
                  }
LABEL_193:
                  RtlAvlInsertNodeEx(v105, v106, v104, (_QWORD *)v36);
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v102 + 104));
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v109 = KeGetCurrentIrql();
                      if ( v109 <= 0xFu && (unsigned __int8)v103 <= 0xFu && v109 >= 2u )
                      {
                        v110 = KeGetCurrentPrcb();
                        v111 = v110->SchedulerAssist;
                        v112 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v103 + 1));
                        v27 = (v112 & v111[5]) == 0;
                        v111[5] &= v112;
                        if ( v27 )
                          KiRemoveSystemWorkPriorityKick(v110);
                      }
                    }
                  }
                  __writecr8(v103);
                  v32 = v130;
                }
LABEL_71:
                v17 = v133;
                v31 = v132;
                v30 = v129;
                v29 = v131;
              }
              else
              {
                MiDereferenceCombineBlock(a3);
                v17 = v133;
                v31 = v132;
                v30 = v129;
              }
            }
          }
          else
          {
            v85 = 0;
            UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v150 + 208), 3u, 1LL, 0);
            v87 = v149;
            v88 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v89 = 1;
            v29 = v131;
            if ( v137 == qword_140C4E590
              || v149 != 1
              || (CombineDomain = MiGetCombineDomain(1LL, v131), v137 == CombineDomain)
              && (HIDWORD(v152[2].ReadyListHead.Blink) & 0x1000) == 0 )
            {
              if ( v88 )
              {
                v91 = v141[0];
                v92 = *(_QWORD *)v155;
                *(_QWORD *)(*(_QWORD *)v155 + 72LL) = v88;
                *(_QWORD *)(v92 + 64) = BugCheckParameter2;
                if ( !(unsigned int)MiMapArbitraryPage(v91, v92, v136, v87, v89) )
                {
                  v93 = ZeroPte;
                  if ( MiPteInShadowRange((unsigned __int64)v88) )
                  {
                    if ( (unsigned int)MiPteHasShadow() )
                    {
                      if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                        v93 = ZeroPte | 0x8000000000000000uLL;
                      *v88 = v93;
                      MiWritePteShadow((__int64)v88, v93);
                      goto LABEL_74;
                    }
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (ZeroPte & 1) != 0 )
                    {
                      v93 = ZeroPte | 0x8000000000000000uLL;
                    }
                  }
                  *v88 = v93;
LABEL_74:
                  MiDereferenceCombineBlock(a3);
                  v32 = v130;
                  goto LABEL_71;
                }
                v94 = v130;
                if ( (v54 & 0x18) != 0 )
                  v94 = 1;
                v130 = v94;
                v95 = -1LL;
                if ( !v36 )
                {
                  if ( !(unsigned int)MiPerformCombineScan(v150, *(_QWORD *)v155, v137 == qword_140C4E590, v165)
                    || *(_QWORD *)&v165[0] != v142 )
                  {
                    goto LABEL_167;
                  }
                  v36 = MiAllocateCombineProto(*(__int64 *)v141, v142, v54, &v137, 0);
                  if ( !v36 )
                  {
                    v36 = MiPopCombineBlock(a3);
                    if ( v36 )
                    {
                      v138 = MiProtectionToCacheAttribute(v54);
                      v96 = *(_QWORD *)(v159 + 8LL * v138);
                      if ( v96 )
                      {
                        if ( *(_DWORD *)(v96 + 44) < *(_DWORD *)(v96 + 40) )
                        {
                          *(_DWORD *)(v36 + 40) = v54 | *(_DWORD *)(v36 + 40) & 0xFFFFFFE0;
                          *(_QWORD *)(v36 + 64) = v137;
                          v95 = *(_QWORD *)(v96 + 8 * ((unsigned __int64)*(unsigned int *)(v96 + 44) >> 12) + 48);
                          goto LABEL_163;
                        }
                      }
                    }
LABEL_167:
                    v84 = 0;
LABEL_168:
                    MiReleaseArbitraryPage(*(_QWORD *)v155);
                    v97 = ZeroPte;
                    if ( MiPteInShadowRange((unsigned __int64)v88) )
                    {
                      if ( (unsigned int)MiPteHasShadow() )
                      {
                        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
                          v97 = ZeroPte | 0x8000000000000000uLL;
                        *v88 = v97;
                        MiWritePteShadow((__int64)v88, v97);
                        goto LABEL_178;
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (ZeroPte & 1) != 0 )
                      {
                        v97 = ZeroPte | 0x8000000000000000uLL;
                      }
                    }
                    *v88 = v97;
LABEL_178:
                    if ( !v85 )
                      goto LABEL_74;
                    v32 = v130;
                    goto LABEL_180;
                  }
                  v146[4] = v36;
                }
LABEL_163:
                if ( !(unsigned int)MiConvertStandbyToProto(
                                      v131,
                                      *(__int64 *)v141,
                                      *(__int64 *)v155,
                                      v136,
                                      v36,
                                      BugCheckParameter2,
                                      v154,
                                      v95) )
                  goto LABEL_167;
                ++v151[1];
                if ( v95 == -1 )
                {
                  v36 = 0LL;
                  v85 = 1;
                  ++v143;
                  v84 = 0;
                }
                else
                {
                  MiIncrementCombineMdl(v150, (unsigned int)v138);
                  v84 = 1;
                  v85 = 1;
                }
                goto LABEL_168;
              }
            }
            MiDereferenceCombineBlock(a3);
            v32 = v130;
            v17 = v133;
            v31 = v132;
            v30 = v129;
          }
        }
        else
        {
          v29 = v131;
          MiUnlockPageTable(v131, valid, v41, v42);
          v31 = 0LL;
          v132 = 0LL;
          MiDereferenceCombineBlock(a3);
          v17 = v133;
          v30 = v129;
        }
      }
    }
    ++v139;
LABEL_202:
    v113 = v172;
    v153 = v172;
    for ( i = 2; i <= 3; ++i )
    {
      v115 = *v113;
      if ( *v113 )
      {
        do
        {
          v116 = *(_QWORD *)(v115 + 16);
          if ( (unsigned int)MiCrcStillIntact(*(__int64 *)v141, v131, v136, v115, i) )
          {
            *(_QWORD *)(v115 + 16) = v17;
            v17 = (unsigned __int64 *)v115;
          }
          else
          {
            v35 = *(_QWORD *)(v115 + 32);
            if ( v35 >= 0x100 )
              MiDereferenceCombineBlock(a3);
          }
          v115 = v116;
        }
        while ( v116 );
        v113 = v153;
      }
      *v113 = 0LL;
      v113 += 5;
      v153 = v113;
    }
    v18 = Pool;
    v28 = a5;
    MiFlushTbList((__int64)Pool, (_KPROCESS *)v35);
    v29 = v131;
    if ( v132 )
      MiUnlockPageTable(v131, v132, v117, v118);
    MiUnlockWorkingSetShared(v131, v135);
    v119 = v170;
    if ( v170 )
    {
      do
      {
        v120 = v119[1];
        v121 = (unsigned __int8)MiLockPageInline(v120, v13, v14, v15);
        *(_BYTE *)(v120 + 34) = *(_BYTE *)(v120 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v120);
        _InterlockedAnd64((volatile signed __int64 *)(v120 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v122 = KeGetCurrentIrql();
            if ( v122 <= 0xFu && (unsigned __int8)v121 <= 0xFu && v122 >= 2u )
            {
              v123 = KeGetCurrentPrcb();
              v13 = -1LL << ((unsigned __int8)v121 + 1);
              v15 = v123->SchedulerAssist;
              v124 = ~(unsigned __int16)v13;
              v27 = (v124 & v15[5]) == 0;
              v14 = (unsigned int)v124 & v15[5];
              v15[5] = v14;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v123);
            }
          }
        }
        __writecr8(v121);
        v119 = (unsigned __int64 *)v119[2];
      }
      while ( v119 );
      v28 = a5;
      v29 = v131;
    }
    if ( v17 )
    {
      v5 = a3;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, (__int64)v15);
  v5 = a3;
LABEL_228:
  v21 = v152;
  v10 = v151;
  v8 = v143;
LABEL_229:
  if ( v17 )
  {
    do
    {
      v128 = (unsigned __int64 *)v17[2];
      if ( v17[4] >= 0x100 )
        MiDereferenceCombineBlock(v5);
      v17 = v128;
    }
    while ( v128 );
  }
  if ( v145 == 1 )
  {
    KeForceDetachProcess(v167, 0);
    MiAttachThreadDone((__int64)&v21[1].ActiveProcessorsPadding[6]);
  }
  if ( v18 != v169 )
    ExFreePoolWithTag(v18, 0);
  *v10 += v8;
}
