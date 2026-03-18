/*
 * XREFs of IopTimerDispatch @ 0x1404FB690
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x1402FF550 (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _local_unwind @ 0x1403CD750 (_local_unwind.c)
 *     RtlpComputeEpilogueOffset @ 0x1403E7724 (RtlpComputeEpilogueOffset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     KiCustomAccessRoutine1 @ 0x1403FFFE0 (KiCustomAccessRoutine1.c)
 *     memset @ 0x140408F80 (memset.c)
 */

unsigned __int64 __fastcall IopTimerDispatch(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  int v8; // r14d
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r15d
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v15; // r12
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  _DWORD v19[76]; // [rsp+0h] [rbp-1F8h] BYREF
  unsigned int *v20; // [rsp+130h] [rbp-C8h]
  _WORD v21[45]; // [rsp+140h] [rbp-B8h] BYREF
  _DWORD *v22; // [rsp+1A0h] [rbp-58h]
  _OWORD v23[2]; // [rsp+1A8h] [rbp-50h] BYREF

  v22 = v19;
  v20 = a2;
  v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v19[39] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  memset(v21, 0, sizeof(v21));
  result = ((__int64)a2 >> 47) + 1;
  if ( result > 1 )
  {
    v19[16] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)&v21[41] = a3;
    *(_QWORD *)&v21[5] = __ROL8__(a2, a3);
    *(_QWORD *)&v21[33] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    result = KiCustomAccessRoutine1(a2);
  }
  if ( *a2 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v13 = *a2;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v13; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        v15 = i + 1;
        if ( v8 )
        {
          memset(v23, 0, sizeof(v23));
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v23, 1082130432LL, v11, v12);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v15->Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(0xF46u, 0x40800000u, (__int64)&i[1], 8, 0x400A02u, (__int64)v23);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v15->Flink)(i[2].Flink, i[1].Blink);
        }
        --v13;
      }
    }
    KxReleaseSpinLock(&IopTimerLock);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
  }
  return result;
}
