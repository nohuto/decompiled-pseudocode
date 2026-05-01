/*
 * XREFs of GetTickCount @ 0x180045422
 * Callers:
 *     sub_180087048 @ 0x180087048 (sub_180087048.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
DWORD __stdcall GetTickCount()
{
  return __imp_GetTickCount();
}
