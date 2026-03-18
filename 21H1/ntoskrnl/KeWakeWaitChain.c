/*
 * XREFs of KeWakeWaitChain @ 0x140308D4C
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x140303A8C (ExpConvertExclusiveToSharedLite.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038AE00 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038B04C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038B3E0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038C690 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405AEE10 (ExpReleaseDisownedFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405CBC04 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(__int64 **a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 *v4; // r10
  unsigned int v5; // esi
  unsigned int v6; // edi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r15
  volatile signed __int32 *v10; // rax
  volatile signed __int32 *v11; // rbp
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  char v17; // al
  bool v18; // zf
  char v19; // al
  unsigned int v20; // ecx
  __int64 v21; // rsi
  _QWORD *v22; // r12
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r13
  _KTHREAD *CurrentThread; // r14
  __int64 v26; // r8
  _QWORD *v27; // [rsp+38h] [rbp-60h]
  volatile signed __int32 *v28; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v29; // [rsp+48h] [rbp-50h]
  __int64 *v30; // [rsp+50h] [rbp-48h]
  unsigned __int8 v31; // [rsp+58h] [rbp-40h]
  char v33; // [rsp+B0h] [rbp+18h]
  int v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v4 = *a1;
  v5 = 0;
  v34 = 0;
  v6 = (unsigned int)a2;
  v30 = *a1;
  if ( *a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v31 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (_QWORD *)((-1LL << (CurrentIrql + 1)) & 4);
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = (volatile signed __int32 *)v4;
    do
    {
      v11 = v10;
      v29 = *(volatile signed __int32 **)v10;
      v28 = v10 + 6;
      KiAcquireKobjectLockSafe(v10 + 6, (__int64)a2, a3, (__int64)SchedulerAssist);
      v12 = v11 + 8;
      *((_DWORD *)v11 + 7) = 1;
      v13 = (_QWORD *)*((_QWORD *)v11 + 4);
      while ( v13 != v12 )
      {
        v14 = (_QWORD *)*v13;
        v15 = (__int64)v13;
        v13 = v14;
        v27 = v14;
        v16 = *(_QWORD **)(v15 + 8);
        if ( v14[1] != v15 || *v16 != v15 )
LABEL_8:
          __fastfail(3u);
        *v16 = v14;
        v14[1] = v16;
        v17 = *(_BYTE *)(v15 + 16);
        if ( v17 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), 0LL) )
          {
            v18 = (*((_DWORD *)v11 + 7))-- == 1;
            if ( v18 )
              break;
          }
        }
        else if ( v17 == 2 )
        {
          *(_BYTE *)(v15 + 17) = 5;
          v21 = *(_QWORD *)(v15 + 24);
          *(_QWORD *)v15 = 0LL;
          v22 = (_QWORD *)(v21 + 8);
          v23 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            a2 = (_QWORD *)((-1LL << (v23 + 1)) & 4);
            a3 = (unsigned int)a2 | SchedulerAssist[5];
            SchedulerAssist[5] = a3;
          }
          v24 = KeGetCurrentPrcb();
          CurrentThread = v24->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v26) = KeIsThreadRunning(v24->CurrentThread, a2);
            EtwTraceEnqueueWork(CurrentThread, v15, v26);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v21, (__int64)a2, a3, (__int64)SchedulerAssist);
          if ( (_QWORD *)*v22 == v22
            || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v24, v21, v15) )
          {
            a3 = *(unsigned int *)(v21 + 4);
            *(_DWORD *)(v21 + 4) = a3 + 1;
            a2 = *(_QWORD **)(v21 + 32);
            if ( *a2 != v21 + 24 )
              goto LABEL_8;
            *(_QWORD *)v15 = v21 + 24;
            *(_QWORD *)(v15 + 8) = a2;
            *a2 = v15;
            *(_QWORD *)(v21 + 32) = v15;
            if ( !(_DWORD)a3 && (_QWORD *)*v22 != v22 )
              KiWakeOtherQueueWaiters((__int64)v24, v21, a3, (__int64)SchedulerAssist);
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v18 = (*((_DWORD *)v11 + 7))-- == 1;
          if ( v18 )
            break;
          v13 = v27;
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v15, 256LL, 0LL);
        }
        v12 = v11 + 8;
      }
      _InterlockedAnd(v28, 0xFFFFFF7F);
      v10 = v29;
      v5 = ++v34;
    }
    while ( v29 != (volatile signed __int32 *)v30 );
    if ( (v33 & 1) != 0
      && (v19 = KiRemoveBoostThread(
                  (__int64)CurrentPrcb,
                  (__int64)CurrentPrcb->CurrentThread,
                  a3,
                  (__int64)SchedulerAssist),
          v6) )
    {
      v20 = 2;
      if ( v19 > (char)v6 )
        v6 = v19;
    }
    else
    {
      v20 = 1;
    }
    if ( (v33 & 2) != 0 && v20 == 1 )
      v6 = 1;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, v20, v6, v31);
    *a1 = 0LL;
  }
  return v5;
}
