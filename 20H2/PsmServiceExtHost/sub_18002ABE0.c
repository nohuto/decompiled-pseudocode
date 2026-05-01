/*
 * XREFs of sub_18002ABE0 @ 0x18002ABE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007FF8 @ 0x180007FF8 (sub_180007FF8.c)
 *     sub_180027C9C @ 0x180027C9C (sub_180027C9C.c)
 */

__int64 __fastcall sub_18002ABE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( !*(_QWORD *)(a1 + 96) )
    return sub_180034BB8(a1);
  sub_180007FF8(a1, a2);
  *(_BYTE *)(a1 + 184) |= 8u;
  sub_180027C9C(a1, v3);
  return TpPostWork(*(_QWORD *)(a1 + 96));
}
