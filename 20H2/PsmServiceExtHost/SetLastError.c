/*
 * XREFs of SetLastError @ 0x18004544C
 * Callers:
 *     sub_1800872E8 @ 0x1800872E8 (sub_1800872E8.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SetLastError(DWORD dwErrCode)
{
  __imp_SetLastError(dwErrCode);
}
