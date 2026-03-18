/*
 * XREFs of KeDisableTimer2 @ 0x14033C330
 * Callers:
 *     ExDeleteTimer @ 0x14033C010 (ExDeleteTimer.c)
 *     PopPowerButtonWorkCallback @ 0x140576E40 (PopPowerButtonWorkCallback.c)
 *     ExpDeleteTimer2 @ 0x1406F4C80 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x1408EA580 (PopThermalZoneRemove.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140287E00 (KeAddProcessorAffinityEx.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1402E0E8C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1402E0EDC (KiAcquireTimer2LockUnlessDisabled.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402FB2A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030EAD8 (EtwTraceTimedEvent.c)
 *     KiUpdateTimer2Flags @ 0x14033C544 (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x14033C6F0 (KiRemoveTimer2.c)
 *     KeGenericProcessorCallback @ 0x14033CC78 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     KiTraceCancelTimer2 @ 0x140521FE4 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // r8
  __int64 SchedulerAssist; // r9
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // r14
  char v11; // r13
  unsigned __int8 CurrentIrql; // bl
  char updated; // si
  char v14; // r15
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int64 v25; // rbx
  char v26; // al
  char v27; // [rsp+30h] [rbp-D0h]
  bool v30; // [rsp+34h] [rbp-CCh]
  unsigned int v31; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+40h] [rbp-C0h]
  __int64 v33; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  _OWORD v37[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v38[44]; // [rsp+90h] [rbp-70h] BYREF

  memset(v38, 0, 0xA8uLL);
  v8 = 0LL;
  v31 = 32;
  v34 = 0LL;
  v9 = 0LL;
  v35 = 0LL;
  v10 = 0LL;
  v36 = 0LL;
  memset(v37, 0, sizeof(v37));
  v32 = 0LL;
  v27 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v11 = 1;
    v32 = *(_QWORD *)(a1 + 96);
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  if ( a4 )
  {
    v6 = *a4;
    SchedulerAssist = a4[1];
    if ( v11 && v6 )
    {
      LOBYTE(v36) = 8;
      v34 = v6;
      v8 = 0x7E35C6C7F3DD7277LL
         * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(SchedulerAssist ^ KiWaitAlways), KiWaitNever));
      v35 = v8;
    }
    v9 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v6 ^ KiWaitAlways), KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(SchedulerAssist ^ KiWaitAlways), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    v8 = (-1LL << (CurrentIrql + 1)) & 4;
    v6 = (unsigned int)v8 | *(_DWORD *)(SchedulerAssist + 20);
    *(_DWORD *)(SchedulerAssist + 20) = v6;
  }
  v30 = KiAcquireTimer2LockUnlessDisabled(a1, v8, v6, SchedulerAssist);
  if ( !v30 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v9;
      *(_QWORD *)(a1 + 120) = v10;
    }
    if ( !a2 )
      goto LABEL_11;
    if ( KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_11:
        if ( v11 )
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v37, 0x40020000u);
        updated = KiUpdateTimer2Flags(a1, v31);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v16 = KeGetCurrentIrql();
            if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v18 = CurrentPrcb->SchedulerAssist;
              v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v20 = (v19 & v18[5]) == 0;
              v18[5] &= v19;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v14 = a3;
        if ( a3 && !updated )
        {
          v38[0] = 1310721;
          memset(&v38[1], 0, 0xA4uLL);
          KeAddProcessorAffinityEx(v38, KiClockTimerOwner);
          KeGenericProcessorCallback(v38, xHalTimerWatchdogStop, 0LL, 2LL);
        }
        goto LABEL_17;
      }
      v31 = 36;
    }
    v27 = 1;
    goto LABEL_11;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v21 = KeGetCurrentIrql();
      if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v22);
      }
    }
  }
  __writecr8(CurrentIrql);
  updated = 0;
  v14 = a3;
LABEL_17:
  if ( v11 && !v30 )
  {
    v25 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v32 ^ KiWaitNever, KiWaitNever));
    if ( v27 )
      KiTraceCancelTimer2(a1, v25);
    v26 = v36;
    v33 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v25 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
    if ( a2 )
    {
      v26 = v36 | 1;
      LOBYTE(v36) = v36 | 1;
    }
    if ( v14 )
    {
      v26 |= 2u;
      LOBYTE(v36) = v26;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)&v33, 32, 0x400E02u, (__int64)v37);
    }
    else
    {
      LOBYTE(v36) = v26 | 4;
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)&v33, 32, 0x602u, (__int64)v37);
    }
  }
  return v27;
}
