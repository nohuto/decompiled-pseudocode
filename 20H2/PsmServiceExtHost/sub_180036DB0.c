/*
 * XREFs of sub_180036DB0 @ 0x180036DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180036DB0(__int64 a1, _DWORD *a2)
{
  int v2; // eax

  v2 = 0;
  if ( *a2 )
    v2 = a2[1] & 1;
  return v2 ^ 1u;
}
