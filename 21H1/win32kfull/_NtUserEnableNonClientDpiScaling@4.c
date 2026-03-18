/*
 * XREFs of _NtUserEnableNonClientDpiScaling@4 @ 0x16144D
 * Callers:
 *     <none>
 * Callees:
 *     _xxxEnableNonClientDpiScaling@4 @ 0x1522FC (_xxxEnableNonClientDpiScaling@4.c)
 */

int __stdcall NtUserEnableNonClientDpiScaling(int a1)
{
  int v1; // esi
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
    v1 = xxxEnableNonClientDpiScaling(v3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
