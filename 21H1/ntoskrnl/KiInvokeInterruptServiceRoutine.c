/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x14051BE6C
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14051B928 (KiInterruptDispatchCommon.c)
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x1402EF640 (PerfInfoLogInterrupt.c)
 *     KiCallInterruptServiceRoutine @ 0x140327EB0 (KiCallInterruptServiceRoutine.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  char v10; // r14
  bool v11; // r12
  _DWORD *SchedulerAssist; // r10
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v14; // al
  unsigned __int8 v15; // r14
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char v25; // [rsp+31h] [rbp-CFh]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-B8h]
  struct _KTIMER v28; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v29[8]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v30[2]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v30, 0, sizeof(v30));
  Object = 0LL;
  v27 = 0LL;
  memset(v29, 0, sizeof(v29));
  memset(&v28, 0, sizeof(v28));
  v8 = 1LL;
  v9 = *(unsigned __int8 *)(a1 + 93);
  v10 = 1;
  v25 = 0;
  v11 = 0;
  if ( (_BYTE)v9 )
  {
    if ( CurrentIrql != (_BYTE)v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v9);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v9 - 2) <= 0xDu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          v8 = -1LL << (CurrentIrql + 1);
          v6 = (unsigned int)v8 & ((unsigned int)(1LL << ((unsigned __int8)v9 + 1)) - 1) & 0xFFFFFFFC;
          v7 = (unsigned int)v6 | SchedulerAssist[5];
          SchedulerAssist[5] = v7;
        }
      }
    }
    if ( ((*(_QWORD *)(a1 + 72) + 3LL) & 0xFFFFFFFFFFFFFFFDuLL) == 0 )
      v10 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v11 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      *((_QWORD *)&v27 + 1) = a1;
      *(_QWORD *)&v27 = (char *)&Object + 8;
      LOWORD(Object) = 1;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      v28.Header.WaitListHead.Blink = &v28.Header.WaitListHead;
      DWORD1(Object) = 0;
      v28.Header.WaitListHead.Flink = &v28.Header.WaitListHead;
      v29[3] = &KiPassiveIsrWatchdog;
      v29[4] = &Object;
      v28.Header.Type = 8;
      v28.Header.SignalState = 0;
      v28.DueTime.QuadPart = 0LL;
      v28.Period = 0;
      v28.Processor = 0;
      LODWORD(v29[0]) = 275;
      v29[7] = 0LL;
      v29[2] = 0LL;
      KiSetTimerEx((__int64)&v28, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)v29);
      v25 = 1;
    }
    v10 = 1;
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v11 )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v30, 0x20004000u);
  LOBYTE(v8) = v10;
  v14 = KiCallInterruptServiceRoutine(a1, v8, v6, v7);
  v15 = v14;
  if ( v11 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v14, (__int64)v30);
  if ( v25 && !KeCancelTimer(&v28) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( (_BYTE)v9 )
  {
    if ( CurrentIrql != (_BYTE)v9 )
    {
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v21, v22, v23);
  }
  return v15 == 1;
}
