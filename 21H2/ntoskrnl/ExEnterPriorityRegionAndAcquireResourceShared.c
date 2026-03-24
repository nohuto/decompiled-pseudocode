/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x140292930
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x14034C060 (ExpAcquireResourceSharedLite.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 *     ExAcquireFastResourceShared @ 0x14038F380 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038FB6C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v3; // ax
  __int64 CurrentIrql; // rdx
  __int16 v5; // ax
  struct _KTHREAD *v7; // r8
  void *OwnerEntryForLegacyShim; // rsi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx(CurrentThread, 0LL, 0LL, 0LL);
  --CurrentThread->KernelApcDisable;
  v3 = *(_WORD *)(BugCheckParameter2 + 26);
  CurrentIrql = (unsigned __int8)v3;
  if ( (v3 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  v5 = *(_WORD *)(BugCheckParameter2 + 26) & 1;
  if ( v5 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v7 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v7->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v7->MiscFlags & 0x400) == 0 && !v7->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v5 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !(unsigned __int8)ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    LOBYTE(CurrentIrql) = 1;
    ExpAcquireResourceSharedLite(BugCheckParameter2, CurrentIrql);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
