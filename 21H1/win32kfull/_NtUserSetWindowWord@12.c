/*
 * XREFs of _NtUserSetWindowWord@12 @ 0x16A5F6
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetWindowWord@@YGGPAUtagWND@@HG@Z @ 0x1A5BF6 (-xxxSetWindowWord@@YGGPAUtagWND@@HG@Z.c)
 */

int __stdcall NtUserSetWindowWord(int a1, int a2, struct tagWND *a3)
{
  unsigned __int16 v3; // si
  int v4; // eax
  int v6; // [esp+0h] [ebp-14h]
  unsigned __int16 v7; // [esp+4h] [ebp-10h]
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v3 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwndEx(a1, 1, 1);
  if ( v4 )
  {
    v8 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v8;
    v9 = v4;
    HMLockObject(v4);
    v3 = xxxSetWindowWord(a3, v6, v7);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
