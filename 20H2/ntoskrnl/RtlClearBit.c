/*
 * XREFs of RtlClearBit @ 0x14030BD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlClearBit(PRTL_BITMAP BitMapHeader, ULONG BitNumber)
{
  _bittestandreset((signed __int32 *)BitMapHeader->Buffer, BitNumber);
}
