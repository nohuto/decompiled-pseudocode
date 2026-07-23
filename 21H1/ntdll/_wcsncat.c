/*
 * XREFs of _wcsncat @ 0x4B2FA790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncat(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // ecx
  wchar_t v4; // ax
  wchar_t *v5; // edx
  int v6; // ecx
  wchar_t v8; // ax

  v3 = Destination;
  do
  {
    v4 = *v3;
    v5 = v3++;
  }
  while ( v4 );
  v6 = Count;
  if ( (_DWORD)Count )
  {
    while ( 1 )
    {
      v8 = *Source;
      --v6;
      *v5++ = *Source++;
      if ( !v8 )
        break;
      if ( !v6 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    *v5 = 0;
  }
  return Destination;
}
