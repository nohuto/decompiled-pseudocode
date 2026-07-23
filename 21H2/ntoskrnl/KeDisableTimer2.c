/*
 * XREFs of KeDisableTimer2 @ 0x14026DE70
 * Callers:
 *     ExDeleteTimer @ 0x14026DB50 (ExDeleteTimer.c)
 *     PopPowerButtonWorkCallback @ 0x140578A90 (PopPowerButtonWorkCallback.c)
 *     ExpDeleteTimer2 @ 0x14066AD50 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x1408E7EE0 (PopThermalZoneRemove.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14022D15C (EtwTraceTimedEvent.c)
 *     KiUpdateTimer2Flags @ 0x14026E084 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14026E120 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14026E14C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KiRemoveTimer2 @ 0x1402EFC30 (KiRemoveTimer2.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiTraceCancelTimer2 @ 0x140523D04 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // r15
  __int64 v7; // r14
  char v8; // r13
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rdx
  unsigned int v11; // esi
  char updated; // si
  char v13; // r15
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  unsigned __int64 v27; // rbx
  char v28; // al
  char v29; // [rsp+30h] [rbp-D0h]
  char v32; // [rsp+34h] [rbp-CCh]
  unsigned int v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  _OWORD v39[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v40[44]; // [rsp+90h] [rbp-70h] BYREF

  memset(v40, 0, 0xA8uLL);
  v33 = 32;
  v36 = 0LL;
  v6 = 0LL;
  v37 = 0LL;
  v7 = 0LL;
  v38 = 0LL;
  memset(v39, 0, sizeof(v39));
  v34 = 0LL;
  v29 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v8 = 1;
    v34 = *(_QWORD *)(a1 + 96);
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
  {
    v15 = *a4;
    v16 = a4[1];
    if ( v8 && v15 )
    {
      LOBYTE(v38) = 8;
      v36 = v15;
      v37 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever));
    }
    v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v15 ^ KiWaitAlways), KiWaitNever);
    v7 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v32 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( !v32 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v6;
      *(_QWORD *)(a1 + 120) = v7;
    }
    if ( !a2 )
      goto LABEL_11;
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1, v10);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_11:
        v11 = 6;
LABEL_12:
        if ( v8 )
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v39, 0x40020000u);
        updated = KiUpdateTimer2Flags(a1, v33, v11);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v18 = KeGetCurrentIrql();
            if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v20 = CurrentPrcb->SchedulerAssist;
              v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v22 = (v21 & v20[5]) == 0;
              v20[5] &= v21;
              if ( v22 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v13 = a3;
        if ( a3 && !updated )
        {
          v40[0] = 1310721;
          memset(&v40[1], 0, 0xA4uLL);
          KeAddProcessorAffinityEx(v40, (unsigned int)KiClockTimerOwner);
          KeGenericProcessorCallback(v40, xHalTimerWatchdogStop, 0LL, 2LL);
        }
        goto LABEL_18;
      }
      v33 = 36;
    }
    v11 = 4;
    v29 = 1;
    goto LABEL_12;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = v24->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v26 & v25[5]) == 0;
        v25[5] &= v26;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
    }
  }
  __writecr8(CurrentIrql);
  updated = 0;
  v13 = a3;
LABEL_18:
  if ( v8 && !v32 )
  {
    v27 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v34 ^ KiWaitNever, KiWaitNever));
    if ( v29 )
      KiTraceCancelTimer2(a1, v27);
    v28 = v38;
    v35 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v27 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
    if ( a2 )
    {
      v28 = v38 | 1;
      LOBYTE(v38) = v38 | 1;
    }
    if ( v13 )
    {
      v28 |= 2u;
      LOBYTE(v38) = v28;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)&v35, 32, 4197890, (__int64)v39);
    }
    else
    {
      LOBYTE(v38) = v28 | 4;
      EtwTraceTimedEvent(3947, 0x40020000u, (__int64)&v35, 32, 1538, (__int64)v39);
    }
  }
  return v29;
}
