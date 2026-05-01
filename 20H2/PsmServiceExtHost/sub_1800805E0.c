/*
 * XREFs of sub_1800805E0 @ 0x1800805E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800805E0(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 48);
  if ( v2 == *a1 )
    return 0LL;
  else
    return v2 < *a1 ? -1 : 1;
}
