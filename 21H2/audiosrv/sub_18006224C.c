/*
 * XREFs of sub_18006224C @ 0x18006224C
 * Callers:
 *     sub_1800615D4 @ 0x1800615D4 (sub_1800615D4.c)
 *     sub_1800F9C08 @ 0x1800F9C08 (sub_1800F9C08.c)
 *     sub_1800F9C30 @ 0x1800F9C30 (sub_1800F9C30.c)
 *     sub_1800FBE80 @ 0x1800FBE80 (sub_1800FBE80.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800FBE80 @ 0x1800FBE80 (sub_1800FBE80.c)
 */

__int64 __fastcall sub_18006224C(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  for ( ; *(_QWORD *)(a1 + 16); result = sub_1800FBE80(a1) )
  {
    if ( !*(_QWORD *)a1 )
      sub_1800B8610(2147500037LL);
    *(_QWORD *)a1 = **(_QWORD **)a1;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    result = sub_1800524BC(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
