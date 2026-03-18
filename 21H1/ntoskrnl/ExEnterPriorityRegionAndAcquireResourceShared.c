/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402EDF30
 * Callers:
 *     <none>
 * Callees:
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     ExAcquireFastResourceShared @ 0x14038BE10 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038C63C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 CurrentIrql; // rdx
  __int16 v6; // ax
  struct _KTHREAD *v8; // r8
  void *OwnerEntryForLegacyShim; // rsi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  v4 = *(_WORD *)(BugCheckParameter2 + 26);
  CurrentIrql = (unsigned __int8)v4;
  LOBYTE(CurrentIrql) = v4 & 0x41;
  if ( (v4 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  v6 = *(_WORD *)(BugCheckParameter2 + 26) & 1;
  if ( v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v8 = KeGetCurrentThread();
    if ( (unsigned __int8)CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
    if ( (v8->ApcState.InProgressFlags & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !(_BYTE)CurrentIrql && (v8->MiscFlags & 0x400) == 0 && !v8->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( v6 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v3, CurrentIrql);
    if ( !(unsigned __int8)ExAcquireFastResourceShared(BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim) )
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
  }
  else
  {
    ExpAcquireResourceSharedLite(BugCheckParameter2, 1);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
