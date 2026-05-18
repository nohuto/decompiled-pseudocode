/*
 * XREFs of sub_18012F294 @ 0x18012F294
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012B84 @ 0x180012B84 (sub_180012B84.c)
 *     sub_180018FB0 @ 0x180018FB0 (sub_180018FB0.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F294(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = sub_180012B84(*(_QWORD *)(a2 + 40) + 16LL);
  sub_1800F27BC(v3);
  sub_180018FB0(a2 + 64, *(_QWORD *)(a2 + 48));
  throw (Spectre::Utils::SpectreException *)(a2 + 64);
}
