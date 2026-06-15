/*
 * XREFs of sub_18011B7C0 @ 0x18011B7C0
 * Callers:
 *     sub_18011EA28 @ 0x18011EA28 (sub_18011EA28.c)
 *     sub_18011EB94 @ 0x18011EB94 (sub_18011EB94.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005248C @ 0x18005248C (sub_18005248C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_18011E8C8 @ 0x18011E8C8 (sub_18011E8C8.c)
 */

__int64 __fastcall sub_18011B7C0(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  unsigned int v6; // eax

  if ( !a2 )
    sub_1800B8610(-2147467259);
  sub_1800461B8(a2 + 1);
  sub_180006A30((volatile signed __int32 *)(*a2 - 24LL));
  a2[2] = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(a1 + 8) - 1LL;
  *(_QWORD *)(a1 + 64) = a2;
  result = v4;
  *(_QWORD *)(a1 + 8) = v4;
  if ( v4 < *(_QWORD *)(a1 + 40) && !*(_DWORD *)(a1 + 48) )
  {
    v6 = sub_1800CF858(a1, v4);
    sub_18011E8C8(a1, v6);
    result = *(_QWORD *)(a1 + 8);
  }
  if ( !result )
    return sub_18005248C(a1);
  return result;
}
