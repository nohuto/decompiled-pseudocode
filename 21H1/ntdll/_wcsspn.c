/*
 * XREFs of _wcsspn @ 0x4B2FA940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcsspn(const wchar_t *String, const wchar_t *Control)
{
  size_t result; // rax
  const wchar_t *v3; // ecx
  wchar_t v4; // si
  const wchar_t *v5; // eax
  wchar_t v6; // bx
  const wchar_t *v7; // edi

  HIDWORD(result) = String;
  v3 = String;
  if ( *String )
  {
    v4 = *String;
    v5 = Control;
    v6 = *Control;
    while ( 1 )
    {
      v7 = v5;
      if ( v6 != v4 )
        break;
LABEL_7:
      v4 = *++v3;
      if ( !*v3 )
        goto LABEL_9;
      v5 = Control;
    }
    while ( v6 )
    {
      v6 = *++v7;
      if ( *v7 == v4 )
      {
        v6 = *Control;
        goto LABEL_7;
      }
    }
  }
LABEL_9:
  LODWORD(result) = v3 - String;
  return result;
}
