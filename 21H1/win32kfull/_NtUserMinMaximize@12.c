/*
 * XREFs of _NtUserMinMaximize@12 @ 0x166FF9
 * Callers:
 *     <none>
 * Callees:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 */

int __stdcall NtUserMinMaximize(int a1, struct tagWND *a2, int a3)
{
  int v3; // esi
  int v4; // eax
  struct tagQ *v5; // edi
  int v6; // ecx
  int *v7; // eax
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h]

  v3 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  v5 = (struct tagQ *)v4;
  if ( v4 )
  {
    v6 = *(_WORD *)(*(_DWORD *)(v4 + 20) + 30) & 0x3FFF;
    if ( v6 != 669 && v6 != 671 )
    {
      v9 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v9;
      v10 = v4;
      HMLockObject(v4);
      v7 = (int *)xxxMinMaximizeEx(v5, a2, _gdwPUDFlags & 0x10000 | (a3 != 0), 0, 0, 0);
      if ( v7 )
        v3 = *v7;
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
