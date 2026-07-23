/*
 * XREFs of RtlSetBitEx @ 0x1403059B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlSetBitEx(PRTL_BITMAP_EX BitMapHeader, ULONG64 BitNumber)
{
  _bittestandset64((signed __int64 *)BitMapHeader->Buffer, BitNumber);
}
