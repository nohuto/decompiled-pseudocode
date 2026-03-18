/*
 * XREFs of _NtUserSendEventMessage@16 @ 0x1685C8
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 */

int __stdcall NtUserSendEventMessage(int a1, unsigned int a2, struct tagWND *a3, unsigned int a4)
{
  int v4; // edi
  int v5; // eax
  struct tagQ *v6; // ebx
  int v7; // ecx
  unsigned int v9; // [esp+0h] [ebp-14h]
  int v10; // [esp+4h] [ebp-10h]
  int v11; // [esp+8h] [ebp-Ch] BYREF
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  v6 = (struct tagQ *)v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) & 0x3FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      v11 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v11;
      v12 = v5;
      HMLockObject(v5);
      if ( IAMThreadAccessGranted(_gptiCurrent) )
        v4 = PostEventMessage((struct tagTHREADINFO *)9, v6, a2, a3, a4, v9, v10);
      else
        UserSetLastError((struct _NT_TIB *)5);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
