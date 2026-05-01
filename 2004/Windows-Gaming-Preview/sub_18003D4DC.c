/*
 * XREFs of sub_18003D4DC @ 0x18003D4DC
 * Callers:
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_3 @ 0x180046DBA (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180046DBA.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18003D4DC(PSRWLOCK *a1)
{
  ReleaseSRWLockExclusive(*a1);
}
