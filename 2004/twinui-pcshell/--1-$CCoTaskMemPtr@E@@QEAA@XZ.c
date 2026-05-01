/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180179ED8
 * Callers:
 *     __lambda_df8498ad81b9203ecaf5b19db9f78b07_::operator()_::_1_::dtor$0 @ 0x1801022A0 (__lambda_df8498ad81b9203ecaf5b19db9f78b07_--operator()_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$1 @ 0x180220A39 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x180220A45 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$2 @ 0x180436497 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x1804364A3 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$4 @ 0x1804364AF (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$4.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$6 @ 0x1804364C7 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$6.c)
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
