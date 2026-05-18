/*
 * XREFs of j__Mtx_destroy_in_situ @ 0x1800223F8
 * Callers:
 *     sub_180120A68 @ 0x180120A68 (sub_180120A68.c)
 *     sub_180124C8A @ 0x180124C8A (sub_180124C8A.c)
 *     sub_1801254B4 @ 0x1801254B4 (sub_1801254B4.c)
 *     sub_1801256EB @ 0x1801256EB (sub_1801256EB.c)
 *     sub_18012759D @ 0x18012759D (sub_18012759D.c)
 *     sub_180127629 @ 0x180127629 (sub_180127629.c)
 *     sub_18012835E @ 0x18012835E (sub_18012835E.c)
 *     sub_18012836E @ 0x18012836E (sub_18012836E.c)
 *     sub_18012A2DF @ 0x18012A2DF (sub_18012A2DF.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0 @ 0x18012A30B (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0.c)
 *     sub_18012A337 @ 0x18012A337 (sub_18012A337.c)
 *     sub_18012B561 @ 0x18012B561 (sub_18012B561.c)
 *     sub_18012B584 @ 0x18012B584 (sub_18012B584.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_3 @ 0x18012B6F8 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_3.c)
 *     sub_18012B74A @ 0x18012B74A (sub_18012B74A.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl j__Mtx_destroy_in_situ(_Mtx_t a1)
{
  Mtx_destroy_in_situ(a1);
}
