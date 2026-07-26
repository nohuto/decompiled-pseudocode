/*
 * XREFs of NdisAllocateRWLock @ 0x1C002D3E0
 * Callers:
 *     ?EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z @ 0x1C002FE00 (-EthCreateFilter@@YAEIPEBEPEAPEAU_X_FILTER@@@Z.c)
 *     ?nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z @ 0x1C008E990 (-nullCreateFilter@@YAEPEAPEAU_X_FILTER@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01431F0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     ndisAllocateFreeSlotFromDescriptor @ 0x1C002D4F0 (ndisAllocateFreeSlotFromDescriptor.c)
 *     ndisAllocatePerProcessorPageDescriptor @ 0x1C00364E8 (ndisAllocatePerProcessorPageDescriptor.c)
 */

PNDIS_RW_LOCK_EX __stdcall NdisAllocateRWLock(NDIS_HANDLE NdisHandle)
{
  KSPIN_LOCK *PoolWithTag; // rax
  KSPIN_LOCK *v3; // rdi
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al
  struct _LIST_ENTRY *Flink; // rcx
  KIRQL v7; // r14
  struct _LIST_ENTRY **v8; // rcx
  __int64 FreeSlotFromDescriptor; // rsi
  __int64 PerProcessorPageDescriptor; // rcx
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rax

  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x7772444Eu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_OWORD *)PoolWithTag = 0LL;
    v4 = PoolWithTag;
    *((_OWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag[4] = 0LL;
    *(_DWORD *)PoolWithTag = 827086674;
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisPerProcessorDescriptorLock);
    Flink = ndisPerProcessorDescriptorList.Flink;
    v7 = v5;
    while ( Flink != &ndisPerProcessorDescriptorList )
    {
      FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(Flink, 2003977294LL);
      if ( FreeSlotFromDescriptor )
        goto LABEL_5;
      Flink = *v8;
    }
    FreeSlotFromDescriptor = 0LL;
LABEL_5:
    if ( !FreeSlotFromDescriptor )
    {
      PerProcessorPageDescriptor = ndisAllocatePerProcessorPageDescriptor();
      if ( PerProcessorPageDescriptor )
      {
        FreeSlotFromDescriptor = ndisAllocateFreeSlotFromDescriptor(PerProcessorPageDescriptor, 2003977294LL);
        v13 = ndisPerProcessorDescriptorList.Flink;
        if ( ndisPerProcessorDescriptorList.Flink->Blink != &ndisPerProcessorDescriptorList )
          __fastfail(3u);
        v12->Flink = ndisPerProcessorDescriptorList.Flink;
        v12->Blink = &ndisPerProcessorDescriptorList;
        v13->Blink = v12;
        ndisPerProcessorDescriptorList.Flink = v12;
      }
    }
    KeReleaseSpinLock(&ndisPerProcessorDescriptorLock, v7);
    v3[4] = FreeSlotFromDescriptor;
    if ( FreeSlotFromDescriptor )
    {
      v3[1] = (KSPIN_LOCK)NdisHandle;
      KeInitializeSpinLock(v3 + 2);
      v4 = 0LL;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = 0LL;
  }
  v3 = 0LL;
LABEL_8:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (PNDIS_RW_LOCK_EX)v3;
}
