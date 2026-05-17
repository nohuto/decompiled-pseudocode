/*
 * XREFs of _wcscspn @ 0x4B2FA710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcscspn(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // edx
  const wchar_t *v3; // ecx
  const wchar_t *v4; // edi
  wchar_t v5; // ax

  v2 = String;
  v3 = String;
  if ( *String )
  {
    while ( 1 )
    {
      v4 = Control;
      if ( *Control )
        break;
LABEL_6:
      if ( !*++v3 )
        return v3 - v2;
    }
    v5 = *Control;
    while ( v5 != *v3 )
    {
      v5 = *++v4;
      v2 = String;
      if ( !*v4 )
        goto LABEL_6;
    }
  }
  return v3 - v2;
}
