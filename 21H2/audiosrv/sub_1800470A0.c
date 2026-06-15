/*
 * XREFs of sub_1800470A0 @ 0x1800470A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AC70 @ 0x18000AC70 (sub_18000AC70.c)
 */

__int64 __fastcall sub_1800470A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  result = 2147549183LL;
  if ( v2 )
    return sub_18000AC70(v2, a2, 5, 0LL);
  return result;
}
