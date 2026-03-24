/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x14052196C
 * Callers:
 *     KiInterruptDispatchCommon @ 0x140521428 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     KiCallInterruptServiceRoutine @ 0x14027A9B0 (KiCallInterruptServiceRoutine.c)
 *     EtwGetKernelTraceTimestamp @ 0x14029B060 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x14029BD60 (PerfInfoLogInterrupt.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
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
  char v19; // [rsp+31h] [rbp-CFh]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-B8h]
  struct _KTIMER v22; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v23[8]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v24[2]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v24, 0, sizeof(v24));
  Object = 0LL;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  memset(&v22, 0, sizeof(v22));
  v6 = *(unsigned __int8 *)(a1 + 93);
  v7 = 1;
  v19 = 0;
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
      *((_QWORD *)&v21 + 1) = a1;
      *(_QWORD *)&v21 = (char *)&Object + 8;
      LOWORD(Object) = 1;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      v22.Header.WaitListHead.Blink = &v22.Header.WaitListHead;
      DWORD1(Object) = 0;
      v22.Header.WaitListHead.Flink = &v22.Header.WaitListHead;
      v23[3] = &KiPassiveIsrWatchdog;
      v23[4] = &Object;
      v22.Header.Type = 8;
      v22.Header.SignalState = 0;
      v22.DueTime.QuadPart = 0LL;
      v22.Period = 0;
      v22.Processor = 0;
      LODWORD(v23[0]) = 275;
      v23[7] = 0LL;
      v23[2] = 0LL;
      KiSetTimerEx((__int64)&v22, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v23);
      v19 = 1;
    }
    v7 = 1;
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v24, 0x20004000u);
  v11 = KiCallInterruptServiceRoutine(a1, v7);
  v12 = v11;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v11, (__int64)v24);
  if ( v19 && !KeCancelTimer(&v22) )
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v12 == 1;
}
