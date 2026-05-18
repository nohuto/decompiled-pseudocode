/*
 * XREFs of sub_18012997C @ 0x18012997C
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012AA4 @ 0x180012AA4 (sub_180012AA4.c)
 *     sub_180018900 @ 0x180018900 (sub_180018900.c)
 *     sub_1800ECEEC @ 0x1800ECEEC (sub_1800ECEEC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012997C(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = sub_180012AA4(*(_QWORD *)(a2 + 40) + 16LL);
  sub_1800ECEEC(v3);
  sub_180018900(a2 + 64, *(_QWORD *)(a2 + 48));
  throw (Spectre::Utils::SpectreException *)(a2 + 64);
}
