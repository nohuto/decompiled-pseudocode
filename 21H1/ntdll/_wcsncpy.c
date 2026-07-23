/*
 * XREFs of _wcsncpy @ 0x4B2FA820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncpy(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  int v3; // ecx
  wchar_t *v4; // edi
  wchar_t v5; // ax
  unsigned int v6; // ecx
  char v7; // cf
  unsigned int v8; // ecx
  wchar_t *v9; // edi
  int i; // ecx

  v3 = Count;
  v4 = Destination;
  if ( (_DWORD)Count )
  {
    do
    {
      v5 = *(wchar_t *)((char *)v4 + (char *)Source - (char *)Destination);
      *v4++ = v5;
      if ( !v5 )
        break;
      --v3;
    }
    while ( v3 );
    if ( v3 )
    {
      v6 = v3 - 1;
      if ( v6 )
      {
        v7 = v6 & 1;
        v8 = v6 >> 1;
        memset(v4, 0, 4 * v8);
        v9 = &v4[2 * v8];
        for ( i = v7; i; --i )
          *v9++ = 0;
      }
    }
  }
  return Destination;
}
