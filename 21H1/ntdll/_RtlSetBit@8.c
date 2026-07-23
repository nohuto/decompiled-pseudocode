/*
 * XREFs of _RtlSetBit@8 @ 0x4B306FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  *((_BYTE *)BitMapHeader->Buffer + (BitNumber >> 3)) |= 1 << (BitNumber & 7);
}
