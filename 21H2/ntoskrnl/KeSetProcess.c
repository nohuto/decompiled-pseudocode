/*
 * XREFs of KeSetProcess @ 0x1402095F0
 * Callers:
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeSetProcess(_QWORD *SystemArgument1)
{
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int16 *v4; // r14
  unsigned __int16 *v5; // r15
  unsigned __int16 *v7; // rbx
  char v8; // al
  __int64 v9; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdi
  _QWORD *v12; // r12
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // r13
  _KTHREAD *CurrentThread; // rbp
  int v16; // ecx
  _QWORD *v17; // rdx
  _DWORD *v18; // r9
  __int64 v19; // r8
  unsigned int v20; // [rsp+70h] [rbp+8h]
  struct _KPRCB *v21; // [rsp+78h] [rbp+10h]
  char v22; // [rsp+80h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  v22 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = CurrentPrcb;
  KiAcquireKobjectLockSafe(SystemArgument1);
  v4 = (unsigned __int16 *)(SystemArgument1 + 1);
  v5 = (unsigned __int16 *)SystemArgument1[1];
  v20 = *((_DWORD *)SystemArgument1 + 1);
  *((_DWORD *)SystemArgument1 + 1) = 1;
  while ( v5 != v4 )
  {
    v7 = v5;
    v5 = *(unsigned __int16 **)v5;
    v8 = *((_BYTE *)v7 + 16);
    switch ( v8 )
    {
      case 1:
        v9 = v7[9];
        goto LABEL_7;
      case 2:
        *((_BYTE *)v7 + 17) = 5;
        v11 = *((_QWORD *)v7 + 3);
        *(_QWORD *)v7 = 0LL;
        v12 = (_QWORD *)(v11 + 8);
        v13 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 <= 0xFu )
        {
          v18 = KeGetCurrentPrcb()->SchedulerAssist;
          v18[5] |= (-1 << (v13 + 1)) & 4;
        }
        v14 = KeGetCurrentPrcb();
        CurrentThread = v14->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v19) = KeIsThreadRunning(v14->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v7, v19);
        }
        KiAcquireKobjectLockSafe(v11);
        if ( (_QWORD *)*v12 == v12
          || *(_DWORD *)(v11 + 40) >= *(_DWORD *)(v11 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v11 && CurrentThread->WaitReason == 15
          || !(unsigned __int8)KiWakeQueueWaiter(v14, v11, v7) )
        {
          v16 = *(_DWORD *)(v11 + 4);
          *(_DWORD *)(v11 + 4) = v16 + 1;
          v17 = *(_QWORD **)(v11 + 32);
          if ( *v17 != v11 + 24 )
            __fastfail(3u);
          *(_QWORD *)v7 = v11 + 24;
          *((_QWORD *)v7 + 1) = v17;
          *v17 = v7;
          *(_QWORD *)(v11 + 32) = v7;
          if ( !v16 && (_QWORD *)*v12 != v12 )
            KiWakeOtherQueueWaiters(v14, v11);
        }
        else
        {
          *(_QWORD *)v7 = 0LL;
        }
        _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
        CurrentPrcb = v21;
        break;
      case 4:
        *((_BYTE *)v7 + 17) = 5;
        *((_DWORD *)SystemArgument1 + 1) = 0;
        KeInsertQueueDpc(*((PRKDPC *)v7 + 3), SystemArgument1, v7);
        break;
      default:
        v9 = 256LL;
LABEL_7:
        KiTryUnwaitThread(CurrentPrcb, v7, v9, 0LL);
        break;
    }
  }
  SystemArgument1[2] = SystemArgument1 + 1;
  *(_QWORD *)v4 = v4;
  _InterlockedAnd((volatile signed __int32 *)SystemArgument1, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v22);
  return v20;
}
