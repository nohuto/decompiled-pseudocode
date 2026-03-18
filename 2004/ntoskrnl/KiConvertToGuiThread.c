/*
 * XREFs of KiConvertToGuiThread @ 0x1403FAD70
 * Callers:
 *     KiSystemCall64 @ 0x1404085C0 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406EFB30 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
