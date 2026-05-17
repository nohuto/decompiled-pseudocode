/*
 * XREFs of RtlInitUnicodeStringEx @ 0x18001C270
 * Callers:
 *     LdrpFindKnownDll @ 0x1800150E0 (LdrpFindKnownDll.c)
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18001AEE0 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlGetFullPathName_UEx @ 0x18001D800 (RtlGetFullPathName_UEx.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlDoesFileExists_UEx @ 0x180046788 (RtlDoesFileExists_UEx.c)
 *     LdrpResolveDllName @ 0x18005F064 (LdrpResolveDllName.c)
 *     WerpGlobalFlagsForProcess @ 0x180060684 (WerpGlobalFlagsForProcess.c)
 *     CompatCachepLookupCdb @ 0x180073484 (CompatCachepLookupCdb.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlpProcessIFEOKeyFilter @ 0x180075400 (RtlpProcessIFEOKeyFilter.c)
 *     RtlIsDosDeviceName_U @ 0x180077050 (RtlIsDosDeviceName_U.c)
 *     RtlQueryImageFileKeyOption @ 0x18007A3A0 (RtlQueryImageFileKeyOption.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800843B0 (LdrGetKnownDllSectionHandle.c)
 *     RtlDosSearchPath_U @ 0x180088DA0 (RtlDosSearchPath_U.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0A40 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D0EEC (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4630 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D4B44 (LdrpAddRedirectedFunction.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E19B0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E2410 (RtlSetImageMitigationPolicy.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x1800E35F8 (RtlpIsEmptyImageFileOptionsKey.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E37D8 (RtlpQueryEafPlusModuleList.c)
 *     SbpResolveBasedOnName @ 0x180113818 (SbpResolveBasedOnName.c)
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
