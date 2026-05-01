/*
 * XREFs of sub_180045C7A @ 0x180045C7A
 * Callers:
 *     sub_180045C6E @ 0x180045C6E (sub_180045C6E.c)
 *     sub_180045E2F @ 0x180045E2F (sub_180045E2F.c)
 *     sub_180045E41 @ 0x180045E41 (sub_180045E41.c)
 *     sub_180045E53 @ 0x180045E53 (sub_180045E53.c)
 *     sub_180045E65 @ 0x180045E65 (sub_180045E65.c)
 * Callees:
 *     sub_180043560 @ 0x180043560 (sub_180043560.c)
 */

__int64 __fastcall sub_180045C7A(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180043560((__int64)&dword_1800AEB98, v4);
  return v5(a1, a2, a3, a4);
}
