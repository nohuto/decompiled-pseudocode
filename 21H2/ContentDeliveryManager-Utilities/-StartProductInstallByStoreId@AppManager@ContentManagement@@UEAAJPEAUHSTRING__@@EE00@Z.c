/*
 * XREFs of ?StartProductInstallByStoreId@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE00@Z @ 0x18005B8A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::AppManager::StartProductInstallByStoreId(
        ContentManagement::AppManager *this,
        HSTRING a2)
{
  return (*(__int64 (__fastcall **)(ContentManagement::AppManager *, HSTRING))(*(_QWORD *)this + 112LL))(this, a2);
}
