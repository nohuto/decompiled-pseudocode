/*
 * XREFs of LdrpHashAsciizString @ 0x1800D568C
 * Callers:
 *     LdrpAddRedirectedFunction @ 0x1800D4C54 (LdrpAddRedirectedFunction.c)
 *     LdrpCheckRedirection @ 0x1800D5040 (LdrpCheckRedirection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpHashAsciizString(char *a1)
{
  char v1; // al
  unsigned int v2; // edx

  v1 = *a1;
  v2 = 0;
  if ( !*a1 )
    return 0x80000000;
  do
  {
    ++a1;
    v2 = v1 + 65599 * v2;
    v1 = *a1;
  }
  while ( *a1 );
  if ( !v2 )
    return 0x80000000;
  return v2;
}
