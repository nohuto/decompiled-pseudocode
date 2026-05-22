/*
 * XREFs of ??R_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@QEBAJXZ @ 0x180042204
 * Callers:
 *     ??$init_once_nothrow@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@PEA_N@Z @ 0x18004214C (--$init_once_nothrow@V_lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_@@@wil@@YAJAEAT_RTL_RUN_ONCE@@V_l.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall _lambda_e21be6ce7c3ebc8b73b7211c05c7ecf4_::operator()(__int64 a1)
{
  int ValueW; // eax
  bool v2; // sf
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = HIDWORD(a1);
  v5 = 0;
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Holographic",
             L"ClassicAppsEnabled",
             0x20000018u,
             0LL,
             &v5,
             &v7);
  if ( ValueW > 0 )
    ValueW = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW < -2147024894 )
  {
    v2 = ValueW < 0;
  }
  else
  {
    if ( ValueW <= -2147024893 || ValueW == -2147023728 )
    {
      `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = 1;
      return 0LL;
    }
    v2 = ValueW < 0;
    if ( !ValueW )
    {
      `IsHolographicWin32SlatesFeatureEnabled'::`2'::s_win32SlatesEnabled = v5 == 1;
      return 0LL;
    }
  }
  if ( v2 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      47LL,
      (__int64)"onecoreuap\\internal\\shell\\inc\\Win32SlatesFeature.h",
      (const char *)(unsigned int)ValueW);
  return 0LL;
}
