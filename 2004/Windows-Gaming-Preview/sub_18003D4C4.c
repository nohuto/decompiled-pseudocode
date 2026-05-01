/*
 * XREFs of sub_18003D4C4 @ 0x18003D4C4
 * Callers:
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_4 @ 0x180046DCC (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180046DCC.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003D4C4(PSRWLOCK *a1)
{
  ReleaseSRWLockShared(*a1);
}
