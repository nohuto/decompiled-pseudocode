/*
 * XREFs of IopDeleteIoCompletion @ 0x1406BEE60
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x1402FB7D8 (IopDeleteIoCompletionInternal.c)
 */

__int64 __fastcall IopDeleteIoCompletion(KSPIN_LOCK *a1)
{
  return IopDeleteIoCompletionInternal(a1, 0LL);
}
