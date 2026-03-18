/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x1409CC690
 * Callers:
 *     <none>
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     IoSizeofWorkItem @ 0x140320F60 (IoSizeofWorkItem.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140535090 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x1409C959C (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoInitializeWorkItem(__int64 a1, void *a2)
{
  ULONG v4; // eax

  if ( (MmVerifierData & 0x800) != 0 )
  {
    v4 = IoSizeofWorkItem();
    VfUtilCheckKernelAddress((ULONG_PTR)a2, v4);
    if ( MmIsSessionAddress((unsigned __int64)a2) )
      VerifierBugCheckIfAppropriate(0xC4u, 0x130uLL, (ULONG_PTR)a2, 0LL, 0LL);
    if ( (MmVerifierData & 0x800) != 0 && !MmIsNonPagedSystemAddressValid(a2) )
      VerifierBugCheckIfAppropriate(0xC4u, 0x131uLL, (ULONG_PTR)a2, 0LL, 0LL);
  }
  return ((__int64 (__fastcall *)(__int64, void *))pXdvIoInitializeWorkItem)(a1, a2);
}
