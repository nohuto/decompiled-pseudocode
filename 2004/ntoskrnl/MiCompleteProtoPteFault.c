/*
 * XREFs of MiCompleteProtoPteFault @ 0x1402A6230
 * Callers:
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140212170 (ObpTraceObjectDereferenceIfActive.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PfSnGetFileInformation @ 0x1402280F0 (PfSnGetFileInformation.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14025D264 (MiEmptyDeferredWorkingSetEntries.c)
 *     PfSnTraceGetLogEntry @ 0x14025D4A0 (PfSnTraceGetLogEntry.c)
 *     MiGetSubsectionDriverProtos @ 0x140263D10 (MiGetSubsectionDriverProtos.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     ObFastReferenceObjectLocked @ 0x1402978D8 (ObFastReferenceObjectLocked.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1402C8508 (MiCheckAndUpdateIoAttribution.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     PfSnTraceBufferAllocate @ 0x1402FEEE4 (PfSnTraceBufferAllocate.c)
 *     ExAcquireRundownProtectionEx @ 0x1402FEFE0 (ExAcquireRundownProtectionEx.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     ObReferenceObjectExWithTag @ 0x14032EFF0 (ObReferenceObjectExWithTag.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
 *     MiSystemImageHasPrivateFixups @ 0x14033B124 (MiSystemImageHasPrivateFixups.c)
 *     MiMakeTransitionPteValid @ 0x1403405A0 (MiMakeTransitionPteValid.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiIsAddressInDriverView @ 0x140535358 (MiIsAddressInDriverView.c)
 *     MiSetFaultPacketDirectives @ 0x140543A68 (MiSetFaultPacketDirectives.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompleteProtoPteFault(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r9
  unsigned __int64 v6; // r14
  unsigned int v7; // esi
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r10
  char v10; // dl
  struct _LIST_ENTRY *Flink; // r8
  __int64 v12; // rax
  __int64 v13; // r14
  ULONG_PTR v14; // r12
  _DWORD *v15; // rbx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rax
  volatile signed __int64 *v20; // r14
  signed __int64 v21; // rdx
  signed __int64 v22; // rax
  char *v23; // r13
  unsigned int v24; // edx
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int64 v27; // rdx
  signed __int64 BugCheckParameter4; // rax
  unsigned __int64 v29; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v33; // eax
  bool v34; // zf
  unsigned __int64 v35; // rbx
  _KPROCESS *Process; // rcx
  unsigned __int64 v37; // rdx
  unsigned int v38; // r9d
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rbx
  __int64 v42; // rbx
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *v44; // rbx
  int v45; // r12d
  signed __int64 v46; // rdx
  signed __int64 v47; // rax
  unsigned __int64 v48; // rdi
  unsigned int v49; // edx
  BOOLEAN v50; // r15
  unsigned __int64 v51; // r14
  unsigned __int8 v52; // cl
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  int v55; // eax
  signed __int64 v56; // rax
  signed __int64 v57; // rtt
  signed __int64 v58; // rax
  signed __int64 v59; // rtt
  unsigned __int64 v60; // rax
  struct _KTHREAD *v61; // rax
  unsigned __int64 v62; // r14
  int v63; // ebx
  unsigned __int64 v64; // r8
  BOOL v65; // r13d
  int LogEntry; // eax
  unsigned __int64 *v67; // rcx
  _QWORD *v68; // rcx
  __int64 v69; // rbx
  signed __int32 v70; // eax
  char v71; // cc
  signed __int32 v72; // eax
  _QWORD *v73; // r15
  unsigned __int64 v74; // r12
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  _QWORD *v79; // rcx
  unsigned __int8 v80; // al
  struct _KPRCB *v81; // r10
  _DWORD *v82; // r9
  int v83; // eax
  signed __int32 v84; // eax
  unsigned __int64 *v85; // rdx
  unsigned __int64 v86; // rcx
  signed __int64 v87; // rax
  signed __int64 v88; // rtt
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // r11
  unsigned __int64 v91; // r8
  struct _LIST_ENTRY *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // r8
  __int64 v96; // r13
  __int64 v97; // r10
  __int64 v98; // rcx
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
  __int64 v112; // rax
  __int64 v113; // rdx
  char v114; // r9
  char PagePrivilege; // bl
  int v116; // eax
  char v117; // cl
  unsigned __int64 v118; // rbx
  unsigned __int64 v119; // r14
  int v120; // eax
  signed __int64 v121; // rbx
  _KPROCESS *v122; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // rbx
  unsigned __int8 v125; // al
  char v126; // r8
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
  __int64 v139; // rdx
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
  ULONG_PTR v155; // rdi
  char v156; // dl
  __int64 v157; // r10
  char v158; // dl
  ULONG_PTR *v159; // r15
  int v160; // eax
  char v161; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v162; // [rsp+40h] [rbp-C0h]
  __int64 TransitionPteValid; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR *v164; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v165; // [rsp+58h] [rbp-A8h]
  __int64 v166; // [rsp+60h] [rbp-A0h] BYREF
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
  unsigned __int64 v181; // [rsp+E0h] [rbp-20h]
  __int128 v182; // [rsp+E8h] [rbp-18h]
  __int64 v183; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v185; // [rsp+158h] [rbp+58h] BYREF
  __int64 v186; // [rsp+160h] [rbp+60h]
  int v187; // [rsp+168h] [rbp+68h]

  v187 = a4;
  v186 = a3;
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
  v164 = (ULONG_PTR *)v8;
  v9 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)&v185 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v185 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v185, a2, a3, 0LL)
    && (v10 & 1) != 0
    && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v185 >> 3) & 0x1FF));
      if ( (v12 & 0x20) != 0 )
        v6 |= 0x20uLL;
      if ( (v12 & 0x42) != 0 )
        v6 |= 0x42uLL;
    }
    else
    {
      v6 = v185;
    }
  }
  v13 = (v6 >> 12) & 0xFFFFFFFFFLL;
  v176 = v13;
  v14 = 48 * v13 - 0x58000000000LL;
  v15 = (_DWORD *)(v14 + 16);
  v162 = v14;
  v177 = (_DWORD *)(v14 + 16);
  v16 = *(_QWORD *)(v14 + 16);
  v180 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v14 + 40) >> 39) & 0x3FFLL));
  v181 = v16;
  v169 = v16;
  if ( (v16 & 0x400) == 0 )
  {
    v174 = v5;
    v166 = v5;
    goto LABEL_142;
  }
  v17 = v16;
  if ( qword_140C4DD40 && (v16 & 0x10) == 0 )
    v17 = v16 & ~qword_140C4DD40;
  v18 = v17 >> 16;
  v174 = v18;
  v19 = *(_QWORD *)v18;
  v166 = *(_QWORD *)v18;
  if ( PfSnNumActiveTraces )
  {
    v20 = (volatile signed __int64 *)(v19 + 64);
    v171 = (volatile signed __int64 *)(v19 + 64);
    _m_prefetchw((const void *)(v19 + 64));
    v21 = *(_QWORD *)(v19 + 64);
    if ( (v21 & 0xF) != 0 )
    {
      do
      {
        v22 = _InterlockedCompareExchange64(v20, v21 - 1, v21);
        if ( v21 == v22 )
          break;
        v21 = v22;
      }
      while ( (v22 & 0xF) != 0 );
    }
    v23 = (char *)(v21 & 0xFFFFFFFFFFFFFFF0uLL);
    v24 = v21 & 0xF;
    Object = v23;
    if ( v24 <= 1 )
    {
      if ( !v24 )
      {
LABEL_32:
        v29 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v166 + 72));
        Object = (PVOID)ObFastReferenceObjectLocked(v20);
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v166 + 72));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v29 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v29 + 1));
              v34 = (v33 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v33;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v29);
        v18 = v174;
LABEL_40:
        v35 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
        if ( (v167 < 0xFFFF800000000000uLL || (unsigned int)MiGetSystemRegionType(v167) == 1)
          && (Process = KeGetCurrentThread()->ApcState.Process, (v37 = Process[1].AffinityPadding[5]) != 0)
          && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          v38 = *(_DWORD *)(v37 + 8);
        }
        else
        {
          v38 = -1;
        }
        v39 = *(_QWORD *)(v18 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)v18 + 56LL) & 0x20) != 0 )
        {
          if ( v35 < v39 || v35 >= v39 + 8LL * *(unsigned int *)(v18 + 44) )
          {
            if ( (*(_BYTE *)(v18 + 34) & 2) != 0 )
              v40 = (v35 << 9) - (*(_QWORD *)(MiGetSharedProtos(*(_QWORD *)v18, v38, v18) + 72) << 9);
            else
              v40 = (v35 << 9) - (*(_QWORD *)(MiGetSubsectionDriverProtos((_QWORD *)v18) + 72) << 9);
          }
          else
          {
            v40 = (v35 << 9) - (v39 << 9);
          }
          v41 = ((unsigned __int64)*(unsigned int *)(v18 + 36) << 9) + (v40 & 0xFFFFFFFFFFFFF000uLL);
        }
        else
        {
          if ( v39 )
            v42 = (__int64)(v35 - v39) >> 3 << 12;
          else
            v42 = 0LL;
          v41 = ((*(unsigned int *)(v18 + 36) | ((unsigned __int64)(*(_WORD *)(v18 + 32) & 0xFFC0) << 26)) << 12) + v42;
        }
        CurrentThread = KeGetCurrentThread();
        v165 = v41;
        v44 = CurrentThread->ApcState.Process;
        v45 = *(_DWORD *)(v166 + 56) & 0x20;
        _m_prefetchw(&v44[1].ActiveProcessors.Bitmap[10]);
        v46 = v44[1].ActiveProcessors.Bitmap[10];
        if ( (v46 & 0xF) != 0 )
        {
          do
          {
            v47 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&v44[1].ActiveProcessors.Bitmap[10],
                    v46 - 1,
                    v46);
            if ( v46 == v47 )
              break;
            v46 = v47;
          }
          while ( (v47 & 0xF) != 0 );
        }
        v48 = v46 & 0xFFFFFFFFFFFFFFF0uLL;
        if ( (v46 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          goto LABEL_137;
        v49 = v46 & 0xF;
        if ( v49 <= 1 )
        {
          if ( v49 )
          {
            if ( ExAcquireRundownProtectionEx((PEX_RUNDOWN_REF)(v48 + 360), 0xFu) )
            {
              _m_prefetchw(&v44[1].ActiveProcessors.Bitmap[10]);
              v56 = v44[1].ActiveProcessors.Bitmap[10];
              while ( (v56 & 0xF) == 0 )
              {
                if ( v48 != (v56 & 0xFFFFFFFFFFFFFFF0uLL) )
                  break;
                v57 = v56;
                v56 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&v44[1].ActiveProcessors.Bitmap[10],
                        v56 + 15,
                        v56);
                if ( v57 == v56 )
                  goto LABEL_86;
              }
              v182 = 0LL;
              v183 = 0LL;
              _m_prefetchw((const void *)(v48 + 360));
              v58 = *(_QWORD *)(v48 + 360);
              if ( (v58 & 1) != 0 )
              {
LABEL_83:
                v60 = v58 & 0xFFFFFFFFFFFFFFFEuLL;
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v60, 0xFFFFFFFFFFFFFFF1uLL) == 15
                  && !_interlockedbittestandreset((volatile signed __int32 *)(v60 + 32), 0) )
                {
                  KeSetEvent((PRKEVENT)(v60 + 8), 0, 0);
                }
              }
              else
              {
                while ( 1 )
                {
                  v59 = v58;
                  v58 = _InterlockedCompareExchange64((volatile signed __int64 *)(v48 + 360), v58 - 30, v58);
                  if ( v59 == v58 )
                    break;
                  if ( (v58 & 1) != 0 )
                    goto LABEL_83;
                }
              }
            }
          }
          else
          {
            v50 = 1;
            v51 = KeAcquireSpinLockRaiseToDpc(&qword_140C50250);
            v48 = v44[1].ActiveProcessors.Bitmap[10] & 0xFFFFFFFFFFFFFFF0uLL;
            if ( v48 )
              v50 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v48 + 360));
            KxReleaseSpinLock(&qword_140C50250);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v52 = KeGetCurrentIrql();
                if ( v52 <= 0xFu && (unsigned __int8)v51 <= 0xFu && v52 >= 2u )
                {
                  v53 = KeGetCurrentPrcb();
                  v54 = v53->SchedulerAssist;
                  v55 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v51 + 1));
                  v34 = (v55 & v54[5]) == 0;
                  v54[5] &= v55;
                  if ( v34 )
                    KiRemoveSystemWorkPriorityKick(v53);
                }
              }
            }
            __writecr8(v51);
            if ( !v50 )
            {
LABEL_136:
              v20 = v171;
LABEL_137:
              _m_prefetchw((const void *)v20);
              v87 = *v20;
              v16 = (unsigned __int64)Object ^ *v20;
              if ( v16 >= 0xF )
              {
LABEL_140:
                ObDereferenceObjectDeferDelete(Object);
              }
              else
              {
                while ( 1 )
                {
                  v88 = v87;
                  v87 = _InterlockedCompareExchange64(v20, v87 + 1, v87);
                  if ( v88 == v87 )
                    break;
                  if ( ((unsigned __int64)Object ^ v87) >= 0xF )
                    goto LABEL_140;
                }
              }
              v15 = v177;
              v8 = (unsigned __int64)v164;
              v5 = 0LL;
              v14 = v162;
              v13 = v176;
              v9 = 0xFFFFF6FB7DBED7F8uLL;
              goto LABEL_142;
            }
          }
        }
LABEL_86:
        if ( v48 )
        {
          if ( ((__int64)CurrentThread[1].Queue & 0x40) == 0 )
          {
            if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) == 0
              && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0xE00u) >= 0x400
              || CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
            {
              v61 = *(struct _KTHREAD **)(v48 + 432);
              if ( !v61 || v61 == CurrentThread && *(_QWORD *)(v48 + 440) == *(_QWORD *)&CurrentThread[1].CurrentRunTime )
              {
                v62 = *((_QWORD *)Object + 3);
                PfSnGetFileInformation(v48, Object);
                if ( (*(_BYTE *)(v48 + 484) & 1) == 0 && *(_BYTE *)(*(_QWORD *)(v48 + 352) + 1850LL) == 2 )
                  _InterlockedOr16((volatile signed __int16 *)(v48 + 484), 1u);
                if ( v165 < 0x20000000000LL )
                {
                  v63 = dword_140CEBF90;
                  v64 = v165 >> 9;
                  v165 >>= 9;
                  v175 = 0LL;
                  v65 = v45 != 0;
                  if ( dword_140CEBF90 != *(_DWORD *)(v48 + 404) )
                  {
                    LogEntry = PfSnTraceGetLogEntry(v48, 1u, &v175);
                    v64 = v165;
                    if ( LogEntry >= 0 )
                    {
                      v67 = v175;
                      *v175 = *v175 & 0xFFFFFFFFFFFFFFF8uLL | 2;
                      *((_DWORD *)v67 + 2) = v63;
                      *(_DWORD *)(v48 + 404) = v63;
                      *(_QWORD *)(v48 + 408) = v48 + 416;
                    }
                  }
                  if ( v45 || (v68 = *(_QWORD **)(v48 + 408), *v68 >> 3 != v64) || v68[1] != v62 )
                  {
                    if ( _InterlockedIncrement((volatile signed __int32 *)(v48 + 344)) <= *(_DWORD *)(v48 + 340) )
                    {
                      v69 = *(_QWORD *)(v48 + 96);
                      v70 = _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 16), 1u);
                      v71 = (v70 + 1 < 0) ^ __OFADD__(1, v70) | (v70 == -1);
                      v72 = v70 + 1;
                      if ( v71 )
                      {
LABEL_130:
                        _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 344), 0xFFFFFFFF);
                      }
                      else
                      {
                        while ( v72 > *(_DWORD *)(v69 + 20) )
                        {
                          _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 16), 0xFFFFFFFF);
                          v73 = (_QWORD *)PfSnTraceBufferAllocate();
                          if ( v73 )
                          {
                            v74 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v48 + 128));
                            if ( *(_QWORD *)(v48 + 96) == v69 )
                            {
                              v79 = *(_QWORD **)(v48 + 112);
                              if ( *v79 != v48 + 104 )
                                __fastfail(3u);
                              v73[1] = v79;
                              *v73 = v48 + 104;
                              *v79 = v73;
                              *(_QWORD *)(v48 + 112) = v73;
                              ++*(_DWORD *)(v48 + 120);
                              *(_QWORD *)(v48 + 96) = v73;
                              KxReleaseSpinLock((PKSPIN_LOCK)(v48 + 128));
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v80 = KeGetCurrentIrql();
                                  if ( v80 <= 0xFu && (unsigned __int8)v74 <= 0xFu && v80 >= 2u )
                                  {
                                    v81 = KeGetCurrentPrcb();
                                    v82 = v81->SchedulerAssist;
                                    v83 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v74 + 1));
                                    v34 = (v83 & v82[5]) == 0;
                                    v82[5] &= v83;
                                    if ( v34 )
                                      KiRemoveSystemWorkPriorityKick(v81);
                                  }
                                }
                              }
                              __writecr8(v74);
                            }
                            else
                            {
                              KxReleaseSpinLock((PKSPIN_LOCK)(v48 + 128));
                              if ( KiIrqlFlags )
                              {
                                if ( (KiIrqlFlags & 1) != 0 )
                                {
                                  v75 = KeGetCurrentIrql();
                                  if ( v75 <= 0xFu && (unsigned __int8)v74 <= 0xFu && v75 >= 2u )
                                  {
                                    v76 = KeGetCurrentPrcb();
                                    v77 = v76->SchedulerAssist;
                                    v78 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v74 + 1));
                                    v34 = (v78 & v77[5]) == 0;
                                    v77[5] &= v78;
                                    if ( v34 )
                                      KiRemoveSystemWorkPriorityKick(v76);
                                  }
                                }
                              }
                              __writecr8(v74);
                              ExFreePoolWithTag(v73, 0);
                            }
                            v69 = *(_QWORD *)(v48 + 96);
                            v84 = _InterlockedExchangeAdd((volatile signed __int32 *)(v69 + 16), 1u);
                            v71 = (v84 + 1 < 0) ^ __OFADD__(1, v84) | (v84 == -1);
                            v72 = v84 + 1;
                            if ( !v71 )
                              continue;
                          }
                          goto LABEL_130;
                        }
                        v85 = (unsigned __int64 *)(v69 + 16LL * v72 + 8);
                        v86 = v65 | (8 * v165);
                        v85[1] = v62;
                        *v85 = v86;
                        _InterlockedIncrement((volatile signed __int32 *)(v48 + 332));
                        if ( !v65 )
                          *(_QWORD *)(v48 + 408) = v85;
                      }
                    }
                    else
                    {
                      _InterlockedExchangeAdd((volatile signed __int32 *)(v48 + 344), 0xFFFFFFFF);
                      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v48 + 400), 3, 0) )
                        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v48 + 368), DelayedWorkQueue);
                    }
                  }
                }
              }
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v48 + 336));
            }
          }
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v48 + 360));
        }
        goto LABEL_136;
      }
      ObReferenceObjectExWithTag((ULONG_PTR)v23);
      _m_prefetchw((const void *)v20);
      v25 = *v20;
      while ( (v25 & 0xF) == 0 )
      {
        if ( v23 != (char *)(v25 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v26 = v25;
        v25 = _InterlockedCompareExchange64(v20, v25 + 15, v25);
        if ( v26 == v25 )
          goto LABEL_31;
      }
      ObpTraceObjectDereferenceIfActive((_DWORD)v23 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v23 - 6, 0xFFFFFFFFFFFFFFF1uLL) - 15;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *((_QWORD *)v23 - 5) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v23 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v23 - 48) >> 8)],
            (ULONG_PTR)v23,
            6uLL,
            *((_QWORD *)v23 - 5));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v23, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(v23 - 48, v27);
      }
    }
LABEL_31:
    if ( v23 )
      goto LABEL_40;
    goto LABEL_32;
  }
LABEL_142:
  v89 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v90 = 0xFFFFF6FB7DBED000uLL;
  v91 = *(_QWORD *)v89;
  if ( v89 >= 0xFFFFF6FB7DBED000uLL
    && v89 <= v9
    && (unsigned int)MiPteHasShadow(v16, v89, v91, v5)
    && (v91 & 1) != 0
    && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
  {
    v92 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v92 )
    {
      v93 = *((_QWORD *)&v92->Flink + ((v89 >> 3) & 0x1FF));
      v89 = v91 | 0x20;
      if ( (v93 & 0x20) == 0 )
        v89 = v91;
      v91 = v89;
      if ( (v93 & 0x42) != 0 )
        v91 = v89 | 0x42;
    }
  }
  v173 = v91;
  if ( (unsigned __int64)&v173 >= v90
    && (unsigned __int64)&v173 <= v9
    && (unsigned int)MiPteHasShadow(&v173, v89, v91, v5)
    && (v91 & 1) != 0
    && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
  {
    v89 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v89 )
    {
      v94 = *(_QWORD *)(v89 + 8 * (((unsigned __int64)&v173 >> 3) & 0x1FF));
      v89 = v91 | 0x20;
      if ( (v94 & 0x20) == 0 )
        v89 = v91;
      v91 = v89;
      if ( (v94 & 0x42) != 0 )
        v91 = v89 | 0x42;
    }
  }
  v95 = (v91 >> 12) & 0xFFFFFFFFFLL;
  v96 = 48 * v95 - 0x58000000000LL;
  v170 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v96 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v170, v89, v95, v5);
      while ( *(__int64 *)(v96 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v96 + 24), 0x3FuLL) );
    v5 = 0LL;
    v90 = 0xFFFFF6FB7DBED000uLL;
  }
  v97 = 0x7FFFFFFFFFFFFFFFLL;
  v98 = *(_QWORD *)(v96 + 24) ^ (*(_QWORD *)(v96 + 24) ^ (*(_QWORD *)(v96 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v96 + 24) = v98;
  _InterlockedAnd64((volatile signed __int64 *)(v96 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v99 = *(_QWORD *)v8;
  v100 = v90;
  v101 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v8 >= v100
    && v8 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v98, 0x3FFFFFFFFFFFFFFFLL, v95, v5)
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
  if ( qword_140C4DD40 && (v99 & 0x10) == 0 )
    v105 = v99 & ~qword_140C4DD40;
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
      && (unsigned int)MiPteHasShadow(&v169, v169, v169, v5)
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
        v112 = v5;
      v186 = v112;
    }
  }
  if ( (MiFlags & 0x10000) != 0
    && v167 >= 0xFFFF800000000000uLL
    && (v167 < 0xFFFFF68000000000uLL || v167 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v106 & 2) != 0 )
  {
    if ( (MiFlags & 0x20000) != 0 || !(unsigned int)MI_PFN_IS_PROTO(v14) || (*v15 & 0x400LL) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(v14);
    }
    else
    {
      PagePrivilege = v114;
      if ( (unsigned int)MiIsAddressInDriverView(v113) )
        PagePrivilege = 1;
    }
    v97 = 0x7FFFFFFFFFFFFFFFLL;
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
  }
  v116 = v106 & 0xFFFFFFE7;
  v117 = *(_BYTE *)(v14 + 34) >> 6;
  if ( v117 != 1 )
  {
    if ( v117 )
    {
      if ( v117 == 2 )
        v116 |= 0x18u;
    }
    else
    {
      v116 |= 8u;
    }
  }
  v118 = (v13 << 12) | MmProtectToPteMask[v116] & 0xFFFF000000000E7FuLL | 0x21;
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
LABEL_246:
    v118 |= 0x100uLL;
    goto LABEL_247;
  }
  v119 = (__int64)(v8 << 25) >> 16;
  if ( v8 >= 0xFFFFF6FB40000000uLL && v8 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v8 == 0xFFFFF6FB7DBEDF68uLL )
      v118 |= 0x8000000000000000uLL;
    else
      v118 &= v97;
    if ( (unsigned int)MiUserPdeOrAbove(v8) )
      v118 |= 4uLL;
  }
  if ( v8 <= 0xFFFFF6BFFFFFFF78uLL )
    v118 |= 4uLL;
  if ( v119 < 0xFFFF800000000000uLL )
  {
    v120 = HIBYTE(word_140C4DE08);
    goto LABEL_245;
  }
  if ( (unsigned int)MiGetSystemRegionType(v119) != 1 && (v119 < 0xFFFFF68000000000uLL || v119 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( v119 < qword_140C4F938 || (v120 = HIBYTE(word_140C4DE08), v119 > qword_140C4E168) )
      v120 = (unsigned __int8)word_140C4DE08;
LABEL_245:
    if ( !v120 )
      goto LABEL_247;
    goto LABEL_246;
  }
LABEL_247:
  v121 = v118 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  TransitionPteValid = v121;
  if ( v186 )
  {
    if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
    {
      v122 = KeGetCurrentThread()->ApcState.Process;
      if ( v121 >= 0 && (v122[1].DirectoryTableBase & 0x1000000000LL) != 0
        || (v123 = v122[2].ActiveProcessors.Bitmap[2]) != 0 && *(_QWORD *)(v123 + 24) != v123 + 24 )
      {
        v121 = TransitionPteValid;
        v186 = 0LL;
        goto LABEL_277;
      }
      v121 = TransitionPteValid;
    }
    if ( (v106 & 5) != 5 )
    {
      v121 |= 0x42uLL;
      v34 = (*(_BYTE *)(v14 + 34) & 0x10) == 0;
      TransitionPteValid = v121;
      if ( v34 && (*(_DWORD *)(v14 + 16) & 0x400LL) == 0 && (unsigned int)MiGetPagingFileOffset(v14 + 16) )
      {
        v124 = 0LL;
        v125 = MiLockPageInline(v14);
        v126 = *(_BYTE *)(v14 + 34);
        v127 = v125;
        if ( (v126 & 0x10) == 0 && (*(_DWORD *)(v14 + 16) & 0x400LL) == 0 )
        {
          if ( (v126 & 8) == 0 )
          {
            v128 = MiCapturePageFileInfoInline(v14 + 16, 1LL);
            v126 = *(_BYTE *)(v14 + 34);
            v124 = v128;
          }
          *(_BYTE *)(v14 + 34) = v126 | 0x10;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v124 )
          MiReleasePageFileInfo(v180, v124, 1LL);
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
              v34 = (v132 & v131[5]) == 0;
              v131[5] &= v132;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v130);
            }
          }
        }
        __writecr8(v127);
        v121 = TransitionPteValid;
      }
      if ( (v181 & 0x400) != 0 && (*(_BYTE *)(v179 + 184) & 7) != 2 )
        MiCheckAndUpdateIoAttribution(v14);
    }
  }
LABEL_277:
  v133 = 0LL;
  v134 = 0;
  v135 = 0;
  if ( v187 || (*(_QWORD *)(v14 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(v14 + 8) > 0 )
    goto LABEL_308;
  v136 = v167;
  if ( v167 < 0xFFFF800000000000uLL )
  {
    if ( v174 )
    {
      if ( (*(_DWORD *)(v166 + 56) & 0x20) == 0 )
      {
LABEL_308:
        v144 = v162;
        goto LABEL_309;
      }
    }
    else
    {
      v140 = KeGetCurrentThread()->ApcState.Process;
      if ( v140[1].Affinity.Bitmap[12] && MiLocateCloneAddress(v140, *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL) )
        goto LABEL_307;
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
            v121 = TransitionPteValid;
            goto LABEL_296;
          }
        }
      }
    }
LABEL_307:
    v121 = TransitionPteValid;
    goto LABEL_308;
  }
  if ( v166 && (*(_DWORD *)(v166 + 56) & 0x20) == 0 )
    goto LABEL_308;
  HasPrivateFixups = MiSystemImageHasPrivateFixups(v167, &v166, &v168);
  v138 = v168;
  LOBYTE(v133) = 0;
  LODWORD(v139) = v166;
LABEL_296:
  if ( !HasPrivateFixups )
    goto LABEL_308;
  v135 = MiPrivateFixup(a1, v139, v138, v14, HasPrivateFixups);
  MiLockAndDecrementShareCount(v14, 0LL);
  if ( v135 == 297 || v135 == -1073741670 )
  {
    MiLockAndDecrementShareCount(v96, 0LL);
    if ( v135 == 297 )
      return (unsigned int)-1073740748;
    return v135;
  }
  if ( (v135 & 0x80000000) != 0 )
    return v135;
  TransitionPteValid = MiMakeTransitionPteValid(v164);
  v121 = TransitionPteValid;
  v144 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&TransitionPteValid) >> 12) & 0xFFFFFFFFFLL)
       - 0x58000000000LL;
  v7 = 2;
  v162 = v144;
  if ( v167 >= 0xFFFF800000000000uLL && (*(_BYTE *)(v144 + 35) & 8) != 0 )
    v134 = 2;
  LOBYTE(v133) = 0;
  LOBYTE(v106) = 0;
LABEL_309:
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
      v121 &= ~0x20uLL;
  }
  if ( (v148 & 5) != 4 || (v148 & 2) != 0 )
  {
    v155 = v162;
    goto LABEL_337;
  }
  v150 = *(unsigned __int16 *)(a1 + 66);
  v151 = 511;
  v152 = (unsigned int)v164;
  if ( (_WORD)v150 )
  {
    if ( v150 + *(unsigned __int16 *)(a1 + 64) == (((unsigned int)v164 >> 3) & 0x1FF) )
    {
      if ( (unsigned int)MI_PFN_IS_PROTO(v144) )
      {
        if ( !v153 )
          goto LABEL_330;
      }
      else if ( v153 )
      {
        goto LABEL_330;
      }
    }
    MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 56));
    v151 = 511;
    v152 = (unsigned int)v164;
  }
LABEL_330:
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
LABEL_337:
  v161 = v134;
  v159 = v164;
  if ( !(unsigned int)MiAllocateWsle(v179, (unsigned __int64)v164, v155, v146, v121, v161, v178) )
  {
    MiLockAndDecrementShareCount(v155, 0LL);
    if ( v7 < 2 )
      MiLockAndDecrementShareCount(v96, 0LL);
    return (unsigned int)-1073741801;
  }
  if ( !v186
    || (v121 & 0x800) != 0
    || (v121 & 0x200) == 0
    || KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[10] )
  {
    return v135;
  }
  if ( *(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 69) & 1) == 0 && *(_WORD *)(a1 + 66) )
    MiEmptyDeferredWorkingSetEntries((__int64 *)(a1 + 56));
  v160 = MiCopyOnWrite(v167, v159, -1LL, 0);
  v135 = v160;
  if ( v160 >= 0 )
    return v135;
  MiSetFaultPacketDirectives(a1, (unsigned int)v160);
  return 3221226548LL;
}
