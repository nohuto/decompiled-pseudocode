/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x1409C6660
 * Callers:
 *     <none>
 * Callees:
 *     IoSizeofWorkItem @ 0x1403128A0 (IoSizeofWorkItem.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140531070 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409C356C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoInitializeWorkItem(__int64 a1, void *a2)
{
  ULONG v4; // eax
  int v5; // eax

  if ( (MmVerifierData & 0x800) != 0 )
  {
    v4 = IoSizeofWorkItem();
    VfUtilCheckKernelAddress((ULONG_PTR)a2, v4);
    LOBYTE(v5) = MmIsSessionAddress((unsigned __int64)a2);
    if ( v5 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x130uLL, (ULONG_PTR)a2, 0LL, 0LL);
    if ( (MmVerifierData & 0x800) != 0 && !MmIsNonPagedSystemAddressValid(a2) )
      VerifierBugCheckIfAppropriate(0xC4u, 0x131uLL, (ULONG_PTR)a2, 0LL, 0LL);
  }
  return ((__int64 (__fastcall *)(__int64, void *))pXdvIoInitializeWorkItem)(a1, a2);
}
