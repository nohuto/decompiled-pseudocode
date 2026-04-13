/*
 * XREFs of ?GetRuntimeClassName@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180025740
 * Callers:
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WFI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800298C0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WFI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180029AB0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WGA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180029B50 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WGA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WEI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180029DB0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WEI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A010 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A060 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A2A0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall ContentManagement::ContentManagementService::GetRuntimeClassName(
        ContentManagement::ContentManagementService *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"ContentManagement.ContentManagementService", 0x2Au, a2);
}
