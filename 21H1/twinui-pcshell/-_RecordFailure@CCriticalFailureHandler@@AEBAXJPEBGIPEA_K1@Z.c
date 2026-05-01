/*
 * XREFs of ?_RecordFailure@CCriticalFailureHandler@@AEBAXJPEBGIPEA_K1@Z @ 0x180448E00
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804488CC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z @ 0x180448A8C (-SHRegSetString@@YAJPEAUHKEY__@@PEBG11@Z.c)
 */

void __fastcall CCriticalFailureHandler::_RecordFailure(
        CCriticalFailureHandler *this,
        int a2,
        BYTE *a3,
        int a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  const unsigned __int16 *v9; // rdx
  const unsigned __int16 *v10; // r8
  HKEY hKey; // [rsp+50h] [rbp-10h] BYREF
  CCriticalFailureHandler *Data; // [rsp+70h] [rbp+10h] BYREF

  Data = this;
  if ( !RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL) )
  {
    SHRegSetString(hKey, v9, v10, a3);
    LODWORD(Data) = a4;
    RegSetValueExW(hKey, L"PreviousFailure_SourceLine", 0, 4u, (const BYTE *)&Data, 4u);
    LODWORD(Data) = a2;
    RegSetValueExW(hKey, L"PreviousFailure_Result", 0, 4u, (const BYTE *)&Data, 4u);
    if ( a5 )
    {
      LODWORD(Data) = *(_DWORD *)a5;
      RegSetValueExW(hKey, L"PreviousFailure_Arg1", 0, 4u, (const BYTE *)&Data, 4u);
    }
    if ( a6 )
    {
      LODWORD(Data) = *(_DWORD *)a6;
      RegSetValueExW(hKey, L"PreviousFailure_Arg2", 0, 4u, (const BYTE *)&Data, 4u);
    }
    RegCloseKey(hKey);
  }
}
