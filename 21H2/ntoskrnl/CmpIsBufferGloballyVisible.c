/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x1407D557C
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x140720224 (CmpDoesBufferRequireCapturing.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     CmpBounceContextStart @ 0x1407C1A00 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
