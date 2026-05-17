/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800E163C
 * Callers:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048EFC (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x180049620 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180049A28 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x18004ABF0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x18004AE20 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x18004B1F0 (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x18004B320 (LdrResGetRCConfig.c)
 *     LdrMapAndVerifyResourceFile @ 0x18004B8F4 (LdrMapAndVerifyResourceFile.c)
 *     LdrFindResource_U @ 0x180070590 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x180080EE0 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180089E00 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800E1354 (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800E3EF0 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800E4064 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E448C (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E4C18 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

__int64 __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1)
{
  unsigned int v1; // edi
  _WORD v3[272]; // [rsp+50h] [rbp-238h] BYREF

  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v1 = 265;
  else
    v1 = *a1 >> 1;
  memmove(v3, *((const void **)a1 + 1), 2LL * v1);
  v3[v1] = 0;
  return NtTraceEvent();
}
