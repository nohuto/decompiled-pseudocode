/*
 * XREFs of _wcschr @ 0x4B2FA680
 * Callers:
 *     _RtlpNeedCurrentDirectoryForExePath@4 @ 0x4B2ABE9C (_RtlpNeedCurrentDirectoryForExePath@4.c)
 *     _RtlpGetDirPath@8 @ 0x4B2B340C (_RtlpGetDirPath@8.c)
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 *     _LdrSetDllDirectory@4 @ 0x4B2ED420 (_LdrSetDllDirectory@4.c)
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 *     _LdrpProcessImageProtectionParameter@8 @ 0x4B32CAFE (_LdrpProcessImageProtectionParameter@8.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  wchar_t *result; // eax
  __int16 v3; // dx
  wchar_t v4; // si

  result = (wchar_t *)Str;
  v3 = *Str;
  if ( *Str )
  {
    v4 = *Str;
    while ( v4 != Ch )
    {
      v4 = *++result;
      v3 = *result;
      if ( !*result )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    if ( v3 != Ch )
      return 0;
  }
  return result;
}
