/*
 * XREFs of _RtlImageNtHeaderEx@20 @ 0x4B2BE540
 * Callers:
 *     _LdrpIsExecutableRelocatedImage@4 @ 0x4B2ABBC0 (_LdrpIsExecutableRelocatedImage@4.c)
 *     _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01 (_LdrpPrepareImportAddressTableForSnap@4.c)
 *     _LdrpFetchAddressOfSecurityCookie@16 @ 0x4B2B9F97 (_LdrpFetchAddressOfSecurityCookie@16.c)
 *     _LdrImageDirectoryEntryToLoadConfig@4 @ 0x4B2BA82F (_LdrImageDirectoryEntryToLoadConfig@4.c)
 *     _LdrpResGetMappingSize@16 @ 0x4B2BAB30 (_LdrpResGetMappingSize@16.c)
 *     _LdrpResGetResourceDirectory@20 @ 0x4B2BB320 (_LdrpResGetResourceDirectory@20.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrpAccessResourceDataNoMultipleLanguage@16 @ 0x4B2BD9F0 (_LdrpAccessResourceDataNoMultipleLanguage@16.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     _LdrpFindLoadedDllByMappingLockHeld@16 @ 0x4B2CD468 (_LdrpFindLoadedDllByMappingLockHeld@16.c)
 *     _LdrpProcessMappedModule@16 @ 0x4B2D05EC (_LdrpProcessMappedModule@16.c)
 *     _LdrpValidateEntrySection@4 @ 0x4B2D0824 (_LdrpValidateEntrySection@4.c)
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _WerEscalationReadImageVersionInfoForModuleBaseSafe@12 @ 0x4B2DA76C (_WerEscalationReadImageVersionInfoForModuleBaseSafe@12.c)
 *     _WerEscalationReadImageVersionInfoForModuleBase@8 @ 0x4B2DA7E7 (_WerEscalationReadImageVersionInfoForModuleBase@8.c)
 *     _LdrpFindLoadedDllByMappingFile@12 @ 0x4B2E5721 (_LdrpFindLoadedDllByMappingFile@12.c)
 *     _LdrGetDllHandleByMapping@8 @ 0x4B2E5810 (_LdrGetDllHandleByMapping@8.c)
 *     _LdrpGetImportDescriptorForSnap@4 @ 0x4B2E5CCD (_LdrpGetImportDescriptorForSnap@4.c)
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 *     _LdrpCheckNxIncompatibleDllSection@4 @ 0x4B2E7618 (_LdrpCheckNxIncompatibleDllSection@4.c)
 *     _LdrpCheckSafeDiscDll@4 @ 0x4B2E7708 (_LdrpCheckSafeDiscDll@4.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 *     _LdrpSetProtection@8 @ 0x4B331251 (_LdrpSetProtection@8.c)
 *     _LdrpUnsuppressAddressTakenIat@12 @ 0x4B3345D2 (_LdrpUnsuppressAddressTakenIat@12.c)
 *     _LdrpLocateMrdata@0 @ 0x4B334ED2 (_LdrpLocateMrdata@0.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 *     _LdrRelocateImageWithBias@28 @ 0x4B342836 (_LdrRelocateImageWithBias@28.c)
 *     _RtlInitializeHeapManager@4 @ 0x4B356A3E (_RtlInitializeHeapManager@4.c)
 *     _LdrVerifyMappedImageMatchesChecksum@12 @ 0x4B35A6EF (_LdrVerifyMappedImageMatchesChecksum@12.c)
 * Callees:
 *     _RtlImageNtHeaderEx_ExceptionFilter@8 @ 0x4B365FF3 (_RtlImageNtHeaderEx_ExceptionFilter@8.c)
 */

int __stdcall RtlImageNtHeaderEx(int a1, unsigned int a2, unsigned int a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // ecx
  char v6; // bl
  unsigned int v7; // esi
  unsigned int v8; // ecx
  int result; // eax

  v5 = 0;
  if ( !a5 )
    return -1073741811;
  *a5 = 0;
  if ( (a1 & 0xFFFFFFFC) != 0 || !a2 || a2 == -1 )
    return -1073741811;
  if ( (a1 & 1) != 0 )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( !a4 )
    {
      v7 = a3;
      if ( a3 < 0x40 )
        return -1073741701;
      goto LABEL_8;
    }
  }
  v7 = a3;
LABEL_8:
  if ( *(_WORD *)a2 == 23117 )
  {
    v8 = *(_DWORD *)(a2 + 60);
    if ( !v6 || (a4 || v8 < v7) && v8 < 0xFFFFFFE7 && (a4 || v8 + 24 < v7) )
    {
      if ( v8 >= 0x10000000 )
      {
        result = -1073741701;
        v5 = 0;
      }
      else
      {
        v5 = (_DWORD *)(a2 + v8);
        if ( (unsigned int)v5 < a2 )
        {
          result = -1073741701;
        }
        else if ( *v5 == 17744 )
        {
          result = 0;
        }
        else
        {
          result = -1073741701;
        }
      }
    }
    else
    {
      result = -1073741701;
      v5 = 0;
    }
  }
  else
  {
    result = -1073741701;
  }
  if ( result >= 0 )
    *a5 = v5;
  return result;
}
