/*
 * XREFs of ?OnMessage@CMultitaskingViewHotKeyHandler@@UEAAJI_K_J@Z @ 0x180365E10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x180365D54 (-IsDesktopInputContext@@YA_NXZ.c)
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18036605C (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewHotKeyHandler::OnMessage(
        CMultitaskingViewHotKeyHandler *this,
        __int64 a2,
        unsigned int a3)
{
  if ( a3 - 41 <= 5 && IsDesktopInputContext((__int64)this, a2) )
    CMultitaskingViewHotKeyHandler::_OnAltTab((char *)this - 8, a3);
  return 0LL;
}
