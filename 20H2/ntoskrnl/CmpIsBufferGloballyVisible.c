/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x1406BA92C
 * Callers:
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x14066E6DC (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x140677470 (CmpBounceContextStart.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
