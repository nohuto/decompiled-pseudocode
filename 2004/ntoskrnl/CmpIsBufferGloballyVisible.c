/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x1406495A4
 * Callers:
 *     CmpDoesBufferRequireCapturing @ 0x1405E3E7C (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x1405E8CC0 (CmpBounceContextStart.c)
 *     NtQueryValueKey @ 0x140695B10 (NtQueryValueKey.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 */

bool __fastcall CmpIsBufferGloballyVisible(unsigned __int64 a1)
{
  int v1; // eax
  bool result; // al

  result = 0;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    LOBYTE(v1) = MmIsSessionAddress(a1);
    if ( !v1 )
      return 1;
  }
  return result;
}
