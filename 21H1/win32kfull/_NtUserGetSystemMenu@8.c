/*
 * XREFs of _NtUserGetSystemMenu@8 @ 0x8EEDA
 * Callers:
 *     <none>
 * Callees:
 *     _xxxGetSystemMenu@8 @ 0x8EF56 (_xxxGetSystemMenu@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserGetSystemMenu(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  int *SystemMenu; // eax
  int v7; // [esp+Ch] [ebp-Ch] BYREF
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v2 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    v7 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v7;
    v8 = v3;
    HMLockObject(v3);
    SystemMenu = (int *)xxxGetSystemMenu(v4, a2);
    if ( SystemMenu )
      v2 = *SystemMenu;
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
