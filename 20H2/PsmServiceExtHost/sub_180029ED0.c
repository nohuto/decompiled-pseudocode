/*
 * XREFs of sub_180029ED0 @ 0x180029ED0
 * Callers:
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 *     sub_180080BE8 @ 0x180080BE8 (sub_180080BE8.c)
 * Callees:
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18002247C @ 0x18002247C (sub_18002247C.c)
 */

_QWORD *__fastcall sub_180029ED0(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 688);
  if ( v1 )
  {
    sub_18000E1BC(*(_QWORD *)(a1 + 688));
    sub_18002247C(v1);
    return sub_18000E244(v1);
  }
  return result;
}
