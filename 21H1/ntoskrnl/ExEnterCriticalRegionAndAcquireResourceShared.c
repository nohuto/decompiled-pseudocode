/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x1402E9570
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038BE10 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038C63C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 CurrentIrql; // rdx
  __int16 v4; // ax
  struct _KTHREAD *v6; // r8
  void *OwnerEntryForLegacyShim; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  LOWORD(CurrentThread) = Resource->Flag;
  CurrentIrql = (unsigned __int8)CurrentThread;
  LOBYTE(CurrentIrql) = (unsigned __int8)CurrentThread & 0x41;
  if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  v4 = Resource->Flag & 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v6->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v6->MiscFlags & 0x400) == 0 && !v6->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v4 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(Resource, CurrentIrql);
    if ( !(unsigned __int8)ExAcquireFastResourceShared((ULONG_PTR)Resource, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    ExpAcquireResourceSharedLite((__int64)Resource, 1);
  }
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
