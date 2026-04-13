/*
 * XREFs of ?AddRef@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x1800229B0
 * Callers:
 *     ?AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180026B50 (-AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x180026BB0 (-AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180026CE0 (-AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x180026D90 (-AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180026E00 (-AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x180027040 (-AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x180027070 (-AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x1800272F0 (-AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180027310 (-AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::AddRef(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(this);
}
