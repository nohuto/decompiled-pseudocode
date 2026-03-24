/*
 * XREFs of MiSharePages @ 0x140368360
 * Callers:
 *     MiProcessCrcList @ 0x140726B20 (MiProcessCrcList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiVadSupportsPrivateCommit @ 0x14021B240 (MiVadSupportsPrivateCommit.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetUltraMapping @ 0x140234700 (MiGetUltraMapping.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MiProtectionToCacheAttribute @ 0x140241E40 (MiProtectionToCacheAttribute.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     KeForceAttachProcess @ 0x14025C278 (KeForceAttachProcess.c)
 *     MiIsStoreProcess @ 0x14026A4B0 (MiIsStoreProcess.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiFlushTbListEarly @ 0x140289258 (MiFlushTbListEarly.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     KeForceDetachProcess @ 0x1402BA388 (KeForceDetachProcess.c)
 *     MiPrepareAttachThread @ 0x1402EF3D4 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x1402EF448 (MiAttachThreadDone.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     RtlAvlInsertNodeEx @ 0x140316550 (RtlAvlInsertNodeEx.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140337208 (MiTbFlushType.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiCrcStillIntact @ 0x140367B74 (MiCrcStillIntact.c)
 *     MiAllocateCombineProto @ 0x140367E10 (MiAllocateCombineProto.c)
 *     MiRecheckVaVm @ 0x140369594 (MiRecheckVaVm.c)
 *     MiMapArbitraryPage @ 0x140369610 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x1403697A0 (MiCombineCandidate.c)
 *     MiReleaseArbitraryPage @ 0x140369BA0 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x140369C80 (MiPerformCombineScan.c)
 *     MiHashIsCommon @ 0x140369D2C (MiHashIsCommon.c)
 *     MiMakeCombineCandidateClean @ 0x140369D8C (MiMakeCombineCandidateClean.c)
 *     MiGetCombineDomain @ 0x140369E6C (MiGetCombineDomain.c)
 *     MiPageMightBeZero @ 0x140369E84 (MiPageMightBeZero.c)
 *     MiDereferenceCombineBlock @ 0x140369F60 (MiDereferenceCombineBlock.c)
 *     MiConfirmPageIsZero @ 0x140369F90 (MiConfirmPageIsZero.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiPopCombineBlock @ 0x14036AE54 (MiPopCombineBlock.c)
 *     MiIncrementCombineMdl @ 0x14036AEAC (MiIncrementCombineMdl.c)
 *     MiComputeHash64 @ 0x140370700 (MiComputeHash64.c)
 *     MiUnlockPageTable @ 0x1403B6C60 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  __int64 v94; // r8
  char v95; // al
  __int64 v96; // rbx
  __int64 v97; // rcx
  unsigned __int64 v98; // rbx
  __int64 v99; // r8
  unsigned __int64 v100; // rax
  int v101; // esi
  unsigned __int64 v102; // rbx
  unsigned int v103; // esi
  __int64 v104; // r13
  unsigned __int64 v105; // r12
  bool v106; // r8
  unsigned __int64 *v107; // rbx
  unsigned __int64 v108; // rdx
  unsigned __int64 v109; // rcx
  unsigned int v110; // eax
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  _DWORD *v113; // r9
  int v114; // eax
  __int64 *v115; // r15
  int i; // r14d
  __int64 v117; // rbx
  __int64 v118; // rsi
  __int64 v119; // r8
  __int64 v120; // r9
  unsigned __int64 *v121; // rsi
  __int64 v122; // rbx
  unsigned __int64 v123; // r14
  unsigned __int8 v124; // al
  struct _KPRCB *v125; // r10
  int v126; // eax
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
  v16 = a2[3];
  v17 = (unsigned __int64 *)a2[6];
  v143 = v12;
  v139 = 0;
  v144 = 0;
  v158 = a1 + 64;
  v18 = v168;
  Pool = v168;
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
      v18 = v168;
      Pool = v168;
      LODWORD(v19) = 20;
    }
  }
  v20 = v143;
  *((_DWORD *)v18 + 3) = 0;
  *((_WORD *)v18 + 2) = 0;
  *((_QWORD *)v18 + 2) = 0LL;
  *((_QWORD *)v18 + 3) = 0LL;
  *(_DWORD *)v18 = v20;
  *((_DWORD *)v18 + 2) = v19;
  v21 = (_KPROCESS *)a2[5];
  v151 = v21;
  if ( v21 && v21 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v144 = MiPrepareAttachThread((__int64)v21, (__int64)&v21[1].ActiveProcessorsPadding[6]);
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
    if ( !v144 )
      goto LABEL_229;
    KeForceAttachProcess((ULONG_PTR)v21, (__int64)v166);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = a5;
  v29 = v130;
  while ( 2 )
  {
    v30 = 0;
    v169 = 0LL;
    v170 = 0LL;
    v31 = 0LL;
    v171[0] = 0LL;
    v32 = 0;
    v172 = 0LL;
    v131 = 0LL;
    v128 = 0;
    v33 = MiLockWorkingSetShared(v29, v13, v14, v15);
    v134 = v33;
    if ( v151
      && ((HIDWORD(v151[1].DirectoryTableBase) & 0xC00u) < 0xC00
       || *(_QWORD *)(v29 + 104)
       || (unsigned int)MiIsStoreProcess((__int64)v151)) )
    {
      MiUnlockWorkingSetShared(v29, v33);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v18 = Pool;
      goto LABEL_228;
    }
    while ( 1 )
    {
      v34 = v32;
      v32 = 0;
      v145 = v17;
      if ( (_BYTE)v34 != 1 )
        v32 = v34;
      v35 = 0LL;
      v129 = v32;
      if ( (_BYTE)v34 != 1 )
        v35 = (unsigned int)(v139 + 1);
      v139 = v35;
      if ( v30 )
      {
        v128 = 0;
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
      v132 = (unsigned __int64 *)v17[2];
      v141 = *v17;
      v152 = (__int64 *)v37;
      if ( v36 >= 0x100 )
      {
        v147 = *(_DWORD *)(v36 + 40) & 0x1F;
      }
      else
      {
        v147 = v36;
        v36 = 0LL;
      }
      v38 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v153 = v38;
      v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v131 == v39 )
        goto LABEL_48;
      if ( v131 )
      {
        v29 = v130;
        v30 = 1;
        v128 = 1;
        v31 = v131;
      }
      else
      {
        valid = MiLockLowestValidPageTable(v130, ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v160);
        v131 = valid;
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
          v157 = v43;
          if ( (v43 & 1) != 0 )
          {
            v47 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v157);
            v50 = 6 * ((v47 >> 12) & 0xFFFFFFFFFLL);
            if ( (*(_QWORD *)(48 * ((v47 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
              goto LABEL_70;
            BugCheckParameter2 = 48 * ((v47 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v155 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v155, v50, v48, v49);
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
          v148 = MiCombineCandidate(*(_QWORD *)v140, v135, BugCheckParameter2);
          v52 = v148;
          if ( !v148 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_70:
            MiDereferenceCombineBlock(a3);
            goto LABEL_71;
          }
          v53 = *(_BYTE *)(BugCheckParameter2 + 34) & 7;
          v54 = (*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F;
          v137 = 3;
          v136 = v145[3];
          if ( *((_DWORD *)MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 2) != v28 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_74;
          }
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v53 == 6 )
          {
            if ( v153 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL) )
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
            v57 = (unsigned __int64)v152;
            if ( (MiGetWsleContents(v56, (unsigned __int64)v152) & 0xF) == 8 )
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
            if ( v62 != v147 )
              goto LABEL_74;
            if ( (v43 & 0x42) != 0 )
            {
              if ( v138 < 8 )
              {
                v63 = (unsigned __int64 **)v171;
LABEL_104:
                MiInsertTbFlushEntry((__int64)Pool, v57, 1LL, 0);
                v69 = v145;
                v70 = *v63;
                v32 = v129;
                *v63 = v145;
                v69[2] = (unsigned __int64)v70;
                goto LABEL_71;
              }
              MiMakeCombineCandidateClean(v59, v60);
              WORD2(v167[0]) = 0;
              v167[2] = 0LL;
              v167[3] = 0LL;
              v167[1] = 1LL;
              LODWORD(v167[0]) = v143;
              MiInsertTbFlushEntry((__int64)v167, v57, 1LL, 0);
              MiFlushTbList((__int64)v167, v64);
              v59 = v153;
              v65 = v141;
              goto LABEL_92;
            }
            v65 = v141;
            if ( v141 == qword_140C4ED98 )
            {
              if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x18) == 0 && (v43 & 0x20) != 0 && v138 < 3 )
              {
                v63 = (unsigned __int64 **)&v172;
                goto LABEL_104;
              }
LABEL_92:
              v29 = v130;
              if ( v65 != qword_140C4ED98 || !(unsigned int)MiPageMightBeZero(v130, BugCheckParameter2, v59) )
                goto LABEL_107;
              v156 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v156, v58, v66, v67);
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
              MiInsertTbFlushEntry((__int64)v167, v57, 1LL, 0);
              MiFreeWsleList(v130, (__int64)v167, 0);
              ++v142;
              ++v150[1];
              MiDereferenceCombineBlock(a3);
              v32 = v129;
              v17 = v132;
              v31 = v131;
              v30 = v128;
            }
            else
            {
              v29 = v130;
LABEL_107:
              v71 = v136;
              v32 = v129;
              if ( (v62 & 0x18) != 0 )
                v32 = 1;
              v129 = v32;
              if ( v136 == qword_140C4E550
                || v52 != 1
                || (v71 = v136, v136 == *(_QWORD *)(v29 + 864)) && (HIDWORD(v151[2].ReadyListHead.Blink) & 0x1000) == 0 )
              {
                v72 = -1LL;
                if ( v36 )
                {
                  LODWORD(v78) = v137;
LABEL_128:
                  v81 = v145;
                  goto LABEL_129;
                }
                v73 = (unsigned __int64)v152;
                v74 = MiComputeHash64(v152, v58, v71);
                if ( v74 != v76 )
                  goto LABEL_71;
                if ( v75 == qword_140C4E550 )
                {
                  if ( !(unsigned int)MiHashIsCommon(v149, v76, v73) )
                    goto LABEL_71;
                  v76 = v141;
                }
                v77 = MiAllocateCombineProto(*(__int64 *)v140, v76, v62, &v136, 0);
                v36 = v77;
                if ( !v77 )
                {
                  v36 = MiPopCombineBlock(a3);
                  if ( !v36 )
                    goto LABEL_71;
                  v78 = (int)MiProtectionToCacheAttribute(v62);
                  v79 = *(_QWORD *)(v158 + 8 * v78);
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
                  *(_QWORD *)(v36 + 64) = v136;
                  v72 = *(_QWORD *)(v79 + 8 * ((unsigned __int64)*(unsigned int *)(v79 + 44) >> 12) + 48);
                  goto LABEL_128;
                }
                v81 = v145;
                LODWORD(v78) = v137;
                v145[4] = v77;
LABEL_129:
                v82 = MiConvertPrivateToProto(v130, v153, v36, v135, *(__int64 *)v140, (__int64)Pool, v72);
                if ( !v82 )
                  goto LABEL_70;
                ++v150[1];
                if ( v72 == -1 )
                {
                  v36 = 0LL;
                  ++v142;
                }
                else
                {
                  MiIncrementCombineMdl(v149, (unsigned int)v78);
                }
                v83 = (unsigned __int64)v169;
                v81[1] = v82;
                v84 = v72 != -1;
                v81[2] = v83;
                v169 = v81;
LABEL_180:
                if ( v84 )
                {
                  v100 = v141;
                  v101 = *(_DWORD *)(v36 + 40);
                  v102 = v141 & 0xF;
                  *(_QWORD *)(v36 + 24) = v141;
                  *(_QWORD *)&v162 = v100;
                  v103 = v101 & 0x1F;
                  v104 = *(_QWORD *)v140 + 16LL * (unsigned int)v102;
                  DWORD2(v162) = v103;
                  v163 = v36 + 64;
                  v105 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v104 + 104));
                  v106 = 0;
                  v107 = (unsigned __int64 *)(*(_QWORD *)v140 + 16 * (v102 + 6));
                  v108 = *v107;
                  if ( *v107 )
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v109 = *(_QWORD *)(v108 + 24);
                        if ( v141 > v109 )
                          break;
                        if ( v141 >= v109 )
                        {
                          v110 = *(_DWORD *)(v108 + 40) & 0x1F;
                          if ( v103 > v110
                            || v103 >= v110 && (v36 == -64LL || *(_QWORD *)(v36 + 64) >= *(_QWORD *)(v108 + 64)) )
                          {
                            break;
                          }
                        }
                        if ( !*(_QWORD *)v108 )
                          goto LABEL_193;
                        v108 = *(_QWORD *)v108;
                      }
                      if ( !*(_QWORD *)(v108 + 8) )
                        break;
                      v108 = *(_QWORD *)(v108 + 8);
                    }
                    v106 = 1;
                  }
LABEL_193:
                  RtlAvlInsertNodeEx(v107, v108, v106, (_QWORD *)v36);
                  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v104 + 104));
                  if ( KiIrqlFlags )
                  {
                    if ( (KiIrqlFlags & 1) != 0 )
                    {
                      v111 = KeGetCurrentIrql();
                      if ( v111 <= 0xFu && (unsigned __int8)v105 <= 0xFu && v111 >= 2u )
                      {
                        v112 = KeGetCurrentPrcb();
                        v113 = v112->SchedulerAssist;
                        v114 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v105 + 1));
                        v27 = (v114 & v113[5]) == 0;
                        v113[5] &= v114;
                        if ( v27 )
                          KiRemoveSystemWorkPriorityKick(v112);
                      }
                    }
                  }
                  __writecr8(v105);
                  v32 = v129;
                }
LABEL_71:
                v17 = v132;
                v31 = v131;
                v30 = v128;
                v29 = v130;
              }
              else
              {
                MiDereferenceCombineBlock(a3);
                v17 = v132;
                v31 = v131;
                v30 = v128;
              }
            }
          }
          else
          {
            v85 = 0;
            UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v149 + 208), 3u, 1LL, 0);
            v87 = v148;
            v88 = (unsigned __int64 *)(((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
            v89 = 1;
            v29 = v130;
            if ( v136 == qword_140C4E550
              || v148 != 1
              || (CombineDomain = MiGetCombineDomain(1LL, v130), v136 == CombineDomain)
              && (HIDWORD(v151[2].ReadyListHead.Blink) & 0x1000) == 0 )
            {
              if ( v88 )
              {
                v91 = v140[0];
                v92 = *(_QWORD *)v154;
                *(_QWORD *)(*(_QWORD *)v154 + 72LL) = v88;
                *(_QWORD *)(v92 + 64) = BugCheckParameter2;
                if ( !(unsigned int)MiMapArbitraryPage(v91, v92, v135, v87, v89) )
                {
                  v93 = ZeroPte;
                  if ( MiPteInShadowRange((unsigned __int64)v88) )
                  {
                    if ( (unsigned int)MiPteHasShadow() )
                    {
                      if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                        v93 = ZeroPte | 0x8000000000000000uLL;
                      *v88 = v93;
                      MiWritePteShadow((__int64)v88, v93, v94);
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
                  v32 = v129;
                  goto LABEL_71;
                }
                v95 = v129;
                if ( (v54 & 0x18) != 0 )
                  v95 = 1;
                v129 = v95;
                v96 = -1LL;
                if ( !v36 )
                {
                  if ( !(unsigned int)MiPerformCombineScan(v149, *(_QWORD *)v154, v136 == qword_140C4E550, v164)
                    || *(_QWORD *)&v164[0] != v141 )
                  {
                    goto LABEL_167;
                  }
                  v36 = MiAllocateCombineProto(*(__int64 *)v140, v141, v54, &v136, 0);
                  if ( !v36 )
                  {
                    v36 = MiPopCombineBlock(a3);
                    if ( v36 )
                    {
                      v137 = MiProtectionToCacheAttribute(v54);
                      v97 = *(_QWORD *)(v158 + 8LL * v137);
                      if ( v97 )
                      {
                        if ( *(_DWORD *)(v97 + 44) < *(_DWORD *)(v97 + 40) )
                        {
                          *(_DWORD *)(v36 + 40) = v54 | *(_DWORD *)(v36 + 40) & 0xFFFFFFE0;
                          *(_QWORD *)(v36 + 64) = v136;
                          v96 = *(_QWORD *)(v97 + 8 * ((unsigned __int64)*(unsigned int *)(v97 + 44) >> 12) + 48);
                          goto LABEL_163;
                        }
                      }
                    }
LABEL_167:
                    v84 = 0;
LABEL_168:
                    MiReleaseArbitraryPage(*(_QWORD *)v154);
                    v98 = ZeroPte;
                    if ( MiPteInShadowRange((unsigned __int64)v88) )
                    {
                      if ( (unsigned int)MiPteHasShadow() )
                      {
                        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                          v98 = ZeroPte | 0x8000000000000000uLL;
                        *v88 = v98;
                        MiWritePteShadow((__int64)v88, v98, v99);
                        goto LABEL_178;
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (ZeroPte & 1) != 0 )
                      {
                        v98 = ZeroPte | 0x8000000000000000uLL;
                      }
                    }
                    *v88 = v98;
LABEL_178:
                    if ( !v85 )
                      goto LABEL_74;
                    v32 = v129;
                    goto LABEL_180;
                  }
                  v145[4] = v36;
                }
LABEL_163:
                if ( !(unsigned int)MiConvertStandbyToProto(
                                      v130,
                                      *(__int64 *)v140,
                                      *(__int64 *)v154,
                                      v135,
                                      v36,
                                      BugCheckParameter2,
                                      v153,
                                      v96) )
                  goto LABEL_167;
                ++v150[1];
                if ( v96 == -1 )
                {
                  v36 = 0LL;
                  v85 = 1;
                  ++v142;
                  v84 = 0;
                }
                else
                {
                  MiIncrementCombineMdl(v149, (unsigned int)v137);
                  v84 = 1;
                  v85 = 1;
                }
                goto LABEL_168;
              }
            }
            MiDereferenceCombineBlock(a3);
            v32 = v129;
            v17 = v132;
            v31 = v131;
            v30 = v128;
          }
        }
        else
        {
          v29 = v130;
          MiUnlockPageTable(v130, valid, v41, v42);
          v31 = 0LL;
          v131 = 0LL;
          MiDereferenceCombineBlock(a3);
          v17 = v132;
          v30 = v128;
        }
      }
    }
    ++v138;
LABEL_202:
    v115 = v171;
    v152 = v171;
    for ( i = 2; i <= 3; ++i )
    {
      v117 = *v115;
      if ( *v115 )
      {
        do
        {
          v118 = *(_QWORD *)(v117 + 16);
          if ( (unsigned int)MiCrcStillIntact(*(__int64 *)v140, v130, v135, v117, i) )
          {
            *(_QWORD *)(v117 + 16) = v17;
            v17 = (unsigned __int64 *)v117;
          }
          else
          {
            v35 = *(_QWORD *)(v117 + 32);
            if ( v35 >= 0x100 )
              MiDereferenceCombineBlock(a3);
          }
          v117 = v118;
        }
        while ( v118 );
        v115 = v152;
      }
      *v115 = 0LL;
      v115 += 5;
      v152 = v115;
    }
    v18 = Pool;
    v28 = a5;
    MiFlushTbList((__int64)Pool, (_KPROCESS *)v35);
    v29 = v130;
    if ( v131 )
      MiUnlockPageTable(v130, v131, v119, v120);
    MiUnlockWorkingSetShared(v130, v134);
    v121 = v169;
    if ( v169 )
    {
      do
      {
        v122 = v121[1];
        v123 = (unsigned __int8)MiLockPageInline(v122, v13, v14, v15);
        *(_BYTE *)(v122 + 34) = *(_BYTE *)(v122 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v122);
        _InterlockedAnd64((volatile signed __int64 *)(v122 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v124 = KeGetCurrentIrql();
            if ( v124 <= 0xFu && (unsigned __int8)v123 <= 0xFu && v124 >= 2u )
            {
              v125 = KeGetCurrentPrcb();
              v13 = -1LL << ((unsigned __int8)v123 + 1);
              v15 = v125->SchedulerAssist;
              v126 = ~(unsigned __int16)v13;
              v27 = (v126 & v15[5]) == 0;
              v14 = (unsigned int)v126 & v15[5];
              v15[5] = v14;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick(v125);
            }
          }
        }
        __writecr8(v123);
        v121 = (unsigned __int64 *)v121[2];
      }
      while ( v121 );
      v28 = a5;
      v29 = v130;
    }
    if ( v17 )
    {
      v5 = a3;
      continue;
    }
    break;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v5 = a3;
LABEL_228:
  v21 = v151;
  v10 = v150;
  v8 = v142;
LABEL_229:
  if ( v17 )
  {
    do
    {
      v127 = (unsigned __int64 *)v17[2];
      if ( v17[4] >= 0x100 )
        MiDereferenceCombineBlock(v5);
      v17 = v127;
    }
    while ( v127 );
  }
  if ( v144 == 1 )
  {
    KeForceDetachProcess(v166, 0);
    MiAttachThreadDone((__int64)&v21[1].ActiveProcessorsPadding[6]);
  }
  if ( v18 != v168 )
    ExFreePoolWithTag(v18, 0);
  *v10 += v8;
}
