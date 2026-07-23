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

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int16 v3; // ax
  unsigned int v4; // edi
  _OWORD Fields[3]; // [rsp+20h] [rbp-268h] BYREF
  _WORD v7[272]; // [rsp+50h] [rbp-238h] BYREF

  v2 = a2;
  v3 = *a1 & 0xFFFE;
  memset(Fields, 0, sizeof(Fields));
  if ( v3 >= 0x212u )
    v4 = 265;
  else
    v4 = *a1 >> 1;
  memmove(v7, *((const void **)a1 + 1), 2LL * v4);
  v7[v4] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v4 + 25);
  *(GUID *)((char *)&Fields[1] + 8) = LoadMUIDllGuid;
  return NtTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}
