/*
 * XREFs of CmpIsBufferGloballyVisible @ 0x14070AA44
 * Callers:
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 *     CmpDoesBufferRequireCapturing @ 0x14061949C (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x14061E2E0 (CmpBounceContextStart.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
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
