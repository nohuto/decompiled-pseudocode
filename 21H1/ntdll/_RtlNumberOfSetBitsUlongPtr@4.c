/*
 * XREFs of _RtlNumberOfSetBitsUlongPtr@4 @ 0x4B3078F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlNumberOfSetBitsUlongPtr(int a1)
{
  return (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~(_WORD)a1 >> 8]
                         + RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)a1]
                         + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~a1 >> 16)]
                         + RtlpBitsClearTotal[(unsigned int)~a1 >> 24]);
}
