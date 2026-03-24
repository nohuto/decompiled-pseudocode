/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x140202A60
 * Callers:
 *     <none>
 * Callees:
 *     IopCancelWaitCompletionPacket @ 0x140202CF0 (IopCancelWaitCompletionPacket.c)
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140229C10 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     Feature_2208782651__private_IsEnabledDeviceUsage @ 0x1403F1350 (Feature_2208782651__private_IsEnabledDeviceUsage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS result; // eax
  int v2; // ebx
  PADAPTER_OBJECT v3; // rdi
  KSPIN_LOCK *p_Version; // rsi
  KIRQL v5; // al
  _DMA_OPERATIONS *DmaOperations; // r15
  KIRQL v7; // r14
  KIRQL v8; // r14
  bool v9; // zf
  char v10; // al
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             a1,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  v2 = result;
  if ( result < 0 )
    return result;
  v3 = DmaAdapter;
  p_Version = (KSPIN_LOCK *)&DmaAdapter[6].Version;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DmaAdapter[6].Version);
  DmaOperations = v3[5].DmaOperations;
  v7 = v5;
  if ( DmaOperations )
    ObfReferenceObjectWithTag(v3[5].DmaOperations, 0x746C6644u);
  KeReleaseSpinLock(p_Version, v7);
  if ( !DmaOperations )
  {
    if ( (unsigned int)Feature_2208782651__private_IsEnabledDeviceUsage() )
      HalPutDmaAdapter(v3);
    return -1073741536;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&DmaOperations->MapTransfer, &LockHandle);
  v8 = KeAcquireSpinLockRaiseToDpc(p_Version);
  v9 = (unsigned int)Feature_2208782651__private_IsEnabledDeviceUsage() == 0;
  v10 = (char)v3[6].DmaOperations;
  if ( v9 )
  {
    if ( !v10 )
      goto LABEL_10;
  }
  else
  {
    if ( !v10 )
    {
LABEL_10:
      v2 = -1073741536;
      goto LABEL_17;
    }
    if ( v3[5].DmaOperations != DmaOperations )
    {
      v2 = -1073700861;
      goto LABEL_17;
    }
  }
  if ( (unsigned __int8)IopCancelWaitCompletionPacket(DmaAdapter) )
    goto LABEL_18;
  if ( LOBYTE(v3[6].DmaOperations) )
    v2 = 259;
LABEL_17:
  KeReleaseSpinLock(p_Version, v8);
LABEL_18:
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
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v9 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  HalPutDmaAdapter((PADAPTER_OBJECT)DmaOperations);
  HalPutDmaAdapter(DmaAdapter);
  return v2;
}
