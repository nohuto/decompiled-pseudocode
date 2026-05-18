/*
 * XREFs of sub_180029F64 @ 0x180029F64
 * Callers:
 *     sub_1800101B0 @ 0x1800101B0 (sub_1800101B0.c)
 *     sub_180028B5C @ 0x180028B5C (sub_180028B5C.c)
 *     sub_180029E20 @ 0x180029E20 (sub_180029E20.c)
 *     sub_180029FE0 @ 0x180029FE0 (sub_180029FE0.c)
 *     sub_18002BD70 @ 0x18002BD70 (sub_18002BD70.c)
 *     sub_18002F588 @ 0x18002F588 (sub_18002F588.c)
 *     sub_1800321A0 @ 0x1800321A0 (sub_1800321A0.c)
 *     sub_180032554 @ 0x180032554 (sub_180032554.c)
 *     sub_1800345D4 @ 0x1800345D4 (sub_1800345D4.c)
 *     sub_180034E48 @ 0x180034E48 (sub_180034E48.c)
 *     sub_180035404 @ 0x180035404 (sub_180035404.c)
 *     sub_180035708 @ 0x180035708 (sub_180035708.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 *     sub_180038AF0 @ 0x180038AF0 (sub_180038AF0.c)
 *     sub_180039324 @ 0x180039324 (sub_180039324.c)
 *     sub_18003E050 @ 0x18003E050 (sub_18003E050.c)
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     _setlocale_set_cat @ 0x18003FAC0 (_setlocale_set_cat.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_180042BE0 @ 0x180042BE0 (sub_180042BE0.c)
 *     sub_180043180 @ 0x180043180 (sub_180043180.c)
 *     sub_180044460 @ 0x180044460 (sub_180044460.c)
 *     sub_180044EE0 @ 0x180044EE0 (sub_180044EE0.c)
 *     sub_180046140 @ 0x180046140 (sub_180046140.c)
 *     sub_18004699C @ 0x18004699C (sub_18004699C.c)
 *     sub_180047680 @ 0x180047680 (sub_180047680.c)
 *     sub_180047A50 @ 0x180047A50 (sub_180047A50.c)
 *     sub_180047DF0 @ 0x180047DF0 (sub_180047DF0.c)
 *     sub_180048190 @ 0x180048190 (sub_180048190.c)
 *     sub_180048650 @ 0x180048650 (sub_180048650.c)
 *     sub_180049068 @ 0x180049068 (sub_180049068.c)
 *     sub_1800491D4 @ 0x1800491D4 (sub_1800491D4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180029F64(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 4256);
  *a2 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return a2;
}
