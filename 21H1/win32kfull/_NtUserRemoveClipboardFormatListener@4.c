/*
 * XREFs of _NtUserRemoveClipboardFormatListener@4 @ 0xD444C
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ @ 0x91C96 (-CheckClipboardAccess@@YGPAUtagWINDOWSTATION@@XZ.c)
 *     ?_RemoveClipboardFormatListener@@YGXPAUtagWND@@@Z @ 0xD44B2 (-_RemoveClipboardFormatListener@@YGXPAUtagWND@@@Z.c)
 */

int __stdcall NtUserRemoveClipboardFormatListener(int a1)
{
  int v1; // esi
  int v2; // edi
  struct tagWND *v4; // [esp+0h] [ebp-8h]

  v1 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(a1);
  if ( v2 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v2 + 8) + 232) == PsGetCurrentProcessWin32Process() )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_BYTE *)(*(_DWORD *)(v2 + 20) + 144) & 1) != 0 )
        {
          _RemoveClipboardFormatListener(v4);
          v1 = 1;
        }
        else
        {
          UserSetLastError((struct _NT_TIB *)0x57);
        }
      }
    }
    else
    {
      v1 = 5;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
