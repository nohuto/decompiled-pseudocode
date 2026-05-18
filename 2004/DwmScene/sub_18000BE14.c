/*
 * XREFs of sub_18000BE14 @ 0x18000BE14
 * Callers:
 *     sub_18000EA10 @ 0x18000EA10 (sub_18000EA10.c)
 * Callees:
 *     sub_18000E080 @ 0x18000E080 (sub_18000E080.c)
 */

__int64 __fastcall sub_18000BE14(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = &wil::ResultException::`vftable';
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  sub_18000E080();
  *(_QWORD *)(a1 + 184) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
