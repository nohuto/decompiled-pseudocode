/*
 * XREFs of _LdrpVerifyAlternateResourceModuleEx@24 @ 0x4B2B874D
 * Callers:
 *     _LdrMapAndVerifyResourceFile@36 @ 0x4B2B91A5 (_LdrMapAndVerifyResourceFile@36.c)
 * Callees:
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16 @ 0x4B330AB6 (_LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure@16.c)
 */

char __fastcall LdrpVerifyAlternateResourceModuleEx(void *a1, void *a2, int a3, wchar_t *String1, int a5, int a6)
{
  bool v7; // bl
  _DWORD *v8; // esi
  int RCConfig; // eax
  int v11; // eax
  size_t v12; // [esp-4h] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v14; // [esp+14h] [ebp-4h] BYREF

  if ( !a6 )
    return 1;
  v7 = 0;
  if ( (a5 & 0x1000) != 0 )
  {
    RCConfig = LdrResGetRCConfig(a1, 0, &v13, 4096, 1);
    if ( RCConfig >= 0 )
    {
      if ( (int)LdrResGetRCConfig(a2, 0, &v14, 4096, 0) < 0 )
        return 0;
      v8 = v14;
      goto LABEL_5;
    }
    if ( RCConfig != -1073741686 )
      return 0;
  }
  else
  {
    v13 = LdrpGetRcConfig(a1, 0, 1);
    if ( v13 )
    {
      v8 = (_DWORD *)LdrpGetRcConfig(a2, 0, 0);
      v14 = v8;
      if ( !v8 )
        return 0;
LABEL_5:
      LODWORD(v12) = 16;
      if ( a6 == 2 )
      {
        v11 = memcmp((const void *)(v13 + 28), v8 + 7, v12);
        v7 = v11 == 0;
        if ( a3 )
        {
          if ( !v11 )
            return (a5 & 0x1000000) != 0 || String1 && !_wcsicmp(String1, (const wchar_t *)((char *)v8 + v8[29]));
          LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure(v8 + 7, a3);
          v8 = v14;
        }
      }
      else if ( !memcmp((const void *)(v13 + 44), v8 + 11, v12) )
      {
        return (a5 & 0x1000000) != 0 || String1 && !_wcsicmp(String1, (const wchar_t *)((char *)v8 + v8[29]));
      }
      if ( !v7 )
        return 0;
      return (a5 & 0x1000000) != 0 || String1 && !_wcsicmp(String1, (const wchar_t *)((char *)v8 + v8[29]));
    }
  }
  return (a5 & 0x1000000) != 0;
}
