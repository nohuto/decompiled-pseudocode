/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x14051E808
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x1405A29C0 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KiDeliverApc @ 0x1402EEFA0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x14051E6E0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x14051E7E0 (KeSetThreadBamQosLevel.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x140520F00 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
  ULONG_PTR v15; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KPRCB *v19; // rsi
  _DWORD *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // r8
  unsigned int v26; // r8d
  bool v27; // zf
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *v30; // r9
  _DWORD *v31; // r8
  int v32; // eax
  _DWORD *v33; // r10
  unsigned __int8 v34; // si
  _DWORD *v35; // r9
  __int16 v36; // r14
  int v37; // edx
  bool v38; // r14
  unsigned __int8 v39; // al
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  int v42; // eax
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v45; // rcx
  int v46; // eax
  _DWORD *v47; // rcx
  int v48; // eax
  ULONG_PTR SchedulerAssistPriorityFloor_low; // rdx
  unsigned __int8 v50; // al
  unsigned __int8 v51; // al
  char v52; // cl
  unsigned int v53; // edx
  char Priority; // dl
  signed __int8 v55; // cl
  __int64 v56; // rcx
  struct _KPRCB *v57; // rsi
  ULONG_PTR CurrentThread; // r15
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  struct _KPRCB *v62; // r14
  _DWORD *v63; // rcx
  int v64; // eax
  _DWORD *v65; // rcx
  int v66; // eax
  __int64 NextThread; // r14
  __int64 v68; // r8
  unsigned int v69; // r8d
  struct _KPRCB *v70; // rcx
  _DWORD *v71; // rdx
  struct _KPRCB *v72; // r9
  _DWORD *v73; // r8
  int v74; // eax
  struct _KPRCB *v75; // rcx
  _DWORD *v76; // rdx
  int v78; // [rsp+30h] [rbp-58h] BYREF
  int v79; // [rsp+34h] [rbp-54h] BYREF
  _QWORD *v80; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v81; // [rsp+40h] [rbp-48h] BYREF
  __int64 v82[7]; // [rsp+48h] [rbp-40h] BYREF
  int v83; // [rsp+80h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  int v85; // [rsp+A0h] [rbp+18h] BYREF
  int v86; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v82[0] = 0LL;
  v80 = 0LL;
  v81 = 0LL;
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
    v78 = 0;
    while ( 1 )
    {
      v45 = CurrentPrcb->SchedulerAssist;
      if ( v45 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v46 = v45[6];
          v45[6] = v46 + 1;
          if ( v46 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
        break;
      v47 = CurrentPrcb->SchedulerAssist;
      if ( v47 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v48 = v47[6] - 1;
          v47[6] = v48;
          if ( !v48 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v78, (__int64)a2, a3, (__int64)SchedulerAssist);
      while ( Thread->ThreadLock );
    }
    if ( Thread->SchedulerAssistPriorityFloor != 32 )
    {
      SchedulerAssistPriorityFloor_low = SLOBYTE(Thread->SchedulerAssistPriorityFloor);
      v50 = Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low];
      if ( !v50 )
        KeBugCheckEx(0x157u, (ULONG_PTR)Thread, SchedulerAssistPriorityFloor_low, 2uLL, 0LL);
      v51 = v50 - 1;
      Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low] = v51;
      if ( !v51 )
      {
        v52 = SchedulerAssistPriorityFloor_low;
        v53 = Thread->PriorityFloorSummary ^ (1 << SchedulerAssistPriorityFloor_low);
        Thread->PriorityFloorSummary = v53;
        if ( v53 < 1 << v52 )
        {
          Priority = Thread->Priority;
          if ( Priority < 16 )
          {
            v55 = Thread->BasePriority
                + (Thread->PriorityDecrement & 0xF)
                + ((unsigned __int8)Thread->PriorityDecrement >> 4);
            if ( v55 < Priority )
              KiSetPriorityThread(Thread, (__int64)&v80, v55);
          }
        }
      }
      Thread->SchedulerAssistPriorityFloor = 32;
    }
    KiAcquireThreadStateLock((__int64)Thread, v82, (volatile signed __int32 **)&v81);
    _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
    Thread->SchedulerAssist = 0LL;
    if ( (KiVelocityFlags & 0x400) != 0 )
      _interlockedbittestandreset(&Thread->Header.Lock, 0x16u);
    KiReleaseThreadStateLock(v56, v82[0], v81);
    KiReleaseThreadLockSafe((__int64)Thread);
    v57 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v57, &v80);
    if ( CurrentIrql >= 2u )
    {
      if ( v57->NextThread && !v57->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v57, 2);
      goto LABEL_144;
    }
    CurrentThread = (ULONG_PTR)v57->CurrentThread;
    if ( v57->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v57->CurrentThread, 0);
      v62 = KeGetCurrentPrcb();
      v79 = 0;
      while ( 1 )
      {
        v63 = v62->SchedulerAssist;
        if ( v63 )
        {
          if ( v62->NestingLevel <= 1u )
          {
            v64 = v63[6];
            v63[6] = v64 + 1;
            if ( v64 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v62);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v57->PrcbLock, 0LL) )
          break;
        v65 = v62->SchedulerAssist;
        if ( v65 )
        {
          if ( v62->NestingLevel <= 1u )
          {
            v66 = v65[6] - 1;
            v65[6] = v66;
            if ( !v66 )
              KiRemoveSystemWorkPriorityKick((__int64)v62);
          }
        }
        do
          KeYieldProcessorEx(&v79, v59, v60, v61);
        while ( v57->PrcbLock );
      }
      NextThread = (__int64)v57->NextThread;
      v57->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v57, CurrentThread, 0LL);
      _enable();
      v57->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v68 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v68 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v57, CurrentThread, v68);
      LOBYTE(v69) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v69) )
        goto LABEL_128;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v27 = (v71[5] & 0xFFFF0003) == 0;
          v71[5] &= 0xFFFF0003;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)v70);
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
            v72 = KeGetCurrentPrcb();
            v73 = v72->SchedulerAssist;
            v74 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v27 = (v74 & v73[5]) == 0;
            v73[5] &= v74;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)v72);
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
          v75 = KeGetCurrentPrcb();
          v76 = v75->SchedulerAssist;
          v27 = (v76[5] & 0xFFFF0003) == 0;
          v76[5] &= 0xFFFF0003;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick((__int64)v75);
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
      v85 = 0;
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
          KeYieldProcessorEx(&v85, (__int64)a2, v7, (__int64)SchedulerAssist);
        while ( Thread->ThreadLock );
      }
      KiUpdateVpBackingThreadPriorityFromTopLevel((ULONG_PTR)Thread);
      KiReleaseThreadLockSafe((__int64)Thread);
      v14 = KeGetCurrentPrcb();
      LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)v14, &v80);
      if ( v8 < 2u )
      {
        v15 = (ULONG_PTR)v14->CurrentThread;
        if ( v14->NextThread )
        {
          KiAbProcessContextSwitch((__int64)v14->CurrentThread, 0);
          v19 = KeGetCurrentPrcb();
          v86 = 0;
          while ( 1 )
          {
            v20 = v19->SchedulerAssist;
            if ( v20 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v21 = v20[6];
                v20[6] = v21 + 1;
                if ( v21 == -1 )
                  KiRemoveSystemWorkPriorityKick((__int64)v19);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)&v14->PrcbLock, 0LL) )
              break;
            v22 = v19->SchedulerAssist;
            if ( v22 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v23 = v22[6] - 1;
                v22[6] = v23;
                if ( !v23 )
                  KiRemoveSystemWorkPriorityKick((__int64)v19);
              }
            }
            do
              KeYieldProcessorEx(&v86, v16, v17, v18);
            while ( v14->PrcbLock );
          }
          v24 = (__int64)v14->NextThread;
          v14->NextThread = 0LL;
          _disable();
          KiEndThreadCycleAccumulation((__int64)v14, v15, 0LL);
          _enable();
          v14->CurrentThread = (_KTHREAD *)v24;
          if ( *(_BYTE *)(v24 + 388) == 1 )
          {
            v25 = (unsigned int)(*(_DWORD *)(v24 + 132) - *(_DWORD *)(v24 + 436));
            *(_DWORD *)(v24 + 132) = v25 + MEMORY[0xFFFFF78000000320];
          }
          *(_BYTE *)(v24 + 388) = 2;
          *(_BYTE *)(v15 + 643) = 32;
          *(_BYTE *)(v15 + 390) = v8;
          KiQueueReadyThread(v14, v15, v25);
          LOBYTE(v26) = v8;
          v27 = (unsigned __int8)KiSwapContext(v15, v24, v26) == 0;
        }
        else
        {
          v27 = (*(_DWORD *)(v15 + 116) & 0x40) == 0;
        }
        if ( !v27 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v28 = KeGetCurrentPrcb();
              v29 = v28->SchedulerAssist;
              v27 = (v29[5] & 0xFFFF0003) == 0;
              v29[5] &= 0xFFFF0003;
              if ( v27 )
                KiRemoveSystemWorkPriorityKick((__int64)v28);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v15 + 116) &= ~0x40u;
          KiDeliverApc(0, 0LL, 0LL);
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v30 = KeGetCurrentPrcb();
            v31 = v30->SchedulerAssist;
            v32 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v27 = (v32 & v31[5]) == 0;
            v31[5] &= v32;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)v30);
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
    v33 = Thread->SchedulerAssist;
    if ( (KiVelocityFlags & 0x10) != 0 && v33 )
    {
      v34 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
      {
        v35 = KeGetCurrentPrcb()->SchedulerAssist;
        v35[5] |= (-1 << (v34 + 1)) & 4;
      }
      v36 = v83;
      _disable();
      v37 = v33[1];
      v38 = (v36 & 0x200) != 0;
      if ( v37 != (unsigned __int8)Thread->ThreadFlags2 && v37 < 5 )
      {
        KeSetThreadBamQosLevel((__int64)Thread, v37);
        KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), (__int64)Thread);
      }
      if ( v38 )
        _enable();
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v39 = KeGetCurrentIrql();
          if ( v39 <= 0xFu && v34 <= 0xFu && v39 >= 2u )
          {
            v40 = KeGetCurrentPrcb();
            v41 = v40->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (v34 + 1));
            v27 = (v42 & v41[5]) == 0;
            v41[5] &= v42;
            if ( v27 )
              KiRemoveSystemWorkPriorityKick((__int64)v40);
          }
        }
      }
      v4 = v34;
      goto LABEL_73;
    }
  }
  return v4;
}
