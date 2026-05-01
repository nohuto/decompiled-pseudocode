/*
 * XREFs of sub_180034E40 @ 0x180034E40
 * Callers:
 *     sub_180034CD8 @ 0x180034CD8 (sub_180034CD8.c)
 * Callees:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_180034EEC @ 0x180034EEC (sub_180034EEC.c)
 */

__int64 __fastcall sub_180034E40(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 88LL);
  v5 = *(_QWORD *)(v4 + 160);
  sub_180034EEC();
  sub_18000E718(
    a1,
    (unsigned int *)(v5 + 88),
    v4 + 88,
    a2 + 96,
    (__int64 (__fastcall *)(__int64, __int64))sub_180037B50,
    0LL);
  return sub_180034EB8(a1);
}
