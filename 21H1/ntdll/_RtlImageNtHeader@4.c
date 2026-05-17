/*
 * XREFs of _RtlImageNtHeader@4 @ 0x4B2BB8E0
 * Callers:
 *     _TpAllocPoolInternal@8 @ 0x4B2B37A4 (_TpAllocPoolInternal@8.c)
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _LdrpMapResourceFile@24 @ 0x4B2B961A (_LdrpMapResourceFile@24.c)
 *     _SbpDetermineDllContext@8 @ 0x4B2B9AA4 (_SbpDetermineDllContext@8.c)
 *     _RtlCaptureImageExceptionValues@12 @ 0x4B2B9DFF (_RtlCaptureImageExceptionValues@12.c)
 *     _RtlCreateUserStack@24 @ 0x4B2F2050 (_RtlCreateUserStack@24.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _LdrpCalloutExceptionFilter@4 @ 0x4B334818 (_LdrpCalloutExceptionFilter@4.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 *     _LdrpGetAlternateResourceModuleHandleEx@16 @ 0x4B33F505 (_LdrpGetAlternateResourceModuleHandleEx@16.c)
 *     _LdrpGetImageSize@8 @ 0x4B33F62D (_LdrpGetImageSize@8.c)
 *     _LdrpGetMappingFromCacheEntry@16 @ 0x4B33F6B8 (_LdrpGetMappingFromCacheEntry@16.c)
 *     _RtlpFileIsWin32WithRCManifest@4 @ 0x4B353DB4 (_RtlpFileIsWin32WithRCManifest@4.c)
 * Callees:
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 */

int __stdcall RtlImageNtHeader(int a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  RtlImageNtHeaderEx(1, a1, 0, 0, &v2);
  return v2;
}
