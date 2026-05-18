/*
 * XREFs of sub_18000BED4 @ 0x18000BED4
 * Callers:
 *     sub_18000EAF0 @ 0x18000EAF0 (sub_18000EAF0.c)
 * Callees:
 *     sub_18000E160 @ 0x18000E160 (sub_18000E160.c)
 */

__int64 __fastcall sub_18000BED4(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = &wil::ResultException::`vftable';
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  sub_18000E160();
  *(_QWORD *)(a1 + 184) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
