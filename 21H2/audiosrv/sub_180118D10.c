/*
 * XREFs of sub_180118D10 @ 0x180118D10
 * Callers:
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_1 @ 0x180076850 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_180076850.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180118D10(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    ReleaseSRWLockExclusive((PSRWLOCK)(*(_QWORD *)a1 + 16LL));
  }
}
