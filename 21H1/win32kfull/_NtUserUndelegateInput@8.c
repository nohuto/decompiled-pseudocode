/*
 * XREFs of _NtUserUndelegateInput@8 @ 0x82826
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z @ 0x14DECE (-_HandleDelegatedInput@@YGHPAUtagTHREADINFO@@W4HDIOPTION@@QAUtagMSG@@@Z.c)
 */

int __stdcall NtUserUndelegateInput(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // edi

  v2 = 0;
  EnterCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v4 = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 152) && (a2 == 2 || a2 == 1) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v3 + 8) + 232) == PsGetCurrentProcessWin32Process() )
      {
        _HandleDelegatedInput(*(_DWORD *)(v4 + 156), a2, 0);
        CleanupInputDelegation(v4);
        v2 = 1;
      }
      else
      {
        UserSetLastError((struct _NT_TIB *)5);
      }
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
