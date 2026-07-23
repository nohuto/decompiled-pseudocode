/*
 * XREFs of _LdrpCompareModuleName@8 @ 0x4B2EE4A3
 * Callers:
 *     _LdrpCheckForRetryLoading@8 @ 0x4B2DE632 (_LdrpCheckForRetryLoading@8.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 */

LONG __stdcall LdrpCompareModuleName(int a1, int a2)
{
  LONG result; // eax

  result = *(_DWORD *)(a2 + 28) - *(_DWORD *)(a1 + 144);
  if ( !result )
    return RtlCompareUnicodeString((PUNICODE_STRING)(a2 - 80), (PUNICODE_STRING)(a1 + 36), 1u);
  return result;
}
