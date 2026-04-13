/*
 * XREFs of ?Release@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x180024BB0
 * Callers:
 *     ?Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180028E60 (-Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x180028EB0 (-Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x1800290A0 (-Release@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x1800290F0 (-Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180029130 (-Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x180029390 (-Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x1800293F0 (-Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x180029640 (-Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180029680 (-Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::Release(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(this);
}
