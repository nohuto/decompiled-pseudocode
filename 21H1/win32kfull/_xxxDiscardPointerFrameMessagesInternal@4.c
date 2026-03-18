/*
 * XREFs of _xxxDiscardPointerFrameMessagesInternal@4 @ 0x15A623
 * Callers:
 *     _NtUserDiscardPointerFrameMessages@4 @ 0x160C77 (_NtUserDiscardPointerFrameMessages@4.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z @ 0x15ADC8 (-GetThreadPointerData@@YGKPAUtagTHREADINPUTPOINTERLIST@@GPAKPAHPAPAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z @ 0x15B280 (-xxxDiscardPointerWindowFrameMessages@@YGHPAUtagTHREADINFO@@K@Z.c)
 */

int __thiscall xxxDiscardPointerFrameMessagesInternal(HWND *this)
{
  int *v2; // [esp+0h] [ebp-8h]
  struct tagTHREADINFO *v3; // [esp+0h] [ebp-8h]
  unsigned __int16 v4[2]; // [esp+4h] [ebp-4h] BYREF

  if ( !GetThreadPointerData(0, (unsigned __int16)v4, (unsigned int *)this, v2, 0) )
  {
LABEL_6:
    UserSetLastError((struct _NT_TIB *)0x57);
    return 0;
  }
  if ( *(_DWORD *)v4 )
  {
    if ( xxxDiscardPointerWindowFrameMessages(v3, *(unsigned int *)v4) )
      return 1;
    goto LABEL_6;
  }
  UserSetLastError((struct _NT_TIB *)5);
  return 0;
}
