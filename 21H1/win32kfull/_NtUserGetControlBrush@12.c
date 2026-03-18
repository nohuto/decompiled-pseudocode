/*
 * XREFs of _NtUserGetControlBrush@12 @ 0xBF9BC
 * Callers:
 *     <none>
 * Callees:
 *     _xxxGetControlBrush@12 @ 0xBFA3E (_xxxGetControlBrush@12.c)
 */

int __stdcall NtUserGetControlBrush(int a1, int a2, int a3)
{
  int ControlBrush; // esi
  int v4; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  ControlBrush = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    v6 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v6;
    v7 = v4;
    HMLockObject(v4);
    if ( a2 && (unsigned int)(a3 - 306) <= 6 )
      ControlBrush = xxxGetControlBrush(a3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return ControlBrush;
}
