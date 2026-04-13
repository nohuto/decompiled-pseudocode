/*
 * XREFs of ?AddRef@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x180024FE0
 * Callers:
 *     ?AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180029180 (-AddRef@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x1800291E0 (-AddRef@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180029310 (-AddRef@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x1800293C0 (-AddRef@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180029430 (-AddRef@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x180029670 (-AddRef@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x1800296A0 (-AddRef@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x180029920 (-AddRef@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180029940 (-AddRef@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::AddRef(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::AddRef(this);
}
