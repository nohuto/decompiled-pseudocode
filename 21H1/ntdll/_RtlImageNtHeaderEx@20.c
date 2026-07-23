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

NTSTATUS __cdecl RtlImageNtHeaderEx(ULONG Flags, PVOID BaseOfImage, ULONG64 Size, PIMAGE_NT_HEADERS *OutHeaders)
{
  _IMAGE_NT_HEADERS64 *v4; // ecx
  char v5; // bl
  unsigned int v6; // esi
  unsigned int v7; // ecx
  NTSTATUS result; // eax

  v4 = 0;
  if ( !OutHeaders )
    return -1073741811;
  *OutHeaders = 0;
  if ( (Flags & 0xFFFFFFFC) != 0 || !BaseOfImage || BaseOfImage == (PVOID)-1 )
    return -1073741811;
  if ( (Flags & 1) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    if ( !HIDWORD(Size) )
    {
      v6 = Size;
      if ( (unsigned int)Size < 0x40 )
        return -1073741701;
      goto LABEL_8;
    }
  }
  v6 = Size;
LABEL_8:
  if ( *(_WORD *)BaseOfImage == 23117 )
  {
    v7 = *((_DWORD *)BaseOfImage + 15);
    if ( !v5 || (HIDWORD(Size) || v7 < v6) && v7 < 0xFFFFFFE7 && (HIDWORD(Size) || v7 + 24 < v6) )
    {
      if ( v7 >= 0x10000000 )
      {
        result = -1073741701;
        v4 = 0;
      }
      else
      {
        v4 = (_IMAGE_NT_HEADERS64 *)((char *)BaseOfImage + v7);
        if ( v4 < BaseOfImage )
        {
          result = -1073741701;
        }
        else if ( v4->Signature == 17744 )
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
      v4 = 0;
    }
  }
  else
  {
    result = -1073741701;
  }
  if ( result >= 0 )
    *OutHeaders = v4;
  return result;
}
