/*
 * XREFs of LdrpFetchAddressOfSecurityCookie @ 0x14075C190
 * Callers:
 *     LdrInitSecurityCookie @ 0x14075C22C (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14075AEA4 (LdrImageDirectoryEntryToLoadConfig.c)
 */

unsigned __int64 __fastcall LdrpFetchAddressOfSecurityCookie(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v5; // rbp
  _DWORD *Config; // rax
  unsigned __int64 v9; // r8
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v5 = a2;
  RtlImageNtHeaderEx(1, a1, 0LL, &v11);
  Config = LdrImageDirectoryEntryToLoadConfig(a1);
  *a3 = 0;
  if ( Config && *Config >= 0x70u && (v9 = *((_QWORD *)Config + 11), v9 > a1) && v9 < v5 + a1 - 8 )
  {
    if ( a4 )
      *a4 = Config;
    return v9;
  }
  else
  {
    if ( a4 )
    {
      if ( Config && *Config >= 4u )
        *a4 = Config;
      else
        *a4 = 0LL;
    }
    return 0LL;
  }
}
