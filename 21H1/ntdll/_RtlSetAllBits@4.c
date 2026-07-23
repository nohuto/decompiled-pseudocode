/*
 * XREFs of _RtlSetAllBits@4 @ 0x4B34FA00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFillMemoryUlong@12 @ 0x4B308020 (_RtlFillMemoryUlong@12.c)
 */

void __cdecl RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  SIZE_T v1; // [esp-8h] [ebp-8h]
  ULONG savedregs; // [esp+0h] [ebp+0h]

  HIDWORD(v1) = -1;
  LODWORD(v1) = 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0));
  RtlFillMemoryUlong(BitMapHeader->Buffer, v1, savedregs);
}
