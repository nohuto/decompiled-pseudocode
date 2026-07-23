/*
 * XREFs of KeInsertPriQueue @ 0x1402E07C0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402E061C (ExpTryQueueWorkItem.c)
 * Callees:
 *     KiWakePriQueueWaiter @ 0x14021CD7C (KiWakePriQueueWaiter.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 */

__int64 __fastcall KeInsertPriQueue(__int64 a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 v5; // r12
  _QWORD *v6; // rdi
  unsigned __int8 v8; // r14
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rbx
  unsigned int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // ecx
  unsigned int v16; // ecx
  _QWORD *v17; // rbx
  int v18; // ecx
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rcx
  _QWORD *v22; // rax

  v5 = a3;
  v6 = (_QWORD *)(a1 + 8);
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  KiAcquireKobjectLockSafe(a1);
  if ( (_QWORD *)*v6 != v6
    && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)a1 || CurrentThread->WaitReason != 15) )
  {
    v12 = 0;
    v13 = a1 + 664;
    v14 = 32LL;
    while ( 1 )
    {
      v15 = *(_DWORD *)(v13 - 4);
      v13 -= 4LL;
      v12 += v15;
      --v14;
      v16 = *(_DWORD *)(a1 + 664);
      if ( v12 >= v16 )
        break;
      if ( v14 <= v5 )
      {
        if ( v12 >= v16 )
          break;
        v17 = (_QWORD *)a2;
        v8 = KiWakePriQueueWaiter((__int64)CurrentPrcb, a1, a2, v5);
        if ( !v8 )
          goto LABEL_14;
        goto LABEL_9;
      }
    }
  }
  v17 = (_QWORD *)a2;
LABEL_14:
  if ( (a5 & 2) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    v21 = 16 * v5 + a1 + 24;
    v22 = *(_QWORD **)(v21 + 8);
    if ( *v22 != v21 )
      __fastfail(3u);
    *v17 = v21;
    v17[1] = v22;
    *v22 = v17;
    *(_QWORD *)(v21 + 8) = v17;
  }
LABEL_9:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (a5 & 1) != 0 )
    v18 = 3;
  else
    v18 = 0;
  KiExitDispatcher((_DWORD)CurrentPrcb, v18, 1, 0, CurrentIrql);
  return v8;
}
