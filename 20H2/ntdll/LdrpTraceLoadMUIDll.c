/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800E19DC
 * Callers:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResSearchResource @ 0x180048B80 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048F4C (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x180049670 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180049A78 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x18004AC40 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x18004AE70 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x18004B240 (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x18004B370 (LdrResGetRCConfig.c)
 *     LdrMapAndVerifyResourceFile @ 0x18004B944 (LdrMapAndVerifyResourceFile.c)
 *     LdrFindResource_U @ 0x180070690 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x180080FE0 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x180089F00 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800E16F4 (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800E4340 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800E44B4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E48DC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E5068 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
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
