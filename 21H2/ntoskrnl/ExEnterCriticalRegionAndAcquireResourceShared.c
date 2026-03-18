/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x140224140
 * Callers:
 *     DifExEnterCriticalRegionAndAcquireResourceSharedWrapper @ 0x140608180 (DifExEnterCriticalRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14039C618 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax
  USHORT Flag; // ax
  __int64 v4; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v7; // rdx
  void *OwnerEntryForLegacyShim; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  Flag = Resource->Flag;
  v4 = (unsigned __int8)Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v7 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v7->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared((ULONG_PTR)Resource, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    LOBYTE(v4) = 1;
    ExpAcquireResourceSharedLite(Resource, v4);
  }
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
