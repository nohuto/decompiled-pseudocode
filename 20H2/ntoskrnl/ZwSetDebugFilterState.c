/*
 * XREFs of ZwSetDebugFilterState @ 0x1403FB310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ComponentId);
}
