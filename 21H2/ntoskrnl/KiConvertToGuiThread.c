/*
 * XREFs of KiConvertToGuiThread @ 0x140402D00
 * Callers:
 *     KiSystemCall64 @ 0x140411B00 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x1405FE150 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
