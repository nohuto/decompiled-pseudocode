/*
 * XREFs of RtlImageNtHeader @ 0x180035BD0
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     SbpDetermineDllContext @ 0x18003DA14 (SbpDetermineDllContext.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 *     RtlCreateUserStack @ 0x180077340 (RtlCreateUserStack.c)
 *     LdrpCorFixupImage @ 0x1800CE7F8 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAD68 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DB690 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800E06B0 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E120C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800E1398 (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 */

PIMAGE_NT_HEADERS __cdecl RtlImageNtHeader(PVOID BaseOfImage)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  return OutHeaders;
}
