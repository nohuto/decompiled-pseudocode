/*
 * XREFs of SeSecurityAttributePresent @ 0x140296520
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     PsQueryProcessAttributesByToken @ 0x140666820 (PsQueryProcessAttributesByToken.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     AuthzBasepFindSecurityAttribute @ 0x140296650 (AuthzBasepFindSecurityAttribute.c)
 *     ExAcquireFastResourceShared @ 0x14038C980 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038D1AC (ExpAllocateOwnerEntryForLegacyShim.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall SeSecurityAttributePresent(__int64 a1, __int64 a2, struct _KTHREAD *a3)
{
  char v5; // di
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  unsigned __int64 v8; // r9
  __int16 v9; // ax
  bool v10; // si
  unsigned __int8 CurrentIrql; // dl
  void *OwnerEntryForLegacyShim; // rbp

  v5 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = *(_QWORD *)(a1 + 48);
    LOWORD(CurrentThread) = *(_WORD *)(v7 + 26);
    v8 = (unsigned __int8)CurrentThread;
    LOBYTE(v8) = (unsigned __int8)CurrentThread & 0x41;
    if ( ((unsigned __int8)CurrentThread & 0x41) == 1 )
      KeBugCheckEx(0x1C6u, 0xFuLL, v7, 0LL, 0LL);
    v9 = *(_WORD *)(v7 + 26) & 1;
    if ( v9 )
    {
      CurrentIrql = KeGetCurrentIrql();
      a3 = KeGetCurrentThread();
      if ( CurrentIrql > 1u )
        KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
      if ( (a3->ApcState.InProgressFlags & 2) != 0 )
        KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
      if ( !CurrentIrql && (a3->MiscFlags & 0x400) == 0 && !a3->WaitBlock[3].SpareLong )
        KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    }
    if ( v9 )
    {
      OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(a1);
      if ( !(unsigned __int8)ExAcquireFastResourceShared(v7, (ULONG_PTR)OwnerEntryForLegacyShim) )
        ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
    else
    {
      ExpAcquireResourceSharedLite(v7, 1, (__int64)a3, (_DWORD *)v8);
    }
    v5 = 1;
  }
  v10 = AuthzBasepFindSecurityAttribute(*(_QWORD *)(a1 + 776), a2) != 0;
  if ( v5 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
    KeLeaveCriticalRegion();
  }
  return v10;
}
