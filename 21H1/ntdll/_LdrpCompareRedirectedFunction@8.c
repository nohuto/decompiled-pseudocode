/*
 * XREFs of _LdrpCompareRedirectedFunction@8 @ 0x4B334418
 * Callers:
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 *     _LdrpCheckRedirection@12 @ 0x4B3342C5 (_LdrpCheckRedirection@12.c)
 * Callees:
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 */

LONG __stdcall LdrpCompareRedirectedFunction(int a1, int a2)
{
  LONG result; // eax

  result = *(_DWORD *)(a2 + 12) - *(_DWORD *)a1;
  if ( !result )
  {
    result = *(_DWORD *)(a2 + 16) - *(_DWORD *)(a1 + 4);
    if ( !result )
    {
      result = strcmp(*(const char **)(a2 + 20), *(const char **)(a1 + 8));
      if ( result )
        result = result < 0 ? -1 : 1;
      if ( !result )
        return RtlCompareUnicodeString((PUNICODE_STRING)(a2 + 24), (PUNICODE_STRING)(a1 + 12), 1u);
    }
  }
  return result;
}
