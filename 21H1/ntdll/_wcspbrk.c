/*
 * XREFs of _wcspbrk @ 0x4B2FA8A0
 * Callers:
 *     _RtlpMuiRegLoadLicInformation@4 @ 0x4B2D50DF (_RtlpMuiRegLoadLicInformation@4.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcspbrk(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // ecx
  wchar_t v3; // dx
  const wchar_t *v4; // edi
  const wchar_t *v5; // esi
  wchar_t v6; // ax

  v2 = String;
  v3 = *String;
  if ( !*String )
    return 0;
  v4 = Control;
  while ( 1 )
  {
    v5 = v4;
    if ( *Control )
      break;
LABEL_7:
    v3 = *++v2;
    if ( !*v2 )
      return 0;
  }
  v6 = *Control;
  while ( v6 != v3 )
  {
    v6 = *++v5;
    v4 = Control;
    if ( !*v5 )
      goto LABEL_7;
  }
  return (wchar_t *)v2;
}
