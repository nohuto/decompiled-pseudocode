/*
 * XREFs of ?OnClose@CDwmAppHost@@AEAAXXZ @ 0x1400018A4
 * Callers:
 *     ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x1400014E4 (-NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140001BB8 (-Run@CDwmAppHost@@QEAAJXZ.c)
 * Callees:
 *     IsRegisterHotKeyPresent @ 0x140004404 (IsRegisterHotKeyPresent.c)
 */

void __fastcall CDwmAppHost::OnClose(CDwmAppHost *this)
{
  if ( (unsigned __int8)IsRegisterHotKeyPresent(this) )
    UnregisterHotKey(hwnd, 0);
  DestroyWindow(hwnd);
  hwnd = 0LL;
}
