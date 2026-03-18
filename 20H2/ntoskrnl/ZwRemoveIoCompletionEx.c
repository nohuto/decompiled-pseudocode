/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x1403FAF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRemoveIoCompletionEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
