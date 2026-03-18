/*
 * XREFs of _NtUserDisableThreadIme@4 @ 0x801DE
 * Callers:
 *     <none>
 * Callees:
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 */

int __stdcall NtUserDisableThreadIme(int a1)
{
  int v1; // esi
  _DWORD *i; // ebx
  struct tagWND **v3; // eax
  _DWORD *v4; // eax
  struct tagWND **v5; // eax
  unsigned int v7; // [esp+0h] [ebp-10h]
  struct tagINPUT_MESSAGE_SOURCE *v8; // [esp+4h] [ebp-Ch]

  v1 = 0;
  EnterCrit(0, 1);
  if ( (*_gpsi & 4) == 0 )
  {
    UserSetLastError(120);
    goto LABEL_20;
  }
  if ( a1 == -1 )
  {
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) |= 0x800000u;
    for ( i = *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 232) + 180); i; i = (_DWORD *)i[91] )
    {
      i[66] |= 0x2000000u;
      if ( i != (_DWORD *)_gptiCurrent )
      {
        v3 = (struct tagWND **)i[109];
        if ( v3 )
          PostEventMessageEx((struct tagTHREADINFO *)8, 0, 0, *v3, 0, 0, v7, v8);
      }
    }
    goto LABEL_13;
  }
  if ( !a1 )
  {
    *(_DWORD *)(_gptiCurrent + 264) |= 0x2000000u;
LABEL_13:
    if ( *(_DWORD *)(_gptiCurrent + 436) )
      xxxDestroyWindow(*(struct tagVWPL ***)(_gptiCurrent + 436));
LABEL_19:
    v1 = 1;
    goto LABEL_20;
  }
  v4 = (_DWORD *)PtiFromThreadId(a1);
  if ( v4 && v4[58] == *(_DWORD *)(_gptiCurrent + 232) )
  {
    v4[66] |= 0x2000000u;
    v5 = (struct tagWND **)v4[109];
    if ( v5 )
      PostEventMessage((struct tagTHREADINFO *)8, 0, 0, *v5, 0, v7, (int)v8);
    goto LABEL_19;
  }
LABEL_20:
  UserSessionSwitchLeaveCrit();
  return v1;
}
