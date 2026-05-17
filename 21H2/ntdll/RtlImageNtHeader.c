/*
 * XREFs of RtlImageNtHeader @ 0x180035BD0
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     SbpDetermineDllContext @ 0x18003DA14 (SbpDetermineDllContext.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 *     RtlCreateUserStack @ 0x180077340 (RtlCreateUserStack.c)
 *     LdrpCorFixupImage @ 0x1800CE838 (LdrpCorFixupImage.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DADA8 (AVrfpLoadAndInitializeProvider.c)
 *     AvrfMiniLoadDll @ 0x1800DB6D0 (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800E06F0 (RtlComputeImportTableHash.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E124C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetMappingFromCacheEntry @ 0x1800E13D8 (LdrpGetMappingFromCacheEntry.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall RtlImageNtHeader(unsigned __int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v2);
  return v2;
}
