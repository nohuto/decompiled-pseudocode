/*
 * XREFs of _NtUserCreateCaret@16 @ 0xAA68C
 * Callers:
 *     <none>
 * Callees:
 *     _xxxCreateCaret@16 @ 0xAA702 (_xxxCreateCaret@16.c)
 */

int __stdcall NtUserCreateCaret(int a1, int a2, int a3, int a4)
{
  int Caret; // esi
  int v5; // eax
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  Caret = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    v7 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v7;
    v8 = v5;
    HMLockObject(v5);
    Caret = xxxCreateCaret(a3, a4);
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return Caret;
}
