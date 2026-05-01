/*
 * XREFs of ??__F_S_scheduler@?1??_GetStaticAmbientSchedulerStorage@details@Concurrency@@YAPEAV?$shared_ptr@Uscheduler_interface@Concurrency@@@std@@XZ@YAXXZ @ 0x180104E00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall `Concurrency::details::_GetStaticAmbientSchedulerStorage'::`2'::`dynamic atexit destructor for '_S_scheduler''()
{
  if ( qword_1805CE068 )
    std::_Ref_count_base::_Decref(qword_1805CE068);
}
