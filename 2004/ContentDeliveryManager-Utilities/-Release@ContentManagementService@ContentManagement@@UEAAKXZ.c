/*
 * XREFs of ?Release@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x180024FD0
 * Callers:
 *     ?Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180029280 (-Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x1800292D0 (-Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x1800294C0 (-Release@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x180029510 (-Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180029550 (-Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x1800297B0 (-Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x180029810 (-Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x180029A60 (-Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180029AA0 (-Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::ContentManagementService::Release(
        ContentManagement::ContentManagementService *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(this);
}
