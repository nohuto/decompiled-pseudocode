/*
 * XREFs of MiCompleteProtoPteFault @ 0x140213720
 * Callers:
 *     MiResolveDemandZeroFault @ 0x14020F020 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402356D8 (MiCheckAndUpdateIoAttribution.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ObFastReferenceObjectLocked @ 0x14025B058 (ObFastReferenceObjectLocked.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14026B1C0 (ObpTraceObjectDereferenceIfActive.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PfSnGetFileInformation @ 0x140281140 (PfSnGetFileInformation.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 *     PfSnTraceGetLogEntry @ 0x1402B64D0 (PfSnTraceGetLogEntry.c)
 *     MiGetSubsectionDriverProtos @ 0x1402BCD40 (MiGetSubsectionDriverProtos.c)
 *     PfSnTraceBufferAllocate @ 0x1402C2680 (PfSnTraceBufferAllocate.c)
 *     ExAcquireRundownProtectionEx @ 0x1402C2780 (ExAcquireRundownProtectionEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     ObReferenceObjectExWithTag @ 0x1402F3250 (ObReferenceObjectExWithTag.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 *     MiSystemImageHasPrivateFixups @ 0x1402FDDE4 (MiSystemImageHasPrivateFixups.c)
 *     MiMakeTransitionPteValid @ 0x1403037D0 (MiMakeTransitionPteValid.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiGetSharedProtos @ 0x1403A2DE8 (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiIsAddressInDriverView @ 0x140534D08 (MiIsAddressInDriverView.c)
 *     MiSetFaultPacketDirectives @ 0x140543418 (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(
        __int64 a1,
        unsigned __int64 a2,
        struct _LIST_ENTRY *Flink,
        int a4,
        __int64 a5)
{
  __int64 v5; // r9
  unsigned __int64 v6; // r14
  unsigned int v7; // esi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r10
  char v10; // dl
  __int64 v11; // rax
  __int64 v12; // r14
  ULONG_PTR v13; // r12
  _DWORD *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rax
  volatile signed __int64 *v19; // r14
  signed __int64 v20; // rdx
  signed __int64 v21; // rax
  char *v22; // r13
  unsigned int v23; // edx
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v27; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int64 v33; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 v35; // rdx
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  __int64 v40; // rbx
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *v42; // rbx
  int v43; // r12d
  signed __int64 v44; // rdx
  signed __int64 v45; // rax
  unsigned __int64 v46; // rdi
  unsigned int v47; // edx
  BOOLEAN v48; // r15
  unsigned __int64 v49; // r14
  unsigned __int8 v50; // cl
  struct _KPRCB *v51; // r10
  int v52; // eax
  signed __int64 v53; // rax
  signed __int64 v54; // rtt
  signed __int64 v55; // rax
  signed __int64 v56; // rtt
  unsigned __int64 v57; // rax
  struct _KTHREAD *v58; // rax
  unsigned __int64 v59; // r14
  int v60; // ebx
  unsigned __int64 v61; // r8
  BOOL v62; // r13d
  int LogEntry; // eax
  unsigned __int64 *v64; // rcx
  _QWORD *v65; // rcx
  __int64 v66; // rbx
  signed __int32 v67; // eax
  char v68; // cc
  signed __int32 v69; // eax
  _QWORD *v70; // r15
  unsigned __int64 v71; // r12
  unsigned __int8 v72; // al
  struct _KPRCB *v73; // r10
  _DWORD *v74; // r9
  int v75; // eax
  _QWORD *v76; // rcx
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  signed __int32 v81; // eax
  unsigned __int64 *v82; // rdx
  unsigned __int64 v83; // rcx
  signed __int64 v84; // rax
  signed __int64 v85; // rtt
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // r11
  unsigned __int64 v88; // r8
  struct _LIST_ENTRY *v89; // rax
  __int64 v90; // rax
  struct _LIST_ENTRY *v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r13
  __int64 v95; // rdx
  __int64 v96; // r10
  __int64 v97; // rcx
  unsigned __int64 v98; // rdi
  unsigned __int64 v99; // rax
  unsigned __int64 v100; // r11
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v103; // rdi
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // r8
  struct _LIST_ENTRY *v106; // rdx
  __int64 v107; // rax
  struct _LIST_ENTRY *v108; // rax
  __int64 v109; // rdx
  char v110; // r9
  char PagePrivilege; // bl
  int v112; // eax
  char v113; // cl
  unsigned __int64 v114; // rbx
  unsigned __int64 v115; // r14
  int v116; // eax
  signed __int64 v117; // rbx
  _KPROCESS *v118; // rcx
  unsigned __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // rbx
  unsigned __int8 v123; // al
  char v124; // r8
  unsigned __int64 v125; // r14
  __int64 v126; // rax
  unsigned __int8 v127; // al
  struct _KPRCB *v128; // r10
  _DWORD *v129; // r9
  int v130; // eax
  __int64 v131; // r11
  char v132; // r15
  unsigned int v133; // r14d
  unsigned __int64 v134; // r9
  __int64 HasPrivateFixups; // rax
  unsigned int v136; // ecx
  __int64 v137; // rdx
  _KPROCESS *v138; // rcx
  __int64 Address; // rax
  __int64 v140; // r10
  int v141; // eax
  unsigned __int64 v142; // r8
  char v144; // r12
  _BYTE *v145; // rcx
  __int64 v146; // rdx
  __int64 v147; // rax
  int v148; // eax
  __int16 v149; // r11
  unsigned int v150; // r9d
  char v151; // dl
  __int16 v152; // ax
  __int64 v153; // rdx
  ULONG_PTR v154; // rdi
  char v155; // dl
  __int64 v156; // r10
  char v157; // dl
  unsigned __int64 v158; // r15
  int v159; // eax
  char v160; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v161; // [rsp+40h] [rbp-C0h]
  __int64 TransitionPteValid; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v163; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v164; // [rsp+58h] [rbp-A8h]
  __int64 v165; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v166; // [rsp+68h] [rbp-98h]
  unsigned int v167; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v168; // [rsp+78h] [rbp-88h] BYREF
  int v169; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v170; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h]
  unsigned __int64 v172; // [rsp+98h] [rbp-68h] BYREF
  __int64 v173; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v174; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v175; // [rsp+B0h] [rbp-50h]
  _DWORD *v176; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v177; // [rsp+C0h] [rbp-40h]
  __int64 v178; // [rsp+C8h] [rbp-38h]
  __int64 v179; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v180; // [rsp+E0h] [rbp-20h]
  __int128 v181; // [rsp+E8h] [rbp-18h]
  __int64 v182; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v184; // [rsp+158h] [rbp+58h] BYREF
  struct _LIST_ENTRY *v185; // [rsp+160h] [rbp+60h]
  int v186; // [rsp+168h] [rbp+68h]

  v186 = a4;
  v185 = Flink;
  v184 = a2;
  v5 = 0LL;
  v178 = *(_QWORD *)(a1 + 56);
  v6 = a2;
  v7 = 0;
  v166 = *(_QWORD *)a1;
  v177 = 0LL;
  TransitionPteValid = 0LL;
  v167 = 0;
  v8 = ((v166 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v163 = v8;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v184 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v184 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v184, a2)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v184 >> 3) & 0x1FF));
      if ( (v11 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v11 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v184;
    }
  }
  v12 = (v6 >> 12) & 0xFFFFFFFFFLL;
  v175 = v12;
  v13 = 48 * v12 - 0x58000000000LL;
  v14 = (_DWORD *)(v13 + 16);
  v161 = v13;
  v176 = (_DWORD *)(v13 + 16);
  v15 = *(_QWORD *)(v13 + 16);
  v179 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL));
  v180 = v15;
  v168 = v15;
  if ( (v15 & 0x400) == 0 )
  {
    v173 = v5;
    v165 = v5;
    goto LABEL_142;
  }
  v16 = v15;
  if ( qword_140C4DE80 && (v15 & 0x10) == 0 )
    v16 = v15 & ~qword_140C4DE80;
  v17 = v16 >> 16;
  v173 = v17;
  v18 = *(_QWORD *)v17;
  v165 = *(_QWORD *)v17;
  if ( PfSnNumActiveTraces )
  {
    v19 = (volatile signed __int64 *)(v18 + 64);
    v170 = (volatile signed __int64 *)(v18 + 64);
    _m_prefetchw((const void *)(v18 + 64));
    v20 = *(_QWORD *)(v18 + 64);
    if ( (v20 & 0xF) != 0 )
    {
      do
      {
        v21 = _InterlockedCompareExchange64(v19, v20 - 1, v20);
        if ( v20 == v21 )
          break;
        v20 = v21;
      }
      while ( (v21 & 0xF) != 0 );
    }
    v22 = (char *)(v20 & 0xFFFFFFFFFFFFFFF0uLL);
    v23 = v20 & 0xF;
    Object = v22;
    if ( v23 <= 1 )
    {
      if ( !v23 )
      {
LABEL_32:
        v27 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v165 + 72));
        Object = (PVOID)ObFastReferenceObjectLocked(v19);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v165 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v27 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
              v32 = (v31 & SchedulerAssist[5]) == 0;
              Flink = (struct _LIST_ENTRY *)((unsigned int)v31 & SchedulerAssist[5]);
              SchedulerAssist[5] = (_DWORD)Flink;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v27);
        v17 = v173;
LABEL_40:
        v33 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        if ( (v166 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(v166) == 1)
          && (Process = KeGetCurrentThread()->ApcState.Process, (v35 = Process[1].AffinityPadding[5]) != 0)
          && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          v36 = *(unsigned int *)(v35 + 8);
        }
        else
        {
          v36 = 0xFFFFFFFFLL;
        }
        v37 = *(_QWORD *)(v17 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)v17 + 56LL) & 0x20) != 0 )
        {
          if ( v33 < v37 || v33 >= v37 + 8LL * *(unsigned int *)(v17 + 44) )
          {
            if ( (*(_BYTE *)(v17 + 34) & 2) != 0 )
              v38 = (v33 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v17, (unsigned int)v36, v17) + 72) << 9);
            else
              v38 = (v33 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(v17, v37, Flink, v36) + 72) << 9);
          }
          else
          {
            v38 = (v33 << 9) - (v37 << 9);
          }
          v39 = ((unsigned __int64)*(unsigned int *)(v17 + 36) << 9) + (v38 & 0xFFFFFFFFFFFFF000uLL);
        }
        else
        {
          if ( v37 )
            v40 = (__int64)(v33 - v37) >> 3 << 12;
          else
            v40 = 0LL;
          v39 = ((*(unsigned int *)(v17 + 36) | ((unsigned __int64)(*(_WORD *)(v17 + 32) & 0xFFC0) << 26)) << 12) + v40;
        }
        CurrentThread = KeGetCurrentThread();
        v164 = v39;
        v42 = CurrentThread->ApcState.Process;
        v43 = *(_DWORD *)(v165 + 56) & 0x20;
        _m_prefetchw(&v42[1].ActiveProcessors.Bitmap[10]);
        v44 = v42[1].ActiveProcessors.Bitmap[10];
        if ( (v44 & 0xF) != 0 )
        {
          do
          {
            v45 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&v42[1].ActiveProcessors.Bitmap[10],
                    v44 - 1,
                    v44);
            if ( v44 == v45 )
              break;
            v44 = v45;
          }
          while ( (v45 & 0xF) != 0 );
        }
        v46 = v44 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v44 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          goto LABEL_137;
        v47 = v44 & 0xF;
        if ( v47 <= 1 )
        {
          if ( v47 )
          {
            if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v46 + 360), 0xFu) )
            {
              _m_prefetchw(&v42[1].ActiveProcessors.Bitmap[10]);
              v53 = v42[1].ActiveProcessors.Bitmap[10];
              while ( (v53 & 0xF) == 0 )
              {
                if ( v46 != (v53 & 0xFFFFFFFFFFFFFFF0uLL) )
                  break;
                v54 = v53;
                v53 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&v42[1].ActiveProcessors.Bitmap[10],
                        v53 + 15,
                        v53);
                if ( v54 == v53 )
                  goto LABEL_86;
              }
              v181 = 0LL;
              v182 = 0LL;
              _m_prefetchw((const void *)(v46 + 360));
              v55 = *(_QWORD *)(v46 + 360);
              if ( (v55 & 1) != 0 )
              {
LABEL_83:
                v57 = v55 & 0xFFFFFFFFFFFFFFFEuLL;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57, 0xFFFFFFFFFFFFFFF1uLL) == 15
                  && !_interlockedbittestandreset((volatile signed __int32 *)(v57 + 32), 0) )
                {
                  KeSetEvent((PRKEVENT)(v57 + 8), 0, 0);
                }
              }
              else
              {
                while ( 1 )
                {
                  v56 = v55;
                  v55 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 360), v55 - 30, v55);
                  if ( v56 == v55 )
                    break;
                  if ( (v55 & 1) != 0 )
                    goto LABEL_83;
                }
              }
            }
          }
          else
          {
            v48 = 1;
            v49 = KeAcquireSpinLockRaiseToDpc(&qword_140C50390);
            v46 = v42[1].ActiveProcessors.Bitmap[10] & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v46 )
              v48 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v46 + 360));
            KxReleaseSpinLock(&qword_140C50390);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v50 = KeGetCurrentIrql();
                if ( v50 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v50 >= 2u )
                {
                  v51 = KeGetCurrentPrcb();
                  v36 = (__int64)v51->SchedulerAssist;
                  v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
                  v32 = (v52 & *(_DWORD *)(v36 + 20)) == 0;
                  Flink = (struct _LIST_ENTRY *)((unsigned int)v52 & *(_DWORD *)(v36 + 20));
                  *(_DWORD *)(v36 + 20) = (_DWORD)Flink;
                  if ( v32 )
                    KiRemoveSystemWorkPriorityKick(v51);
                }
              }
            }
            __writecr8(v49);
            if ( !v48 )
            {
LABEL_136:
              v19 = v170;
LABEL_137:
              _m_prefetchw((const void *)v19);
              v84 = *v19;
              v15 = (unsigned __int64)Object ^ *v19;
              if ( v15 >= 0xF )
              {
LABEL_140:
                ObDereferenceObjectDeferDelete(Object);
              }
              else
              {
                while ( 1 )
                {
                  v85 = v84;
                  v84 = _InterlockedCompareExchange64(v19, v84 + 1, v84);
                  if ( v85 == v84 )
                    break;
                  if ( ((unsigned __int64)Object ^ v84) >= 0xF )
                    goto LABEL_140;
                }
              }
              v14 = v176;
              v8 = v163;
              v5 = 0LL;
              v13 = v161;
              v12 = v175;
              v9 = 0xFFFFF6FB7DBED7F8uLL;
              goto LABEL_142;
            }
          }
        }
LABEL_86:
        if ( v46 )
        {
          if ( ((__int64)CurrentThread[1].Queue & 0x40) == 0 )
          {
            if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) == 0
              && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) >= 0x400
              || CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
            {
              v58 = *(struct _KTHREAD **)(v46 + 432);
              if ( !v58 || v58 == CurrentThread && *(_QWORD *)(v46 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
              {
                v59 = *((_QWORD *)Object + 3);
                PfSnGetFileInformation(v46, Object, Flink, v36);
                if ( (*(_BYTE *)(v46 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v46 + 352) + 1850LL) == 2 )
                  _InterlockedOr16((volatile signed __int16 *)(v46 + 484), 1u);
                if ( v164 < 0x20000000000LL )
                {
                  v60 = dword_140CEC0D0;
                  v61 = v164 >> 9;
                  v164 >>= 9;
                  v174 = 0LL;
                  v62 = v43 != 0;
                  if ( dword_140CEC0D0 != *(_DWORD *)(v46 + 404) )
                  {
                    LogEntry = PfSnTraceGetLogEntry(v46, 1LL, &v174);
                    v61 = v164;
                    if ( LogEntry >= 0 )
                    {
                      v64 = v174;
                      *v174 = *v174 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                      *((_DWORD *)v64 + 2) = v60;
                      *(_DWORD *)(v46 + 404) = v60;
                      *(_QWORD *)(v46 + 408) = v46 + 416;
                    }
                  }
                  if ( v43 || (v65 = *(_QWORD **)(v46 + 408), *v65 >> 3 != v61) || v65[1] != v59 )
                  {
                    if ( _InterlockedIncrement((volatile signed __int32 *)(v46 + 344)) <= *(_DWORD *)(v46 + 340) )
                    {
                      v66 = *(_QWORD *)(v46 + 96);
                      v67 = _InterlockedExchangeAdd((volatile signed __int32 *)(v66 + 16), 1u);
                      v68 = (v67 + 1 < 0) ^ __OFADD__(1, v67) | (v67 == -1);
                      v69 = v67 + 1;
                      if ( v68 )
                      {
LABEL_130:
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 344), 0xFFFFFFFF);
                      }
                      else
                      {
                        while ( v69 > *(_DWORD *)(v66 + 20) )
                        {
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v66 + 16), 0xFFFFFFFF);
                          v70 = (_QWORD *)PfSnTraceBufferAllocate();
                          if ( v70 )
                          {
                            v71 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v46 + 128));
                            if ( *(_QWORD *)(v46 + 96) == v66 )
                            {
                              v76 = *(_QWORD **)(v46 + 112);
                              if ( *v76 != v46 + 104 )
                                __fastfail(3u);
                              v70[1] = v76;
                              *v70 = v46 + 104;
                              *v76 = v70;
                              *(_QWORD *)(v46 + 112) = v70;
                              ++*(_DWORD *)(v46 + 120);
                              *(_QWORD *)(v46 + 96) = v70;
                              KxReleaseSpinLock((PKSPIN_LOCK)(v46 + 128));
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v77 = KeGetCurrentIrql();
                                  if ( v77 <= 0xFu && (unsigned __int8)v71 <= 0xFu && v77 >= 2u )
                                  {
                                    v78 = KeGetCurrentPrcb();
                                    v79 = v78->SchedulerAssist;
                                    v80 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v71 + 1));
                                    v32 = (v80 & v79[5]) == 0;
                                    v79[5] &= v80;
                                    if ( v32 )
                                      KiRemoveSystemWorkPriorityKick(v78);
                                  }
                                }
                              }
                              __writecr8(v71);
                            }
                            else
                            {
                              KxReleaseSpinLock((PKSPIN_LOCK)(v46 + 128));
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v72 = KeGetCurrentIrql();
                                  if ( v72 <= 0xFu && (unsigned __int8)v71 <= 0xFu && v72 >= 2u )
                                  {
                                    v73 = KeGetCurrentPrcb();
                                    v74 = v73->SchedulerAssist;
                                    v75 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v71 + 1));
                                    v32 = (v75 & v74[5]) == 0;
                                    v74[5] &= v75;
                                    if ( v32 )
                                      KiRemoveSystemWorkPriorityKick(v73);
                                  }
                                }
                              }
                              __writecr8(v71);
                              ExFreePoolWithTag(v70, 0);
                            }
                            v66 = *(_QWORD *)(v46 + 96);
                            v81 = _InterlockedExchangeAdd((volatile signed __int32 *)(v66 + 16), 1u);
                            v68 = (v81 + 1 < 0) ^ __OFADD__(1, v81) | (v81 == -1);
                            v69 = v81 + 1;
                            if ( !v68 )
                              continue;
                          }
                          goto LABEL_130;
                        }
                        v82 = (unsigned __int64 *)(v66 + 16LL * v69 + 8);
                        v83 = v62 | (8 * v164);
                        v82[1] = v59;
                        *v82 = v83;
                        _InterlockedIncrement((volatile signed __int32 *)(v46 + 332));
                        if ( !v62 )
                          *(_QWORD *)(v46 + 408) = v82;
                      }
                    }
                    else
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 344), 0xFFFFFFFF);
                      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v46 + 400), 3, 0) )
                        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v46 + 368), DelayedWorkQueue);
                    }
                  }
                }
              }
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v46 + 336));
            }
          }
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v46 + 360));
        }
        goto LABEL_136;
      }
      ObReferenceObjectExWithTag((ULONG_PTR)v22);
      _m_prefetchw((const void *)v19);
      v24 = *v19;
      while ( (v24 & 0xF) == 0 )
      {
        if ( v22 != (char *)(v24 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v25 = v24;
        v24 = _InterlockedCompareExchange64(v19, v24 + 15, v24);
        if ( v25 == v24 )
          goto LABEL_31;
      }
      ObpTraceObjectDereferenceIfActive(v22 - 48, 15LL, 1953261124LL);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v22 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *((_QWORD *)v22 - 5) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v22 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v22 - 48) >> 8)],
            (ULONG_PTR)v22,
            6uLL,
            *((_QWORD *)v22 - 5));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v22, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v22 - 48);
      }
    }
LABEL_31:
    if ( v22 )
      goto LABEL_40;
    goto LABEL_32;
  }
LABEL_142:
  v86 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v87 = 0xFFFFF6FB7DBED000uLL;
  v88 = *(_QWORD *)v86;
  if ( v86 >= 0xFFFFF6FB7DBED000uLL
    && v86 <= v9
    && (unsigned int)MiPteHasShadow(v15, v86)
    && (v88 & 1) != 0
    && ((v88 & 0x20) == 0 || (v88 & 0x42) == 0) )
  {
    v89 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v89 )
    {
      v90 = *((_QWORD *)&v89->Flink + ((v86 >> 3) & 0x1FF));
      v86 = v88 | 0x20;
      if ( (v90 & 0x20) == 0 )
        v86 = v88;
      v88 = v86;
      if ( (v90 & 0x42) != 0 )
        v88 = v86 | 0x42;
    }
  }
  v172 = v88;
  if ( (unsigned __int64)&v172 >= v87
    && (unsigned __int64)&v172 <= v9
    && (unsigned int)MiPteHasShadow(&v172, v86)
    && (v88 & 1) != 0
    && ((v88 & 0x20) == 0 || (v88 & 0x42) == 0) )
  {
    v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v91 )
    {
      v92 = *((_QWORD *)&v91->Flink + (((unsigned __int64)&v172 >> 3) & 0x1FF));
      v93 = v88 | 0x20;
      if ( (v92 & 0x20) == 0 )
        v93 = v88;
      v88 = v93;
      if ( (v92 & 0x42) != 0 )
        v88 = v93 | 0x42;
    }
  }
  v94 = 48 * ((v88 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v169 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v94 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v169);
      while ( *(__int64 *)(v94 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v94 + 24), 0x3FuLL) );
    v5 = 0LL;
    v87 = 0xFFFFF6FB7DBED000uLL;
  }
  v95 = 0x3FFFFFFFFFFFFFFFLL;
  v96 = 0x7FFFFFFFFFFFFFFFLL;
  v97 = *(_QWORD *)(v94 + 24) ^ (*(_QWORD *)(v94 + 24) ^ (*(_QWORD *)(v94 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v94 + 24) = v97;
  _InterlockedAnd64((volatile signed __int64 *)(v94 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v98 = *(_QWORD *)v8;
  v99 = v87;
  v100 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v8 >= v99
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v97, 0x3FFFFFFFFFFFFFFFLL)
    && (v98 & 1) != 0
    && ((v98 & 0x20) == 0 || (v98 & 0x42) == 0) )
  {
    v95 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v95 )
    {
      v101 = *(_QWORD *)(v95 + 8 * ((v8 >> 3) & 0x1FF));
      v95 = v98 | 0x20;
      if ( (v101 & 0x20) == 0 )
        v95 = v98;
      v98 = v95;
      if ( (v101 & 0x42) != 0 )
        v98 = v95 | 0x42;
    }
  }
  if ( (v98 & 0x400) == 0 )
    goto LABEL_186;
  v102 = v98;
  if ( qword_140C4DE80 && (v98 & 0x10) == 0 )
    v102 = v98 & ~qword_140C4DE80;
  if ( HIDWORD(v102) == 0xFFFFFFFF )
  {
    v103 = (v98 >> 5) & 0x1F;
  }
  else
  {
LABEL_186:
    v104 = v168;
    if ( (unsigned __int64)&v168 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v168 <= v100
      && (unsigned int)MiPteHasShadow(&v168, v168)
      && (v105 & 1) != 0
      && ((v105 & 0x20) == 0 || (v105 & 0x42) == 0) )
    {
      v106 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v106 )
      {
        v107 = *((_QWORD *)&v106->Flink + (((unsigned __int64)&v168 >> 3) & 0x1FF));
        v104 = v105;
        if ( (v107 & 0x20) != 0 )
          v104 = v105 | 0x20;
        if ( (v107 & 0x42) != 0 )
          v104 |= 0x42uLL;
      }
      else
      {
        v104 = v168;
      }
    }
    v95 = (v104 >> 5) & 0x1F;
    v7 = 1;
    if ( (v98 & 8) != 0 )
      v95 = 1LL;
    v108 = v185;
    LODWORD(v103) = v95;
    if ( v185 )
    {
      if ( (v95 & 4) == 0 )
        v108 = (struct _LIST_ENTRY *)v5;
      v185 = v108;
    }
  }
  if ( (MiFlags & 0x10000) != 0 )
  {
    v95 = v166;
    if ( v166 >= 0xFFFF800000000000uLL
      && (v166 < 0xFFFFF68000000000uLL || v166 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v103 & 2) != 0 )
    {
      if ( (MiFlags & 0x20000) != 0
        || !(unsigned int)MI_PFN_IS_PROTO(v13, v166, 0xFFFFF6FFFFFFFFFFuLL)
        || (*v14 & 0x400LL) != 0 )
      {
        PagePrivilege = MiGetPagePrivilege(v13);
      }
      else
      {
        PagePrivilege = v110;
        if ( (unsigned int)MiIsAddressInDriverView(v109) )
          PagePrivilege = 1;
      }
      v96 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (PagePrivilege & 1) != 0 )
      {
        LODWORD(v103) = 3;
        v185 = 0LL;
      }
      else if ( (PagePrivilege & 8) != 0 )
      {
        LODWORD(v103) = 1;
        v185 = 0LL;
      }
      else
      {
        LODWORD(v103) = v103 & 0xFFFFFFFD;
        if ( !(_DWORD)v103 )
          LODWORD(v103) = 1;
      }
    }
  }
  v112 = v103 & 0xFFFFFFE7;
  v113 = *(_BYTE *)(v13 + 34) >> 6;
  if ( v113 != 1 )
  {
    if ( v113 )
    {
      if ( v113 == 2 )
        v112 |= 0x18u;
    }
    else
    {
      v112 |= 8u;
    }
  }
  v114 = (v12 << 12) | MmProtectToPteMask[v112] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_246:
    v114 |= 0x100uLL;
    goto LABEL_247;
  }
  v115 = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
      v114 |= 0x8000000000000000uLL;
    else
      v114 &= v96;
    if ( (unsigned int)MiUserPdeOrAbove(v8, v95, 0xFFFFF6FFFFFFFFFFuLL, v5) )
      v114 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v114 |= 4uLL;
  if ( v115 < 0xFFFF800000000000uLL )
  {
    v116 = HIBYTE(word_140C4DF48);
    goto LABEL_245;
  }
  if ( (unsigned int)MiGetSystemRegionType(v115) != 1 && (v115 < 0xFFFFF68000000000uLL || v115 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v115 < qword_140C4FA78 || (v116 = HIBYTE(word_140C4DF48), v115 > qword_140C4E2A8) )
      v116 = (unsigned __int8)word_140C4DF48;
LABEL_245:
    if ( !v116 )
      goto LABEL_247;
    goto LABEL_246;
  }
LABEL_247:
  v117 = v114 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v117;
  if ( v185 )
  {
    if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
    {
      v118 = KeGetCurrentThread()->ApcState.Process;
      if ( v117 >= 0 && (v118[1].DirectoryTableBase & 0x1000000000LL) != 0
        || (v119 = v118[2].ActiveProcessors.Bitmap[2]) != 0 && *(_QWORD *)(v119 + 24) != v119 + 24 )
      {
        v117 = TransitionPteValid;
        v185 = 0LL;
        goto LABEL_277;
      }
      v117 = TransitionPteValid;
    }
    if ( (v103 & 5) != 5 )
    {
      v117 |= 0x42uLL;
      v32 = (*(_BYTE *)(v13 + 34) & 0x10) == 0;
      TransitionPteValid = v117;
      if ( v32 && (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v13 + 16) )
      {
        v122 = 0LL;
        v123 = MiLockPageInline(v13, v120, v121);
        v124 = *(_BYTE *)(v13 + 34);
        v125 = v123;
        if ( (v124 & 0x10) == 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
        {
          if ( (v124 & 8) == 0 )
          {
            v126 = MiCapturePageFileInfoInline(v13 + 16, 1LL);
            v124 = *(_BYTE *)(v13 + 34);
            v122 = v126;
          }
          *(_BYTE *)(v13 + 34) = v124 | 0x10;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v122 )
          MiReleasePageFileInfo(v179, v122, 1LL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v127 = KeGetCurrentIrql();
            if ( v127 <= 0xFu && (unsigned __int8)v125 <= 0xFu && v127 >= 2u )
            {
              v128 = KeGetCurrentPrcb();
              v129 = v128->SchedulerAssist;
              v130 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v125 + 1));
              v32 = (v130 & v129[5]) == 0;
              v129[5] &= v130;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v128);
            }
          }
        }
        __writecr8(v125);
        v117 = TransitionPteValid;
      }
      if ( (v180 & 0x400) != 0 && (*(_BYTE *)(v178 + 184) & 7) != 2 )
        MiCheckAndUpdateIoAttribution(v13);
    }
  }
LABEL_277:
  v131 = 0LL;
  v132 = 0;
  v133 = 0;
  if ( v186 || (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v13 + 8) > 0 )
    goto LABEL_308;
  v134 = v166;
  if ( v166 < 0xFFFF800000000000uLL )
  {
    if ( v173 )
    {
      if ( (*(_DWORD *)(v165 + 56) & 0x20) == 0 )
      {
LABEL_308:
        v142 = v161;
        goto LABEL_309;
      }
    }
    else
    {
      v138 = KeGetCurrentThread()->ApcState.Process;
      if ( v138[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v138, *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) )
        goto LABEL_307;
    }
    if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 384) != v131 )
    {
      Address = MiLocateAddress(v134);
      v140 = Address;
      if ( Address )
      {
        v141 = *(_DWORD *)(Address + 48);
        if ( (v141 & 0x70) == 0x20 && (v141 & 0x100000) == 0 && (v141 & 0x200000) != 0 )
        {
          v137 = **(_QWORD **)(v140 + 72);
          v136 = (v166 >> 12)
               + ((__int64)(*(_QWORD *)(v140 + 80) - *(_QWORD *)(v137 + 136)) >> 3)
               - *(_DWORD *)(v140 + 24);
          if ( _bittest(*(const signed __int32 **)(v140 + 152), v136) )
          {
            HasPrivateFixups = *(_QWORD *)(v140 + 136);
            v117 = TransitionPteValid;
            goto LABEL_296;
          }
        }
      }
    }
LABEL_307:
    v117 = TransitionPteValid;
    goto LABEL_308;
  }
  if ( v165 && (*(_DWORD *)(v165 + 56) & 0x20) == 0 )
    goto LABEL_308;
  HasPrivateFixups = MiSystemImageHasPrivateFixups(v166, &v165, &v167);
  v136 = v167;
  LOBYTE(v131) = 0;
  LODWORD(v137) = v165;
LABEL_296:
  if ( !HasPrivateFixups )
    goto LABEL_308;
  v133 = MiPrivateFixup(a1, v137, v136, v13, HasPrivateFixups);
  MiLockAndDecrementShareCount(v13, 0LL);
  if ( v133 == 297 || v133 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v94, 0LL);
    if ( v133 == 297 )
      return (unsigned int)-1073740748;
    return v133;
  }
  if ( (v133 & 0x80000000) != 0 )
    return v133;
  TransitionPteValid = MiMakeTransitionPteValid(v163);
  v117 = TransitionPteValid;
  v142 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPteValid) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v7 = 2;
  v161 = v142;
  if ( v166 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v142 + 35) & 8) != 0 )
    v132 = 2;
  LOBYTE(v131) = 0;
  LOBYTE(v103) = 0;
LABEL_309:
  v144 = v131;
  if ( (v7 & 1) == 0 )
    v144 = v103;
  v145 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a5 & 1) != 0 )
  {
    if ( *v145 == 5 )
      v177 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (a5 & 1) != 0 && *v145 == 3 )
      v132 |= 1u;
  }
  v146 = *(unsigned __int8 *)(a1 + 69);
  if ( (v146 & 8) != 0 )
  {
    v147 = *(_QWORD *)(a1 + 16);
    if ( (v147 & 1) == 0 || *(_BYTE *)(v147 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v117 &= ~0x20uLL;
  }
  if ( (v146 & 5) != 4 || (v146 & 2) != 0 )
  {
    v154 = v161;
    goto LABEL_337;
  }
  v148 = *(unsigned __int16 *)(a1 + 66);
  v149 = 511;
  v150 = v163;
  if ( (_WORD)v148 )
  {
    if ( v148 + *(unsigned __int16 *)(a1 + 64) == (((unsigned int)v163 >> 3) & 0x1FF) )
    {
      LOBYTE(v146) = v146 & 0x10;
      if ( (unsigned int)MI_PFN_IS_PROTO(v142, v146, v142) )
      {
        if ( !v151 )
          goto LABEL_330;
      }
      else if ( v151 )
      {
        goto LABEL_330;
      }
    }
    MiEmptyDeferredWorkingSetEntries(a1 + 56);
    v149 = 511;
    v150 = v163;
  }
LABEL_330:
  v152 = *(_WORD *)(a1 + 66);
  if ( v152 )
  {
    *(_WORD *)(a1 + 66) = v152 + 1;
    v132 |= 4u;
    v154 = v161;
  }
  else
  {
    v153 = *(unsigned __int8 *)(a1 + 69);
    *(_WORD *)(a1 + 66) = 1;
    *(_WORD *)(a1 + 64) = v149 & (v150 >> 3);
    v154 = v161;
    if ( (unsigned int)MI_PFN_IS_PROTO(v161, v153, v142) )
      v157 = v155 & 0xEF;
    else
      v157 = v155 | 0x10;
    *(_BYTE *)(v156 + 69) = v157;
    v132 |= 4u;
  }
LABEL_337:
  v160 = v132;
  v158 = v163;
  if ( !(unsigned int)MiAllocateWsle(v178, v163, v154, v144, v117, v160, v177) )
  {
    MiLockAndDecrementShareCount(v154, 0LL);
    if ( v7 < 2 )
      MiLockAndDecrementShareCount(v94, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v185
    || (v117 & 0x800) != 0
    || (v117 & 0x200) == 0
    || KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
  {
    return v133;
  }
  if ( *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 69) & 1) == 0 && *(_WORD *)(a1 + 66) )
    MiEmptyDeferredWorkingSetEntries(a1 + 56);
  v159 = MiCopyOnWrite(v166, v158, -1LL);
  v133 = v159;
  if ( v159 >= 0 )
    return v133;
  MiSetFaultPacketDirectives(a1, (unsigned int)v159);
  return 3221226548LL;
}
