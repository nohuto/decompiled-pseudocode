/*
 * XREFs of _NtUserIsWindowBroadcastingDpiToChildren@4 @ 0x9B6E6
 * Callers:
 *     <none>
 * Callees:
 *     _IsWindowBroadcastingDpiToChildrenX@4 @ 0x9B752 (_IsWindowBroadcastingDpiToChildrenX@4.c)
 */

int __stdcall NtUserIsWindowBroadcastingDpiToChildren(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v5; // [esp+8h] [ebp-Ch] BYREF
  int v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h]

  v1 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  v3 = v2;
  if ( v2 )
  {
    v5 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v5;
    v6 = v2;
    HMLockObject(v2);
    v1 = IsWindowBroadcastingDpiToChildrenX(v3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
