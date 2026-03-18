/*
 * XREFs of KeDisableTimer2 @ 0x1402755A0
 * Callers:
 *     ExDeleteTimer @ 0x140275280 (ExDeleteTimer.c)
 *     PopPowerButtonWorkCallback @ 0x140573410 (PopPowerButtonWorkCallback.c)
 *     ExpDeleteTimer2 @ 0x140649A00 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x1408E4970 (PopThermalZoneRemove.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1402757B4 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14027F15C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14027F1AC (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiRemoveTimer2 @ 0x14027F880 (KiRemoveTimer2.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14033BE50 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiTraceCancelTimer2 @ 0x14051E614 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // r15
  __int64 v7; // r14
  char v8; // r13
  unsigned __int8 CurrentIrql; // bl
  unsigned int v10; // esi
  char updated; // si
  char v12; // r15
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  unsigned __int64 v26; // rbx
  char v27; // al
  char v28; // [rsp+30h] [rbp-D0h]
  char v31; // [rsp+34h] [rbp-CCh]
  unsigned int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  _OWORD v38[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v39[44]; // [rsp+90h] [rbp-70h] BYREF

  memset(v39, 0, 0xA8uLL);
  v32 = 32;
  v35 = 0LL;
  v6 = 0LL;
  v36 = 0LL;
  v7 = 0LL;
  v37 = 0LL;
  memset(v38, 0, sizeof(v38));
  v33 = 0LL;
  v28 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v8 = 1;
    v33 = *(_QWORD *)(a1 + 96);
    v35 = 0LL;
    v36 = 0LL;
    v37 = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
  {
    v14 = *a4;
    v15 = a4[1];
    if ( v8 && v14 )
    {
      LOBYTE(v37) = 8;
      v35 = v14;
      v36 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v15 ^ KiWaitAlways), KiWaitNever));
    }
    v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v14 ^ KiWaitAlways), KiWaitNever);
    v7 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v15 ^ KiWaitAlways), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v31 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( !v31 )
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
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_11:
        v10 = 6;
LABEL_12:
        if ( v8 )
          EtwGetKernelTraceTimestamp(v38, 1073872896LL);
        updated = KiUpdateTimer2Flags(a1, v32, v10);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v17 = KeGetCurrentIrql();
            if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v19 = CurrentPrcb->SchedulerAssist;
              v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v21 = (v20 & v19[5]) == 0;
              v19[5] &= v20;
              if ( v21 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v12 = a3;
        if ( a3 && !updated )
        {
          v39[0] = 1310721;
          memset(&v39[1], 0, 0xA4uLL);
          KeAddProcessorAffinityEx(v39, KiClockTimerOwner);
          KeGenericProcessorCallback(v39, xHalTimerWatchdogStop, 0LL, 2LL);
        }
        goto LABEL_18;
      }
      v32 = 36;
    }
    v10 = 4;
    v28 = 1;
    goto LABEL_12;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  updated = 0;
  v12 = a3;
LABEL_18:
  if ( v8 && !v31 )
  {
    v26 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v33 ^ KiWaitNever, KiWaitNever));
    if ( v28 )
      KiTraceCancelTimer2(a1, v26);
    v27 = v37;
    v34 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v26 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
    if ( a2 )
    {
      v27 = v37 | 1;
      LOBYTE(v37) = v37 | 1;
    }
    if ( v12 )
    {
      v27 |= 2u;
      LOBYTE(v37) = v27;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)&v34, 32, 4197890, (__int64)v38);
    }
    else
    {
      LOBYTE(v37) = v27 | 4;
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)&v34, 32, 1538, (__int64)v38);
    }
  }
  return v28;
}
