/*
 * XREFs of KiConvertToGuiThread @ 0x1403F9AE0
 * Callers:
 *     KiSystemCall64 @ 0x1404072C0 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406CE8C0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
