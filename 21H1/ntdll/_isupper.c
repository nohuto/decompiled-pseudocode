/*
 * XREFs of _isupper @ 0x4B2F62A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isupper(int C)
{
  int v1; // ecx

  v1 = -1;
  if ( C != -1 )
    v1 = (unsigned __int8)C;
  return off_4B3A3138[v1] & 1;
}
