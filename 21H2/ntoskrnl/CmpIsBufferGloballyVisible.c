/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x140694360
 * Callers:
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406645EC (CmpDoesBufferRequireCapturing.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140349110 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
