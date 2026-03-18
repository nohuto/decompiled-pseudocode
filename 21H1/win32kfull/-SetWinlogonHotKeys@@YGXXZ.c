/*
 * XREFs of ?SetWinlogonHotKeys@@YGXXZ @ 0xD4F54
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 */

void __stdcall SetWinlogonHotKeys()
{
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, 0, 0x8003u, 0x2Eu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)4, 6u, 0x1Bu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)5, 0x8008u, 0x4Cu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)6, 0x2008u, 0x55u);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)0xD, 0x600Au, 0xDu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)0xE, 0x6008u, 0xDu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)0xC, 0x6008u, 0xBBu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)0xC, 0x6008u, 0x6Bu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)0xF, 0x200Eu, 0x4Cu);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)0xA, 0x600Au, 0x7Du);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)7, 0x2008u, 0x50u);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)8, 0x200Au, 0x50u);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)9, 0x200Cu, 0x50u);
  _RegisterHotKey(0, (int)RotationLockCallback, (struct tagTHREADINFO *)0xFFFFFFF4, 0x2008u, 0x4Fu);
  _RegisterHotKey(0, (int)WinlogonWinSpaceCallback, (struct tagTHREADINFO *)0xFFFFFFF8, 0x2008u, 0x20u);
  _RegisterHotKey(0, (int)WinlogonWinSpaceCallback, (struct tagTHREADINFO *)0xFFFFFFF7, 0x200Au, 0x20u);
  _RegisterHotKey(0, (int)WinlogonWinSpaceCallback, (struct tagTHREADINFO *)0xFFFFFFF6, 0x200Cu, 0x20u);
  _RegisterHotKey(0, (int)WinlogonWinSpaceCallback, (struct tagTHREADINFO *)0xFFFFFFF5, 0x200Eu, 0x20u);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)7, 0x2008u, 0x85u);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)8, 0x200Au, 0x85u);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)9, 0x200Cu, 0x85u);
  _RegisterHotKey(0, (int)RotationLockCallback, (struct tagTHREADINFO *)0xFFFFFFF3, 0x6008u, 0x7Du);
  _RegisterHotKey(0, (int)WinlogonHotkeyCallback, (struct tagTHREADINFO *)0xB, 0x6808u, 0x7Fu);
  _RegisterHotKey(0, (int)PTPEnableHotkeyCallback, (struct tagTHREADINFO *)0xFFFFFFF2, 0x480Au, 0x87u);
}
