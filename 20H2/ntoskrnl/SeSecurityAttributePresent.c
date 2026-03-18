/*
 * XREFs of SeSecurityAttributePresent @ 0x14022AF30
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140201564 (SepVerifyDesktopAppxPackageName.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PsQueryProcessAttributesByToken @ 0x140634B40 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x140222130 (ExpAcquireResourceSharedLite.c)
 *     AuthzBasepFindSecurityAttribute @ 0x14022B060 (AuthzBasepFindSecurityAttribute.c)
 *     ExAcquireFastResourceShared @ 0x14038EE40 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038F66C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, __int64 a2)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rdi
  __int16 v7; // ax
  bool v8; // si
  unsigned __int8 CurrentIrql; // dl
  struct _KTHREAD *v11; // r8
  void *OwnerEntryForLegacyShim; // rbp

  v4 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = *(_QWORD *)(a1 + 48);
    if ( (*(_WORD *)(v6 + 26) & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v6, 0LL, 0LL);
    v7 = *(_WORD *)(v6 + 26) & 1;
    if ( v7 )
    {
      CurrentIrql = KeGetCurrentIrql();
      v11 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (v11->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (v11->MiscFlags & 0x400) == 0 && !v11->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v7 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(a1);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v6, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(v6, 1);
    }
    v4 = 1;
  }
  v8 = AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a2) != 0;
  if ( v4 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v8;
}
