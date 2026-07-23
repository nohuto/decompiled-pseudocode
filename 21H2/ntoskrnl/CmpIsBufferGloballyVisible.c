/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x1405F38B0
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x14065940C (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  return a1 > 0x7FFFFFFEFFFFLL && !MmIsSessionAddress(a1);
}
