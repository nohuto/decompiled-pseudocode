/*
 * XREFs of GetCurrentThreadId @ 0x180045416
 * Callers:
 *     sub_180086FC4 @ 0x180086FC4 (sub_180086FC4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}
