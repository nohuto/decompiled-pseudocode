/*
 * XREFs of sub_18003474C @ 0x18003474C
 * Callers:
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 * Callees:
 *     sub_180022888 @ 0x180022888 (sub_180022888.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_1800347D0 @ 0x1800347D0 (sub_1800347D0.c)
 *     sub_180034804 @ 0x180034804 (sub_180034804.c)
 */

signed __int64 __fastcall sub_18003474C(__int64 a1)
{
  signed __int64 result; // rax

  sub_180034804(*(_QWORD *)(a1 + 56));
  RtlRbRemoveNode(*(_QWORD *)(a1 + 56) + 80LL, a1 + 64);
  *(_QWORD *)(a1 + 80) = -1LL;
  sub_1800347D0(*(_QWORD *)(a1 + 56));
  sub_180022888(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL), *(_QWORD *)(a1 + 88));
  *(_QWORD *)(a1 + 88) = -1LL;
  result = sub_1800274E0((_QWORD *)a1);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) &= ~2u;
  return result;
}
