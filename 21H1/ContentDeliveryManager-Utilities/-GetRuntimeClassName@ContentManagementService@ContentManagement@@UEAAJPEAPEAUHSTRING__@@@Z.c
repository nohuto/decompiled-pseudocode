/*
 * XREFs of ?GetRuntimeClassName@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180022950
 * Callers:
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WFI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180026AD0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WFI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180026CC0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WGA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180026D60 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WGA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WEI@EAAJPEAPEAUHSTRING__@@@Z @ 0x180026FC0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WEI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180027220 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x180027270 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800274B0 (-GetRuntimeClassName@ContentManagementService@ContentManagement@@WDI@EAAJPEAPEAUHSTRING__@@@Z.c)
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
