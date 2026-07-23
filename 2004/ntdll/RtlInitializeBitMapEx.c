/*
 * XREFs of RtlInitializeBitMapEx @ 0x18009C590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeBitMapEx(PRTL_BITMAP_EX BitMapHeader, PULONG64 BitMapBuffer, ULONG64 SizeOfBitMap)
{
  BitMapHeader->SizeOfBitMap = SizeOfBitMap;
  BitMapHeader->Buffer = BitMapBuffer;
}
