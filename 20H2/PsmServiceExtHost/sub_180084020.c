/*
 * XREFs of sub_180084020 @ 0x180084020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180084020(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(_QWORD *)(a2 + 40);
  if ( *a1 >= v2 )
    return *a1 > v2;
  else
    return 0xFFFFFFFFLL;
}
