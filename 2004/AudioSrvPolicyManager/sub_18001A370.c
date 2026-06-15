/*
 * XREFs of sub_18001A370 @ 0x18001A370
 * Callers:
 *     sub_18003B876 @ 0x18003B876 (sub_18003B876.c)
 *     sub_18003BB9A @ 0x18003BB9A (sub_18003BB9A.c)
 *     sub_18003BBB0 @ 0x18003BBB0 (sub_18003BBB0.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 *     sub_18003BCE9 @ 0x18003BCE9 (sub_18003BCE9.c)
 *     sub_18003BD02 @ 0x18003BD02 (sub_18003BD02.c)
 *     sub_18003BD1B @ 0x18003BD1B (sub_18003BD1B.c)
 *     sub_18003C19B @ 0x18003C19B (sub_18003C19B.c)
 *     sub_18003C1AD @ 0x18003C1AD (sub_18003C1AD.c)
 *     unknown_libname_26 @ 0x18003CBBF (unknown_libname_26.c)
 *     sub_18003CC6A @ 0x18003CC6A (sub_18003CC6A.c)
 *     sub_18003CC7C @ 0x18003CC7C (sub_18003CC7C.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_0 @ 0x18003CCB2 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_18003CCB2.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18001A370(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
