/*
 * XREFs of _NtUserIsWindowGDIScaledDpiMessageEnabled@4 @ 0x165C58
 * Callers:
 *     <none>
 * Callees:
 *     _IsWindowGDIScaledDpiMessageEnabledX@4 @ 0x1512F0 (_IsWindowGDIScaledDpiMessageEnabledX@4.c)
 */

BOOL __stdcall NtUserIsWindowGDIScaledDpiMessageEnabled(int a1)
{
  BOOL v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edi
  int v5; // [esp+8h] [ebp-Ch] BYREF
  _DWORD *v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  v1 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  EnterCrit(0, 1);
  v2 = (_DWORD *)ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v5 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v5;
    v6 = v2;
    HMLockObject(v2);
    v1 = IsWindowGDIScaledDpiMessageEnabledX(v3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
