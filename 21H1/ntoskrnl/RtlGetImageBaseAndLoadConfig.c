/*
 * XREFs of RtlGetImageBaseAndLoadConfig @ 0x1403F1448
 * Callers:
 *     KiVerifyContextIpForUserCet @ 0x1403EC630 (KiVerifyContextIpForUserCet.c)
 *     RtlVerifyUserUnwindTarget @ 0x140916314 (RtlVerifyUserUnwindTarget.c)
 * Callees:
 *     RtlpLookupUserFunctionTableInverted @ 0x14032EBE0 (RtlpLookupUserFunctionTableInverted.c)
 *     MmGetImageInformation @ 0x1405C6F2C (MmGetImageInformation.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407458C8 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlGetImageBaseAndLoadConfig(unsigned __int64 a1, PVOID *a2, __int64 *a3)
{
  __int64 Config; // rbx
  unsigned __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+28h] [rbp-30h]
  PVOID BaseOfImage[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+78h] [rbp+20h] BYREF

  *(_OWORD *)BaseOfImage = 0LL;
  v11 = 0LL;
  Config = 0LL;
  v12 = 0;
  v8 = 0LL;
  if ( !RtlpLookupUserFunctionTableInverted(a1, (__int64)BaseOfImage) )
  {
    if ( (int)MmGetImageInformation(a1, &BaseOfImage[1], &v8, &v12) < 0 )
    {
      BaseOfImage[1] = 0LL;
    }
    else if ( v8 >= 0xFFFFFFFF )
    {
      return 3221225621LL;
    }
  }
  v9 = 0LL;
  if ( BaseOfImage[1] )
  {
    if ( (unsigned __int64)BaseOfImage[1] + 64 > 0x7FFFFFFF0000LL || (char *)BaseOfImage[1] + 64 < BaseOfImage[1] )
      MEMORY[0x7FFFFFFF0000] = 0;
    Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage[1]);
    v9 = Config;
  }
  *a2 = BaseOfImage[1];
  *a3 = Config;
  return 0LL;
}
