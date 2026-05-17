/*
 * XREFs of _RtlpHpParametersSupported@4 @ 0x4B37089D
 * Callers:
 *     _RtlCreateHeap@24 @ 0x4B2C0F40 (_RtlCreateHeap@24.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RtlpHpParametersSupported(_DWORD *this)
{
  return !this[1] && !this[2] && !this[6] && !this[9];
}
