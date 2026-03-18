/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x14051C4BC
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14051BF78 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402C9300 (KeCancelTimer.c)
 *     KiCallInterruptServiceRoutine @ 0x1402DE090 (KiCallInterruptServiceRoutine.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x140328800 (PerfInfoLogInterrupt.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  char v8; // r14
  bool v9; // r12
  _DWORD *SchedulerAssist; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v12; // al
  unsigned __int8 v13; // r14
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  char v20; // [rsp+31h] [rbp-CFh]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+48h] [rbp-B8h]
  struct _KTIMER v23; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v24[8]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v25[2]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v25, 0, sizeof(v25));
  Object = 0LL;
  v22 = 0LL;
  memset(v24, 0, sizeof(v24));
  memset(&v23, 0, sizeof(v23));
  v7 = *(unsigned __int8 *)(a1 + 93);
  v8 = 1;
  v20 = 0;
  v9 = 0;
  if ( (_BYTE)v7 )
  {
    if ( CurrentIrql != (_BYTE)v7 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v7);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v7 - 2) <= 0xDu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v6 = (unsigned int)(-1LL << (CurrentIrql + 1)) & ((unsigned int)(1LL << ((unsigned __int8)v7 + 1)) - 1) & 0xFFFFFFFC;
          SchedulerAssist[5] |= v6;
        }
      }
    }
    if ( ((*(_QWORD *)(a1 + 72) + 3LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v8 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v9 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      *((_QWORD *)&v22 + 1) = a1;
      *(_QWORD *)&v22 = (char *)&Object + 8;
      LOWORD(Object) = 1;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      v23.Header.WaitListHead.Blink = &v23.Header.WaitListHead;
      DWORD1(Object) = 0;
      v23.Header.WaitListHead.Flink = &v23.Header.WaitListHead;
      v24[3] = &KiPassiveIsrWatchdog;
      v24[4] = &Object;
      v23.Header.Type = 8;
      v23.Header.SignalState = 0;
      v23.DueTime.QuadPart = 0LL;
      v23.Period = 0;
      v23.Processor = 0;
      LODWORD(v24[0]) = 275;
      v24[7] = 0LL;
      v24[2] = 0LL;
      KiSetTimerEx((__int64)&v23, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v24);
      v20 = 1;
    }
    v8 = 1;
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v9 )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v25, 0x20004000u);
  v12 = KiCallInterruptServiceRoutine(a1, v8, v6);
  v13 = v12;
  if ( v9 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v12, (__int64)v25);
  if ( v20 && !KeCancelTimer(&v23) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( (_BYTE)v7 )
  {
    if ( CurrentIrql != (_BYTE)v7 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v16 = CurrentPrcb->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v18 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v18 )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v13 == 1;
}
