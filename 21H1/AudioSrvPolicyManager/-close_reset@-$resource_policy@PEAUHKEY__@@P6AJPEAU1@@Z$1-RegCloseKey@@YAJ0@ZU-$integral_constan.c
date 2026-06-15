/*
 * XREFs of ?close_reset@?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHKEY__@@@Z @ 0x18000DF04
 * Callers:
 *     ?GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ @ 0x18003D9D8 (-GetStoreVersion@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAAKXZ.c)
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x18003E150 (-DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 *     ?DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x18003E400 (-DoesProfileExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NPEBG.c)
 *     ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x18003E610 (-DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_N.c)
 *     ?IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x18003E800 (-IsGlobalProfileConfiguredInStore@AssignedAccessConfigStoreV2@AssignedAccess@Internal@Windows@@E.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>::close_reset(
        HKEY hKey)
{
  DWORD LastError; // ebx

  LastError = GetLastError();
  RegCloseKey(hKey);
  SetLastError(LastError);
}
