/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140220460
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceSharedWrapper @ 0x1406084B0 (DifExEnterPriorityRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14039C618 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KTHREAD *v6; // rdx
  void *OwnerEntryForLegacyShim; // rsi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  v3 = *(unsigned __int16 *)(BugCheckParameter2 + 26);
  if ( (v3 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  if ( (v3 & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v6 = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (v6->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (v6->MiscFlags & 0x400) == 0 && !v6->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    LOBYTE(v3) = 1;
    ExpAcquireResourceSharedLite(BugCheckParameter2, v3);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
