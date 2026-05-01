/*
 * XREFs of PerSessionState::_CreateSessionKey @ 0x18030F804
 * Callers:
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x18030F92C (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall PerSessionState::_CreateSessionKey(HKEY a1)
{
  LSTATUS result; // eax
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp+10h] BYREF

  hKey = a1;
  result = SHCreateSessionKey(131078LL, &hKey);
  if ( result >= 0 )
  {
    if ( !RegCreateKeyExW(hKey, L"DesktopSwitchCompleted", 0, 0LL, 1u, 0x20006u, 0LL, &phkResult, 0LL) )
      RegCloseKey(phkResult);
    return RegCloseKey(hKey);
  }
  return result;
}
