/*
 * XREFs of ?IsDeviceAADJoined@@YA_NXZ @ 0x1800970D0
 * Callers:
 *     ?GetWindowsSearchBoxWidth@@YAH_N0@Z @ 0x180096E98 (-GetWindowsSearchBoxWidth@@YAH_N0@Z.c)
 *     ?GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z @ 0x180096F54 (-GetWindowsSearchBoxWidthWithMonParamConsidered@@YAH_N00@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180138628 (--1last_error_context@wil@@QEAA@XZ.c)
 */

char IsDeviceAADJoined(void)
{
  char v0; // bl
  int JoinInfo; // eax
  char v2; // di
  _DWORD *v3; // r15
  _DWORD *v4; // r14
  _DWORD *v6; // [rsp+28h] [rbp-18h] BYREF
  char v7; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  char v9; // [rsp+70h] [rbp+30h] BYREF
  DWORD LastError; // [rsp+74h] [rbp+34h]
  _DWORD *v11; // [rsp+78h] [rbp+38h]

  v11 = 0LL;
  v6 = 0LL;
  v0 = 1;
  v7 = 1;
  JoinInfo = DsrGetJoinInfo(0LL, &v6);
  if ( JoinInfo >= 0 )
  {
    v2 = 1;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9B,
      (__int64)"onecoreuap\\internal\\shell\\inc\\CortanaHelp.h",
      (const char *)(unsigned int)JoinInfo);
    v2 = 0;
  }
  if ( v7 )
  {
    v3 = v6;
    v4 = v11;
    if ( v11 )
    {
      v9 = 0;
      LastError = GetLastError();
      DsrFreeJoinInfo(v4);
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v9);
    }
    v11 = v3;
  }
  if ( !v2 || !v11 || *v11 != 1 )
    v0 = 0;
  if ( v11 )
    DsrFreeJoinInfo(v11);
  return v0;
}
