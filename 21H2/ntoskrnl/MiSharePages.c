/*
 * XREFs of MiSharePages @ 0x140314BA0
 * Callers:
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 * Callees:
 *     MiPerformCombineScan @ 0x14020D740 (MiPerformCombineScan.c)
 *     MiHashIsCommon @ 0x14020D86C (MiHashIsCommon.c)
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiConfirmPageIsZero @ 0x140221FD0 (MiConfirmPageIsZero.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiComputeHash64 @ 0x1402225D0 (MiComputeHash64.c)
 *     MiReleaseArbitraryPage @ 0x1402233C0 (MiReleaseArbitraryPage.c)
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiIsStoreProcess @ 0x1402365F4 (MiIsStoreProcess.c)
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     MiDereferenceCombineBlock @ 0x140239978 (MiDereferenceCombineBlock.c)
 *     MiPopCombineBlock @ 0x1402434C0 (MiPopCombineBlock.c)
 *     MiIncrementCombineMdl @ 0x140248180 (MiIncrementCombineMdl.c)
 *     MiAllocateCombineProto @ 0x14026AB70 (MiAllocateCombineProto.c)
 *     MiGetCombineDomain @ 0x14026B2D4 (MiGetCombineDomain.c)
 *     MiCheckProcessCombineSequence @ 0x14026B2EC (MiCheckProcessCombineSequence.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiDecrementShareCount @ 0x140273FD0 (MiDecrementShareCount.c)
 *     MiPageTableLockIsContended @ 0x140274C80 (MiPageTableLockIsContended.c)
 *     MiLockLowestValidPageTable @ 0x14027D6E0 (MiLockLowestValidPageTable.c)
 *     MiAttachThreadDone @ 0x14027D8DC (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x14027D9E8 (MiPrepareAttachThread.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiVadPagesTradable @ 0x14031285C (MiVadPagesTradable.c)
 *     MiMapArbitraryPage @ 0x1403128B0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x1403137B0 (MiCombineCandidate.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiCrcStillIntact @ 0x140339D70 (MiCrcStillIntact.c)
 *     MiMakeCombineCandidateClean @ 0x14033A5B0 (MiMakeCombineCandidateClean.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     MiPageMightBeZero @ 0x14033FFD4 (MiPageMightBeZero.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiSharePages(__int64 a1, _QWORD *a2, __int64 *a3, __int64 **a4, int a5)
{
  __int64 v8; // rcx
  int v9; // eax
  _KSPIN_LOCK_QUEUE *v10; // r8
  unsigned __int64 v11; // rcx
  _BYTE *v12; // r14
  unsigned __int64 *v13; // r12
  int v14; // r13d
  __int64 v15; // rbx
  _KPROCESS *v16; // rdi
  unsigned __int8 CurrentIrql; // r11
  int v18; // r15d
  unsigned __int64 OldIrql; // rbx
  int v20; // esi
  char v21; // r15
  char v22; // di
  unsigned __int8 v23; // r9
  char v24; // cl
  int v25; // eax
  int v26; // r13d
  char v27; // bl
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rcx
  ULONG_PTR v31; // r13
  __int64 v32; // rbx
  unsigned __int64 valid; // rax
  __int64 v34; // rbx
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r15
  char v41; // bl
  unsigned int v42; // r12d
  __int64 v43; // rcx
  __int64 v44; // rbx
  __int64 **Address; // r13
  unsigned __int64 v46; // r12
  unsigned int v47; // ebx
  unsigned __int64 v48; // r10
  __int64 v49; // r12
  unsigned __int64 v50; // rdi
  __int64 v51; // r13
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  BOOL IsZero; // eax
  _QWORD *v56; // rdx
  unsigned __int64 *v57; // rsi
  unsigned __int64 **v58; // rdi
  int v59; // r15d
  int v60; // r13d
  unsigned __int64 *v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // r8
  _DWORD *v64; // r9
  _KSPIN_LOCK_QUEUE *Next; // rbx
  unsigned __int64 *v66; // rbx
  unsigned __int64 *v67; // rcx
  unsigned __int64 v68; // rax
  _QWORD *result; // rax
  _QWORD *v70; // r13
  __int64 v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // r8
  void *v74; // r11
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // rax
  _KSPIN_LOCK_QUEUE *v77; // r15
  __int64 v78; // rbx
  char v79; // r15
  __int64 v80; // rbx
  __int64 *v81; // r15
  unsigned int v82; // edi
  unsigned __int64 v83; // r13
  bool v84; // r8
  unsigned __int64 *v85; // rbx
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 *v88; // r12
  __int64 Lock; // rdi
  unsigned __int8 v90; // r15
  _DWORD *SchedulerAssist; // r10
  __int64 v92; // r8
  unsigned __int64 *v93; // r8
  __int64 v94; // rdi
  unsigned int v95; // eax
  __int64 v96; // rbx
  char v97; // r13
  unsigned __int64 *v98; // rdi
  unsigned int v99; // eax
  __int64 CombineDomain; // rax
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rbx
  _QWORD *v104; // r12
  unsigned __int64 v105; // rbx
  __int64 v106; // rbx
  PVOID Pool; // rax
  _QWORD *v108; // rdx
  unsigned __int64 *v109; // rbx
  unsigned __int8 v110; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v112; // r9
  int v113; // eax
  bool v114; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v116; // rax
  struct _LIST_ENTRY *v117; // rdx
  __int64 v118; // rax
  unsigned __int64 v119; // rax
  unsigned __int64 v120; // rbx
  unsigned __int8 v121; // al
  struct _KPRCB *v122; // r10
  _DWORD *v123; // r9
  int v124; // eax
  _QWORD *v125; // rdx
  unsigned __int8 v126; // al
  struct _KPRCB *v127; // r10
  int v128; // eax
  bool v129; // [rsp+40h] [rbp-C0h]
  char v130; // [rsp+41h] [rbp-BFh]
  char v131; // [rsp+42h] [rbp-BEh]
  unsigned __int64 v132; // [rsp+48h] [rbp-B8h]
  unsigned __int64 *v133; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v135; // [rsp+60h] [rbp-A0h]
  __int64 v136; // [rsp+68h] [rbp-98h]
  unsigned int v137; // [rsp+70h] [rbp-90h]
  unsigned int v138; // [rsp+74h] [rbp-8Ch]
  unsigned __int64 v139; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 *v140; // [rsp+80h] [rbp-80h]
  int v141; // [rsp+88h] [rbp-78h]
  unsigned int v142; // [rsp+8Ch] [rbp-74h]
  __int64 *v143; // [rsp+90h] [rbp-70h]
  unsigned __int64 v144; // [rsp+98h] [rbp-68h]
  int v145; // [rsp+A0h] [rbp-60h]
  int v146; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v147; // [rsp+A8h] [rbp-58h]
  __int64 v148; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v149; // [rsp+B8h] [rbp-48h]
  __int64 v150; // [rsp+C0h] [rbp-40h]
  int v151; // [rsp+C8h] [rbp-38h]
  int v152; // [rsp+CCh] [rbp-34h]
  unsigned __int64 v153; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+D8h] [rbp-28h]
  __int64 v155; // [rsp+E0h] [rbp-20h]
  _KPROCESS *v156; // [rsp+E8h] [rbp-18h]
  _QWORD *v157; // [rsp+F0h] [rbp-10h]
  int v158; // [rsp+F8h] [rbp-8h] BYREF
  int v159; // [rsp+FCh] [rbp-4h] BYREF
  int v160; // [rsp+100h] [rbp+0h] BYREF
  __int64 v161; // [rsp+108h] [rbp+8h] BYREF
  __int64 v162; // [rsp+110h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp+18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v165; // [rsp+138h] [rbp+38h] BYREF
  __int128 v166; // [rsp+140h] [rbp+40h]
  unsigned __int64 v167; // [rsp+150h] [rbp+50h]
  _OWORD v168[2]; // [rsp+158h] [rbp+58h] BYREF
  __int64 v169; // [rsp+178h] [rbp+78h]
  _OWORD v170[3]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v171[24]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v172; // [rsp+270h] [rbp+170h]
  __int128 v173; // [rsp+280h] [rbp+180h]
  __int128 v174; // [rsp+290h] [rbp+190h]
  _BYTE v175[208]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _KSPIN_LOCK_QUEUE *v176; // [rsp+370h] [rbp+270h]
  _KSPIN_LOCK_QUEUE *v177; // [rsp+398h] [rbp+298h]
  _QWORD v178[5]; // [rsp+3C0h] [rbp+2C0h] BYREF
  _KSPIN_LOCK_QUEUE *v179; // [rsp+3E8h] [rbp+2E8h] BYREF

  v150 = a1;
  v169 = 0LL;
  v161 = 0LL;
  v165 = 0LL;
  v167 = 0LL;
  memset(v168, 0, sizeof(v168));
  memset(v170, 0, sizeof(v170));
  v166 = 0LL;
  memset(v171, 0, 0xB8uLL);
  memset(v175, 0, 0xB8uLL);
  v155 = *(_QWORD *)(a1 + 16);
  v138 = *(_DWORD *)(a1 + 60);
  v157 = *(_QWORD **)(a1 + 24);
  v143 = *a4;
  v8 = a2[4];
  v139 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v142 = 0;
  v148 = 0LL;
  v136 = v8;
  v9 = MiTbFlushType(v8);
  v11 = a2[3];
  v12 = v175;
  v13 = (unsigned __int64 *)a2[6];
  v14 = (int)v10;
  v145 = v9;
  v162 = a1 + 64;
  v146 = (int)v10;
  P = v175;
  if ( v11 > 0x14 )
  {
    v15 = 509LL;
    if ( v11 < 0x1FD )
      v15 = v11;
    Pool = MiAllocatePool(64, 8 * v15 + 24, 0x73576D4Du);
    v10 = 0LL;
    P = Pool;
    v12 = Pool;
    if ( !Pool )
    {
      v12 = v175;
      LODWORD(v15) = 20;
      P = v175;
    }
  }
  else
  {
    LODWORD(v15) = v11;
  }
  *(_DWORD *)v12 = v145;
  *((_DWORD *)v12 + 3) = (_DWORD)v10;
  *((_WORD *)v12 + 2) = v14;
  *((_QWORD *)v12 + 2) = v10;
  *((_DWORD *)v12 + 2) = v15;
  *((_QWORD *)v12 + 3) = v10;
  v16 = (_KPROCESS *)a2[5];
  v156 = v16;
  if ( v16 && v16 != KeGetCurrentThread()->ApcState.Process )
  {
    LockHandle.LockQueue.Next = v10;
    LockHandle.LockQueue.Lock = &SpinLock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    LockHandle.OldIrql = CurrentIrql;
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
    v146 = MiPrepareAttachThread((__int64)v16, (__int64)&v16[1].ActiveProcessors.StaticBitmap[26]);
    v18 = v146;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v110 = KeGetCurrentIrql();
        if ( v110 <= 0xFu && LockHandle.OldIrql <= 0xFu && v110 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v112 = CurrentPrcb->SchedulerAssist;
          v113 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v114 = (v113 & v112[5]) == 0;
          v112[5] &= v113;
          if ( v114 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !v18 )
      goto LABEL_85;
    KeForceAttachProcess((ULONG_PTR)v16, (__int64)v170);
    v10 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = a5;
  while ( 2 )
  {
    v21 = 0;
    v176 = v10;
    v177 = v10;
    v22 = 0;
    v178[0] = v10;
    v179 = v10;
    v153 = (unsigned __int64)v10;
    v130 = 0;
    v23 = MiLockWorkingSetShared(v136);
    v135 = v23;
    if ( v156
      && ((HIDWORD(v156[1].DirectoryTableBase) & 0xC00u) < 0xC00
       || *(_QWORD *)(v136 + 104)
       || (unsigned int)MiIsStoreProcess((__int64)v156)) )
    {
      MiUnlockWorkingSetShared(v136, v23);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      v18 = v146;
LABEL_85:
      if ( v13 )
      {
        do
        {
          v108 = (_QWORD *)v13[4];
          v109 = (unsigned __int64 *)v13[2];
          if ( (unsigned __int64)v108 >= 0x100 )
            MiDereferenceCombineBlock(a3, v108);
          v13 = v109;
        }
        while ( v109 );
        v12 = P;
      }
      goto LABEL_86;
    }
    while ( 1 )
    {
      v24 = v22;
      v140 = v13;
      v22 = 0;
      v25 = v14 + 1;
      v26 = 0;
      v129 = 0;
      v27 = 0;
      if ( !v24 )
        v26 = v25;
      v152 = v26;
      if ( v21 )
      {
        v130 = 0;
LABEL_82:
        v27 = 1;
        goto LABEL_26;
      }
      if ( (v26 & 7) == 0
        && ((unsigned int)MiWorkingSetIsContended(v136) || v153 && (unsigned int)MiPageTableLockIsContended(v92, v153))
        || KeShouldYieldProcessor() )
      {
        goto LABEL_82;
      }
      v28 = qword_140C507D0;
      if ( (v12[4] & 2) == 0
        && *(_DWORD *)v12 == 1
        && KeGetCurrentThread()->ApcState.Process[2].Affinity.StaticBitmap[5] )
      {
        v28 = -1LL;
      }
      if ( *((_DWORD *)v12 + 3) >= *((_DWORD *)v12 + 2) || v12[5] || *((_QWORD *)v12 + 2) > v28 )
        goto LABEL_82;
LABEL_26:
      if ( !v13 )
        break;
      if ( v27 )
        goto LABEL_68;
      v29 = v13[4];
      v30 = v13[1];
      v133 = (unsigned __int64 *)v13[2];
      v144 = *v13;
      v147 = v30;
      v132 = v29;
      if ( v29 >= 0x100 )
      {
        v151 = *(_DWORD *)(v29 + 40) & 0x1F;
      }
      else
      {
        v151 = v29;
        v29 = 0LL;
        v132 = 0LL;
      }
      v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v149 = v31;
      v32 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v153 == v32 )
      {
LABEL_33:
        v34 = *(_QWORD *)v31;
        if ( !(unsigned int)MiPteInShadowRange(v31)
          || (MiFlags & 0xC00000) == 0
          || KeGetCurrentThread()->ApcState.Process->AddressPolicy == 1 )
        {
          goto LABEL_34;
        }
        if ( (v34 & 1) != 0 )
        {
          if ( (v34 & 0x20) == 0 || (v34 & 0x42) == 0 )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v116 = *((_QWORD *)&Flink->Flink + ((v31 >> 3) & 0x1FF));
              if ( (v116 & 0x20) != 0 )
                LOWORD(v34) = v34 | 0x20;
              if ( (v116 & 0x42) != 0 )
                LOWORD(v34) = v34 | 0x42;
            }
          }
LABEL_34:
          if ( (v34 & 1) == 0 )
            goto LABEL_155;
LABEL_35:
          v35 = *(_QWORD *)v31;
          if ( (unsigned int)MiPteInShadowRange(v31)
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v35 & 1) != 0
            && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
          {
            v117 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v117 )
            {
              v118 = *((_QWORD *)&v117->Flink + ((v31 >> 3) & 0x1FF));
              if ( (v118 & 0x20) != 0 )
                v35 |= 0x20uLL;
              if ( (v118 & 0x42) != 0 )
                v35 |= 0x42uLL;
            }
          }
          v161 = v35;
          if ( (v35 & 1) != 0 )
          {
            v36 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v161) >> 12) & 0xFFFFFFFFFFLL;
            if ( v36 > qword_140C50840 )
              goto LABEL_263;
            v39 = 6 * v36;
            if ( !_bittest64((const signed __int64 *)(48 * v36 - 0x21FFFFFFFFD8LL), 0x36u) )
              goto LABEL_263;
            v40 = 48 * v36 - 0x220000000000LL;
            v158 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v158, v39, v37, v38);
              while ( *(__int64 *)(v40 + 24) < 0 );
            }
          }
          else
          {
            if ( (v35 & 0x400) != 0 || (v35 & 0x800) == 0 )
            {
LABEL_263:
              v56 = (_QWORD *)v29;
              goto LABEL_66;
            }
            v40 = MiLockTransitionLeafPageEx(v31);
            if ( !v40 )
              goto LABEL_231;
          }
          v137 = MiCombineCandidate(v143, v138, (__int128 *)v40);
          if ( !v137
            || (v41 = *(_BYTE *)(v40 + 34) & 7,
                v42 = (*(_DWORD *)(v40 + 16) >> 5) & 0x1F,
                v141 = 3,
                v139 = v140[3],
                *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v40 + 0x220000000000LL) >> 4)) + 2) != v20) )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_65:
            v56 = (_QWORD *)v132;
            goto LABEL_66;
          }
          v131 = 0;
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v41 == 6 )
          {
            if ( v31 != (*(_QWORD *)(v40 + 8) | 0x8000000000000000uLL)
              || (v43 = *(_QWORD *)(v40 + 40), v43 < 0)
              || (v43 & 0x10000000000LL) != 0
              || (*(_BYTE *)(v40 + 35) & 8) != 0
              || (v43 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
            {
LABEL_231:
              v56 = (_QWORD *)v132;
LABEL_66:
              MiDereferenceCombineBlock(a3, v56);
              goto LABEL_79;
            }
            v44 = *(_QWORD *)v31;
            MiPteInShadowRange(v31);
            if ( (HIBYTE(v44) & 0xF) == 8 || *(_WORD *)(v40 + 32) != 1 )
              goto LABEL_65;
            Address = 0LL;
            if ( v137 == 1 )
            {
              ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                              + 284));
              v46 = v147;
              Address = MiLocateAddress(v147);
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                                + 284));
              if ( !Address
                || MiVadPageSizes[(*((_DWORD *)Address + 12) >> 19) & 3] == 16
                || !(unsigned int)MiVadPagesTradable((__int64)Address) && ((_DWORD)Address[6] & 0x70) != 0x40 )
              {
                goto LABEL_65;
              }
            }
            else
            {
              v46 = v147;
            }
            v47 = (*(_DWORD *)(v40 + 16) >> 5) & 0x1F;
            if ( v47 != v151 )
              goto LABEL_65;
            if ( (v35 & 0x42) != 0 )
            {
              if ( v142 < 8 )
              {
                v66 = v178;
LABEL_78:
                MiInsertTbFlushEntry((__int64)v12, v46, 1LL, 0);
                v67 = v140;
                v68 = *v66;
                *v66 = (unsigned __int64)v140;
                v67[2] = v68;
                goto LABEL_79;
              }
              v49 = v149;
              MiMakeCombineCandidateClean(v149, Address);
              v50 = v147;
              WORD2(v171[0]) = 0;
              v171[2] = 0LL;
              v171[3] = 0LL;
              v171[1] = 1LL;
              LODWORD(v171[0]) = v145;
              MiInsertTbFlushEntry((__int64)v171, v147, 1LL, 0);
              MiFlushTbList(v171);
              v48 = v144;
            }
            else
            {
              v48 = v144;
              if ( v144 != qword_140C532A8 )
              {
                v49 = v149;
                v51 = v136;
                goto LABEL_92;
              }
              if ( ((*(_DWORD *)(v40 + 16) >> 5) & 0x18) == 0 && (v35 & 0x20) != 0 && v142 < 3 )
              {
                v66 = (unsigned __int64 *)&v179;
                goto LABEL_78;
              }
              v49 = v149;
              v50 = v147;
            }
            v51 = v136;
            if ( v48 == qword_140C532A8 && (unsigned int)MiPageMightBeZero(v136, v40, v49) )
            {
              v159 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v159, v52, v53, v54);
                while ( *(__int64 *)(v40 + 24) < 0 );
              }
              IsZero = MiConfirmPageIsZero(v40);
              _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( IsZero )
              {
                v171[2] = 0LL;
                v171[3] = 0LL;
                v171[1] = 1LL;
                LODWORD(v171[0]) = v145;
                WORD2(v171[0]) = 4;
                MiInsertTbFlushEntry((__int64)v171, v50, 1LL, 0);
                MiFreeWsleList(v136, (__int64)v171, 0);
                ++v148;
                ++v157[1];
                goto LABEL_65;
              }
            }
LABEL_92:
            v22 = 0;
            if ( (v47 & 0x18) != 0 )
            {
              v22 = 1;
              v129 = 1;
            }
            if ( v139 == qword_140C51DD0
              || v137 != 1
              || v139 == *(_QWORD *)(v51 + 864)
              && (HIDWORD(v156[2].ReadyListHead.Blink) & 0x1000) == 0
              && MiCheckProcessCombineSequence((__int64)v156, *(_DWORD *)(v150 + 240)) )
            {
              v70 = (_QWORD *)v132;
              v71 = -1LL;
              if ( !v132 )
              {
                v72 = MiComputeHash64(v147);
                v75 = v144;
                if ( v72 != v144 || v73 == qword_140C51DD0 && !MiHashIsCommon(v150, v144, v74) )
                  goto LABEL_79;
                v76 = MiAllocateCombineProto((__int64)v143, v75, v47, &v139, 0);
                v132 = v76;
                v70 = (_QWORD *)v76;
                if ( v76 )
                {
                  v77 = (_KSPIN_LOCK_QUEUE *)v140;
                  v140[4] = v76;
                  goto LABEL_104;
                }
                v132 = (unsigned __int64)MiPopCombineBlock((_QWORD **)a3);
                v70 = (_QWORD *)v132;
                if ( v132 )
                {
                  v141 = MiProtectionToCacheAttribute(v47);
                  v94 = *(_QWORD *)(v162 + 8LL * v141);
                  if ( !v94 || *(_DWORD *)(v94 + 44) >= *(_DWORD *)(v94 + 40) )
                  {
                    v119 = *v93;
                    if ( *(unsigned __int64 **)(*v93 + 8) != v93 )
                      __fastfail(3u);
                    *(_QWORD *)v132 = v119;
                    *(_QWORD *)(v132 + 8) = v93;
                    *(_QWORD *)(v119 + 8) = v132;
                    *v93 = v132;
                    goto LABEL_79;
                  }
                  *(_DWORD *)(v132 + 40) = v47 | *(_DWORD *)(v132 + 40) & 0xFFFFFFE0;
                  *(_QWORD *)(v132 + 64) = v139;
                  v71 = *(_QWORD *)(v94 + 8 * ((unsigned __int64)*(unsigned int *)(v94 + 44) >> 12) + 48);
                  goto LABEL_138;
                }
LABEL_79:
                v22 = v129;
                goto LABEL_80;
              }
LABEL_138:
              v77 = (_KSPIN_LOCK_QUEUE *)v140;
LABEL_104:
              v78 = MiConvertPrivateToProto(v136, v49, (__int64)v70, v138, v143, (__int64)v12, v71);
              if ( !v78 )
              {
                MiDereferenceCombineBlock(a3, v70);
                goto LABEL_79;
              }
              ++v157[1];
              if ( v71 == -1 )
              {
                ++v148;
                v132 = 0LL;
              }
              else
              {
                MiIncrementCombineMdl(v150, v141);
                v131 = 1;
              }
              v77[1].Next = v176;
              v77->Lock = (unsigned __int64 *volatile)v78;
              v176 = v77;
              v79 = v131;
LABEL_108:
              if ( v79 )
              {
                *(_QWORD *)&v166 = v144;
                v80 = v144 & 0xF;
                v81 = &v143[2 * v80];
                v82 = *(_DWORD *)(v132 + 40) & 0x1F;
                *(_QWORD *)(v132 + 24) = v144;
                DWORD2(v166) = v82;
                v167 = v132 + 64;
                v83 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v81 + 26);
                v84 = 0;
                v85 = (unsigned __int64 *)&v143[2 * v80 + 12];
                v86 = *v85;
                if ( *v85 )
                {
                  while ( 1 )
                  {
                    if ( v144 > *(_QWORD *)(v86 + 24)
                      || v144 >= *(_QWORD *)(v86 + 24)
                      && (v95 = *(_DWORD *)(v86 + 40) & 0x1F, v82 >= v95)
                      && (v82 > v95 || v132 == -64LL || *(_QWORD *)(v132 + 64) >= *(_QWORD *)(v86 + 64)) )
                    {
                      v87 = *(_QWORD *)(v86 + 8);
                      if ( !v87 )
                      {
                        v84 = 1;
                        break;
                      }
                    }
                    else
                    {
                      v87 = *(_QWORD *)v86;
                      if ( !*(_QWORD *)v86 )
                        break;
                    }
                    v86 = v87;
                  }
                }
                RtlAvlInsertNodeEx(v85, v86, v84, (_QWORD *)v132);
                ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v81 + 26);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v121 = KeGetCurrentIrql();
                    if ( v121 <= 0xFu && (unsigned __int8)v83 <= 0xFu && v121 >= 2u )
                    {
                      v122 = KeGetCurrentPrcb();
                      v123 = v122->SchedulerAssist;
                      v124 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v83 + 1));
                      v114 = (v124 & v123[5]) == 0;
                      v123[5] &= v124;
                      if ( v114 )
                        KiRemoveSystemWorkPriorityKick(v122);
                    }
                  }
                }
                __writecr8(v83);
              }
              goto LABEL_79;
            }
            MiDereferenceCombineBlock(a3, (_QWORD *)v132);
            v21 = v130;
            v13 = v133;
            v14 = v152;
          }
          else
          {
            v96 = v150;
            v97 = 0;
            v98 = (unsigned __int64 *)((((unsigned __int64)MiGetUltraMapping(
                                                             (unsigned __int64 *)(v150 + 208),
                                                             3u,
                                                             1LL,
                                                             0) >> 9) & 0x7FFFFFFFF8LL)
                                     - 0x98000000000LL);
            v99 = v137;
            if ( v139 != qword_140C51DD0 && v137 == 1 )
            {
              CombineDomain = MiGetCombineDomain(1, v136);
              if ( v139 != CombineDomain
                || (HIDWORD(v156[2].ReadyListHead.Blink) & 0x1000) != 0
                || !MiCheckProcessCombineSequence((__int64)v156, *(_DWORD *)(v96 + 240)) )
              {
                goto LABEL_239;
              }
              v99 = v137;
            }
            if ( v98 )
            {
              v101 = v155;
              *(_QWORD *)(v155 + 72) = v98;
              *(_QWORD *)(v101 + 64) = v40;
              if ( (unsigned int)MiMapArbitraryPage((__int64)v143, v101, v138, (_DWORD *)v99, 1) )
              {
                v129 = (v42 & 0x18) != 0;
                v102 = v132;
                v103 = -1LL;
                if ( v132 )
                  goto LABEL_174;
                if ( !(unsigned int)MiPerformCombineScan(v150, v155, v139 == qword_140C51DD0, (unsigned __int64 *)v168)
                  || *(_QWORD *)&v168[0] != v144 )
                {
                  goto LABEL_193;
                }
                v132 = MiAllocateCombineProto((__int64)v143, v144, v42, &v139, 0);
                v102 = v132;
                if ( v132 )
                {
                  v140[4] = v132;
                  goto LABEL_174;
                }
                v132 = (unsigned __int64)MiPopCombineBlock((_QWORD **)a3);
                if ( !v132 )
                  goto LABEL_193;
                v141 = MiProtectionToCacheAttribute(v42);
                v106 = *(_QWORD *)(v162 + 8LL * v141);
                if ( !v106 || *(_DWORD *)(v106 + 44) >= *(_DWORD *)(v106 + 40) )
                  goto LABEL_193;
                *(_DWORD *)(v102 + 40) = v42 | *(_DWORD *)(v102 + 40) & 0xFFFFFFE0;
                *(_QWORD *)(v102 + 64) = v139;
                v103 = *(_QWORD *)(v106 + 8 * ((unsigned __int64)*(unsigned int *)(v106 + 44) >> 12) + 48);
LABEL_174:
                if ( (unsigned int)MiConvertStandbyToProto(v136, (__int64)v143, v155, v138, v102, v40, v149, v103) )
                {
                  ++v157[1];
                  if ( v103 == -1 )
                  {
                    v104 = 0LL;
                    v97 = 1;
                    ++v148;
                    v79 = 0;
                    v132 = 0LL;
                    goto LABEL_177;
                  }
                  MiIncrementCombineMdl(v150, v141);
                  v79 = 1;
                  v97 = 1;
                }
                else
                {
LABEL_193:
                  v79 = 0;
                }
                v104 = (_QWORD *)v132;
LABEL_177:
                MiReleaseArbitraryPage(v155);
                v105 = ZeroPte;
                if ( (unsigned int)MiPteInShadowRange(v98) )
                {
                  if ( !(unsigned int)MiPteHasShadow() )
                  {
                    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                      && (ZeroPte & 1) != 0 )
                    {
                      v105 = ZeroPte | 0x8000000000000000uLL;
                    }
                    goto LABEL_178;
                  }
                  if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                    v105 = ZeroPte | 0x8000000000000000uLL;
                  *v98 = v105;
                  MiWritePteShadow((__int64)v98, v105);
                }
                else
                {
LABEL_178:
                  *v98 = v105;
                }
                if ( !v97 )
                {
                  MiDereferenceCombineBlock(a3, v104);
                  goto LABEL_79;
                }
                goto LABEL_108;
              }
              v120 = ZeroPte;
              if ( (unsigned int)MiPteInShadowRange(v98) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C51864) && (ZeroPte & 1) != 0 )
                    v120 = ZeroPte | 0x8000000000000000uLL;
                  *v98 = v120;
                  MiWritePteShadow((__int64)v98, v120);
                  goto LABEL_239;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ZeroPte & 1) != 0 )
                {
                  v120 = ZeroPte | 0x8000000000000000uLL;
                }
              }
              *v98 = v120;
            }
LABEL_239:
            MiDereferenceCombineBlock(a3, (_QWORD *)v132);
            v22 = 0;
LABEL_80:
            v21 = v130;
            v13 = v133;
            v14 = v152;
          }
        }
        else
        {
LABEL_155:
          if ( (v34 & 0xC00) == 0x800 )
            goto LABEL_35;
          MiDereferenceCombineBlock(a3, (_QWORD *)v29);
          v21 = v130;
          v13 = v133;
          v14 = v152;
        }
      }
      else if ( v153 )
      {
        v14 = v152;
        v21 = 1;
        v130 = 1;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v136, v31, &v165);
        v153 = valid;
        if ( valid == v32 )
          goto LABEL_33;
        MiUnlockPageTableInternal(v136, valid);
        v153 = 0LL;
        MiDereferenceCombineBlock(a3, (_QWORD *)v29);
        v21 = v130;
        v13 = v133;
        v14 = v152;
      }
    }
    ++v142;
LABEL_68:
    v57 = v140;
    v58 = (unsigned __int64 **)v178;
    v59 = 2;
    v60 = (int)v143;
    v144 = (unsigned __int64)v178;
    do
    {
      v61 = *v58;
      if ( *v58 )
      {
        do
        {
          v88 = (unsigned __int64 *)v61[2];
          if ( (unsigned int)MiCrcStillIntact(v60, v136, v138, (_DWORD)v61, v59) )
          {
            v61[2] = (unsigned __int64)v57;
            v57 = v61;
          }
          else
          {
            v125 = (_QWORD *)v61[4];
            if ( (unsigned __int64)v125 >= 0x100 )
              MiDereferenceCombineBlock(a3, v125);
          }
          v61 = v88;
        }
        while ( v88 );
        v58 = (unsigned __int64 **)v144;
        v140 = v57;
      }
      *v58 = 0LL;
      ++v59;
      v58 += 5;
      v144 = (unsigned __int64)v58;
    }
    while ( v59 <= 3 );
    v12 = P;
    v20 = a5;
    v14 = v152;
    MiFlushTbList(P);
    if ( v153 )
      MiUnlockPageTableInternal(v136, v153);
    MiUnlockWorkingSetShared(v136, v135);
    Next = v176;
    if ( v176 )
    {
      do
      {
        Lock = (__int64)Next->Lock;
        v90 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v90 <= 0xFu )
        {
          v64 = KeGetCurrentPrcb()->SchedulerAssist;
          v62 = (-1LL << (v90 + 1)) & 4;
          v63 = (unsigned int)v62 | v64[5];
          v64[5] = v63;
        }
        v160 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(Lock + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v160, v62, v63, (__int64)v64);
          while ( *(__int64 *)(Lock + 24) < 0 );
        }
        *(_BYTE *)(Lock + 34) = *(_BYTE *)(Lock + 34) & 0xF8 | 6;
        MiDecrementShareCount(Lock, v62, v63, (__int64)v64);
        _InterlockedAnd64((volatile signed __int64 *)(Lock + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v126 = KeGetCurrentIrql();
            if ( v126 <= 0xFu && v90 <= 0xFu && v126 >= 2u )
            {
              v127 = KeGetCurrentPrcb();
              v62 = -1LL << (v90 + 1);
              v64 = v127->SchedulerAssist;
              v128 = ~(unsigned __int16)v62;
              v114 = (v128 & v64[5]) == 0;
              v63 = (unsigned int)v128 & v64[5];
              v64[5] = v63;
              if ( v114 )
                KiRemoveSystemWorkPriorityKick(v127);
            }
          }
        }
        __writecr8(v90);
        Next = Next[1].Next;
      }
      while ( Next );
      v12 = P;
    }
    v13 = v140;
    if ( v140 )
    {
      v10 = 0LL;
      continue;
    }
    break;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v18 = v146;
LABEL_86:
  if ( v18 )
  {
    v172 = 0LL;
    v173 = 0LL;
    v174 = 0LL;
    KiUnstackDetachProcess((__int64)v170, 1LL);
    MiAttachThreadDone((__int64)&v156[1].ActiveProcessors.StaticBitmap[26]);
  }
  if ( v12 != v175 )
    ExFreePoolWithTag(v12, 0);
  result = v157;
  *v157 += v148;
  return result;
}
