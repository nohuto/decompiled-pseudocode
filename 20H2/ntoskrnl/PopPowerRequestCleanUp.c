/*
 * XREFs of PopPowerRequestCleanUp @ 0x140361F40
 * Callers:
 *     PspExitThread @ 0x14068390C (PspExitThread.c)
 *     PoDeletePowerRequest @ 0x14071C080 (PoDeletePowerRequest.c)
 *     PopClosePowerRequestObject @ 0x14071CBB0 (PopClosePowerRequestObject.c)
 *     PopDeletePowerRequestObject @ 0x14071DCB0 (PopDeletePowerRequestObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     PoDestroyReasonContext @ 0x1403622D4 (PoDestroyReasonContext.c)
 *     PopPowerRequestExecuteCallbacks @ 0x140362AB8 (PopPowerRequestExecuteCallbacks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopNotifySessionUserPowerRequestDeleted @ 0x14071CFC0 (PopNotifySessionUserPowerRequestDeleted.c)
 *     PopProcessDisplayRequiredChange @ 0x14071CFF4 (PopProcessDisplayRequiredChange.c)
 *     PopPowerRequestDeleteEntryById @ 0x14071DCC8 (PopPowerRequestDeleteEntryById.c)
 *     PopDiagTracePowerRequestClose @ 0x14071DD0C (PopDiagTracePowerRequestClose.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x14071DD9C (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopStatsDeletePowerRequest @ 0x14071DE44 (PopStatsDeletePowerRequest.c)
 *     PopReleasePowerRequestPushLock @ 0x14071E110 (PopReleasePowerRequestPushLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x14071EC18 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14071EC54 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14072002C (PopUpdatePowerRequestProcessWakeCounter.c)
 */

LONG_PTR __fastcall PopPowerRequestCleanUp(unsigned int *Object)
{
  char v1; // si
  LONG_PTR result; // rax
  void *v3; // rdi
  unsigned int v4; // r15d
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int **v8; // rax
  PVOID *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r12
  unsigned int v13; // ecx
  int *v14; // r8
  __int64 v15; // rdx
  _DWORD *v16; // r9
  unsigned int v17; // eax
  unsigned __int64 OldIrql; // rbp
  int v19; // eax
  unsigned int **v20; // rdx
  PVOID *v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  bool v26; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_BYTE *)Object + 136);
  result = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = Object;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_QWORD *)Object )
    return result;
  LOBYTE(Object) = 1;
  PopAcquirePowerRequestPushLock(Object);
  v8 = *(unsigned int ***)v5;
  if ( !*(_QWORD *)v5 )
    return PopReleasePowerRequestPushLock(v7, v6);
  v9 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( v8[1] != v5 || *v9 != v5 )
    goto LABEL_50;
  *v9 = v8;
  v8[1] = (unsigned int *)v9;
  *(_QWORD *)v5 = 0LL;
  if ( v5[11] && (byte_140C23EF4 || v1) )
  {
    v5[11] = 0;
    if ( !v1 && (v5[6] & 8) == 0 )
      --dword_140C00300;
  }
  if ( (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(v5) )
    PopUpdatePowerRequestProcessWakeCounter(v5, 0LL);
  if ( *((_QWORD *)v5 + 15) )
  {
    v3 = (void *)*((_QWORD *)v5 + 15);
    ObfReferenceObjectWithTag(v3, 0x72506F50u);
    *((_QWORD *)v5 + 15) = 0LL;
  }
  if ( v1 )
    --PopSpecialPowerRequestObjectCount;
  else
    --PopPowerRequestObjectCount;
  PopPowerRequestDeleteEntryById(v5[7]);
  PopReleasePowerRequestPushLock(v11, v10);
  PopStatsDeletePowerRequest(v5);
  PopDiagTracePowerRequestClose(v5);
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v12 = *((_BYTE *)v5 + 78);
  if ( !v12 )
    goto LABEL_13;
  v20 = (unsigned int **)*((_QWORD *)v5 + 7);
  v21 = (PVOID *)*((_QWORD *)v5 + 8);
  if ( v20[1] != v5 + 14 || *v21 != v5 + 14 )
LABEL_50:
    __fastfail(3u);
  *v21 = v20;
  v20[1] = (unsigned int *)v21;
  *((_BYTE *)v5 + 78) = 0;
LABEL_13:
  v13 = 0;
  v14 = PopPowerRequestAttributes;
  v15 = 0LL;
  v16 = v5 + 8;
  do
  {
    v17 = v5[6];
    if ( !_bittest((const int *)&v17, v13) && *v16 )
    {
      v19 = *v14 - 1;
      *v14 = v19;
      if ( !v13 || v13 == 3 || !v19 )
        --*((_BYTE *)v5 + v15 + 72);
      if ( !v13 )
        v4 = 2;
    }
    ++v13;
    ++v15;
    ++v16;
    v14 += 4;
  }
  while ( v13 < 6 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  PopPowerRequestExecuteCallbacks(v5 + 18, v5[7], v5[4]);
  if ( v12 )
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  result = PoDestroyReasonContext(*((PVOID *)v5 + 10));
  if ( v5[22] )
    result = PopNotifySessionUserPowerRequestDeleted(v5[4], v5[7]);
  if ( !v1 )
    result = PopUmpoSendPowerRequestOverrideCleanup(v5);
  if ( v3 )
  {
    PopProcessDisplayRequiredChange(v3, v4);
    return ObfDereferenceObjectWithTag(v3, 0x72506F50u);
  }
  return result;
}
