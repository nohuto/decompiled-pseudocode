/*
 * XREFs of _EngSaveFloatingPointState@8 @ 0xEDF4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EngSaveFloatingPointState(PVOID pBuffer, ULONG cjBufferSize)
{
  return __imp__EngSaveFloatingPointState@8(pBuffer, cjBufferSize);
}
