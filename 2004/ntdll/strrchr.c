/*
 * XREFs of strrchr @ 0x180091340
 * Callers:
 *     LdrpResolveForwarder @ 0x1800332E8 (LdrpResolveForwarder.c)
 *     LdrpParseForwarderDescription @ 0x1800759C4 (LdrpParseForwarderDescription.c)
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r9
  char *v3; // r8
  char v5; // al

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != (_BYTE)Ch );
  if ( v5 == (_BYTE)Ch )
    return (char *)Str;
  return v3;
}
