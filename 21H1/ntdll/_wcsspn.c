/*
 * XREFs of _wcsspn @ 0x4B2FA940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcsspn(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // ecx
  wchar_t v3; // si
  const wchar_t *v4; // eax
  wchar_t v5; // bx
  const wchar_t *v6; // edi

  v2 = String;
  if ( *String )
  {
    v3 = *String;
    v4 = Control;
    v5 = *Control;
    while ( 1 )
    {
      v6 = v4;
      if ( v5 != v3 )
        break;
LABEL_7:
      v3 = *++v2;
      if ( !*v2 )
        return v2 - String;
      v4 = Control;
    }
    while ( v5 )
    {
      v5 = *++v6;
      if ( *v6 == v3 )
      {
        v5 = *Control;
        goto LABEL_7;
      }
    }
  }
  return v2 - String;
}
