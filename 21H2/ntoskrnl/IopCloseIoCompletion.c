/*
 * XREFs of IopCloseIoCompletion @ 0x1406ACB40
 * Callers:
 *     <none>
 * Callees:
 *     IopDeleteIoCompletionInternal @ 0x140234678 (IopDeleteIoCompletionInternal.c)
 */

__int64 __fastcall IopCloseIoCompletion(__int64 a1, KSPIN_LOCK *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (__int64)a2;
  if ( a4 == 1 )
    return IopDeleteIoCompletionInternal(a2, 1);
  return result;
}
