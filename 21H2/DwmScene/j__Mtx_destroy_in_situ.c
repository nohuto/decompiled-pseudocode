/*
 * XREFs of j__Mtx_destroy_in_situ @ 0x180027CC8
 * Callers:
 *     sub_180126380 @ 0x180126380 (sub_180126380.c)
 *     sub_18012A5A2 @ 0x18012A5A2 (sub_18012A5A2.c)
 *     sub_18012ADCC @ 0x18012ADCC (sub_18012ADCC.c)
 *     sub_18012B003 @ 0x18012B003 (sub_18012B003.c)
 *     sub_18012CEB5 @ 0x18012CEB5 (sub_18012CEB5.c)
 *     sub_18012CF41 @ 0x18012CF41 (sub_18012CF41.c)
 *     sub_18012DC76 @ 0x18012DC76 (sub_18012DC76.c)
 *     sub_18012DC86 @ 0x18012DC86 (sub_18012DC86.c)
 *     sub_18012FBF7 @ 0x18012FBF7 (sub_18012FBF7.c)
 *     ?dtor$0@?0???1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0 @ 0x18012FC23 (-dtor$0@-0---1ScheduleGroupSegmentBase@details@Concurrency@@UEAA@XZ@4HA_0.c)
 *     sub_18012FC4F @ 0x18012FC4F (sub_18012FC4F.c)
 *     sub_180130E79 @ 0x180130E79 (sub_180130E79.c)
 *     sub_180130E9C @ 0x180130E9C (sub_180130E9C.c)
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_3 @ 0x180131010 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_3.c)
 *     sub_180131062 @ 0x180131062 (sub_180131062.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl j__Mtx_destroy_in_situ(_Mtx_t a1)
{
  Mtx_destroy_in_situ(a1);
}
