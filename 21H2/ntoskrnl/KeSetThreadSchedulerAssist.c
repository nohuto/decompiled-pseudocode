/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140576AA4
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x14045F720 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x14045AAC0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x14045AB80 (KeSetThreadBamQosLevel.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1405779D0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 *     EtwTraceXSchedulerPriorityKickReceive @ 0x14062E7D4 (EtwTraceXSchedulerPriorityKickReceive.c)
 */

void __fastcall KeSetThreadSchedulerAssist(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // r14
  unsigned __int8 v6; // r13
  _DWORD *v7; // r9
  struct _KPRCB *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct _KPRCB *v13; // rdi
  _QWORD *v14; // rsi
  ULONG_PTR CurrentThread; // rsi
  struct _KPRCB *v16; // r14
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 NextThread; // r14
  __int64 v22; // r8
  unsigned int v23; // r8d
  bool v24; // zf
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  unsigned __int64 v30; // rax
  _DWORD *v31; // r9
  struct _KPRCB *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rsi
  struct _KPRCB *v37; // r14
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // r13
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  struct _KPRCB *v48; // rsi
  int v49; // r13d
  int v50; // ecx
  struct _KPRCB *v51; // r15
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  unsigned __int8 v55; // al
  struct _KPRCB *v56; // r9
  _DWORD *v57; // r8
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rdx
  struct _KPRCB *v61; // rsi
  _DWORD *v62; // rcx
  int v63; // eax
  _DWORD *v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  char v67; // al
  char v68; // al
  char v69; // cl
  unsigned int v70; // edx
  char v71; // dl
  char v72; // cl
  __int64 v73; // rcx
  struct _KPRCB *v74; // rsi
  char v75; // r13
  _QWORD *v76; // r14
  ULONG_PTR v77; // r13
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  struct _KPRCB *v81; // r14
  _DWORD *v82; // rcx
  int v83; // eax
  _DWORD *v84; // rcx
  int v85; // eax
  __int64 v86; // r14
  __int64 v87; // r8
  char v88; // al
  unsigned __int8 v89; // si
  unsigned int v90; // r8d
  struct _KPRCB *v91; // rcx
  _DWORD *v92; // rdx
  struct _KPRCB *v93; // rcx
  _DWORD *v94; // rdx
  struct _KPRCB *v95; // r9
  _DWORD *v96; // r8
  int v97; // eax
  _QWORD *v98; // [rsp+30h] [rbp-50h] BYREF
  int v99; // [rsp+38h] [rbp-48h] BYREF
  int v100; // [rsp+3Ch] [rbp-44h] BYREF
  int v101; // [rsp+40h] [rbp-40h] BYREF
  int v102; // [rsp+44h] [rbp-3Ch] BYREF
  int v103; // [rsp+48h] [rbp-38h] BYREF
  int v104; // [rsp+4Ch] [rbp-34h] BYREF
  struct _KPRCB *v105; // [rsp+50h] [rbp-30h] BYREF
  int v106[6]; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int64 *v107; // [rsp+70h] [rbp-10h] BYREF
  struct _KPRCB *v108; // [rsp+78h] [rbp-8h]
  int v109; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v110; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v105 = 0LL;
  v98 = 0LL;
  v107 = 0LL;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 )
    {
      v41 = *(_QWORD *)(BugCheckParameter1 + 968);
      if ( (KiVelocityFlags & 0x10) != 0 && v41 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v101 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
          do
            KeYieldProcessorEx(&v101, v45, v46, v47);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v48 = KeGetCurrentPrcb();
        v49 = *(_DWORD *)(v41 + 4);
        v50 = (unsigned __int8)*(_DWORD *)(BugCheckParameter1 + 512);
        v105 = v48;
        if ( v49 != v50 && v49 < 6 )
        {
          v102 = 0;
          v108 = KeGetCurrentPrcb();
          KiSetVpThreadSpinLockCount((__int64)v108, 1);
          v51 = v108;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&v48->PrcbLock, 0LL) )
          {
            KiSetVpThreadSpinLockCount((__int64)v51, 0);
            do
              KeYieldProcessorEx(&v102, v52, v53, v54);
            while ( v48->PrcbLock );
            KiSetVpThreadSpinLockCount((__int64)v51, 1);
          }
          KeSetThreadBamQosLevel(BugCheckParameter1, v49);
          if ( !v48->NextThread && KeHeteroSystem )
            v48->PriorityState[64].AllFields ^= (v48->PriorityState[64].AllFields ^ *(_BYTE *)(BugCheckParameter1 + 512)) & 7;
          _InterlockedAnd64((volatile signed __int64 *)&v48->PrcbLock, 0LL);
          KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
        }
        KiReleaseThreadLockSafe(BugCheckParameter1);
        KeCheckAndApplyBamQos((__int64)v48, BugCheckParameter1);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v55 = KeGetCurrentIrql();
            if ( v55 <= 0xFu && CurrentIrql <= 0xFu && v55 >= 2u )
            {
              v56 = KeGetCurrentPrcb();
              v57 = v56->SchedulerAssist;
              v58 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v24 = (v58 & v57[5]) == 0;
              v57[5] &= v58;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)v56);
            }
          }
        }
        v30 = CurrentIrql;
        goto LABEL_110;
      }
    }
    else
    {
      if ( (_DWORD)a3 == 2 || (_DWORD)a3 == 3 )
      {
        if ( (BYTE4(xmmword_140D06910) & 0x20) != 0 )
          EtwTraceXSchedulerPriorityKickReceive(BugCheckParameter1, (unsigned int)a3);
        v6 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
        {
          v31 = KeGetCurrentPrcb()->SchedulerAssist;
          v31[5] |= (-1 << (v6 + 1)) & 4;
        }
        v32 = KeGetCurrentPrcb();
        v99 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v32, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v32, 0);
          do
            KeYieldProcessorEx(&v99, v33, v34, v35);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
        KiReleaseThreadLockSafe(BugCheckParameter1);
        v13 = KeGetCurrentPrcb();
        v36 = v98;
        if ( v98 )
        {
          v98 = (_QWORD *)*v98;
          do
          {
            KiDeferredReadySingleThread((__int64)v13, (ULONG_PTR)(v36 - 27), (__int64)&v98);
            v36 = v98;
            ++v4;
            if ( v98 )
              v98 = (_QWORD *)*v98;
            if ( (v4 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(&v13->DeferredDispatchInterrupts.Level);
          }
          while ( v36 );
        }
        KiFlushSoftwareInterruptBatch(&v13->DeferredDispatchInterrupts.Level);
        if ( v6 < 2u )
        {
          CurrentThread = (ULONG_PTR)v13->CurrentThread;
          if ( v13->NextThread )
          {
            KiAbProcessContextSwitch((__int64)v13->CurrentThread, 0);
            v37 = KeGetCurrentPrcb();
            v100 = 0;
            while ( 1 )
            {
              KiSetVpThreadSpinLockCount((__int64)v37, 1);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v13->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount((__int64)v37, 0);
              do
                KeYieldProcessorEx(&v100, v38, v39, v40);
              while ( v13->PrcbLock );
            }
            goto LABEL_33;
          }
LABEL_36:
          v24 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
LABEL_37:
          if ( !v24 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
              {
                v25 = KeGetCurrentPrcb();
                v26 = v25->SchedulerAssist;
                v24 = (v26[5] & 0xFFFF0003) == 0;
                v26[5] &= 0xFFFF0003;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)v25);
              }
            }
            __writecr8(1uLL);
            *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
            KiDeliverApc(0, 0LL, 0LL);
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v27 = KeGetCurrentPrcb();
              v28 = v27->SchedulerAssist;
              v29 = ~(unsigned __int16)(-1LL << (v6 + 1));
              v24 = (v29 & v28[5]) == 0;
              v28[5] &= v29;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)v27);
            }
          }
          v30 = v6;
LABEL_110:
          __writecr8(v30);
          return;
        }
      }
      else
      {
        if ( (_DWORD)a3 != 4 )
          return;
        v6 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 <= 0xFu )
        {
          v7 = KeGetCurrentPrcb()->SchedulerAssist;
          v7[5] |= (-1 << (v6 + 1)) & 4;
        }
        v8 = KeGetCurrentPrcb();
        v109 = 0;
        while ( 1 )
        {
          KiSetVpThreadSpinLockCount((__int64)v8, 1);
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
            break;
          KiSetVpThreadSpinLockCount((__int64)v8, 0);
          do
            KeYieldProcessorEx(&v109, v9, v10, v11);
          while ( *(_QWORD *)(BugCheckParameter1 + 64) );
        }
        v12 = *(_QWORD *)(BugCheckParameter1 + 968);
        if ( v12 )
        {
          _InterlockedAdd64((volatile signed __int64 *)(v12 + 40), 1uLL);
          if ( *(_QWORD *)(v12 + 40) != *(_QWORD *)(v12 + 48) && *(_BYTE *)(BugCheckParameter1 + 388) == 1 )
            KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1);
        }
        KiReleaseThreadLockSafe(BugCheckParameter1);
        v13 = KeGetCurrentPrcb();
        v14 = v98;
        if ( v98 )
        {
          v98 = (_QWORD *)*v98;
          do
          {
            KiDeferredReadySingleThread((__int64)v13, (ULONG_PTR)(v14 - 27), (__int64)&v98);
            v14 = v98;
            ++v4;
            if ( v98 )
              v98 = (_QWORD *)*v98;
            if ( (v4 & 0xF) == 0 )
              KiFlushSoftwareInterruptBatch(&v13->DeferredDispatchInterrupts.Level);
          }
          while ( v14 );
        }
        KiFlushSoftwareInterruptBatch(&v13->DeferredDispatchInterrupts.Level);
        if ( v6 < 2u )
        {
          CurrentThread = (ULONG_PTR)v13->CurrentThread;
          if ( v13->NextThread )
          {
            KiAbProcessContextSwitch((__int64)v13->CurrentThread, 0);
            v16 = KeGetCurrentPrcb();
            LODWORD(v110) = 0;
            while ( 1 )
            {
              KiSetVpThreadSpinLockCount((__int64)v16, 1);
              if ( !_interlockedbittestandset64((volatile signed __int32 *)&v13->PrcbLock, 0LL) )
                break;
              KiSetVpThreadSpinLockCount((__int64)v16, 0);
              do
                KeYieldProcessorEx(&v110, v18, v19, v20);
              while ( v13->PrcbLock );
            }
LABEL_33:
            NextThread = (__int64)v13->NextThread;
            v13->NextThread = 0LL;
            _disable();
            LOBYTE(v17) = 1;
            KiEndThreadCycleAccumulation((__int64)v13, CurrentThread, 0LL, v17);
            _enable();
            v13->CurrentThread = (_KTHREAD *)NextThread;
            if ( *(_BYTE *)(NextThread + 388) == 1 )
            {
              v22 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
              *(_DWORD *)(NextThread + 132) = v22 + MEMORY[0xFFFFF78000000320];
            }
            *(_BYTE *)(NextThread + 388) = 2;
            *(_BYTE *)(CurrentThread + 643) = 32;
            *(_BYTE *)(CurrentThread + 390) = v6;
            KiQueueReadyThread(v13, CurrentThread, v22);
            LOBYTE(v23) = v6;
            v24 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v23) == 0;
            goto LABEL_37;
          }
          goto LABEL_36;
        }
      }
      if ( v13->NextThread && !v13->DpcRoutineActive )
      {
        if ( v13->NestingLevel )
        {
          v13->InterruptRequest = 1;
        }
        else
        {
          v106[0] = 5;
          *(_OWORD *)&v106[1] = 0LL;
          HalpInterruptSendIpi(v106, 0x2Fu);
        }
      }
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    *(_QWORD *)(BugCheckParameter1 + 968) = a2;
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    if ( (KiVelocityFlags & 0x400) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KeSetActualBasePriorityThread(BugCheckParameter1, 1u);
  }
  else if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v59 = KeGetCurrentIrql();
    v110 = v59;
    __writecr8(2uLL);
    v60 = -1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v59 <= 0xFu )
    {
      a4 = KeGetCurrentPrcb()->SchedulerAssist;
      v60 = (-1LL << ((unsigned __int8)v59 + 1)) & 4;
      a3 = (unsigned int)v60 | a4[5];
      a4[5] = a3;
    }
    v61 = KeGetCurrentPrcb();
    v103 = 0;
    while ( 1 )
    {
      v62 = v61->SchedulerAssist;
      if ( v62 )
      {
        if ( v61->NestingLevel <= 1u )
        {
          v63 = v62[6];
          v62[6] = v63 + 1;
          if ( v63 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)v61);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
        break;
      v64 = v61->SchedulerAssist;
      if ( v64 )
      {
        if ( v61->NestingLevel <= 1u )
        {
          v65 = v64[6] - 1;
          v64[6] = v65;
          if ( !v65 )
            KiRemoveSystemWorkPriorityKick((__int64)v61);
        }
      }
      do
        KeYieldProcessorEx(&v103, v60, a3, (__int64)a4);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    if ( *(_DWORD *)(BugCheckParameter1 + 1024) != 32 )
    {
      v66 = *(char *)(BugCheckParameter1 + 1024);
      v67 = *(_BYTE *)(v66 + BugCheckParameter1 + 824);
      if ( !v67 )
        KeBugCheckEx(0x157u, BugCheckParameter1, *(char *)(BugCheckParameter1 + 1024), 2uLL, 0LL);
      v68 = v67 - 1;
      *(_BYTE *)(v66 + BugCheckParameter1 + 824) = v68;
      if ( !v68 )
      {
        v69 = v66;
        v70 = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v66);
        *(_DWORD *)(BugCheckParameter1 + 856) = v70;
        if ( v70 < 1 << v69 )
        {
          v71 = *(_BYTE *)(BugCheckParameter1 + 195);
          if ( v71 <= 31 )
          {
            v72 = *(_BYTE *)(BugCheckParameter1 + 563)
                + (*(_BYTE *)(BugCheckParameter1 + 564) & 0xF)
                + (*(_BYTE *)(BugCheckParameter1 + 564) >> 4);
            if ( v72 < v71 )
              KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, (__int64)&v98, v72);
          }
        }
      }
      *(_DWORD *)(BugCheckParameter1 + 1024) = 32;
    }
    KiAcquireThreadStateLock(BugCheckParameter1, (__int64)&v105, (volatile signed __int32 **)&v107, (__int64)a4);
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0x16u);
    v24 = (KiVelocityFlags & 0x400) == 0;
    *(_QWORD *)(BugCheckParameter1 + 968) = 0LL;
    if ( !v24 )
      _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x16u);
    KiReleaseThreadStateLock(v73, (__int64)v105, v107);
    KiReleaseThreadLockSafe(BugCheckParameter1);
    v74 = KeGetCurrentPrcb();
    v75 = 0;
    v76 = v98;
    if ( v98 )
    {
      v98 = (_QWORD *)*v98;
      do
      {
        KiDeferredReadySingleThread((__int64)v74, (ULONG_PTR)(v76 - 27), (__int64)&v98);
        v76 = v98;
        ++v75;
        if ( v98 )
          v98 = (_QWORD *)*v98;
        if ( (v75 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(&v74->DeferredDispatchInterrupts.Level);
      }
      while ( v76 );
    }
    KiFlushSoftwareInterruptBatch(&v74->DeferredDispatchInterrupts.Level);
    if ( (unsigned __int8)v110 >= 2u )
    {
      if ( v74->NextThread && !v74->DpcRoutineActive )
      {
        if ( v74->NestingLevel )
        {
          v74->InterruptRequest = 1;
        }
        else
        {
          v106[0] = 5;
          *(_OWORD *)&v106[1] = 0LL;
          HalpInterruptSendIpi(v106, 0x2Fu);
        }
      }
    }
    else
    {
      v77 = (ULONG_PTR)v74->CurrentThread;
      if ( v74->NextThread )
      {
        KiAbProcessContextSwitch((__int64)v74->CurrentThread, 0);
        v81 = KeGetCurrentPrcb();
        v104 = 0;
        while ( 1 )
        {
          v82 = v81->SchedulerAssist;
          if ( v82 )
          {
            if ( v81->NestingLevel <= 1u )
            {
              v83 = v82[6];
              v82[6] = v83 + 1;
              if ( v83 == -1 )
                KiRemoveSystemWorkPriorityKick((__int64)v81);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)&v74->PrcbLock, 0LL) )
            break;
          v84 = v81->SchedulerAssist;
          if ( v84 )
          {
            if ( v81->NestingLevel <= 1u )
            {
              v85 = v84[6] - 1;
              v84[6] = v85;
              if ( !v85 )
                KiRemoveSystemWorkPriorityKick((__int64)v81);
            }
          }
          do
            KeYieldProcessorEx(&v104, v78, v79, v80);
          while ( v74->PrcbLock );
        }
        v86 = (__int64)v74->NextThread;
        v74->NextThread = 0LL;
        _disable();
        LOBYTE(v80) = 1;
        KiEndThreadCycleAccumulation((__int64)v74, v77, 0LL, v80);
        _enable();
        v74->CurrentThread = (_KTHREAD *)v86;
        if ( *(_BYTE *)(v86 + 388) == 1 )
        {
          v87 = (unsigned int)(*(_DWORD *)(v86 + 132) - *(_DWORD *)(v86 + 436));
          *(_DWORD *)(v86 + 132) = v87 + MEMORY[0xFFFFF78000000320];
        }
        v88 = v110;
        *(_BYTE *)(v86 + 388) = 2;
        *(_BYTE *)(v77 + 390) = v88;
        *(_BYTE *)(v77 + 643) = 32;
        KiQueueReadyThread(v74, v77, v87);
        v89 = v110;
        LOBYTE(v90) = v110;
        if ( (unsigned __int8)KiSwapContext(v77, v86, v90) )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v91 = KeGetCurrentPrcb();
              v92 = v91->SchedulerAssist;
              v24 = (v92[5] & 0xFFFF0003) == 0;
              v92[5] &= 0xFFFF0003;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)v91);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v77 + 116) &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL);
        }
      }
      else
      {
        if ( (*(_DWORD *)(v77 + 116) & 0x40) != 0 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v93 = KeGetCurrentPrcb();
              v94 = v93->SchedulerAssist;
              v24 = (v94[5] & 0xFFFF0003) == 0;
              v94[5] &= 0xFFFF0003;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)v93);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v77 + 116) &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL);
        }
        v89 = v110;
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v95 = KeGetCurrentPrcb();
          v96 = v95->SchedulerAssist;
          v97 = ~(unsigned __int16)(-1LL << (v89 + 1));
          v24 = (v97 & v96[5]) == 0;
          v96[5] &= v97;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick((__int64)v95);
        }
      }
      __writecr8(v89);
    }
    KeSetPriorityThread((PKTHREAD)BugCheckParameter1, *(char *)(BugCheckParameter1 + 563));
  }
}
