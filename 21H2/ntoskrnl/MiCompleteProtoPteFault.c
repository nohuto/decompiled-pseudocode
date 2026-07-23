/*
 * XREFs of MiCompleteProtoPteFault @ 0x1402B8690
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402B4450 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 * Callees:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiMakeTransitionPteValid @ 0x140230140 (MiMakeTransitionPteValid.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     PfSnTraceBufferAllocate @ 0x1402A5820 (PfSnTraceBufferAllocate.c)
 *     ExAcquireRundownProtectionEx @ 0x1402A5900 (ExAcquireRundownProtectionEx.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x1402EE9C0 (ObpTraceObjectDereferenceIfActive.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiCheckAndUpdateIoAttribution @ 0x140303768 (MiCheckAndUpdateIoAttribution.c)
 *     MiGetSubsectionDriverProtos @ 0x140307B30 (MiGetSubsectionDriverProtos.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiSystemImageHasPrivateFixups @ 0x1403254E8 (MiSystemImageHasPrivateFixups.c)
 *     PfSnTraceGetLogEntry @ 0x1403255E0 (PfSnTraceGetLogEntry.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     PfSnGetFileInformation @ 0x1403267E0 (PfSnGetFileInformation.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiIsAddressInDriverView @ 0x14053AA68 (MiIsAddressInDriverView.c)
 *     MiSetFaultPacketDirectives @ 0x140549178 (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v15; // rcx
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
  __int64 v60; // r9
  int v61; // ebx
  unsigned __int64 v62; // r8
  BOOL v63; // r13d
  int LogEntry; // eax
  unsigned __int64 *v65; // rcx
  _QWORD *v66; // rcx
  __int64 v67; // rbx
  signed __int32 v68; // eax
  char v69; // cc
  signed __int32 v70; // eax
  _QWORD *v71; // r15
  unsigned __int64 v72; // r12
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  _QWORD *v77; // rcx
  unsigned __int8 v78; // al
  struct _KPRCB *v79; // r10
  _DWORD *v80; // r9
  int v81; // eax
  signed __int32 v82; // eax
  unsigned __int64 *v83; // rdx
  unsigned __int64 v84; // rcx
  signed __int64 v85; // rax
  signed __int64 v86; // rtt
  unsigned __int64 *v87; // rdx
  unsigned __int64 v88; // r11
  unsigned __int64 v89; // r8
  unsigned __int64 v90; // rdx
  struct _LIST_ENTRY *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  struct _LIST_ENTRY *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r13
  __int64 v98; // r10
  unsigned __int64 v99; // rdi
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r11
  struct _LIST_ENTRY *v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  unsigned __int64 v105; // rax
  __int64 v106; // rdi
  unsigned __int64 v107; // rdx
  unsigned __int64 v108; // r8
  struct _LIST_ENTRY *v109; // rdx
  __int64 v110; // rax
  __int64 v111; // rdx
  struct _LIST_ENTRY *v112; // rax
  unsigned __int64 v113; // r8
  __int64 v114; // rdx
  char v115; // r9
  char PagePrivilege; // bl
  int v117; // eax
  char v118; // cl
  unsigned __int64 v119; // rbx
  unsigned __int64 v120; // r14
  int v121; // eax
  signed __int64 v122; // rbx
  _KPROCESS *v123; // rcx
  unsigned __int64 v124; // rax
  unsigned __int64 v125; // rbx
  unsigned __int8 v126; // al
  unsigned __int64 v127; // r14
  __int64 v128; // rax
  unsigned __int8 v129; // al
  struct _KPRCB *v130; // r10
  _DWORD *v131; // r9
  int v132; // eax
  __int64 v133; // r11
  char v134; // r15
  unsigned int v135; // r14d
  unsigned __int64 v136; // r9
  __int64 HasPrivateFixups; // rax
  unsigned int v138; // ecx
  ULONG_PTR v139; // rdx
  _KPROCESS *v140; // rcx
  __int64 **Address; // rax
  __int64 **v142; // r10
  int v143; // eax
  unsigned __int64 v144; // r8
  char v146; // r12
  _BYTE *v147; // rcx
  char v148; // dl
  __int64 v149; // rax
  int v150; // eax
  __int16 v151; // r11
  unsigned int v152; // r9d
  char v153; // dl
  __int16 v154; // ax
  _QWORD *v155; // rdi
  char v156; // dl
  __int64 v157; // r10
  char v158; // dl
  unsigned __int64 v159; // r15
  int v160; // eax
  char v161; // [rsp+28h] [rbp-D8h]
  _QWORD *v162; // [rsp+40h] [rbp-C0h]
  __int64 TransitionPteValid; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v164; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v165; // [rsp+58h] [rbp-A8h]
  ULONG_PTR v166; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v167; // [rsp+68h] [rbp-98h]
  unsigned int v168; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v169; // [rsp+78h] [rbp-88h] BYREF
  int v170; // [rsp+80h] [rbp-80h] BYREF
  volatile signed __int64 *v171; // [rsp+88h] [rbp-78h]
  PVOID Object; // [rsp+90h] [rbp-70h]
  unsigned __int64 v173; // [rsp+98h] [rbp-68h] BYREF
  __int64 v174; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v175; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v176; // [rsp+B0h] [rbp-50h]
  _DWORD *v177; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v178; // [rsp+C0h] [rbp-40h]
  __int64 v179; // [rsp+C8h] [rbp-38h]
  __int64 v180; // [rsp+D8h] [rbp-28h]
  __int64 v181; // [rsp+E0h] [rbp-20h]
  __int128 v182; // [rsp+E8h] [rbp-18h]
  __int64 v183; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v185; // [rsp+158h] [rbp+58h] BYREF
  struct _LIST_ENTRY *v186; // [rsp+160h] [rbp+60h]
  int v187; // [rsp+168h] [rbp+68h]

  v187 = a4;
  v186 = Flink;
  v185 = a2;
  v5 = 0LL;
  v179 = *(_QWORD *)(a1 + 56);
  v6 = a2;
  v7 = 0;
  v167 = *(_QWORD *)a1;
  v178 = 0LL;
  TransitionPteValid = 0LL;
  v168 = 0;
  v8 = ((v167 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v164 = v8;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v185 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v185 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v185 >> 3) & 0x1FF));
      if ( (v11 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v11 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v185;
    }
  }
  v12 = (v6 >> 12) & 0xFFFFFFFFFLL;
  v176 = v12;
  v13 = 48 * v12 - 0x58000000000LL;
  v14 = (_DWORD *)(v13 + 16);
  v162 = (_QWORD *)v13;
  v177 = (_DWORD *)(v13 + 16);
  v15 = *(_QWORD *)(v13 + 16);
  v180 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL));
  v181 = v15;
  v169 = v15;
  if ( (v15 & 0x400) == 0 )
  {
    v174 = v5;
    v166 = v5;
    goto LABEL_142;
  }
  v16 = v15;
  if ( qword_140C4DF80 && (v15 & 0x10) == 0 )
    v16 = v15 & ~qword_140C4DF80;
  v17 = v16 >> 16;
  v174 = v17;
  v18 = *(_QWORD *)v17;
  v166 = *(_QWORD *)v17;
  if ( PfSnNumActiveTraces )
  {
    v19 = (volatile signed __int64 *)(v18 + 64);
    v171 = (volatile signed __int64 *)(v18 + 64);
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
        v27 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v166 + 72));
        Object = (PVOID)ObFastReferenceObjectLocked(v19);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v166 + 72));
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
        v17 = v174;
LABEL_40:
        v33 = *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL;
        if ( (v167 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(v167) == 1)
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
              v38 = (v33 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos(v17) + 72) << 9);
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
        v165 = v39;
        v42 = CurrentThread->ApcState.Process;
        v43 = *(_DWORD *)(v166 + 56) & 0x20;
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
              v182 = 0LL;
              v183 = 0LL;
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
            v49 = KeAcquireSpinLockRaiseToDpc(&qword_140C50490);
            v46 = v42[1].ActiveProcessors.Bitmap[10] & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v46 )
              v48 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v46 + 360));
            KxReleaseSpinLock(&qword_140C50490);
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
              v19 = v171;
LABEL_137:
              _m_prefetchw((const void *)v19);
              v85 = *v19;
              if ( ((unsigned __int64)Object ^ *v19) >= 0xF )
              {
LABEL_140:
                ObDereferenceObjectDeferDelete(Object);
              }
              else
              {
                while ( 1 )
                {
                  v86 = v85;
                  v85 = _InterlockedCompareExchange64(v19, v85 + 1, v85);
                  if ( v86 == v85 )
                    break;
                  if ( ((unsigned __int64)Object ^ v85) >= 0xF )
                    goto LABEL_140;
                }
              }
              v14 = v177;
              v8 = v164;
              v5 = 0LL;
              v13 = (__int64)v162;
              v12 = v176;
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
                if ( v165 < 0x20000000000LL )
                {
                  v61 = dword_140CEC390;
                  v62 = v165 >> 9;
                  v165 >>= 9;
                  v175 = 0LL;
                  v63 = v43 != 0;
                  if ( dword_140CEC390 != *(_DWORD *)(v46 + 404) )
                  {
                    LogEntry = PfSnTraceGetLogEntry(v46, 1LL, &v175, v60);
                    v62 = v165;
                    if ( LogEntry >= 0 )
                    {
                      v65 = v175;
                      *v175 = *v175 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                      *((_DWORD *)v65 + 2) = v61;
                      *(_DWORD *)(v46 + 404) = v61;
                      *(_QWORD *)(v46 + 408) = v46 + 416;
                    }
                  }
                  if ( v43 || (v66 = *(_QWORD **)(v46 + 408), *v66 >> 3 != v62) || v66[1] != v59 )
                  {
                    if ( _InterlockedIncrement((volatile signed __int32 *)(v46 + 344)) <= *(_DWORD *)(v46 + 340) )
                    {
                      v67 = *(_QWORD *)(v46 + 96);
                      v68 = _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 16), 1u);
                      v69 = (v68 + 1 < 0) ^ __OFADD__(1, v68) | (v68 == -1);
                      v70 = v68 + 1;
                      if ( v69 )
                      {
LABEL_130:
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 344), 0xFFFFFFFF);
                      }
                      else
                      {
                        while ( v70 > *(_DWORD *)(v67 + 20) )
                        {
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 16), 0xFFFFFFFF);
                          v71 = PfSnTraceBufferAllocate();
                          if ( v71 )
                          {
                            v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v46 + 128));
                            if ( *(_QWORD *)(v46 + 96) == v67 )
                            {
                              v77 = *(_QWORD **)(v46 + 112);
                              if ( *v77 != v46 + 104 )
                                __fastfail(3u);
                              v71[1] = v77;
                              *v71 = v46 + 104;
                              *v77 = v71;
                              *(_QWORD *)(v46 + 112) = v71;
                              ++*(_DWORD *)(v46 + 120);
                              *(_QWORD *)(v46 + 96) = v71;
                              KxReleaseSpinLock((PKSPIN_LOCK)(v46 + 128));
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v78 = KeGetCurrentIrql();
                                  if ( v78 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v78 >= 2u )
                                  {
                                    v79 = KeGetCurrentPrcb();
                                    v80 = v79->SchedulerAssist;
                                    v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v72 + 1));
                                    v32 = (v81 & v80[5]) == 0;
                                    v80[5] &= v81;
                                    if ( v32 )
                                      KiRemoveSystemWorkPriorityKick(v79);
                                  }
                                }
                              }
                              __writecr8(v72);
                            }
                            else
                            {
                              KxReleaseSpinLock((PKSPIN_LOCK)(v46 + 128));
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v73 = KeGetCurrentIrql();
                                  if ( v73 <= 0xFu && (unsigned __int8)v72 <= 0xFu && v73 >= 2u )
                                  {
                                    v74 = KeGetCurrentPrcb();
                                    v75 = v74->SchedulerAssist;
                                    v76 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v72 + 1));
                                    v32 = (v76 & v75[5]) == 0;
                                    v75[5] &= v76;
                                    if ( v32 )
                                      KiRemoveSystemWorkPriorityKick(v74);
                                  }
                                }
                              }
                              __writecr8(v72);
                              ExFreePoolWithTag(v71, 0);
                            }
                            v67 = *(_QWORD *)(v46 + 96);
                            v82 = _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 16), 1u);
                            v69 = (v82 + 1 < 0) ^ __OFADD__(1, v82) | (v82 == -1);
                            v70 = v82 + 1;
                            if ( !v69 )
                              continue;
                          }
                          goto LABEL_130;
                        }
                        v83 = (unsigned __int64 *)(v67 + 16LL * v70 + 8);
                        v84 = v63 | (8 * v165);
                        v83[1] = v59;
                        *v83 = v84;
                        _InterlockedIncrement((volatile signed __int32 *)(v46 + 332));
                        if ( !v63 )
                          *(_QWORD *)(v46 + 408) = v83;
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
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v46 + 360));
        }
        goto LABEL_136;
      }
      ObReferenceObjectExWithTag((ULONG_PTR)v22, 15);
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
        ObpDeferObjectDeletion((signed __int64)(v22 - 48));
      }
    }
LABEL_31:
    if ( v22 )
      goto LABEL_40;
    goto LABEL_32;
  }
LABEL_142:
  v87 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v88 = 0xFFFFF6FB7DBED000uLL;
  v89 = *v87;
  if ( (unsigned __int64)v87 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)v87 <= v9
    && (unsigned int)MiPteHasShadow()
    && (v89 & 1) != 0
    && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
  {
    v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v91 )
    {
      v92 = *((_QWORD *)&v91->Flink + ((v90 >> 3) & 0x1FF));
      v93 = v89 | 0x20;
      if ( (v92 & 0x20) == 0 )
        v93 = v89;
      v89 = v93;
      if ( (v92 & 0x42) != 0 )
        v89 = v93 | 0x42;
    }
  }
  v173 = v89;
  if ( (unsigned __int64)&v173 >= v88
    && (unsigned __int64)&v173 <= v9
    && (unsigned int)MiPteHasShadow()
    && (v89 & 1) != 0
    && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
  {
    v94 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v94 )
    {
      v95 = *((_QWORD *)&v94->Flink + (((unsigned __int64)&v173 >> 3) & 0x1FF));
      v96 = v89 | 0x20;
      if ( (v95 & 0x20) == 0 )
        v96 = v89;
      v89 = v96;
      if ( (v95 & 0x42) != 0 )
        v89 = v96 | 0x42;
    }
  }
  v97 = 48 * ((v89 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v170 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v97 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v170);
      while ( *(__int64 *)(v97 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v97 + 24), 0x3FuLL) );
    v5 = 0LL;
    v88 = 0xFFFFF6FB7DBED000uLL;
  }
  v98 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v97 + 24) ^= (*(_QWORD *)(v97 + 24) ^ (*(_QWORD *)(v97 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v97 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v99 = *(_QWORD *)v8;
  v100 = v88;
  v101 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v8 >= v100
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow()
    && (v99 & 1) != 0
    && ((v99 & 0x20) == 0 || (v99 & 0x42) == 0) )
  {
    v102 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v102 )
    {
      v103 = *((_QWORD *)&v102->Flink + ((v8 >> 3) & 0x1FF));
      v104 = v99 | 0x20;
      if ( (v103 & 0x20) == 0 )
        v104 = v99;
      v99 = v104;
      if ( (v103 & 0x42) != 0 )
        v99 = v104 | 0x42;
    }
  }
  if ( (v99 & 0x400) == 0 )
    goto LABEL_186;
  v105 = v99;
  if ( qword_140C4DF80 && (v99 & 0x10) == 0 )
    v105 = v99 & ~qword_140C4DF80;
  if ( HIDWORD(v105) == 0xFFFFFFFF )
  {
    v106 = (v99 >> 5) & 0x1F;
  }
  else
  {
LABEL_186:
    v107 = v169;
    if ( (unsigned __int64)&v169 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v169 <= v101
      && (unsigned int)MiPteHasShadow()
      && (v108 & 1) != 0
      && ((v108 & 0x20) == 0 || (v108 & 0x42) == 0) )
    {
      v109 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v109 )
      {
        v110 = *((_QWORD *)&v109->Flink + (((unsigned __int64)&v169 >> 3) & 0x1FF));
        v107 = v108;
        if ( (v110 & 0x20) != 0 )
          v107 = v108 | 0x20;
        if ( (v110 & 0x42) != 0 )
          v107 |= 0x42uLL;
      }
      else
      {
        v107 = v169;
      }
    }
    v111 = (v107 >> 5) & 0x1F;
    v7 = 1;
    if ( (v99 & 8) != 0 )
      LODWORD(v111) = 1;
    v112 = v186;
    LODWORD(v106) = v111;
    if ( v186 )
    {
      if ( (v111 & 4) == 0 )
        v112 = (struct _LIST_ENTRY *)v5;
      v186 = v112;
    }
  }
  v113 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( (MiFlags & 0x10000) != 0
    && v167 >= 0xFFFF800000000000uLL
    && (v167 < 0xFFFFF68000000000uLL || v167 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v106 & 2) != 0 )
  {
    if ( (MiFlags & 0x20000) != 0 || !(unsigned int)MI_PFN_IS_PROTO(v13) || (*v14 & 0x400LL) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(v13);
    }
    else
    {
      PagePrivilege = v115;
      if ( (unsigned int)MiIsAddressInDriverView(v114) )
        PagePrivilege = 1;
    }
    v98 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (PagePrivilege & 1) != 0 )
    {
      LODWORD(v106) = 3;
      v186 = 0LL;
    }
    else if ( (PagePrivilege & 8) != 0 )
    {
      LODWORD(v106) = 1;
      v186 = 0LL;
    }
    else
    {
      LODWORD(v106) = v106 & 0xFFFFFFFD;
      if ( !(_DWORD)v106 )
        LODWORD(v106) = 1;
    }
    v113 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  v117 = v106 & 0xFFFFFFE7;
  v118 = *(_BYTE *)(v13 + 34) >> 6;
  if ( v118 != 1 )
  {
    if ( v118 )
    {
      if ( v118 == 2 )
        v117 |= 0x18u;
    }
    else
    {
      v117 |= 8u;
    }
  }
  v119 = (v12 << 12) | MmProtectToPteMask[v117] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_247:
    v119 |= 0x100uLL;
    goto LABEL_248;
  }
  v120 = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
      v119 |= 0x8000000000000000uLL;
    else
      v119 &= v98;
    if ( (unsigned int)MiUserPdeOrAbove(v8) )
      v119 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v119 |= 4uLL;
  if ( v120 < 0xFFFF800000000000uLL )
  {
    v121 = HIBYTE(word_140C4E048);
    goto LABEL_246;
  }
  if ( (unsigned int)MiGetSystemRegionType(v120) != 1 && (v120 < 0xFFFFF68000000000uLL || v120 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v120 < qword_140C4FB78 || (v121 = HIBYTE(word_140C4E048), v120 > qword_140C4E3A8) )
      v121 = (unsigned __int8)word_140C4E048;
LABEL_246:
    if ( !v121 )
      goto LABEL_248;
    goto LABEL_247;
  }
LABEL_248:
  v122 = v119 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v122;
  if ( v186 )
  {
    if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
    {
      v123 = KeGetCurrentThread()->ApcState.Process;
      if ( v122 >= 0 && (v123[1].DirectoryTableBase & 0x1000000000LL) != 0
        || (v124 = v123[2].ActiveProcessors.Bitmap[2]) != 0 && *(_QWORD *)(v124 + 24) != v124 + 24 )
      {
        v122 = TransitionPteValid;
        v186 = 0LL;
        goto LABEL_278;
      }
      v122 = TransitionPteValid;
    }
    if ( (v106 & 5) != 5 )
    {
      v122 |= 0x42uLL;
      v32 = (*(_BYTE *)(v13 + 34) & 0x10) == 0;
      TransitionPteValid = v122;
      if ( v32 && (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v13 + 16) )
      {
        v125 = 0LL;
        v126 = MiLockPageInline(v13);
        v113 = *(unsigned __int8 *)(v13 + 34);
        v127 = v126;
        if ( (v113 & 0x10) == 0 && (*(_DWORD *)(v13 + 16) & 0x400LL) == 0 )
        {
          if ( (v113 & 8) == 0 )
          {
            v128 = MiCapturePageFileInfoInline((unsigned __int64 *)(v13 + 16), 1, 0);
            v113 = *(unsigned __int8 *)(v13 + 34);
            v125 = v128;
          }
          LOBYTE(v113) = v113 | 0x10;
          *(_BYTE *)(v13 + 34) = v113;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v125 )
          MiReleasePageFileInfo(v180, v125, 1);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v129 = KeGetCurrentIrql();
            if ( v129 <= 0xFu && (unsigned __int8)v127 <= 0xFu && v129 >= 2u )
            {
              v130 = KeGetCurrentPrcb();
              v131 = v130->SchedulerAssist;
              v132 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v127 + 1));
              v32 = (v132 & v131[5]) == 0;
              v113 = (unsigned int)v132 & v131[5];
              v131[5] = v113;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v130);
            }
          }
        }
        __writecr8(v127);
        v122 = TransitionPteValid;
      }
      if ( (v181 & 0x400) != 0 && (*(_BYTE *)(v179 + 184) & 7) != 2 )
        MiCheckAndUpdateIoAttribution(v13);
    }
  }
LABEL_278:
  v133 = 0LL;
  v134 = 0;
  v135 = 0;
  if ( v187 || (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v13 + 8) > 0 )
    goto LABEL_309;
  v136 = v167;
  if ( v167 < 0xFFFF800000000000uLL )
  {
    if ( v174 )
    {
      if ( (*(_DWORD *)(v166 + 56) & 0x20) == 0 )
      {
LABEL_309:
        v144 = (unsigned __int64)v162;
        goto LABEL_310;
      }
    }
    else
    {
      v140 = KeGetCurrentThread()->ApcState.Process;
      if ( v140[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v140, *(_QWORD *)(v13 + 8) | 0x8000000000000000uLL, v113) )
        goto LABEL_308;
    }
    if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 384) != v133 )
    {
      Address = MiLocateAddress(v136);
      v142 = Address;
      if ( Address )
      {
        v143 = *((_DWORD *)Address + 12);
        if ( (v143 & 0x70) == 0x20 && (v143 & 0x100000) == 0 && (v143 & 0x200000) != 0 )
        {
          v139 = *v142[9];
          v138 = (v167 >> 12) + (((__int64)v142[10] - *(_QWORD *)(v139 + 136)) >> 3) - *((_DWORD *)v142 + 6);
          if ( _bittest((const signed __int32 *)v142[19], v138) )
          {
            HasPrivateFixups = (__int64)v142[17];
            v122 = TransitionPteValid;
            goto LABEL_297;
          }
        }
      }
    }
LABEL_308:
    v122 = TransitionPteValid;
    goto LABEL_309;
  }
  if ( v166 && (*(_DWORD *)(v166 + 56) & 0x20) == 0 )
    goto LABEL_309;
  HasPrivateFixups = MiSystemImageHasPrivateFixups(v167, &v166, &v168);
  v138 = v168;
  LOBYTE(v133) = 0;
  v139 = v166;
LABEL_297:
  if ( !HasPrivateFixups )
    goto LABEL_309;
  v135 = MiPrivateFixup((unsigned __int64 *)a1, v139, v138, v13, HasPrivateFixups);
  MiLockAndDecrementShareCount(v13, 0);
  if ( v135 == 297 || v135 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v97, 0);
    if ( v135 == 297 )
      return (unsigned int)-1073740748;
    return v135;
  }
  if ( (v135 & 0x80000000) != 0 )
    return v135;
  TransitionPteValid = MiMakeTransitionPteValid(v164);
  v122 = TransitionPteValid;
  v144 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&TransitionPteValid) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v7 = 2;
  v162 = (_QWORD *)v144;
  if ( v167 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v144 + 35) & 8) != 0 )
    v134 = 2;
  LOBYTE(v133) = 0;
  LOBYTE(v106) = 0;
LABEL_310:
  v146 = v133;
  if ( (v7 & 1) == 0 )
    v146 = v106;
  v147 = (_BYTE *)(a5 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a5 & 1) != 0 )
  {
    if ( *v147 == 5 )
      v178 = a5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (a5 & 1) != 0 && *v147 == 3 )
      v134 |= 1u;
  }
  v148 = *(_BYTE *)(a1 + 69);
  if ( (v148 & 8) != 0 )
  {
    v149 = *(_QWORD *)(a1 + 16);
    if ( (v149 & 1) == 0 || *(_BYTE *)(v149 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
      v122 &= ~0x20uLL;
  }
  if ( (v148 & 5) != 4 || (v148 & 2) != 0 )
  {
    v155 = v162;
    goto LABEL_338;
  }
  v150 = *(unsigned __int16 *)(a1 + 66);
  v151 = 511;
  v152 = v164;
  if ( (_WORD)v150 )
  {
    if ( v150 + *(unsigned __int16 *)(a1 + 64) == (((unsigned int)v164 >> 3) & 0x1FF) )
    {
      if ( (unsigned int)MI_PFN_IS_PROTO(v144) )
      {
        if ( !v153 )
          goto LABEL_331;
      }
      else if ( v153 )
      {
        goto LABEL_331;
      }
    }
    MiEmptyDeferredWorkingSetEntries(a1 + 56);
    v151 = 511;
    v152 = v164;
  }
LABEL_331:
  v154 = *(_WORD *)(a1 + 66);
  if ( v154 )
  {
    *(_WORD *)(a1 + 66) = v154 + 1;
    v134 |= 4u;
    v155 = v162;
  }
  else
  {
    *(_WORD *)(a1 + 66) = 1;
    *(_WORD *)(a1 + 64) = v151 & (v152 >> 3);
    v155 = v162;
    if ( (unsigned int)MI_PFN_IS_PROTO(v162) )
      v158 = v156 & 0xEF;
    else
      v158 = v156 | 0x10;
    *(_BYTE *)(v157 + 69) = v158;
    v134 |= 4u;
  }
LABEL_338:
  v161 = v134;
  v159 = v164;
  if ( !(unsigned int)MiAllocateWsle(v179, v164, v155, v146, v122, v161, v178) )
  {
    MiLockAndDecrementShareCount((__int64)v155, 0);
    if ( v7 < 2 )
      MiLockAndDecrementShareCount(v97, 0);
    return (unsigned int)-1073741801;
  }
  if ( !v186
    || (v122 & 0x800) != 0
    || (v122 & 0x200) == 0
    || KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
  {
    return v135;
  }
  if ( *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 69) & 1) == 0 && *(_WORD *)(a1 + 66) )
    MiEmptyDeferredWorkingSetEntries(a1 + 56);
  v160 = MiCopyOnWrite(v167, v159, -1LL, 0LL);
  v135 = v160;
  if ( v160 >= 0 )
    return v135;
  MiSetFaultPacketDirectives(a1, (unsigned int)v160);
  return 3221226548LL;
}
