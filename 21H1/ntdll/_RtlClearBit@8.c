/*
 * XREFs of _RtlClearBit@8 @ 0x4B306FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + (BitNumber >> 3)) &= ~(1 << (BitNumber & 7));
}
