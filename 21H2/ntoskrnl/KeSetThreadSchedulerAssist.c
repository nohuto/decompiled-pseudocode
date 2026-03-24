/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x14051E5C8
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x1405A2790 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x140230F40 (KiAcquireThreadStateLock.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x1402EA480 (KiReleaseThreadStateLock.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     KeCheckAndApplyBamQos @ 0x14051E4A0 (KeCheckAndApplyBamQos.c)
 *     KeSetThreadBamQosLevel @ 0x14051E5A0 (KeSetThreadBamQosLevel.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x140520CC0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
  __int64 v26; // r9
  unsigned int v27; // r8d
  bool v28; // zf
  struct _KPRCB *v29; // rcx
  _DWORD *v30; // rdx
  struct _KPRCB *v31; // r9
  _DWORD *v32; // r8
  int v33; // eax
  _DWORD *v34; // r10
  unsigned __int8 v35; // si
  _DWORD *v36; // r9
  __int16 v37; // r14
  int v38; // edx
  bool v39; // r14
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // rcx
  int v49; // eax
  ULONG_PTR SchedulerAssistPriorityFloor_low; // rdx
  unsigned __int8 v51; // al
  unsigned __int8 v52; // al
  char v53; // cl
  unsigned int v54; // edx
  char Priority; // dl
  signed __int8 v56; // cl
  __int64 v57; // rcx
  struct _KPRCB *v58; // rsi
  ULONG_PTR CurrentThread; // r15
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  struct _KPRCB *v63; // r14
  _DWORD *v64; // rcx
  int v65; // eax
  _DWORD *v66; // rcx
  int v67; // eax
  __int64 NextThread; // r14
  __int64 v69; // r8
  __int64 v70; // r9
  unsigned int v71; // r8d
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  struct _KPRCB *v74; // r9
  _DWORD *v75; // r8
  int v76; // eax
  struct _KPRCB *v77; // rcx
  _DWORD *v78; // rdx
  int v80; // [rsp+30h] [rbp-58h] BYREF
  int v81; // [rsp+34h] [rbp-54h] BYREF
  _QWORD *v82; // [rsp+38h] [rbp-50h] BYREF
  volatile signed __int64 *v83; // [rsp+40h] [rbp-48h] BYREF
  __int64 v84[7]; // [rsp+48h] [rbp-40h] BYREF
  int v85; // [rsp+80h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  int v87; // [rsp+A0h] [rbp+18h] BYREF
  int v88; // [rsp+A8h] [rbp+20h] BYREF

  v4 = (unsigned __int64)&retaddr;
  v84[0] = 0LL;
  v82 = 0LL;
  v83 = 0LL;
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
    v80 = 0;
    while ( 1 )
    {
      v46 = CurrentPrcb->SchedulerAssist;
      if ( v46 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v47 = v46[6];
          v46[6] = v47 + 1;
          if ( v47 == -1 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
        break;
      v48 = CurrentPrcb->SchedulerAssist;
      if ( v48 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v49 = v48[6] - 1;
          v48[6] = v49;
          if ( !v49 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v80, (__int64)a2, a3, (__int64)SchedulerAssist);
      while ( Thread->ThreadLock );
    }
    if ( Thread->SchedulerAssistPriorityFloor != 32 )
    {
      SchedulerAssistPriorityFloor_low = SLOBYTE(Thread->SchedulerAssistPriorityFloor);
      v51 = Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low];
      if ( !v51 )
        KeBugCheckEx(0x157u, (ULONG_PTR)Thread, SchedulerAssistPriorityFloor_low, 2uLL, 0LL);
      v52 = v51 - 1;
      Thread->PriorityFloorCounts[SchedulerAssistPriorityFloor_low] = v52;
      if ( !v52 )
      {
        v53 = SchedulerAssistPriorityFloor_low;
        v54 = Thread->PriorityFloorSummary ^ (1 << SchedulerAssistPriorityFloor_low);
        Thread->PriorityFloorSummary = v54;
        if ( v54 < 1 << v53 )
        {
          Priority = Thread->Priority;
          if ( Priority < 16 )
          {
            v56 = Thread->BasePriority
                + (Thread->PriorityDecrement & 0xF)
                + ((unsigned __int8)Thread->PriorityDecrement >> 4);
            if ( v56 < Priority )
              KiSetPriorityThread(Thread, (__int64)&v82, v56);
          }
        }
      }
      Thread->SchedulerAssistPriorityFloor = 32;
    }
    KiAcquireThreadStateLock((__int64)Thread, v84, (volatile signed __int32 **)&v83);
    _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
    Thread->SchedulerAssist = 0LL;
    if ( (KiVelocityFlags & 0x400) != 0 )
      _interlockedbittestandreset(&Thread->Header.Lock, 0x16u);
    KiReleaseThreadStateLock(v57, v84[0], v83);
    KiReleaseThreadLockSafe((__int64)Thread);
    v58 = KeGetCurrentPrcb();
    KiReadyDeferredReadyList((__int64)v58, &v82);
    if ( CurrentIrql >= 2u )
    {
      if ( v58->NextThread && !v58->DpcRoutineActive )
        KiRequestSoftwareInterrupt(v58, 2);
      goto LABEL_144;
    }
    CurrentThread = (ULONG_PTR)v58->CurrentThread;
    if ( v58->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v58->CurrentThread, 0);
      v63 = KeGetCurrentPrcb();
      v81 = 0;
      while ( 1 )
      {
        v64 = v63->SchedulerAssist;
        if ( v64 )
        {
          if ( v63->NestingLevel <= 1u )
          {
            v65 = v64[6];
            v64[6] = v65 + 1;
            if ( v65 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v63);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v58->PrcbLock, 0LL) )
          break;
        v66 = v63->SchedulerAssist;
        if ( v66 )
        {
          if ( v63->NestingLevel <= 1u )
          {
            v67 = v66[6] - 1;
            v66[6] = v67;
            if ( !v67 )
              KiRemoveSystemWorkPriorityKick((__int64)v63);
          }
        }
        do
          KeYieldProcessorEx(&v81, v60, v61, v62);
        while ( v58->PrcbLock );
      }
      NextThread = (__int64)v58->NextThread;
      v58->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v58, CurrentThread, 0LL);
      _enable();
      v58->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v69 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v69 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)v58, CurrentThread, v69, v70);
      LOBYTE(v71) = CurrentIrql;
      if ( !(unsigned __int8)KiSwapContext(CurrentThread, NextThread, v71) )
        goto LABEL_128;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v72 = KeGetCurrentPrcb();
          v73 = v72->SchedulerAssist;
          v28 = (v73[5] & 0xFFFF0003) == 0;
          v73[5] &= 0xFFFF0003;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick((__int64)v72);
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
            v74 = KeGetCurrentPrcb();
            v75 = v74->SchedulerAssist;
            v76 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v28 = (v76 & v75[5]) == 0;
            v75[5] &= v76;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v74);
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
          v77 = KeGetCurrentPrcb();
          v78 = v77->SchedulerAssist;
          v28 = (v78[5] & 0xFFFF0003) == 0;
          v78[5] &= 0xFFFF0003;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick((__int64)v77);
        }
      }
    }
    __writecr8(1uLL);
    *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
    KiDeliverApc(0, 0, 0LL);
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
      v87 = 0;
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
          KeYieldProcessorEx(&v87, (__int64)a2, v7, (__int64)SchedulerAssist);
        while ( Thread->ThreadLock );
      }
      KiUpdateVpBackingThreadPriorityFromTopLevel((ULONG_PTR)Thread);
      KiReleaseThreadLockSafe((__int64)Thread);
      v14 = KeGetCurrentPrcb();
      LOBYTE(v4) = (unsigned __int8)KiReadyDeferredReadyList((__int64)v14, &v82);
      if ( v8 < 2u )
      {
        v15 = (ULONG_PTR)v14->CurrentThread;
        if ( v14->NextThread )
        {
          KiAbProcessContextSwitch((__int64)v14->CurrentThread, 0);
          v19 = KeGetCurrentPrcb();
          v88 = 0;
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
              KeYieldProcessorEx(&v88, v16, v17, v18);
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
          KiQueueReadyThread((__int64)v14, v15, v25, v26);
          LOBYTE(v27) = v8;
          v28 = (unsigned __int8)KiSwapContext(v15, v24, v27) == 0;
        }
        else
        {
          v28 = (*(_DWORD *)(v15 + 116) & 0x40) == 0;
        }
        if ( !v28 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              v29 = KeGetCurrentPrcb();
              v30 = v29->SchedulerAssist;
              v28 = (v30[5] & 0xFFFF0003) == 0;
              v30[5] &= 0xFFFF0003;
              if ( v28 )
                KiRemoveSystemWorkPriorityKick((__int64)v29);
            }
          }
          __writecr8(1uLL);
          *(_DWORD *)(v15 + 116) &= ~0x40u;
          KiDeliverApc(0, 0, 0LL);
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v31 = KeGetCurrentPrcb();
            v32 = v31->SchedulerAssist;
            v33 = ~(unsigned __int16)(-1LL << (v8 + 1));
            v28 = (v33 & v32[5]) == 0;
            v32[5] &= v33;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v31);
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
    v34 = Thread->SchedulerAssist;
    if ( (KiVelocityFlags & 0x10) != 0 && v34 )
    {
      v35 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v35 <= 0xFu )
      {
        v36 = KeGetCurrentPrcb()->SchedulerAssist;
        v36[5] |= (-1 << (v35 + 1)) & 4;
      }
      v37 = v85;
      _disable();
      v38 = v34[1];
      v39 = (v37 & 0x200) != 0;
      if ( v38 != (unsigned __int8)Thread->ThreadFlags2 && v38 < 5 )
      {
        KeSetThreadBamQosLevel((__int64)Thread, v38);
        KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), (__int64)Thread);
      }
      if ( v39 )
        _enable();
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v40 = KeGetCurrentIrql();
          if ( v40 <= 0xFu && v35 <= 0xFu && v40 >= 2u )
          {
            v41 = KeGetCurrentPrcb();
            v42 = v41->SchedulerAssist;
            v43 = ~(unsigned __int16)(-1LL << (v35 + 1));
            v28 = (v43 & v42[5]) == 0;
            v42[5] &= v43;
            if ( v28 )
              KiRemoveSystemWorkPriorityKick((__int64)v41);
          }
        }
      }
      v4 = v35;
      goto LABEL_73;
    }
  }
  return v4;
}
