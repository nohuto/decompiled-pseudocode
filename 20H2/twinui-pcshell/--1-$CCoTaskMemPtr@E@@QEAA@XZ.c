/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180179AE8
 * Callers:
 *     __lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()_::_1_::dtor$0 @ 0x180103450 (__lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator()_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$1 @ 0x180220169 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x180220175 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$2 @ 0x180435D57 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x180435D63 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$4 @ 0x180435D6F (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$4.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$6 @ 0x180435D87 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  CoTaskMemFree(v2);
}
