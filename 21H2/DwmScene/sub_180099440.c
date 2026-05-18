/*
 * XREFs of sub_180099440 @ 0x180099440
 * Callers:
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_180099378 @ 0x180099378 (sub_180099378.c)
 * Callees:
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_180096810 @ 0x180096810 (sub_180096810.c)
 */

__int64 __fastcall sub_180099440(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax

  *(_DWORD *)(a1 + 292) |= 2u;
  v6 = (_QWORD *)sub_180067F50(a1);
  return sub_180096810((__int64 *)(a1 + 256), a2, a3, *(_DWORD *)(a1 + 124), 5, *(_DWORD *)(a1 + 304), v6);
}
