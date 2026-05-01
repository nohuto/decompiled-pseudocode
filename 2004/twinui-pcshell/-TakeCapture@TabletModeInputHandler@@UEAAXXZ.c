/*
 * XREFs of ?TakeCapture@TabletModeInputHandler@@UEAAXXZ @ 0x180414D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TabletModeInputHandler::TakeCapture(HWND *this)
{
  SetCapture(this[3]);
}
