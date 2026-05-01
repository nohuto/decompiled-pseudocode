/*
 * XREFs of sub_18003414C @ 0x18003414C
 * Callers:
 *     sub_180009174 @ 0x180009174 (sub_180009174.c)
 *     sub_18000B114 @ 0x18000B114 (sub_18000B114.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003414C(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  if ( *a1 < *(_QWORD *)(a2 + 24) )
    return 0xFFFFFFFFLL;
  if ( *a1 > *(_QWORD *)(a2 + 24) )
    return 1LL;
  v3 = *(_QWORD *)(a2 + 32);
  v4 = a1[1];
  if ( v4 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v3 < v4;
}
