/*
 * XREFs of MiCompleteProtoPteFault @ 0x140275570
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 * Callees:
 *     PfSnTraceBufferAllocate @ 0x140202EC0 (PfSnTraceBufferAllocate.c)
 *     ExAcquireRundownProtectionEx @ 0x140202FC0 (ExAcquireRundownProtectionEx.c)
 *     ObFastReferenceObjectLocked @ 0x140209828 (ObFastReferenceObjectLocked.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140248C30 (MiCheckAndUpdateIoAttribution.c)
 *     MiGetSubsectionDriverProtos @ 0x14024EC00 (MiGetSubsectionDriverProtos.c)
 *     MiLockAndDecrementShareCount @ 0x140250E00 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14028A530 (ObpTraceObjectDereferenceIfActive.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14029F34C (MiEmptyDeferredWorkingSetEntries.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     PfSnGetFileInformation @ 0x1402D2A40 (PfSnGetFileInformation.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     PfSnTraceGetLogEntry @ 0x1402D2E80 (PfSnTraceGetLogEntry.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     ObReferenceObjectExWithTag @ 0x140302C00 (ObReferenceObjectExWithTag.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x14030CD44 (MiUserPdeOrAbove.c)
 *     MiSystemImageHasPrivateFixups @ 0x14030DB7C (MiSystemImageHasPrivateFixups.c)
 *     MiMakeTransitionPteValid @ 0x1403115D0 (MiMakeTransitionPteValid.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiIsAddressInDriverView @ 0x140538D28 (MiIsAddressInDriverView.c)
 *     MiSetFaultPacketDirectives @ 0x140547438 (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(
        __int64 a1,
        unsigned __int64 a2,
        struct _LIST_ENTRY *Flink,
        int a4,
        __int64 a5)
{
  ULONG_PTR v5; // r9
  unsigned __int64 v6; // r14
  unsigned int v7; // esi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r10
  char v10; // dl
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r12
  _DWORD *v14; // rbx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  ULONG_PTR v18; // rax
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
  __int64 v94; // r8
  __int64 v95; // r13
  unsigned __int64 v96; // rdx
  __int64 v97; // r10
  __int64 v98; // rcx
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r11
  __int64 v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // rdi
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // r8
  struct _LIST_ENTRY *v107; // rdx
  __int64 v108; // rax
  struct _LIST_ENTRY *v109; // rax
  __int64 v110; // rdx
  char v111; // r9
  char PagePrivilege; // bl
  int v113; // eax
  char v114; // cl
  unsigned __int64 v115; // rbx
  unsigned __int64 v116; // r14
  int v117; // eax
  signed __int64 v118; // rbx
  _KPROCESS *v119; // rcx
  unsigned __int64 v120; // rax
  __int64 v121; // rbx
  unsigned __int8 v122; // al
  char v123; // r8
  unsigned __int64 v124; // r14
  __int64 v125; // rax
  unsigned __int8 v126; // al
  struct _KPRCB *v127; // r10
  _DWORD *v128; // r9
  int v129; // eax
  __int64 v130; // r11
  char v131; // r15
  unsigned int v132; // r14d
  unsigned __int64 v133; // r9
  __int64 HasPrivateFixups; // rax
  unsigned int v135; // ecx
  ULONG_PTR v136; // rdx
  _KPROCESS *v137; // rcx
  __int64 **Address; // rax
  __int64 **v139; // r10
  int v140; // eax
  unsigned __int64 v141; // r8
  char v143; // r12
  _BYTE *v144; // rcx
  char v145; // dl
  __int64 v146; // rax
  int v147; // eax
  __int16 v148; // r11
  unsigned int v149; // r9d
  char v150; // dl
  __int16 v151; // ax
  _QWORD *v152; // rdi
  char v153; // dl
  __int64 v154; // r10
  char v155; // dl
  unsigned __int64 v156; // r15
  int v157; // eax
  char v158; // [rsp+28h] [rbp-D8h]
  _QWORD *v159; // [rsp+40h] [rbp-C0h]
  __int64 TransitionPteValid; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v161; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v162; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v163; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v164; // [rsp+68h] [rbp-98h]
  unsigned int v165; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v166; // [rsp+78h] [rbp-88h] BYREF
  int v167; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v168; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h]
  unsigned __int64 v170; // [rsp+98h] [rbp-68h] BYREF
  __int64 v171; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v172; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v173; // [rsp+B0h] [rbp-50h]
  _DWORD *v174; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v175; // [rsp+C0h] [rbp-40h]
  __int64 v176; // [rsp+C8h] [rbp-38h]
  __int64 v177; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v178; // [rsp+E0h] [rbp-20h]
  __int128 v179; // [rsp+E8h] [rbp-18h]
  __int64 v180; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v182; // [rsp+158h] [rbp+58h] BYREF
  struct _LIST_ENTRY *v183; // [rsp+160h] [rbp+60h]
  int v184; // [rsp+168h] [rbp+68h]

  v184 = a4;
  v183 = Flink;
  v182 = a2;
  v5 = 0LL;
  v176 = *(_QWORD *)(a1 + 56);
  v6 = a2;
  v7 = 0;
  v164 = *(_QWORD *)a1;
  v175 = 0LL;
  TransitionPteValid = 0LL;
  v165 = 0;
  v8 = ((v164 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v161 = v8;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v182 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v182 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v182, a2, Flink, 0LL)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v182 >> 3) & 0x1FF));
      if ( (v11 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v11 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v182;
    }
  }
  v12 = (v6 >> 12) & 0xFFFFFFFFFLL;
  v173 = v12;
  v13 = 48 * v12 - 0x58000000000LL;
  v14 = (_DWORD *)(v13 + 16);
  v159 = (_QWORD *)v13;
  v174 = (_DWORD *)(v13 + 16);
  v15 = *(_QWORD *)(v13 + 16);
  v177 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL));
  v178 = v15;
  v166 = v15;
  if ( (v15 & 0x400) == 0 )
  {
    v171 = v5;
    v163 = v5;
    goto LABEL_142;
  }
  v16 = v15;
  if ( qword_140C4DDC0 && (v15 & 0x10) == 0 )
    v16 = v15 & ~qword_140C4DDC0;
  v17 = v16 >> 16;
  v171 = v17;
  v18 = *(_QWORD *)v17;
  v163 = *(_QWORD *)v17;
  if ( PfSnNumActiveTraces )
  {
    v19 = (volatile signed __int64 *)(v18 + 64);
    v168 = (volatile signed __int64 *)(v18 + 64);
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
        v27 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v163 + 72));
        Object = (PVOID)ObFastReferenceObjectLocked(v19);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v163 + 72));
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
        v17 = v171;
LABEL_40:
        v33 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        if ( (v164 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(v164) == 1)
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
              v38 = (v33 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos((_QWORD *)v17) + 72) << 9);
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
        v162 = v39;
        v42 = CurrentThread->ApcState.Process;
        v43 = *(_DWORD *)(v163 + 56) & 0x20;
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
              v179 = 0LL;
              v180 = 0LL;
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
            v49 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
            v46 = v42[1].ActiveProcessors.Bitmap[10] & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v46 )
              v48 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v46 + 360));
            KxReleaseSpinLock(&SpinLock);
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
              v19 = v168;
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
              v14 = v174;
              v8 = v161;
              v5 = 0LL;
              v13 = (__int64)v159;
              v12 = v173;
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
                if ( v162 < 0x20000000000LL )
                {
                  v60 = dword_140CEC050;
                  v61 = v162 >> 9;
                  v162 >>= 9;
                  v172 = 0LL;
                  v62 = v43 != 0;
                  if ( dword_140CEC050 != *(_DWORD *)(v46 + 404) )
                  {
                    LogEntry = PfSnTraceGetLogEntry(v46, 1LL, &v172);
                    v61 = v162;
                    if ( LogEntry >= 0 )
                    {
                      v64 = v172;
                      *v172 = *v172 & 0xFFFFFFFFFFFFFFF8uLL | 2;
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
                          v70 = PfSnTraceBufferAllocate();
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
                        v83 = v62 | (8 * v162);
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
    && (unsigned int)MiPteHasShadow(v15, v86, v88, v5)
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
  v170 = v88;
  if ( (unsigned __int64)&v170 >= v87
    && (unsigned __int64)&v170 <= v9
    && (unsigned int)MiPteHasShadow(&v170, v86, v88, v5)
    && (v88 & 1) != 0
    && ((v88 & 0x20) == 0 || (v88 & 0x42) == 0) )
  {
    v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v91 )
    {
      v92 = *((_QWORD *)&v91->Flink + (((unsigned __int64)&v170 >> 3) & 0x1FF));
      v93 = v88 | 0x20;
      if ( (v92 & 0x20) == 0 )
        v93 = v88;
      v88 = v93;
      if ( (v92 & 0x42) != 0 )
        v88 = v93 | 0x42;
    }
  }
  v94 = (v88 >> 12) & 0xFFFFFFFFFLL;
  v95 = 48 * v94 - 0x58000000000LL;
  v167 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v95 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v167);
      while ( *(__int64 *)(v95 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v95 + 24), 0x3FuLL) );
    v5 = 0LL;
    v87 = 0xFFFFF6FB7DBED000uLL;
  }
  v96 = 0x3FFFFFFFFFFFFFFFLL;
  v97 = 0x7FFFFFFFFFFFFFFFLL;
  v98 = *(_QWORD *)(v95 + 24) ^ (*(_QWORD *)(v95 + 24) ^ (*(_QWORD *)(v95 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v95 + 24) = v98;
  _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v99 = *(_QWORD *)v8;
  v100 = v87;
  v101 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v8 >= v100
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v98, 0x3FFFFFFFFFFFFFFFLL, v94, v5)
    && (v99 & 1) != 0
    && ((v99 & 0x20) == 0 || (v99 & 0x42) == 0) )
  {
    v96 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v96 )
    {
      v102 = *(_QWORD *)(v96 + 8 * ((v8 >> 3) & 0x1FF));
      v96 = v99 | 0x20;
      if ( (v102 & 0x20) == 0 )
        v96 = v99;
      v99 = v96;
      if ( (v102 & 0x42) != 0 )
        v99 = v96 | 0x42;
    }
  }
  if ( (v99 & 0x400) == 0 )
    goto LABEL_186;
  v103 = v99;
  if ( qword_140C4DDC0 && (v99 & 0x10) == 0 )
    v103 = v99 & ~qword_140C4DDC0;
  if ( HIDWORD(v103) == 0xFFFFFFFF )
  {
    v104 = (v99 >> 5) & 0x1F;
  }
  else
  {
LABEL_186:
    v105 = v166;
    if ( (unsigned __int64)&v166 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v166 <= v101
      && (unsigned int)MiPteHasShadow(&v166, v166, v166, v5)
      && (v106 & 1) != 0
      && ((v106 & 0x20) == 0 || (v106 & 0x42) == 0) )
    {
      v107 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v107 )
      {
        v108 = *((_QWORD *)&v107->Flink + (((unsigned __int64)&v166 >> 3) & 0x1FF));
        v105 = v106;
        if ( (v108 & 0x20) != 0 )
          v105 = v106 | 0x20;
        if ( (v108 & 0x42) != 0 )
          v105 |= 0x42uLL;
      }
      else
      {
        v105 = v166;
      }
    }
    v96 = (v105 >> 5) & 0x1F;
    v7 = 1;
    if ( (v99 & 8) != 0 )
      v96 = 1LL;
    v109 = v183;
    LODWORD(v104) = v96;
    if ( v183 )
    {
      if ( (v96 & 4) == 0 )
        v109 = (struct _LIST_ENTRY *)v5;
      v183 = v109;
    }
  }
  if ( (MiFlags & 0x10000) != 0 )
  {
    v96 = v164;
    if ( v164 >= 0xFFFF800000000000uLL
      && (v164 < 0xFFFFF68000000000uLL || v164 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v104 & 2) != 0 )
    {
      if ( (MiFlags & 0x20000) != 0 || !(unsigned int)MI_PFN_IS_PROTO(v13) || (*v14 & 0x400LL) != 0 )
      {
        PagePrivilege = MiGetPagePrivilege(v13);
      }
      else
      {
        PagePrivilege = v111;
        if ( (unsigned int)MiIsAddressInDriverView(v110) )
          PagePrivilege = 1;
      }
      v97 = 0x7FFFFFFFFFFFFFFFLL;
      if ( (PagePrivilege & 1) != 0 )
      {
        LODWORD(v104) = 3;
        v183 = 0LL;
      }
      else if ( (PagePrivilege & 8) != 0 )
      {
        LODWORD(v104) = 1;
        v183 = 0LL;
      }
      else
      {
        LODWORD(v104) = v104 & 0xFFFFFFFD;
        if ( !(_DWORD)v104 )
          LODWORD(v104) = 1;
      }
    }
  }
  v113 = v104 & 0xFFFFFFE7;
  v114 = *(_BYTE *)(v13 + 34) >> 6;
  if ( v114 != 1 )
  {
    if ( v114 )
    {
      if ( v114 == 2 )
        v113 |= 0x18u;
    }
    else
    {
      v113 |= 8u;
    }
  }
  v115 = (v12 << 12) | MmProtectToPteMask[v113] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_246:
    v115 |= 0x100uLL;
    goto LABEL_247;
  }
  v116 = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
      v115 |= 0x8000000000000000uLL;
    else
      v115 &= v97;
    if ( (unsigned int)MiUserPdeOrAbove(v8, v96, 0xFFFFF6FFFFFFFFFFuLL, v5) )
      v115 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v115 |= 4uLL;
  if ( v116 < 0xFFFF800000000000uLL )
  {
    v117 = HIBYTE(word_140C4DE88);
    goto LABEL_245;
  }
  if ( (unsigned int)MiGetSystemRegionType(v116) != 1 && (v116 < 0xFFFFF68000000000uLL || v116 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v116 < qword_140C4F9B8 || (v117 = HIBYTE(word_140C4DE88), v116 > qword_140C4E1E8) )
      v117 = (unsigned __int8)word_140C4DE88;
LABEL_245:
    if ( !v117 )
      goto LABEL_247;
    goto LABEL_246;
  }
LABEL_247:
  v118 = v115 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v118;
  if ( v183 )
  {
    if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
    {
      v119 = KeGetCurrentThread()->ApcState.Process;
      if ( v118 >= 0 && (v119[1].DirectoryTableBase & 0x1000000000LL) != 0
        || (v120 = v119[2].ActiveProcessors.Bitmap[2]) != 0 && *(_QWORD *)(v120 + 24) != v120 + 24 )
      {
        v118 = TransitionPteValid;
        v183 = 0LL;
        goto LABEL_277;
      }
      v118 = TransitionPteValid;
    }
    if ( (v104 & 5) != 5 )
    {
      v118 |= 0x42uLL;
      v32 = (*(_BYTE *)(v13 + 34) & 0x10) == 0;
      TransitionPteValid = v118;
      if ( v32 && (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v13 + 16) )
      {
        v121 = 0LL;
        v122 = MiLockPageInline(v13);
        v123 = *(_BYTE *)(v13 + 34);
        v124 = v122;
        if ( (v123 & 0x10) == 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
        {
          if ( (v123 & 8) == 0 )
          {
            v125 = MiCapturePageFileInfoInline(v13 + 16, 1LL);
            v123 = *(_BYTE *)(v13 + 34);
            v121 = v125;
          }
          *(_BYTE *)(v13 + 34) = v123 | 0x10;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v121 )
          MiReleasePageFileInfo(v177, v121, 1LL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v126 = KeGetCurrentIrql();
            if ( v126 <= 0xFu && (unsigned __int8)v124 <= 0xFu && v126 >= 2u )
            {
              v127 = KeGetCurrentPrcb();
              v128 = v127->SchedulerAssist;
              v129 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v124 + 1));
              v32 = (v129 & v128[5]) == 0;
              v128[5] &= v129;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v127);
            }
          }
        }
        __writecr8(v124);
        v118 = TransitionPteValid;
      }
      if ( (v178 & 0x400) != 0 && (*(_BYTE *)(v176 + 184) & 7) != 2 )
        MiCheckAndUpdateIoAttribution(v13);
    }
  }
LABEL_277:
  v130 = 0LL;
  v131 = 0;
  v132 = 0;
  if ( v184 || (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v13 + 8) > 0 )
    goto LABEL_308;
  v133 = v164;
  if ( v164 < 0xFFFF800000000000uLL )
  {
    if ( v171 )
    {
      if ( (*(_DWORD *)(v163 + 56) & 0x20) == 0 )
      {
LABEL_308:
        v141 = (unsigned __int64)v159;
        goto LABEL_309;
      }
    }
    else
    {
      v137 = KeGetCurrentThread()->ApcState.Process;
      if ( v137[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v137, *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL) )
        goto LABEL_307;
    }
    if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 384) != v130 )
    {
      Address = MiLocateAddress(v133);
      v139 = Address;
      if ( Address )
      {
        v140 = *((_DWORD *)Address + 12);
        if ( (v140 & 0x70) == 0x20 && (v140 & 0x100000) == 0 && (v140 & 0x200000) != 0 )
        {
          v136 = *v139[9];
          v135 = (v164 >> 12) + (((__int64)v139[10] - *(_QWORD *)(v136 + 136)) >> 3) - *((_DWORD *)v139 + 6);
          if ( _bittest((const signed __int32 *)v139[19], v135) )
          {
            HasPrivateFixups = (__int64)v139[17];
            v118 = TransitionPteValid;
            goto LABEL_296;
          }
        }
      }
    }
LABEL_307:
    v118 = TransitionPteValid;
    goto LABEL_308;
  }
  if ( v163 && (*(_DWORD *)(v163 + 56) & 0x20) == 0 )
    goto LABEL_308;
  HasPrivateFixups = MiSystemImageHasPrivateFixups(v164, &v163, &v165);
  v135 = v165;
  LOBYTE(v130) = 0;
  v136 = v163;
LABEL_296:
  if ( !HasPrivateFixups )
    goto LABEL_308;
  v132 = MiPrivateFixup(a1, v136, v135, v13, HasPrivateFixups);
  MiLockAndDecrementShareCount(v13, 0);
  if ( v132 == 297 || v132 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v95, 0);
    if ( v132 == 297 )
      return (unsigned int)-1073740748;
    return v132;
  }
  if ( (v132 & 0x80000000) != 0 )
    return v132;
  TransitionPteValid = MiMakeTransitionPteValid(v161);
  v118 = TransitionPteValid;
  v141 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPteValid) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v7 = 2;
  v159 = (_QWORD *)v141;
  if ( v164 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v141 + 35) & 8) != 0 )
    v131 = 2;
  LOBYTE(v130) = 0;
  LOBYTE(v104) = 0;
LABEL_309:
  v143 = v130;
  if ( (v7 & 1) == 0 )
    v143 = v104;
  v144 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a5 & 1) != 0 )
  {
    if ( *v144 == 5 )
      v175 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (a5 & 1) != 0 && *v144 == 3 )
      v131 |= 1u;
  }
  v145 = *(_BYTE *)(a1 + 69);
  if ( (v145 & 8) != 0 )
  {
    v146 = *(_QWORD *)(a1 + 16);
    if ( (v146 & 1) == 0 || *(_BYTE *)(v146 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v118 &= ~0x20uLL;
  }
  if ( (v145 & 5) != 4 || (v145 & 2) != 0 )
  {
    v152 = v159;
    goto LABEL_337;
  }
  v147 = *(unsigned __int16 *)(a1 + 66);
  v148 = 511;
  v149 = v161;
  if ( (_WORD)v147 )
  {
    if ( v147 + *(unsigned __int16 *)(a1 + 64) == (((unsigned int)v161 >> 3) & 0x1FF) )
    {
      if ( (unsigned int)MI_PFN_IS_PROTO(v141) )
      {
        if ( !v150 )
          goto LABEL_330;
      }
      else if ( v150 )
      {
        goto LABEL_330;
      }
    }
    MiEmptyDeferredWorkingSetEntries(a1 + 56);
    v148 = 511;
    v149 = v161;
  }
LABEL_330:
  v151 = *(_WORD *)(a1 + 66);
  if ( v151 )
  {
    *(_WORD *)(a1 + 66) = v151 + 1;
    v131 |= 4u;
    v152 = v159;
  }
  else
  {
    *(_WORD *)(a1 + 66) = 1;
    *(_WORD *)(a1 + 64) = v148 & (v149 >> 3);
    v152 = v159;
    if ( (unsigned int)MI_PFN_IS_PROTO(v159) )
      v155 = v153 & 0xEF;
    else
      v155 = v153 | 0x10;
    *(_BYTE *)(v154 + 69) = v155;
    v131 |= 4u;
  }
LABEL_337:
  v158 = v131;
  v156 = v161;
  if ( !(unsigned int)MiAllocateWsle(v176, v161, v152, v143, v118, v158, v175) )
  {
    MiLockAndDecrementShareCount((__int64)v152, 0);
    if ( v7 < 2 )
      MiLockAndDecrementShareCount(v95, 0);
    return (unsigned int)-1073741801;
  }
  if ( !v183
    || (v118 & 0x800) != 0
    || (v118 & 0x200) == 0
    || KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
  {
    return v132;
  }
  if ( *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 69) & 1) == 0 && *(_WORD *)(a1 + 66) )
    MiEmptyDeferredWorkingSetEntries(a1 + 56);
  v157 = MiCopyOnWrite(v164, v156, -1LL, 0LL);
  v132 = v157;
  if ( v157 >= 0 )
    return v132;
  MiSetFaultPacketDirectives(a1, (unsigned int)v157);
  return 3221226548LL;
}
