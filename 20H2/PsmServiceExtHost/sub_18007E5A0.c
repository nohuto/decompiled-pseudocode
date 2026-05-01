/*
 * XREFs of sub_18007E5A0 @ 0x18007E5A0
 * Callers:
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007E5A0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx

  v1 = a1 + 72;
  v2 = *(_QWORD *)(a1 + 80);
  if ( (v2 & 1) == 0 )
    return v2;
  if ( v2 == 1 )
    return 0LL;
  return v2 ^ (v1 | 1);
}
