/*
 * XREFs of sub_180065774 @ 0x180065774
 * Callers:
 *     sub_180124DBF @ 0x180124DBF (sub_180124DBF.c)
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_0 @ 0x1801252C2 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_0.c)
 *     sub_180125302 @ 0x180125302 (sub_180125302.c)
 *     sub_18012535E @ 0x18012535E (sub_18012535E.c)
 *     sub_180125409 @ 0x180125409 (sub_180125409.c)
 *     sub_18012547B @ 0x18012547B (sub_18012547B.c)
 *     sub_1801254F9 @ 0x1801254F9 (sub_1801254F9.c)
 *     sub_180125539 @ 0x180125539 (sub_180125539.c)
 *     sub_180125595 @ 0x180125595 (sub_180125595.c)
 *     sub_180125640 @ 0x180125640 (sub_180125640.c)
 *     sub_1801256B2 @ 0x1801256B2 (sub_1801256B2.c)
 *     sub_180126107 @ 0x180126107 (sub_180126107.c)
 * Callees:
 *     sub_1800618F0 @ 0x1800618F0 (sub_1800618F0.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180065774(__int64 a1)
{
  sub_1800618F0((__int64 *)(a1 + 32));
  if ( *(_BYTE *)(a1 + 16) )
    sub_180061A34(*(_QWORD *)(a1 + 8));
  return sub_1801168D0(a1);
}
