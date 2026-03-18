/*
 * XREFs of ?SetPenHotKeys@@YGXXZ @ 0xF0526
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     __RegisterHotKey@20 @ 0xC5F06 (__RegisterHotKey@20.c)
 *     ?Feature_PenTailDockEvents__private_IsEnabledPreCheck@@YGHXZ @ 0xF049E (-Feature_PenTailDockEvents__private_IsEnabledPreCheck@@YGHXZ.c)
 */

void __thiscall SetPenHotKeys(void *this)
{
  Feature_PenTailDockEvents__private_IsEnabledPreCheck(this);
  _RegisterHotKey(0, (int)PenHotkeyCallback, (struct tagTHREADINFO *)0x1E, 0x4208u, 0x83u);
  _RegisterHotKey(0, (int)PenHotkeyCallback, (struct tagTHREADINFO *)0x1F, 0x4208u, 0x82u);
  _RegisterHotKey(0, (int)PenHotkeyCallback, (struct tagTHREADINFO *)0x20, 0x4208u, 0x81u);
  _RegisterHotKey(0, (int)PenHotkeyCallback, (struct tagTHREADINFO *)0x21, 0x420Au, 0x83u);
  _RegisterHotKey(0, (int)PenHotkeyCallback, (struct tagTHREADINFO *)0x22, 0x420Au, 0x82u);
}
