/*
 * XREFs of sub_180046EF0 @ 0x180046EF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AC70 @ 0x18000AC70 (sub_18000AC70.c)
 */

__int64 __fastcall sub_180046EF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  bool v4; // sf
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  if ( !v3 )
    return a1 + 288;
  v4 = (int)sub_18000AC70(v3, a2, 4, 0LL) < 0;
  result = a1 + 800;
  if ( v4 )
    return a1 + 288;
  return result;
}
