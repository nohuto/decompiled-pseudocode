/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180155998
 * Callers:
 *     __lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()_::_1_::dtor$0 @ 0x1800DE6C0 (__lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator()_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$1 @ 0x1801FD8B4 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x1801FD8C0 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$2 @ 0x180412A47 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x180412A53 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$4 @ 0x180412A5F (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$4.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$6 @ 0x180412A77 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$6.c)
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
