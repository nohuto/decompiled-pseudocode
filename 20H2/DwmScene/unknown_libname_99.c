/*
 * XREFs of unknown_libname_99 @ 0x180011344
 * Callers:
 *     sub_18012001E @ 0x18012001E (sub_18012001E.c)
 *     sub_1801207AC @ 0x1801207AC (sub_1801207AC.c)
 *     sub_180121360 @ 0x180121360 (sub_180121360.c)
 *     sub_180124B95 @ 0x180124B95 (sub_180124B95.c)
 *     sub_180124C16 @ 0x180124C16 (sub_180124C16.c)
 *     sub_180125778 @ 0x180125778 (sub_180125778.c)
 *     sub_180125816 @ 0x180125816 (sub_180125816.c)
 *     sub_180126AA1 @ 0x180126AA1 (sub_180126AA1.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_2 @ 0x180126AFC (-dtor$0@-0--_Getcat@-$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_2.c)
 *     sub_1801273F8 @ 0x1801273F8 (sub_1801273F8.c)
 *     unknown_libname_66 @ 0x180127479 (unknown_libname_66.c)
 *     sub_180128225 @ 0x180128225 (sub_180128225.c)
 *     sub_180129C6E @ 0x180129C6E (sub_180129C6E.c)
 *     unknown_libname_79 @ 0x180129C7E (unknown_libname_79.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_2 @ 0x180129D01 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_2.c)
 *     sub_180129F55 @ 0x180129F55 (sub_180129F55.c)
 *     sub_18012A263 @ 0x18012A263 (sub_18012A263.c)
 *     sub_18012A287 @ 0x18012A287 (sub_18012A287.c)
 *     sub_18012A946 @ 0x18012A946 (sub_18012A946.c)
 *     sub_18012A986 @ 0x18012A986 (sub_18012A986.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_1 @ 0x18012B0B8 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_18012B0B8.c)
 *     sub_18012B6E8 @ 0x18012B6E8 (sub_18012B6E8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_99(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
