/*
 * XREFs of RtlInitUnicodeStringEx @ 0x18001C270
 * Callers:
 *     LdrpFindKnownDll @ 0x1800150E0 (LdrpFindKnownDll.c)
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18001AEE0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlGetFullPathName_UEx @ 0x18001D800 (RtlGetFullPathName_UEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlDoesFileExists_UEx @ 0x1800467D8 (RtlDoesFileExists_UEx.c)
 *     LdrpResolveDllName @ 0x18005F174 (LdrpResolveDllName.c)
 *     WerpGlobalFlagsForProcess @ 0x180060794 (WerpGlobalFlagsForProcess.c)
 *     CompatCachepLookupCdb @ 0x180073584 (CompatCachepLookupCdb.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800752DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180075500 (RtlpProcessIFEOKeyFilter.c)
 *     RtlIsDosDeviceName_U @ 0x180077150 (RtlIsDosDeviceName_U.c)
 *     RtlQueryImageFileKeyOption @ 0x18007A4A0 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800844B0 (LdrGetKnownDllSectionHandle.c)
 *     RtlDosSearchPath_U @ 0x180088EA0 (RtlDosSearchPath_U.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0C20 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D49CC (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4EE4 (LdrpAddRedirectedFunction.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E1D50 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E27F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E3A48 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3C28 (RtlpQueryEafPlusModuleList.c)
 *     SbpResolveBasedOnName @ 0x180113D28 (SbpResolveBasedOnName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitUnicodeStringEx(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int16 v3; // ax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a2;
  if ( !a2 )
    return 0LL;
  v2 = -1LL;
  do
    ++v2;
  while ( *(_WORD *)(a2 + 2 * v2) );
  if ( v2 <= 0x7FFE )
  {
    v3 = 2 * v2;
    *(_WORD *)a1 = v3;
    *(_WORD *)(a1 + 2) = v3 + 2;
    return 0LL;
  }
  return 3221225734LL;
}
