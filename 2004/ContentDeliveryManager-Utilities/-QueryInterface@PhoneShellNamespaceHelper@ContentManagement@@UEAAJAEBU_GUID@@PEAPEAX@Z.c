/*
 * XREFs of ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180012540
 * Callers:
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023BF0 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800244A0 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180024500 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::QueryInterface(
        ContentManagement::PhoneShellNamespaceHelper *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::QueryInterface(
           this,
           a2,
           a3);
}
