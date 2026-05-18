/*
 * XREFs of sub_180077714 @ 0x180077714
 * Callers:
 *     sub_180071BE8 @ 0x180071BE8 (sub_180071BE8.c)
 *     sub_180072004 @ 0x180072004 (sub_180072004.c)
 *     sub_1800BA2BC @ 0x1800BA2BC (sub_1800BA2BC.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 *     sub_1801219F0 @ 0x1801219F0 (sub_1801219F0.c)
 * Callees:
 *     sub_18011AC68 @ 0x18011AC68 (sub_18011AC68.c)
 */

_QWORD *__fastcall sub_180077714(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  LOBYTE(a4) = a3;
  sub_18011AC68(a1, 2147942487LL, a2, a4);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
