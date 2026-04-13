/*
 * XREFs of ?QueryInterface@AppManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180059710
 * Callers:
 *     ?QueryInterface@AppManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800612A0 (-QueryInterface@AppManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180061570 (-QueryInterface@AppManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800615A0 (-QueryInterface@AppManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppManager::QueryInterface(
        ContentManagement::AppManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::QueryInterface(
           this,
           a2,
           a3);
}
