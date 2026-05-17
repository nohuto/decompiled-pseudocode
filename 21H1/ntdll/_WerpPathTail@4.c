/*
 * XREFs of _WerpPathTail@4 @ 0x4B33B28F
 * Callers:
 *     _WerpGlobalFlagsForProcess@4 @ 0x4B33B104 (_WerpGlobalFlagsForProcess@4.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall WerpPathTail(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // edx
  _WORD *v3; // esi
  unsigned __int16 *v5; // eax
  int v6; // ecx
  unsigned __int16 *v7; // esi

  v1 = a1;
  if ( !a1 )
    return 0;
  v3 = a1 + 1;
  while ( *a1++ )
    ;
  v5 = &v1[a1 - v3];
  do
  {
    v7 = v5;
    if ( v5 <= v1 )
      break;
    v6 = *--v5;
    if ( v6 == 92 )
      break;
  }
  while ( v6 != 47 && v6 != 58 );
  return v7;
}
