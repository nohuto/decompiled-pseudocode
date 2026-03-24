/*
 * XREFs of KiConvertToGuiThread @ 0x140402B20
 * Callers:
 *     KiSystemCall64 @ 0x140411A00 (KiSystemCall64.c)
 * Callees:
 *     PsConvertToGuiThread @ 0x14069EF80 (PsConvertToGuiThread.c)
 */

__int64 KiConvertToGuiThread()
{
  return PsConvertToGuiThread();
}
