/*
 * XREFs of ?_MatchesPreviousFailure@CCriticalFailureHandler@@AEBA_NJPEBGIPEA_K1@Z @ 0x18046C260
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18046C03C (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x18005F510 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

bool __fastcall CCriticalFailureHandler::_MatchesPreviousFailure(
        CCriticalFailureHandler *this,
        int a2,
        const unsigned __int16 *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  bool v9; // bl
  LSTATUS ValueW; // eax
  bool v11; // sf
  DWORD pcbData; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v15; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v16[3]; // [rsp+54h] [rbp-ACh] BYREF
  WCHAR psz2[264]; // [rsp+60h] [rbp-A0h] BYREF

  v9 = 0;
  if ( !RegOpenKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0x20019u, &hkey) )
  {
    if ( SHRegGetDWORD(hkey, 0LL, L"PreviousFailure_Result", &v15) < 0
      || a2 != v15
      || SHRegGetDWORD(hkey, 0LL, L"PreviousFailure_SourceLine", v16) < 0
      || a4 != v16[0] )
    {
      goto LABEL_22;
    }
    pcbData = 520;
    ValueW = RegGetValueW(hkey, 0LL, L"PreviousFailure_SourceFile", 2u, 0LL, psz2, &pcbData);
    v11 = ValueW < 0;
    if ( ValueW )
    {
      psz2[0] = 0;
      if ( ValueW > 0 )
        v11 = 1;
    }
    if ( v11 || StrCmpIW(a3, psz2) )
      goto LABEL_22;
    if ( SHRegGetDWORD(hkey, 0LL, L"PreviousFailure_Arg1", &pcbData) < 0 )
    {
      v9 = a5 == 0LL;
      if ( a5 )
      {
LABEL_22:
        RegCloseKey(hkey);
        return v9;
      }
    }
    else if ( !a5 || *a5 != pcbData )
    {
      goto LABEL_22;
    }
    if ( SHRegGetDWORD(hkey, 0LL, L"PreviousFailure_Arg2", &pcbData) < 0 )
      v9 = a6 == 0LL;
    else
      v9 = a6 && *a6 == pcbData;
    goto LABEL_22;
  }
  return v9;
}
