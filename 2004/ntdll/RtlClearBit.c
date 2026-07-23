/*
 * XREFs of RtlClearBit @ 0x18009C580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _bittestandreset((signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
