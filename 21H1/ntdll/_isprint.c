/*
 * XREFs of _isprint @ 0x4B2F6210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // ecx

  v1 = -1;
  if ( C != -1 )
    v1 = (unsigned __int8)C;
  return off_4B3A3138[v1] & 0x157;
}
