/*
 * XREFs of _NtUserDiscardPointerFrameMessages@4 @ 0x160C77
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxDiscardPointerFrameMessagesInternal@4 @ 0x15A623 (_xxxDiscardPointerFrameMessagesInternal@4.c)
 */

int __stdcall NtUserDiscardPointerFrameMessages(HWND *a1)
{
  int v1; // esi
  _BYTE *v2; // eax
  int v4; // [esp-4h] [ebp-8h]

  v1 = 1;
  EnterCrit(0, 1);
  if ( !a1 || HIWORD(a1) )
  {
    v4 = 87;
    goto LABEL_10;
  }
  if ( (unsigned __int16)a1 == 1 )
  {
    v2 = *(_BYTE **)(_gptiCurrent + 720);
    if ( !v2 || (*v2 & 1) == 0 )
      goto LABEL_6;
  }
  else
  {
    if ( (*(_DWORD *)(_gptiCurrent + 688) & 0x100) != 0 )
    {
LABEL_6:
      v4 = 5;
LABEL_10:
      v1 = 0;
      UserSetLastError((struct _NT_TIB *)v4);
      goto LABEL_11;
    }
    v1 = xxxDiscardPointerFrameMessagesInternal(a1);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v1;
}
