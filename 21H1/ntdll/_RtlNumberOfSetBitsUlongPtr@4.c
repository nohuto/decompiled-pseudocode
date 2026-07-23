/*
 * XREFs of _RtlNumberOfSetBitsUlongPtr@4 @ 0x4B3078F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBitsUlongPtr(ULONG_PTR Target)
{
  return (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~(_WORD)Target >> 8]
                         + RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)Target]
                         + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~(_DWORD)Target >> 16)]
                         + RtlpBitsClearTotal[(unsigned int)~(_DWORD)Target >> 24]);
}
