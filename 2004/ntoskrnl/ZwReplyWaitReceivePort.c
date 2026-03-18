/*
 * XREFs of ZwReplyWaitReceivePort @ 0x1403F3720
 * Callers:
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplyWaitReceivePort(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
