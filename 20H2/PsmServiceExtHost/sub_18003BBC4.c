/*
 * XREFs of sub_18003BBC4 @ 0x18003BBC4
 * Callers:
 *     sub_18003BAA0 @ 0x18003BAA0 (sub_18003BAA0.c)
 * Callees:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_180034EEC @ 0x180034EEC (sub_180034EEC.c)
 */

__int64 __fastcall sub_18003BBC4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  sub_180034EEC(a1, a2);
  sub_18000E718(a1, (unsigned int *)(a2 + 88), 0LL, 0LL, (__int64 (__fastcall *)(__int64, __int64))sub_180037B50, 0LL);
  return sub_180034EB8(a1, v4);
}
