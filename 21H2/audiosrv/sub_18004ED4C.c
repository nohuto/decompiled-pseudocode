/*
 * XREFs of sub_18004ED4C @ 0x18004ED4C
 * Callers:
 *     sub_180030A90 @ 0x180030A90 (sub_180030A90.c)
 *     sub_18007B550 @ 0x18007B550 (sub_18007B550.c)
 *     sub_18007B570 @ 0x18007B570 (sub_18007B570.c)
 *     sub_18007C97E @ 0x18007C97E (sub_18007C97E.c)
 *     sub_18007C990 @ 0x18007C990 (sub_18007C990.c)
 *     ?dtor$0@?0??do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z@4HA_14 @ 0x18007C9A2 (-dtor$0@-0--do_put@-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@_ea_18007C9A2.c)
 *     sub_18007C9B4 @ 0x18007C9B4 (sub_18007C9B4.c)
 *     sub_18007C9C6 @ 0x18007C9C6 (sub_18007C9C6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004ED4C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
