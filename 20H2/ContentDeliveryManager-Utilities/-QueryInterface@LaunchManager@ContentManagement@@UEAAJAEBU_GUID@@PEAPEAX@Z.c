/*
 * XREFs of ?QueryInterface@LaunchManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000F450
 * Callers:
 *     ?QueryInterface@LaunchManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023C10 (-QueryInterface@LaunchManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LaunchManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023C80 (-QueryInterface@LaunchManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LaunchManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023FA0 (-QueryInterface@LaunchManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::LaunchManager::QueryInterface(
        ContentManagement::LaunchManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::QueryInterface(
           this,
           a2,
           a3);
}
