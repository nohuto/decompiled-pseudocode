/*
 * XREFs of _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1
 * Callers:
 *     _LdrMapAndVerifyResourceFile@36 @ 0x4B2B91A5 (_LdrMapAndVerifyResourceFile@36.c)
 *     _RtlpResUltimateFallbackInfo@20 @ 0x4B2BA1A3 (_RtlpResUltimateFallbackInfo@20.c)
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpResGetMappingSize@16 @ 0x4B2BAB30 (_LdrpResGetMappingSize@16.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpResGetResourceDirectory@20 @ 0x4B2BB320 (_LdrpResGetResourceDirectory@20.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     _LdrFindResource_U@16 @ 0x4B2BB910 (_LdrFindResource_U@16.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpAccessResourceData@16 @ 0x4B2BD414 (_LdrpAccessResourceData@16.c)
 *     _LdrpResSearchResourceInsideDirectory@52 @ 0x4B2BE960 (_LdrpResSearchResourceInsideDirectory@52.c)
 *     _LdrFindResourceEx_U@20 @ 0x4B2EBB90 (_LdrFindResourceEx_U@20.c)
 *     _LdrpMUIEtwOutput@16 @ 0x4B33F89A (_LdrpMUIEtwOutput@16.c)
 *     _LdrResRelease@12 @ 0x4B342E00 (_LdrResRelease@12.c)
 *     _LdrpResFileSize@8 @ 0x4B34303A (_LdrpResFileSize@8.c)
 *     _LdrpResMapFile@16 @ 0x4B34316E (_LdrpResMapFile@16.c)
 *     _LdrpResSearchResourceHandle@32 @ 0x4B3434F8 (_LdrpResSearchResourceHandle@32.c)
 *     _LdrpResValidateFilePath@4 @ 0x4B343BC4 (_LdrpResValidateFilePath@4.c)
 * Callees:
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, int a2)
{
  int v3; // ebx
  _DWORD v6[12]; // [esp+10h] [ebp-250h] BYREF
  _WORD v7[270]; // [esp+40h] [ebp-220h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v3 = 265;
  else
    v3 = *a1 >> 1;
  memcpy(v7, *((const void **)a1 + 1), 2 * v3);
  v7[v3] = 0;
  LOBYTE(v6[1]) = 0;
  v6[6] = LoadMUIDllGuid[0];
  v6[7] = LoadMUIDllGuid[1];
  v6[8] = LoadMUIDllGuid[2];
  v6[9] = LoadMUIDllGuid[3];
  LOWORD(v6[0]) = 2 * v3 + 50;
  return NtTraceEvent(a2, 256, 48, (int)v6);
}
