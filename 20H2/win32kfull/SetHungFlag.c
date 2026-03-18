/*
 * XREFs of SetHungFlag @ 0x1C00BF4E0
 * Callers:
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C003C378 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

__int64 __fastcall SetHungFlag(struct tagWND *a1, unsigned __int16 a2)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x18) == 0 && *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
    VWPLAddBase(gpvwplHungRedraw, 0LL, a1, 0xAu);
  return SetOrClrWF(1LL, a1, a2, 1LL);
}
