/*
 * XREFs of RtlImageNtHeaderEx @ 0x180032AD0
 * Callers:
 *     CsrClientConnectToServer @ 0x180008E20 (CsrClientConnectToServer.c)
 *     LdrpProcessMappedModule @ 0x18000F9AC (LdrpProcessMappedModule.c)
 *     LdrpValidateEntrySection @ 0x18000FB9C (LdrpValidateEntrySection.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x18001076C (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrpGetImportDescriptorForSnap @ 0x1800142DC (LdrpGetImportDescriptorForSnap.c)
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800144C0 (LdrpFindLoadedDllByMappingLockHeld.c)
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180014F84 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpHandleProtectedDelayload @ 0x1800318A0 (LdrpHandleProtectedDelayload.c)
 *     LdrpGetProcedureAddress @ 0x1800321C0 (LdrpGetProcedureAddress.c)
 *     LdrpSnapModule @ 0x1800323F0 (LdrpSnapModule.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1800335B8 (LdrpGetFromMUIMemCache.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlImageNtHeader @ 0x180035BD0 (RtlImageNtHeader.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180035C00 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpInitializeTls @ 0x1800473D8 (LdrpInitializeTls.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800478D0 (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpResGetResourceDirectory @ 0x180049620 (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x18004ABF0 (LdrpResGetMappingSize.c)
 *     WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18006AC34 (WerEscalationReadImageVersionInfoForModuleBaseSafe.c)
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006ACF0 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800744A0 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrGetDllHandleByMapping @ 0x180074610 (LdrGetDllHandleByMapping.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B240 (LdrpCodeAuthzInitialize.c)
 *     LdrpSetProtection @ 0x180082EA8 (LdrpSetProtection.c)
 *     LdrRelocateImageWithBias @ 0x18008448C (LdrRelocateImageWithBias.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008AA90 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpIsExecutableRelocatedImage @ 0x1800CDA68 (LdrpIsExecutableRelocatedImage.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     LdrpLocateMrdata @ 0x1800D59E4 (LdrpLocateMrdata.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 *     LdrVerifyMappedImageMatchesChecksum @ 0x1800F576C (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     RtlImageNtHeaderEx_ExceptionFilter @ 0x1800FEC04 (RtlImageNtHeaderEx_ExceptionFilter.c)
 */

__int64 __fastcall RtlImageNtHeaderEx(int a1, unsigned __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  _DWORD *v6; // r10
  char v7; // cl
  unsigned __int64 v8; // r8

  result = 0LL;
  v6 = 0LL;
  if ( !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 || a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225485LL;
  if ( (a1 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( a3 < 0x40 )
      return 3221225595LL;
  }
  if ( *(_WORD *)a2 != 23117 )
  {
LABEL_16:
    result = 3221225595LL;
    goto LABEL_18;
  }
  v8 = *(unsigned int *)(a2 + 60);
  if ( v7 && (v8 >= a3 || (unsigned int)v8 >= 0xFFFFFFE7 || v8 + 24 >= a3) )
  {
    result = 3221225595LL;
    v6 = 0LL;
    goto LABEL_18;
  }
  if ( (unsigned int)v8 < 0x10000000 )
  {
    v6 = (_DWORD *)(a2 + v8);
    if ( a2 + v8 >= a2 && *v6 == 17744 )
      goto LABEL_18;
    goto LABEL_16;
  }
  result = 3221225595LL;
  v6 = 0LL;
LABEL_18:
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
