/*
 * XREFs of _NtUserInvalidateRgn@12 @ 0xE3A1A
 * Callers:
 *     <none>
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 */

int __stdcall NtUserInvalidateRgn(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // edi
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v3 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( v4 )
  {
    v7 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v7;
    v8 = v4;
    HMLockObject(v4);
    v3 = xxxRedrawWindow(v5, 0, a2, 4 * (a3 != 0) + 1);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
