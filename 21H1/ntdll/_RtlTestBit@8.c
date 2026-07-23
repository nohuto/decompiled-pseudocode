/*
 * XREFs of _RtlTestBit@8 @ 0x4B307000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTestBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  return (*((char *)BitMapHeader->Buffer + (BitNumber >> 3)) >> (BitNumber & 7)) & 1;
}
