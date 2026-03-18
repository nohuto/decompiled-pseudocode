/*
 * XREFs of _NtUserGetUpdateRgn@12 @ 0xC3BAE
 * Callers:
 *     <none>
 * Callees:
 *     _xxxGetUpdateRgn@12 @ 0xC3C20 (_xxxGetUpdateRgn@12.c)
 */

int __stdcall NtUserGetUpdateRgn(int a1, int a2, int a3)
{
  int UpdateRgn; // esi
  int v4; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  UpdateRgn = 0;
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
    UpdateRgn = xxxGetUpdateRgn(a3);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return UpdateRgn;
}
