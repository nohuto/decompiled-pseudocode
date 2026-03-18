/*
 * XREFs of MmSetAddressRangeModified @ 0x1403583A0
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x140262F80 (MmSetAddressRangeModifiedEx.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  return MmSetAddressRangeModifiedEx((unsigned __int64)Address, Length);
}
