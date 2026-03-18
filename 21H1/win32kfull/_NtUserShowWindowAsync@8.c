/*
 * XREFs of _NtUserShowWindowAsync@8 @ 0xD450A
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z @ 0xF505E (-_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z.c)
 */

int __stdcall NtUserShowWindowAsync(int a1, unsigned int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h]
  int v9; // [esp+10h] [ebp-4h]

  v2 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = *(_WORD *)(*(_DWORD *)(v3 + 20) + 30) & 0x3FFF;
    if ( v5 != 669 && v5 != 671 )
    {
      v7 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v7;
      v8 = v3;
      HMLockObject(v3);
      if ( a2 > 0xB )
        UserSetLastError((struct _NT_TIB *)0x57);
      else
        v2 = _ShowWindowAsync(v4, 2, a2, 0);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
