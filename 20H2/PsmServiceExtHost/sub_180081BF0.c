/*
 * XREFs of sub_180081BF0 @ 0x180081BF0
 * Callers:
 *     sub_1800817D0 @ 0x1800817D0 (sub_1800817D0.c)
 * Callees:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_180034EEC @ 0x180034EEC (sub_180034EEC.c)
 */

__int64 __fastcall sub_180081BF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rdx

  v2 = *(_QWORD *)(a2 + 160);
  sub_180034EEC(a1, a2);
  sub_18000E718(
    a1,
    (unsigned int *)(v2 + 88),
    a2 + 88,
    0LL,
    (__int64 (__fastcall *)(__int64, __int64))sub_180037B50,
    0LL);
  return sub_180034EB8(a1, v5);
}
