/*
 * XREFs of RtlNumberOfClearBitsEx @ 0x1405823B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140582410 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall RtlNumberOfClearBitsEx(_QWORD *a1)
{
  return *a1 - RtlNumberOfSetBitsEx(a1);
}
