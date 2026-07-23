/*
 * XREFs of _RtlClearAllBits@4 @ 0x4B34E310
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __cdecl RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  size_t _FFFFFFFC; // [esp-4h] [ebp-4h]

  LODWORD(_FFFFFFFC) = 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0));
  memset(BitMapHeader->Buffer, 0, _FFFFFFFC);
}
