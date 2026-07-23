/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1402A73F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     IopCancelWaitCompletionPacket @ 0x1402A7634 (IopCancelWaitCompletionPacket.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // ebx
  PADAPTER_OBJECT v4; // r15
  KSPIN_LOCK *p_Version; // rdi
  KIRQL v6; // al
  _DMA_OPERATIONS *DmaOperations; // rsi
  KIRQL v8; // r14
  KIRQL v9; // al
  PADAPTER_OBJECT v10; // r13
  KIRQL v11; // r14
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             WaitCompletionPacketHandle,
             1u,
             IopWaitCompletionPacketObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  v3 = result;
  if ( result >= 0 )
  {
    v4 = DmaAdapter;
    p_Version = (KSPIN_LOCK *)&DmaAdapter[6].Version;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&DmaAdapter[6].Version);
    DmaOperations = v4[5].DmaOperations;
    v8 = v6;
    if ( DmaOperations )
      ObfReferenceObjectWithTag(v4[5].DmaOperations, 0x746C6644u);
    KeReleaseSpinLock(p_Version, v8);
    if ( !DmaOperations )
    {
      v3 = -1073741536;
LABEL_22:
      HalPutDmaAdapter(DmaAdapter);
      return v3;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&DmaOperations->MapTransfer, &LockHandle);
    v9 = KeAcquireSpinLockRaiseToDpc(p_Version);
    v10 = DmaAdapter;
    v11 = v9;
    if ( LOBYTE(DmaAdapter[6].DmaOperations) )
    {
      if ( v4[5].DmaOperations == DmaOperations )
      {
        if ( (unsigned __int8)IopCancelWaitCompletionPacket(DmaAdapter) )
          goto LABEL_14;
        if ( LOBYTE(v10[6].DmaOperations) )
          v3 = 259;
      }
      else
      {
        v3 = -1073700861;
      }
    }
    else
    {
      v3 = -1073741536;
    }
    KeReleaseSpinLock(p_Version, v11);
LABEL_14:
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
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaOperations);
    goto LABEL_22;
  }
  return result;
}
