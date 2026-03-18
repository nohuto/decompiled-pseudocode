/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140519118
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x14059D2C0 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x140214320 (KiAcquireThreadStateLock.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x1402EB520 (KiEndThreadCycleAccumulation.c)
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiReleaseThreadStateLock @ 0x1402F11C0 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x140518FF0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x1405190F0 (KeSetThreadBamQosLevel.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14051B810 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

char __fastcall KeSetThreadSchedulerAssist(PKTHREAD Thread, void *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 v4; // rax
  int v6; // r8d
  __int64 v7; // r8
  unsigned __int8 v8; // r15
  struct _KPRCB *v9; // rsi
  _DWORD *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  struct _KPRCB *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  struct _KPRCB *v21; // rsi
  _DWORD *v22; // rcx
  int v23; // eax
  _DWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r8d
  bool v30; // zf
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  struct _KPRCB *v33; // r9
  _DWORD *v34; // r8
  int v35; // eax
  _DWORD *v36; // r10
  unsigned __int8 v37; // si
  _DWORD *v38; // r9
  __int16 v39; // r14
  int v40; // edx
  bool v41; // r14
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v48; // rcx
  int v49; // eax
  _DWORD *v50; // rcx
  int v51; // eax
  ULONG_PTR SchedulerAssistPriorityFloor_low; // rdx
  unsigned __int8 v53; // al
  unsigned __int8 v54; // al
  char v55; // cl
  unsigned int v56; // edx
  char Priority; // dl
  signed __int8 v58; // cl
  __int64 v59; // rcx
  struct _KPRCB *v60; // rsi
  __int64 v61; // r8
  __int64 v62; // r9
  ULONG_PTR CurrentThread; // r15
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  struct _KPRCB *v67; // r14
  _DWORD *v68; // rcx
  int v69; // eax
  _DWORD *v70; // rcx
  int v71; // eax
  __int64 NextThread; // r14
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned int v75; // r8d
  struct _KPRCB *v76; // rcx
  _DWORD *v77; // rdx
  struct _KPRCB *v78; // r9
  _DWORD *v79; // r8
  int v80; // eax
  struct _KPRCB *v81; // rcx
  _DWORD *v82; // rdx
  int v84; // [rsp+30h] [rbp-58h] BYREF
  int v85; // [rsp+34h] [rbp-54h] BYREF
  _QWORD *v86; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v87; // [rsp+40h] [rbp-48h] BYREF
  __int64 v88[7]; // [rsp+48h] [rbp-40h] BYREF
  int v89; // [rsp+80h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  int v91; // [rsp+A0h] [rbp+18h] BYREF
  int v92; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v88[0] = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  if ( !(_DWORD)a3 )
  {
    if ( a2 )
    {
      Thread->SchedulerAssist = a2;
      _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
      if ( (KiVelocityFlags & 0x400) != 0 )
        _interlockedbittestandset(&Thread->Header.Lock, 0x16u);
      Thread->SchedulerAssistPriorityFloor = 32;
      return v4;
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (void *)((-1LL << (CurrentIrql + 1)) & 4);
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v84 = 0;
    while ( 1 )
    {
      v48 = CurrentPrcb->SchedulerAssist;
      if ( v48 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v49 = v48[6];
          v48[6] = v49 + 1;
          if ( v49 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
        break;
      v50 = CurrentPrcb->SchedulerAssist;
      if ( v50 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v51 = v50[6] - 1;
          v50[6] = v51;
          if ( !v51 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v84, (__int64)a2, a3, (__int64)SchedulerAssist);
      while ( Thread->ThreadLock );
    }
    if ( Thread->SchedulerAssistPriorityFloor != 32 )
    {
      SchedulerAssistPriorityFloor_low = SLOBYTE(Thread->SchedulerAssistPriorityFloor);
      v53 = Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low];
      if ( !v53 )
        KeBugCheckEx(0x157u, (ULONG_PTR)Thread, SchedulerAssistPriorityFloor_low, 2uLL, 0LL);
      v54 = v53 - 1;
      Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low] = v54;
      if ( !v54 )
      {
        v55 = SchedulerAssistPriorityFloor_low;
        v56 = Thread->PriorityFloorSummary ^ (1 << SchedulerAssistPriorityFloor_low);
        Thread->PriorityFloorSummary = v56;
        if ( v56 < 1 << v55 )
        {
          Priority = Thread->Priority;
          if ( Priority < 16 )
          {
            v58 = Thread->BasePriority
                + (Thread->PriorityDecrement & 0xF)
                + ((unsigned __int8)Thread->PriorityDecrement >> 4);
            if ( v58 < Priority )
              KiSetPriorityThread(Thread, (__int64)&v86, v58);
          }
        }
      }
      Thread->SchedulerAssistPriorityFloor = 32;
    }
    KiAcquireThreadStateLock((__int64)Thread, v88, (volatile signed __int32 **)&v87);
    _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
    Thread->SchedulerAssist = 0LL;
    if ( (KiVelocityFlags & 0x400) != 0 )
      _interlockedbittestandreset(&Thread->Header.Lock, 0x16u);
    KiReleaseThreadStateLock(v59, v88[0], v87);
    KiReleaseThreadLockSafe((__int64)Thread);
    v60 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v60, &v86, v61, v62);
    if ( CurrentIrql >= 2u )
    {
      if ( v60->NextThread && !v60->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v60, 2);
      goto LABEL_144;
    }
    CurrentThread = (ULONG_PTR)v60->CurrentThread;
    if ( v60->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v60->CurrentThread, 0);
      v67 = KeGetCurrentPrcb();
      v85 = 0;
      while ( 1 )
      {
        v68 = v67->SchedulerAssist;
        if ( v68 )
        {
          if ( v67->NestingLevel <= 1u )
          {
            v69 = v68[6];
            v68[6] = v69 + 1;
            if ( v69 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v67);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v60->PrcbLock, 0LL) )
          break;
        v70 = v67->SchedulerAssist;
        if ( v70 )
        {
          if ( v67->NestingLevel <= 1u )
          {
            v71 = v70[6] - 1;
            v70[6] = v71;
            if ( !v71 )
              KiRemoveSystemWorkPriorityKick((__int64)v67);
          }
        }
        do
          KeYieldProcessorEx(&v85, v64, v65, v66);
        while ( v60->PrcbLock );
      }
      NextThread = (__int64)v60->NextThread;
      v60->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v60, CurrentThread, 0LL);
      _enable();
      v60->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v73 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v73 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v60, CurrentThread, v73, v74);
      LOBYTE(v75) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v75) )
        goto LABEL_128;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v76 = KeGetCurrentPrcb();
          v77 = v76->SchedulerAssist;
          v30 = (v77[5] & 0xFFFF0003) == 0;
          v77[5] &= 0xFFFF0003;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick((__int64)v76);
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0 )
      {
LABEL_128:
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v78 = KeGetCurrentPrcb();
            v79 = v78->SchedulerAssist;
            v80 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v30 = (v80 & v79[5]) == 0;
            v79[5] &= v80;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick((__int64)v78);
          }
        }
        __writecr8(CurrentIrql);
LABEL_144:
        LOBYTE(v4) = KeSetPriorityThread(Thread, Thread->BasePriority);
        return v4;
      }
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v81 = KeGetCurrentPrcb();
          v82 = v81->SchedulerAssist;
          v30 = (v82[5] & 0xFFFF0003) == 0;
          v82[5] &= 0xFFFF0003;
          if ( v30 )
            KiRemoveSystemWorkPriorityKick((__int64)v81);
        }
      }
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_128;
  }
  v6 = a3 - 1;
  if ( v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    if ( (unsigned int)v7 <= 1 )
    {
      v8 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v8 <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (void *)((-1LL << (v8 + 1)) & 4);
        v7 = (unsigned int)a2 | SchedulerAssist[5];
        SchedulerAssist[5] = v7;
      }
      v9 = KeGetCurrentPrcb();
      v91 = 0;
      while ( 1 )
      {
        v10 = v9->SchedulerAssist;
        if ( v10 )
        {
          if ( v9->NestingLevel <= 1u )
          {
            v11 = v10[6];
            v10[6] = v11 + 1;
            if ( v11 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v9);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
          break;
        v12 = v9->SchedulerAssist;
        if ( v12 )
        {
          if ( v9->NestingLevel <= 1u )
          {
            v13 = v12[6] - 1;
            v12[6] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick((__int64)v9);
          }
        }
        do
          KeYieldProcessorEx(&v91, (__int64)a2, v7, (__int64)SchedulerAssist);
        while ( Thread->ThreadLock );
      }
      KiUpdateVpBackingThreadPriorityFromTopLevel((ULONG_PTR)Thread);
      KiReleaseThreadLockSafe((__int64)Thread);
      v14 = KeGetCurrentPrcb();
      LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)v14, &v86, v15, v16);
      if ( v8 < 2u )
      {
        v17 = (ULONG_PTR)v14->CurrentThread;
        if ( v14->NextThread )
        {
          KiAbProcessContextSwitch((__int64)v14->CurrentThread, 0);
          v21 = KeGetCurrentPrcb();
          v92 = 0;
          while ( 1 )
          {
            v22 = v21->SchedulerAssist;
            if ( v22 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v23 = v22[6];
                v22[6] = v23 + 1;
                if ( v23 == -1 )
                  KiRemoveSystemWorkPriorityKick((__int64)v21);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v14->PrcbLock, 0LL) )
              break;
            v24 = v21->SchedulerAssist;
            if ( v24 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v25 = v24[6] - 1;
                v24[6] = v25;
                if ( !v25 )
                  KiRemoveSystemWorkPriorityKick((__int64)v21);
              }
            }
            do
              KeYieldProcessorEx(&v92, v18, v19, v20);
            while ( v14->PrcbLock );
          }
          v26 = (__int64)v14->NextThread;
          v14->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v14, v17, 0LL);
          _enable();
          v14->CurrentThread = (_KTHREAD *)v26;
          if ( *(_BYTE *)(v26 + 388) == 1 )
          {
            v27 = (unsigned int)(*(_DWORD *)(v26 + 132) - *(_DWORD *)(v26 + 436));
            *(_DWORD *)(v26 + 132) = v27 + MEMORY[0xFFFFF78000000320];
          }
          *(_BYTE *)(v26 + 388) = 2;
          *(_BYTE *)(v17 + 643) = 32;
          *(_BYTE *)(v17 + 390) = v8;
          KiQueueReadyThread(v14, v17, v27, v28);
          LOBYTE(v29) = v8;
          v30 = (unsigned __int8)KiSwapContext(v17, v26, v29) == 0;
        }
        else
        {
          v30 = (*(_DWORD *)(v17 + 116) & 0x40) == 0;
        }
        if ( !v30 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v30 = (v32[5] & 0xFFFF0003) == 0;
              v32[5] &= 0xFFFF0003;
              if ( v30 )
                KiRemoveSystemWorkPriorityKick((__int64)v31);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v17 + 116) &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL);
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v33 = KeGetCurrentPrcb();
            v34 = v33->SchedulerAssist;
            v35 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v30 = (v35 & v34[5]) == 0;
            v34[5] &= v35;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick((__int64)v33);
          }
        }
        v4 = v8;
LABEL_73:
        __writecr8(v4);
        return v4;
      }
      if ( v14->NextThread )
      {
        LOBYTE(v4) = v14->DpcRoutineActive;
        if ( !(_BYTE)v4 )
          LOBYTE(v4) = KiRequestSoftwareInterrupt(v14, 2);
      }
    }
  }
  else
  {
    LOBYTE(v4) = KiVelocityFlags;
    v36 = Thread->SchedulerAssist;
    if ( (KiVelocityFlags & 0x10) != 0 && v36 )
    {
      v37 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
      {
        v38 = KeGetCurrentPrcb()->SchedulerAssist;
        v38[5] |= (-1 << (v37 + 1)) & 4;
      }
      v39 = v89;
      _disable();
      v40 = v36[1];
      v41 = (v39 & 0x200) != 0;
      if ( v40 != (unsigned __int8)Thread->ThreadFlags2 && v40 < 5 )
      {
        KeSetThreadBamQosLevel((__int64)Thread, v40);
        KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), (__int64)Thread);
      }
      if ( v41 )
        _enable();
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v42 = KeGetCurrentIrql();
          if ( v42 <= 0xFu && v37 <= 0xFu && v42 >= 2u )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v45 = ~(unsigned __int16)(-1LL << (v37 + 1));
            v30 = (v45 & v44[5]) == 0;
            v44[5] &= v45;
            if ( v30 )
              KiRemoveSystemWorkPriorityKick((__int64)v43);
          }
        }
      }
      v4 = v37;
      goto LABEL_73;
    }
  }
  return v4;
}
