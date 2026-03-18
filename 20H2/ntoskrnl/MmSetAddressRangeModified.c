/*
 * XREFs of MmSetAddressRangeModified @ 0x140328AB0
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModifiedEx @ 0x14029ECE0 (MmSetAddressRangeModifiedEx.c)
 */

BOOLEAN __stdcall MmSetAddressRangeModified(PVOID Address, SIZE_T Length)
{
  return MmSetAddressRangeModifiedEx((unsigned __int64)Address, Length);
}
