/*
 * XREFs of _wcscspn @ 0x4B2FA710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

size_t __cdecl wcscspn(const wchar_t *String, const wchar_t *Control)
{
  size_t result; // rax
  const wchar_t *v3; // ecx
  const wchar_t *v4; // edi

  HIDWORD(result) = String;
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
        goto LABEL_7;
    }
    LOWORD(result) = *Control;
    while ( (_WORD)result != *v3 )
    {
      LOWORD(result) = *++v4;
      HIDWORD(result) = String;
      if ( !*v4 )
        goto LABEL_6;
    }
  }
LABEL_7:
  LODWORD(result) = ((int)v3 - HIDWORD(result)) >> 1;
  return result;
}
