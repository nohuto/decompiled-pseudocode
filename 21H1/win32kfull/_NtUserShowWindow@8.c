/*
 * XREFs of _NtUserShowWindow@8 @ 0xA1D56
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 */

int __stdcall NtUserShowWindow(int a1, unsigned int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  struct tagWND *v7; // [esp+0h] [ebp-14h]
  unsigned int v8; // [esp+4h] [ebp-10h]
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v2 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwndEx(a1, 1, 1);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF;
    if ( v5 != 669 && v5 != 671 )
    {
      v9 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v9;
      v10 = v3;
      HMLockObject(v3);
      if ( a2 > 0xB || *(char *)(*(_DWORD *)(v4 + 20) + 12) < 0 )
        UserSetLastError((struct _NT_TIB *)0x57);
      else
        v2 = xxxShowWindow(v7, v8);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
