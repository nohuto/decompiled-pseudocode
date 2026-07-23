/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x140521BAC
 * Callers:
 *     KiInterruptDispatchCommon @ 0x140521668 (KiInterruptDispatchCommon.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x140213730 (PerfInfoLogInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140268950 (KiCallInterruptServiceRoutine.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  unsigned __int64 v6; // rsi
  char v7; // r14
  bool v8; // r12
  _DWORD *SchedulerAssist; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v11; // al
  unsigned __int8 v12; // r14
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  char v22; // [rsp+31h] [rbp-CFh]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v24; // [rsp+48h] [rbp-B8h]
  struct _KTIMER v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[8]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v27[2]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v27, 0, sizeof(v27));
  Object = 0LL;
  v24 = 0LL;
  memset(v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  v6 = *(unsigned __int8 *)(a1 + 93);
  v7 = 1;
  v22 = 0;
  v8 = 0;
  if ( (_BYTE)v6 )
  {
    if ( CurrentIrql != (_BYTE)v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v6 - 2) <= 0xDu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v6 + 1)) - 1) & 0xFFFFFFFC;
        }
      }
    }
    if ( ((*(_QWORD *)(a1 + 72) + 3LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v7 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v8 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      *((_QWORD *)&v24 + 1) = a1;
      *(_QWORD *)&v24 = (char *)&Object + 8;
      LOWORD(Object) = 1;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      v25.Header.WaitListHead.Blink = &v25.Header.WaitListHead;
      DWORD1(Object) = 0;
      v25.Header.WaitListHead.Flink = &v25.Header.WaitListHead;
      v26[3] = &KiPassiveIsrWatchdog;
      v26[4] = &Object;
      v25.Header.Type = 8;
      v25.Header.SignalState = 0;
      v25.DueTime.QuadPart = 0LL;
      v25.Period = 0;
      v25.Processor = 0;
      LODWORD(v26[0]) = 275;
      v26[7] = 0LL;
      v26[2] = 0LL;
      KiSetTimerEx((__int64)&v25, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v26);
      v22 = 1;
    }
    v7 = 1;
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v27, 0x20004000u);
  v11 = KiCallInterruptServiceRoutine(a1, v7);
  v12 = v11;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v11, (__int64)v27);
  if ( v22 && !KeCancelTimer(&v25) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( (_BYTE)v6 )
  {
    if ( CurrentIrql != (_BYTE)v6 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
  }
  return v12 == 1;
}
