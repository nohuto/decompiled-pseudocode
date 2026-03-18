/*
 * XREFs of _NtUserSetLayeredWindowAttributes@16 @ 0x1FA2E
 * Callers:
 *     <none>
 * Callees:
 *     _WindowHasShadow@4 @ 0x1FAEE (_WindowHasShadow@4.c)
 *     __SetLayeredWindowAttributes@16 @ 0x1FB1E (__SetLayeredWindowAttributes@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     _zzzUpdateShadowAlpha@4 @ 0x19D6F9 (_zzzUpdateShadowAlpha@4.c)
 */

int __stdcall NtUserSetLayeredWindowAttributes(int a1, int a2, char a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v9; // [esp+8h] [ebp-Ch] BYREF
  int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h]

  v4 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  v6 = v5;
  if ( v5 )
  {
    v9 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v9;
    v10 = v5;
    HMLockObject(v5);
    if ( (a4 & 0xFFFFFFFC) != 0 || IsWindowDesktopComposed(v6) && (*(_BYTE *)(*(_DWORD *)(v6 + 20) + 144) & 0x20) != 0 )
    {
      UserSetLastError(87);
    }
    else
    {
      v7 = _SetLayeredWindowAttributes(a3, a4);
      if ( v7 < 0 )
      {
        UserSetLastStatus(v7, 1);
      }
      else
      {
        v4 = 1;
        if ( (a4 & 2) != 0 && WindowHasShadow(v6) )
          zzzUpdateShadowAlpha();
      }
    }
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
