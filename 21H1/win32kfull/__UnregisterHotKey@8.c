/*
 * XREFs of __UnregisterHotKey@8 @ 0xCA2CC
 * Callers:
 *     _NtUserUnregisterHotKey@8 @ 0xCA27A (_NtUserUnregisterHotKey@8.c)
 *     ?_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z @ 0xE88B0 (-_RegisterWindowArrangementCallout@@YGJPAUtagWND@@H@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x830D0 (-HKRemoveMatchingHotkeys@@YG_NPAUtagTHREADINFO@@PAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 */

int __fastcall _UnregisterHotKey(struct tagHOTKEY *a1, struct tagHOTKEY *a2)
{
  if ( HKRemoveMatchingHotkeys(_gptiCurrent, a1, a2, 3) )
  {
    dword_273864 = 0;
    return 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x58B);
    return 0;
  }
}
