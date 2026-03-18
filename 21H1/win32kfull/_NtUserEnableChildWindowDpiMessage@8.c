/*
 * XREFs of _NtUserEnableChildWindowDpiMessage@8 @ 0xA9796
 * Callers:
 *     <none>
 * Callees:
 *     _xxxEnableChildWindowDpiMessageX@8 @ 0xA9806 (_xxxEnableChildWindowDpiMessageX@8.c)
 */

int __stdcall NtUserEnableChildWindowDpiMessage(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    v6 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v6;
    v7 = v3;
    HMLockObject(v3);
    v2 = xxxEnableChildWindowDpiMessageX(v4, a2);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
