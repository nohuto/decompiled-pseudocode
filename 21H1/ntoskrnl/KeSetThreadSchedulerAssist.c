/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140518AC8
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x14059CBD0 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x14026D370 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiReleaseThreadStateLock @ 0x140336300 (KiReleaseThreadStateLock.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x1405189A0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x140518AA0 (KeSetThreadBamQosLevel.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14051B1C0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
  _DWORD *v17; // r9
  ULONG_PTR v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KPRCB *v22; // rsi
  _DWORD *v23; // rcx
  int v24; // eax
  _DWORD *v25; // rcx
  int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r8d
  bool v31; // zf
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  _DWORD *v37; // r10
  unsigned __int8 v38; // si
  _DWORD *v39; // r9
  __int16 v40; // r14
  int v41; // edx
  bool v42; // r14
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v49; // rcx
  int v50; // eax
  _DWORD *v51; // rcx
  int v52; // eax
  ULONG_PTR SchedulerAssistPriorityFloor_low; // rdx
  unsigned __int8 v54; // al
  unsigned __int8 v55; // al
  char v56; // cl
  unsigned int v57; // edx
  char Priority; // dl
  signed __int8 v59; // cl
  __int64 v60; // rcx
  struct _KPRCB *v61; // rsi
  __int64 v62; // r8
  __int64 v63; // r9
  _DWORD *v64; // r9
  ULONG_PTR CurrentThread; // r15
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  struct _KPRCB *v69; // r14
  _DWORD *v70; // rcx
  int v71; // eax
  _DWORD *v72; // rcx
  int v73; // eax
  __int64 NextThread; // r14
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned int v77; // r8d
  struct _KPRCB *v78; // rcx
  _DWORD *v79; // rdx
  struct _KPRCB *v80; // r9
  _DWORD *v81; // r8
  int v82; // eax
  struct _KPRCB *v83; // rcx
  _DWORD *v84; // rdx
  int v86; // [rsp+30h] [rbp-58h] BYREF
  int v87; // [rsp+34h] [rbp-54h] BYREF
  __int64 v88; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v89; // [rsp+40h] [rbp-48h] BYREF
  __int64 v90[7]; // [rsp+48h] [rbp-40h] BYREF
  int v91; // [rsp+80h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  int v93; // [rsp+A0h] [rbp+18h] BYREF
  int v94; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v90[0] = 0LL;
  v88 = 0LL;
  v89 = 0LL;
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
    v86 = 0;
    while ( 1 )
    {
      v49 = CurrentPrcb->SchedulerAssist;
      if ( v49 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v50 = v49[6];
          v49[6] = v50 + 1;
          if ( v50 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
        break;
      v51 = CurrentPrcb->SchedulerAssist;
      if ( v51 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v52 = v51[6] - 1;
          v51[6] = v52;
          if ( !v52 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v86, (__int64)a2, a3, (__int64)SchedulerAssist);
      while ( Thread->ThreadLock );
    }
    if ( Thread->SchedulerAssistPriorityFloor != 32 )
    {
      SchedulerAssistPriorityFloor_low = SLOBYTE(Thread->SchedulerAssistPriorityFloor);
      v54 = Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low];
      if ( !v54 )
        KeBugCheckEx(0x157u, (ULONG_PTR)Thread, SchedulerAssistPriorityFloor_low, 2uLL, 0LL);
      v55 = v54 - 1;
      Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low] = v55;
      if ( !v55 )
      {
        v56 = SchedulerAssistPriorityFloor_low;
        v57 = Thread->PriorityFloorSummary ^ (1 << SchedulerAssistPriorityFloor_low);
        Thread->PriorityFloorSummary = v57;
        if ( v57 < 1 << v56 )
        {
          Priority = Thread->Priority;
          if ( Priority < 16 )
          {
            v59 = Thread->BasePriority
                + (Thread->PriorityDecrement & 0xF)
                + ((unsigned __int8)Thread->PriorityDecrement >> 4);
            if ( v59 < Priority )
              KiSetPriorityThread(Thread, (__int64)&v88, v59);
          }
        }
      }
      Thread->SchedulerAssistPriorityFloor = 32;
    }
    KiAcquireThreadStateLock((__int64)Thread, (__int64)v90, (volatile signed __int32 **)&v89);
    _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
    Thread->SchedulerAssist = 0LL;
    if ( (KiVelocityFlags & 0x400) != 0 )
      _interlockedbittestandreset(&Thread->Header.Lock, 0x16u);
    KiReleaseThreadStateLock(v60, v90[0], v89);
    KiReleaseThreadLockSafe((__int64)Thread);
    v61 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v61, &v88, v62, v63);
    if ( CurrentIrql >= 2u )
    {
      if ( v61->NextThread && !v61->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v61, 2);
      goto LABEL_144;
    }
    CurrentThread = (ULONG_PTR)v61->CurrentThread;
    if ( v61->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v61->CurrentThread, 0);
      v69 = KeGetCurrentPrcb();
      v87 = 0;
      while ( 1 )
      {
        v70 = v69->SchedulerAssist;
        if ( v70 )
        {
          if ( v69->NestingLevel <= 1u )
          {
            v71 = v70[6];
            v70[6] = v71 + 1;
            if ( v71 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v69);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v61->PrcbLock, 0LL) )
          break;
        v72 = v69->SchedulerAssist;
        if ( v72 )
        {
          if ( v69->NestingLevel <= 1u )
          {
            v73 = v72[6] - 1;
            v72[6] = v73;
            if ( !v73 )
              KiRemoveSystemWorkPriorityKick((__int64)v69);
          }
        }
        do
          KeYieldProcessorEx(&v87, v66, v67, v68);
        while ( v61->PrcbLock );
      }
      NextThread = (__int64)v61->NextThread;
      v61->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v61, CurrentThread, 0LL);
      _enable();
      v61->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v75 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v75 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)v61, CurrentThread, v75, v76);
      LOBYTE(v77) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v77) )
        goto LABEL_128;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v78 = KeGetCurrentPrcb();
          v79 = v78->SchedulerAssist;
          v31 = (v79[5] & 0xFFFF0003) == 0;
          v79[5] &= 0xFFFF0003;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)v78);
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
            v80 = KeGetCurrentPrcb();
            v81 = v80->SchedulerAssist;
            v82 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v31 = (v82 & v81[5]) == 0;
            v81[5] &= v82;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick((__int64)v80);
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
          v83 = KeGetCurrentPrcb();
          v84 = v83->SchedulerAssist;
          v31 = (v84[5] & 0xFFFF0003) == 0;
          v84[5] &= 0xFFFF0003;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick((__int64)v83);
        }
      }
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL, v64);
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
      v93 = 0;
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
          KeYieldProcessorEx(&v93, (__int64)a2, v7, (__int64)SchedulerAssist);
        while ( Thread->ThreadLock );
      }
      KiUpdateVpBackingThreadPriorityFromTopLevel((ULONG_PTR)Thread);
      KiReleaseThreadLockSafe((__int64)Thread);
      v14 = KeGetCurrentPrcb();
      LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)v14, &v88, v15, v16);
      if ( v8 < 2u )
      {
        v18 = (ULONG_PTR)v14->CurrentThread;
        if ( v14->NextThread )
        {
          KiAbProcessContextSwitch((__int64)v14->CurrentThread, 0);
          v22 = KeGetCurrentPrcb();
          v94 = 0;
          while ( 1 )
          {
            v23 = v22->SchedulerAssist;
            if ( v23 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v24 = v23[6];
                v23[6] = v24 + 1;
                if ( v24 == -1 )
                  KiRemoveSystemWorkPriorityKick((__int64)v22);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v14->PrcbLock, 0LL) )
              break;
            v25 = v22->SchedulerAssist;
            if ( v25 )
            {
              if ( v22->NestingLevel <= 1u )
              {
                v26 = v25[6] - 1;
                v25[6] = v26;
                if ( !v26 )
                  KiRemoveSystemWorkPriorityKick((__int64)v22);
              }
            }
            do
              KeYieldProcessorEx(&v94, v19, v20, v21);
            while ( v14->PrcbLock );
          }
          v27 = (__int64)v14->NextThread;
          v14->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v14, v18, 0LL);
          _enable();
          v14->CurrentThread = (_KTHREAD *)v27;
          if ( *(_BYTE *)(v27 + 388) == 1 )
          {
            v28 = (unsigned int)(*(_DWORD *)(v27 + 132) - *(_DWORD *)(v27 + 436));
            *(_DWORD *)(v27 + 132) = v28 + MEMORY[0xFFFFF78000000320];
          }
          *(_BYTE *)(v27 + 388) = 2;
          *(_BYTE *)(v18 + 643) = 32;
          *(_BYTE *)(v18 + 390) = v8;
          KiQueueReadyThread((__int64)v14, v18, v28, v29);
          LOBYTE(v30) = v8;
          v31 = (unsigned __int8)KiSwapContext(v18, v27, v30) == 0;
        }
        else
        {
          v31 = (*(_DWORD *)(v18 + 116) & 0x40) == 0;
        }
        if ( !v31 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v32 = KeGetCurrentPrcb();
              v33 = v32->SchedulerAssist;
              v31 = (v33[5] & 0xFFFF0003) == 0;
              v33[5] &= 0xFFFF0003;
              if ( v31 )
                KiRemoveSystemWorkPriorityKick((__int64)v32);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v18 + 116) &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL, v17);
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v31 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick((__int64)v34);
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
    v37 = Thread->SchedulerAssist;
    if ( (KiVelocityFlags & 0x10) != 0 && v37 )
    {
      v38 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
      {
        v39 = KeGetCurrentPrcb()->SchedulerAssist;
        v39[5] |= (-1 << (v38 + 1)) & 4;
      }
      v40 = v91;
      _disable();
      v41 = v37[1];
      v42 = (v40 & 0x200) != 0;
      if ( v41 != (unsigned __int8)Thread->ThreadFlags2 && v41 < 5 )
      {
        KeSetThreadBamQosLevel((__int64)Thread, v41);
        KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), (__int64)Thread);
      }
      if ( v42 )
        _enable();
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v43 = KeGetCurrentIrql();
          if ( v43 <= 0xFu && v38 <= 0xFu && v43 >= 2u )
          {
            v44 = KeGetCurrentPrcb();
            v45 = v44->SchedulerAssist;
            v46 = ~(unsigned __int16)(-1LL << (v38 + 1));
            v31 = (v46 & v45[5]) == 0;
            v45[5] &= v46;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick((__int64)v44);
          }
        }
      }
      v4 = v38;
      goto LABEL_73;
    }
  }
  return v4;
}
