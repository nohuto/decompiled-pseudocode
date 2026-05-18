/*
 * XREFs of sub_180080AA4 @ 0x180080AA4
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 * Callees:
 *     sub_1800696B0 @ 0x1800696B0 (sub_1800696B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 *     sub_1801143D8 @ 0x1801143D8 (sub_1801143D8.c)
 */

__int64 __fastcall sub_180080AA4(__int64 a1)
{
  __int64 **v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // [rsp+28h] [rbp-10h]

  sub_1801143D8(
    *(_QWORD *)(a1 + 464),
    0,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1661,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick");
  v6 = *(_QWORD *)(a1 + 944);
  v2 = *(__int64 ***)(a1 + 464);
  *(_QWORD *)(a1 + 944) = v6 + 1;
  sub_1800696B0(
    v2,
    (__int64)"..\\Source\\Engine\\Engine.cpp",
    1662,
    (__int64)"UpdateStatistics",
    (__int64)"FrameTick_FrameNumber",
    v6);
  v4 = sub_1800D14C8(v3);
  return sub_1800D13A4(v4);
}
