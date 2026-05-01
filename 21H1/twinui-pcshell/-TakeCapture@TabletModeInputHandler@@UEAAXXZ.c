/*
 * XREFs of ?TakeCapture@TabletModeInputHandler@@UEAAXXZ @ 0x1803F1A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModeInputHandler::TakeCapture(HWND *this)
{
  SetCapture(this[3]);
}
