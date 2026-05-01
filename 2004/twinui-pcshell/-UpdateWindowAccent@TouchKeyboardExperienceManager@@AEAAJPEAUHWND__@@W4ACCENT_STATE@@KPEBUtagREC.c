/*
 * XREFs of ?UpdateWindowAccent@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180356B34
 * Callers:
 *     ?UpdateBorder@TouchKeyboardExperienceManager@@AEAAJIW4ViewEffectKind@@@Z @ 0x180354D38 (-UpdateBorder@TouchKeyboardExperienceManager@@AEAAJIW4ViewEffectKind@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158A58 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::UpdateWindowAccent(__int64 a1, __int64 a2, int a3)
{
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+30h] [rbp-28h]
  _DWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8[3] = 0;
  v8[0] = a3;
  v8[2] = 0;
  v5 = 19;
  v6 = v8;
  v8[1] = 1504;
  v7 = 16;
  if ( !(unsigned int)SetWindowCompositionAttribute(a2, &v5) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xC4B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v3);
  return 0LL;
}
