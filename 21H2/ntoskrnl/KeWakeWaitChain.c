/*
 * XREFs of KeWakeWaitChain @ 0x14035B8F4
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x140239810 (ExpConvertExclusiveToSharedLite.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14039C944 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14039CBAC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14039D010 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14039D3E4 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14063CF10 (ExpReleaseDisownedFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406913B4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiRemoveBoostThread @ 0x14035B110 (KiRemoveBoostThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(__int64 **a1, _QWORD *a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 *v4; // r10
  unsigned int v5; // ebx
  int v6; // edi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  __int64 *v10; // rax
  __int64 *v11; // rbx
  _DWORD *v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  _QWORD *v16; // rbx
  void **v17; // rcx
  char v18; // al
  bool v19; // zf
  char v20; // al
  int v21; // ecx
  __int64 v22; // rsi
  _QWORD *v23; // r15
  unsigned __int8 v24; // cl
  struct _KPRCB *v25; // r12
  _KTHREAD *CurrentThread; // r14
  __int64 v27; // r8
  _QWORD *v28; // [rsp+38h] [rbp-60h]
  __int64 *v29; // [rsp+40h] [rbp-58h]
  __int64 *v30; // [rsp+48h] [rbp-50h]
  unsigned __int8 v31; // [rsp+50h] [rbp-48h]
  char v33; // [rsp+B0h] [rbp+18h]
  int v34; // [rsp+B8h] [rbp+20h]

  v33 = a3;
  v4 = *a1;
  v5 = 0;
  v34 = 0;
  v6 = (int)a2;
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
    v10 = v4;
    do
    {
      v11 = v10;
      v12 = v10 + 3;
      v29 = (__int64 *)*v10;
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v10 + 6, (__int64)a2, a3, (__int64)SchedulerAssist);
      v13 = v11 + 4;
      *((_DWORD *)v11 + 7) = 1;
      v14 = (_QWORD *)v11[4];
      while ( v14 != v13 )
      {
        v15 = *v14;
        v16 = v14;
        v14 = (_QWORD *)v15;
        v28 = (_QWORD *)v15;
        v17 = (void **)v16[1];
        if ( *(_QWORD **)(v15 + 8) != v16 || *v17 != v16 )
LABEL_8:
          __fastfail(3u);
        *v17 = (void *)v15;
        *(_QWORD *)(v15 + 8) = v17;
        v18 = *((_BYTE *)v16 + 16);
        switch ( v18 )
        {
          case 1:
            if ( (unsigned __int8)KiTryUnwaitThread(
                                    (__int64)CurrentPrcb,
                                    (__int64)v16,
                                    *((unsigned __int16 *)v16 + 9),
                                    0LL) )
            {
              v19 = v12[1]-- == 1;
              if ( v19 )
                goto LABEL_13;
            }
            break;
          case 2:
            *((_BYTE *)v16 + 17) = 5;
            v22 = v16[3];
            *v16 = 0LL;
            v23 = (_QWORD *)(v22 + 8);
            v24 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              a2 = (_QWORD *)((-1LL << (v24 + 1)) & 4);
              a3 = (unsigned int)a2 | SchedulerAssist[5];
              SchedulerAssist[5] = a3;
            }
            v25 = KeGetCurrentPrcb();
            CurrentThread = v25->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              LOBYTE(v27) = KeIsThreadRunning(v25->CurrentThread);
              EtwTraceEnqueueWork(CurrentThread, v16, v27);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v22, (__int64)a2, a3, (__int64)SchedulerAssist);
            if ( (_QWORD *)*v23 == v23
              || *(_DWORD *)(v22 + 40) >= *(_DWORD *)(v22 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v22 && CurrentThread->WaitReason == 15
              || !KiWakeQueueWaiter((__int64)v25, v22, (__int64)v16, (__int64)SchedulerAssist) )
            {
              a3 = *(unsigned int *)(v22 + 4);
              *(_DWORD *)(v22 + 4) = a3 + 1;
              a2 = *(_QWORD **)(v22 + 32);
              if ( *a2 != v22 + 24 )
                goto LABEL_8;
              *v16 = v22 + 24;
              v16[1] = a2;
              *a2 = v16;
              *(_QWORD *)(v22 + 32) = v16;
              if ( !(_DWORD)a3 && (_QWORD *)*v23 != v23 )
                KiWakeOtherQueueWaiters((__int64)v25, v22);
            }
            else
            {
              *v16 = 0LL;
            }
            _InterlockedAnd((volatile signed __int32 *)v22, 0xFFFFFF7F);
            v19 = v12[1]-- == 1;
            if ( v19 )
              goto LABEL_13;
            v14 = v28;
            break;
          case 4:
            *((_BYTE *)v16 + 17) = 5;
            v12[1] = 0;
            KeInsertQueueDpc((PRKDPC)v16[3], v12, v16);
            break;
          default:
            KiTryUnwaitThread((__int64)CurrentPrcb, (__int64)v16, 256LL, 0LL);
            break;
        }
        v13 = v12 + 2;
      }
LABEL_13:
      _InterlockedAnd(v12, 0xFFFFFF7F);
      v10 = v29;
      v5 = ++v34;
    }
    while ( v29 != v30 );
    if ( (v33 & 1) != 0
      && (v20 = KiRemoveBoostThread(
                  (__int64)CurrentPrcb,
                  (__int64)CurrentPrcb->CurrentThread,
                  a3,
                  (__int64)SchedulerAssist),
          v6) )
    {
      v21 = 2;
      if ( v20 > (char)v6 )
        v6 = v20;
    }
    else
    {
      v21 = 1;
    }
    if ( (v33 & 2) != 0 && v21 == 1 )
      v6 = 1;
    KiExitDispatcher((__int64)CurrentPrcb, 0, v21, v6, v31);
    *a1 = 0LL;
  }
  return v5;
}
