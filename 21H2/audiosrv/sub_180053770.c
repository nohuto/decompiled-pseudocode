/*
 * XREFs of sub_180053770 @ 0x180053770
 * Callers:
 *     sub_18005369C @ 0x18005369C (sub_18005369C.c)
 *     sub_1800C3344 @ 0x1800C3344 (sub_1800C3344.c)
 * Callees:
 *     sub_1800689C8 @ 0x1800689C8 (sub_1800689C8.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

unsigned __int64 __fastcall sub_180053770(_QWORD *a1, _DWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 result; // rax

  v2 = a1[1];
  if ( v2 >= a1[2] && !(unsigned __int8)sub_1800689C8(a1, v2 + 1) )
    sub_1800B8610(2147942414LL);
  result = v2;
  *(_DWORD *)(*a1 + 4 * v2) = *a2;
  ++a1[1];
  return result;
}
