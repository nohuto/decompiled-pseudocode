/*
 * XREFs of KeWakeWaitChain @ 0x14023896C
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1402303FC (ExpConvertExclusiveToSharedLite.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038E4F0 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038E73C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038EAD0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038FD10 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405B4CC0 (ExpReleaseDisownedFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405D65C0 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(_QWORD *a1, int a2, char a3)
{
  _QWORD *v3; // r10
  unsigned int v4; // esi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r15
  _QWORD *v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  char v18; // al
  int v19; // ecx
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rsi
  _QWORD *v22; // r12
  unsigned __int8 v23; // cl
  _DWORD *v24; // r9
  struct _KPRCB *v25; // r13
  _KTHREAD *CurrentThread; // r14
  __int64 v27; // r8
  int v28; // r8d
  _QWORD *v29; // rdx
  _QWORD *v30; // [rsp+38h] [rbp-60h]
  volatile signed __int32 *v31; // [rsp+40h] [rbp-58h]
  _QWORD *v32; // [rsp+48h] [rbp-50h]
  _QWORD *v33; // [rsp+50h] [rbp-48h]
  char v34; // [rsp+58h] [rbp-40h]
  int v37; // [rsp+B8h] [rbp+20h]

  v3 = (_QWORD *)*a1;
  v4 = 0;
  v37 = 0;
  v33 = (_QWORD *)*a1;
  if ( *a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v34 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = v3;
    do
    {
      v10 = v9;
      v32 = (_QWORD *)*v9;
      v31 = (volatile signed __int32 *)(v9 + 3);
      KiAcquireKobjectLockSafe(v9 + 3);
      v11 = v10 + 4;
      *((_DWORD *)v10 + 7) = 1;
      v12 = (_QWORD *)v10[4];
      while ( v12 != v11 )
      {
        v13 = (_QWORD *)*v12;
        v14 = v12;
        v12 = v13;
        v30 = v13;
        v15 = (_QWORD *)v14[1];
        if ( (_QWORD *)v13[1] != v14 || (_QWORD *)*v15 != v14 )
LABEL_8:
          __fastfail(3u);
        *v15 = v13;
        v13[1] = v15;
        v16 = *((_BYTE *)v14 + 16);
        if ( v16 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *((unsigned __int16 *)v14 + 9), 0LL) )
          {
            v17 = (*((_DWORD *)v10 + 7))-- == 1;
            if ( v17 )
              break;
          }
        }
        else if ( v16 == 2 )
        {
          *((_BYTE *)v14 + 17) = 5;
          v21 = v14[3];
          *v14 = 0LL;
          v22 = (_QWORD *)(v21 + 8);
          v23 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v23 <= 0xFu )
          {
            v24 = KeGetCurrentPrcb()->SchedulerAssist;
            v24[5] |= (-1 << (v23 + 1)) & 4;
          }
          v25 = KeGetCurrentPrcb();
          CurrentThread = v25->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v27) = KeIsThreadRunning(v25->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v14, v27);
          }
          KiAcquireKobjectLockSafe(v21);
          if ( (_QWORD *)*v22 == v22
            || *(_DWORD *)(v21 + 40) >= *(_DWORD *)(v21 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v21 && CurrentThread->WaitReason == 15
            || !(unsigned __int8)KiWakeQueueWaiter(v25, v21, v14) )
          {
            v28 = *(_DWORD *)(v21 + 4);
            *(_DWORD *)(v21 + 4) = v28 + 1;
            v29 = *(_QWORD **)(v21 + 32);
            if ( *v29 != v21 + 24 )
              goto LABEL_8;
            *v14 = v21 + 24;
            v14[1] = v29;
            *v29 = v14;
            *(_QWORD *)(v21 + 32) = v14;
            if ( !v28 && (_QWORD *)*v22 != v22 )
              KiWakeOtherQueueWaiters(v25, v21);
          }
          _InterlockedAnd((volatile signed __int32 *)v21, 0xFFFFFF7F);
          v17 = (*((_DWORD *)v10 + 7))-- == 1;
          if ( v17 )
            break;
          v12 = v30;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
        }
        v11 = v10 + 4;
      }
      _InterlockedAnd(v31, 0xFFFFFF7F);
      v9 = v32;
      v4 = ++v37;
    }
    while ( v32 != v33 );
    if ( (a3 & 1) != 0 && (v18 = KiRemoveBoostThread(CurrentPrcb, CurrentPrcb->CurrentThread), a2) )
    {
      v19 = 2;
      if ( v18 > (char)a2 )
        a2 = v18;
    }
    else
    {
      v19 = 1;
    }
    if ( (a3 & 2) != 0 && v19 == 1 )
      a2 = 1;
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, v19, a2, v34);
    *a1 = 0LL;
  }
  return v4;
}
