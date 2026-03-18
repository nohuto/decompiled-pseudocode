/*
 * XREFs of MiCheckPhysicalAddressRange @ 0x14053FAB8
 * Callers:
 *     MmCopyMemory @ 0x1403028D0 (MmCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x1405406D0 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckPhysicalAddressRange(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 result; // rax

  if ( a1 + a2 <= a1 )
    return 0LL;
  v2 = a1 + a2 - 1;
  if ( KiMtrrMaskBase )
  {
    if ( (v2 & 0xFFFFFFFFFFFFF000uLL) > KiMtrrMaskBase )
      return 0LL;
  }
  result = 1LL;
  if ( KeGetCurrentPrcb()->CpuVendor == 1 && v2 >= 0xFD00000000LL && a1 <= 0xFFFFFFFFFFLL )
    return 0LL;
  return result;
}
