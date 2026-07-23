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

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, void *a2)
{
  int v3; // ebx
  size_t v5; // [esp-4h] [ebp-264h]
  size_t v6; // [esp-4h] [ebp-264h]
  __int16 Fields; // [esp+10h] [ebp-250h] BYREF
  char v9; // [esp+14h] [ebp-24Ch]
  int v10; // [esp+28h] [ebp-238h]
  int v11; // [esp+2Ch] [ebp-234h]
  int v12; // [esp+30h] [ebp-230h]
  int v13; // [esp+34h] [ebp-22Ch]
  _WORD v14[270]; // [esp+40h] [ebp-220h] BYREF

  LODWORD(v5) = 48;
  memset(&Fields, 0, v5);
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v3 = 265;
  else
    v3 = *a1 >> 1;
  LODWORD(v6) = 2 * v3;
  memcpy(v14, *((const void **)a1 + 1), v6);
  v14[v3] = 0;
  v9 = 0;
  v10 = LoadMUIDllGuid[0];
  v11 = LoadMUIDllGuid[1];
  v12 = LoadMUIDllGuid[2];
  v13 = LoadMUIDllGuid[3];
  Fields = 2 * v3 + 50;
  return NtTraceEvent(a2, 0x100u, 0x30u, &Fields);
}
