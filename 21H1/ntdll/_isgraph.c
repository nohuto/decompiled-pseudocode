/*
 * XREFs of _isgraph @ 0x4B2F61B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isgraph(int C)
{
  int v1; // ecx

  v1 = -1;
  if ( C != -1 )
    v1 = (unsigned __int8)C;
  return off_4B3A3138[v1] & 0x117;
}
