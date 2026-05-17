/*
 * XREFs of _wcsstr @ 0x4B2FA9B0
 * Callers:
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 *     _EtwpGenerateFileName@12 @ 0x4B382A61 (_EtwpGenerateFileName@12.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v2; // edx
  wchar_t v4; // ax
  int i; // edi
  const wchar_t *v6; // esi
  int v7; // eax

  v2 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  v4 = *Str;
  if ( !*Str )
    return 0;
  for ( i = (char *)Str - (char *)SubStr; ; i += 2 )
  {
    v6 = SubStr;
    if ( v4 )
      break;
LABEL_9:
    if ( !*v6 )
      return v2;
    v4 = *++v2;
    if ( !*v2 )
      return 0;
  }
  while ( 1 )
  {
    v7 = *v6;
    if ( !(_WORD)v7 )
      return v2;
    if ( *(const wchar_t *)((char *)v6 + i) == v7 )
    {
      if ( *(const wchar_t *)((char *)++v6 + i) )
        continue;
    }
    goto LABEL_9;
  }
}
