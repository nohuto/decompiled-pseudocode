/*
 * XREFs of ___ascii_strnicmp @ 0x4B2FCE70
 * Callers:
 *     __strnicmp @ 0x4B2F74A0 (__strnicmp.c)
 * Callees:
 *     <none>
 */

int __ascii_strnicmp(const char *String1, const char *String2, int a3, ...)
{
  int v3; // ecx
  unsigned __int8 v6; // ah
  unsigned __int8 v7; // al
  bool v8; // cf

  v3 = a3;
  if ( a3 )
  {
    do
    {
      v6 = *String1;
      v7 = *String2;
      if ( !*String1 || !v7 )
        break;
      ++String1;
      ++String2;
      if ( v6 >= 0x41u && v6 <= 0x5Au )
        v6 += 32;
      if ( v7 >= 0x41u && v7 <= 0x5Au )
        v7 += 32;
      v8 = v6 < v7;
      if ( v6 != v7 )
        goto LABEL_13;
      --v3;
    }
    while ( v3 );
    v3 = 0;
    v8 = v6 < v7;
    if ( v6 == v7 )
      return v3;
LABEL_13:
    v3 = -1;
    if ( !v8 )
      return 1;
  }
  return v3;
}
