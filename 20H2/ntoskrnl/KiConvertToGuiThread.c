/*
 * XREFs of KiConvertToGuiThread @ 0x1404006D0
 * Callers:
 *     KiSystemCall64 @ 0x14040F000 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1406C2FC0 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
