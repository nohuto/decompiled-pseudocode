/*
 * XREFs of ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18000736C
 * Callers:
 *     ?GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ @ 0x1800077B0 (-GetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAHXZ.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180007840 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18002A46C (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CWindowsPolicyManager::InitAccessibilityAudioSettings(CWindowsPolicyManager *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // [rsp+20h] [rbp-28h]
  unsigned int v10; // [rsp+20h] [rbp-28h]
  HKEY hKey; // [rsp+30h] [rbp-18h] BYREF
  HKEY phkResult; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  CWindowsPolicyManager *Type; // [rsp+60h] [rbp+18h] BYREF
  char v15; // [rsp+69h] [rbp+21h]
  DWORD cbData; // [rsp+70h] [rbp+28h] BYREF
  int Data; // [rsp+78h] [rbp+30h] BYREF

  Type = this;
  if ( !a2 )
    return 0LL;
  v4 = RpcImpersonateClient(0LL);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1F3,
             (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v4,
             v9);
  v15 = 1;
  phkResult = 0LL;
  v5 = RegOpenCurrentUser(0x20019u, &phkResult);
  if ( v5 )
  {
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)0x1F8,
           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
           (const char *)v5,
           v9);
  }
  else
  {
    hKey = 0LL;
    v7 = RegOpenKeyExW(phkResult, L"Software\\Microsoft\\Multimedia\\Audio", 0, 1u, &hKey);
    if ( v7 )
    {
      v6 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x1FB,
             (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
             (const char *)v7,
             v10);
    }
    else
    {
      LODWORD(Type) = 4;
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"AccessibilityMonoMixState", 0LL, (LPDWORD)&Type, (LPBYTE)&Data, &cbData)
        && (_DWORD)Type == 4
        && cbData == 4 )
      {
        v8 = Data;
      }
      else
      {
        v8 = 0;
        Data = 0;
      }
      TsSessionIdInitAccessibilityAudioSettings(a2, v8);
      v6 = 0;
    }
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( phkResult )
    RegCloseKey(phkResult);
  RpcRevertToSelf();
  return v6;
}
