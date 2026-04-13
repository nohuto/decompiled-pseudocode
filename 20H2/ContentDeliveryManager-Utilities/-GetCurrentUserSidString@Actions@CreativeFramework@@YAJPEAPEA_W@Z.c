/*
 * XREFs of ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x180098860
 * Callers:
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180098A4C (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180004190 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800296E0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180029854 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Actions::GetCurrentUserSidString(CreativeFramework::Actions *this, wchar_t **a2)
{
  unsigned int ValueW; // eax
  __int64 v4; // rdx
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  char *v11; // rax
  DWORD pcbData; // [rsp+40h] [rbp-1D8h] BYREF
  HKEY hkey[2]; // [rsp+48h] [rbp-1D0h] BYREF
  WCHAR SubKey[12]; // [rsp+58h] [rbp-1C0h] BYREF
  unsigned __int16 pvData[192]; // [rsp+70h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  hkey[1] = HKEY_DYN_DATA|0x7FFFFFF8LL;
  *(_QWORD *)this = 0LL;
  hkey[0] = 0LL;
  ValueW = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
             0,
             9u,
             hkey);
  if ( ValueW )
  {
    v4 = 40LL;
LABEL_7:
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v4,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)ValueW);
    goto LABEL_21;
  }
  v5 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
  v6 = v5;
  if ( v5 >= 0 )
  {
    pcbData = 185;
    ValueW = RegGetValueW(hkey[0], SubKey, L"LoggedOnUserSID", 2u, 0LL, pvData, &pcbData);
    if ( ValueW )
    {
      v4 = 46LL;
      goto LABEL_7;
    }
    v9 = -1LL;
    do
      ++v9;
    while ( pvData[v9] );
    *(_QWORD *)this = 0LL;
    v10 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
      v6 = -2147024362;
    }
    else
    {
      if ( !is_mul_ok(v10, 2uLL) )
      {
        v6 = -2147024362;
        goto LABEL_15;
      }
      v11 = (char *)CoTaskMemAlloc(2 * v10);
      *(_QWORD *)this = v11;
      if ( v11 )
      {
        v6 = 0;
        StringCchCopyNExW(v11, v9 + 1, (char *)pvData, v9);
LABEL_15:
        if ( v6 >= 0 )
          goto LABEL_21;
        goto LABEL_19;
      }
      v6 = -2147024882;
    }
LABEL_19:
    v7 = (unsigned int)v6;
    v8 = 47LL;
    goto LABEL_20;
  }
  v7 = (unsigned int)v5;
  v8 = 42LL;
LABEL_20:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
    (const char *)v7);
LABEL_21:
  if ( hkey[0] )
    RegCloseKey(hkey[0]);
  return (unsigned int)v6;
}
