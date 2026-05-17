/*
 * XREFs of _LdrpHashAsciizString@4 @ 0x4B334A36
 * Callers:
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 *     _LdrpCheckRedirection@12 @ 0x4B3342C5 (_LdrpCheckRedirection@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall LdrpHashAsciizString(char *a1)
{
  char v1; // al
  int v2; // edx

  v1 = *a1;
  v2 = 0;
  if ( !*a1 )
    return 0x80000000;
  do
  {
    v2 = v1 + 65599 * v2;
    v1 = *++a1;
  }
  while ( *a1 );
  if ( !v2 )
    return 0x80000000;
  return v2;
}
