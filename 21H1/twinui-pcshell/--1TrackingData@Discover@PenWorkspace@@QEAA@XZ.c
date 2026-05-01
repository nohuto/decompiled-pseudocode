/*
 * XREFs of ??1TrackingData@Discover@PenWorkspace@@QEAA@XZ @ 0x1801F7B20
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$2 @ 0x1801F7778 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall PenWorkspace::Discover::TrackingData::~TrackingData(PenWorkspace::Discover::TrackingData *this)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
