/*
 * XREFs of unknown_libname_101 @ 0x180011424
 * Callers:
 *     sub_1801258EE @ 0x1801258EE (sub_1801258EE.c)
 *     sub_18012607C @ 0x18012607C (sub_18012607C.c)
 *     sub_180126C78 @ 0x180126C78 (sub_180126C78.c)
 *     sub_18012A4AD @ 0x18012A4AD (sub_18012A4AD.c)
 *     sub_18012A52E @ 0x18012A52E (sub_18012A52E.c)
 *     sub_18012B090 @ 0x18012B090 (sub_18012B090.c)
 *     sub_18012B12E @ 0x18012B12E (sub_18012B12E.c)
 *     sub_18012C3B9 @ 0x18012C3B9 (sub_18012C3B9.c)
 *     ?dtor$0@?0??_Getcat@?$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_2 @ 0x18012C414 (-dtor$0@-0--_Getcat@-$ctype@D@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z@4HA_2.c)
 *     sub_18012CD10 @ 0x18012CD10 (sub_18012CD10.c)
 *     unknown_libname_68 @ 0x18012CD91 (unknown_libname_68.c)
 *     sub_18012DB3D @ 0x18012DB3D (sub_18012DB3D.c)
 *     sub_18012F586 @ 0x18012F586 (sub_18012F586.c)
 *     unknown_libname_81 @ 0x18012F596 (unknown_libname_81.c)
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA_2 @ 0x18012F619 (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA_2.c)
 *     sub_18012F86D @ 0x18012F86D (sub_18012F86D.c)
 *     sub_18012FB7B @ 0x18012FB7B (sub_18012FB7B.c)
 *     sub_18012FB9F @ 0x18012FB9F (sub_18012FB9F.c)
 *     sub_18013025E @ 0x18013025E (sub_18013025E.c)
 *     sub_18013029E @ 0x18013029E (sub_18013029E.c)
 *     ?dtor$0@?0??AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVScheduleGroupSegmentBase@23@PEAVSchedulingRing@23@PEAVlocation@3@@Z@4HA_1 @ 0x1801309D0 (-dtor$0@-0--AllocateSegment@FairScheduleGroup@details@Concurrency@@MEAAPEAVSchedule_ea_1801309D0.c)
 *     sub_180131000 @ 0x180131000 (sub_180131000.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_101(__int64 a1, __int64 a2)
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
