/*
 * XREFs of ___ascii_memicmp @ 0x4B2FB940
 * Callers:
 *     __memicmp @ 0x4B2F7070 (__memicmp.c)
 * Callees:
 *     <none>
 */

int __ascii_memicmp(char *Buf1, char *Buf2, int a3, ...)
{
  int v3; // ecx
  unsigned __int8 v6; // ah
  unsigned __int8 v7; // al

  v3 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = *Buf1++;
      v7 = *Buf2++;
      if ( v6 != v7 )
      {
        if ( v6 >= 0x41u && v6 <= 0x5Au )
          v6 += 32;
        if ( v7 >= 0x41u && v7 <= 0x5Au )
          v7 += 32;
        if ( v6 != v7 )
          break;
      }
      if ( !--v3 )
        return v3;
    }
    v3 = -1;
    if ( v6 >= v7 )
      return 1;
  }
  return v3;
}
