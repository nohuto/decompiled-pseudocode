/*
 * XREFs of _RtlNumberOfClearBits@4 @ 0x4B34F670
 * Callers:
 *     <none>
 * Callees:
 *     _RtlNumberOfSetBits@4 @ 0x4B34F6C0 (_RtlNumberOfSetBits@4.c)
 */

int __stdcall RtlNumberOfClearBits(_DWORD *a1)
{
  return *a1 - RtlNumberOfSetBits(a1);
}
