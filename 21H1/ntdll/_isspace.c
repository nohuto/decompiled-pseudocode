/*
 * XREFs of _isspace @ 0x4B2F6270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // ecx

  v1 = -1;
  if ( C != -1 )
    v1 = (unsigned __int8)C;
  return off_4B3A3138[v1] & 8;
}
