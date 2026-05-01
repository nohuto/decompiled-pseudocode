/*
 * XREFs of ?OnBatterySaverStateChanged@AcrylicPolicyManager@@UEAAJ_N@Z @ 0x18011C640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z @ 0x18011D510 (-UpdateAcrylicState@AcrylicPolicyManager@@AEAAJ_N@Z.c)
 */

__int64 __fastcall AcrylicPolicyManager::OnBatterySaverStateChanged(AcrylicPolicyManager *this, char a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 331) == a2 )
    return 0LL;
  *((_BYTE *)this + 331) = a2;
  updated = AcrylicPolicyManager::UpdateAcrylicState((AcrylicPolicyManager *)((char *)this - 136), 0);
  v3 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x89,
    (__int64)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
    (const char *)(unsigned int)updated);
  return v3;
}
