/*
 * XREFs of BgpFwInitializeReservePool @ 0x1409F05B8
 * Callers:
 *     BgpFwReservePoolSwap @ 0x1409EE354 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1409F0F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x140271930 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140C50568 = a1;
  dword_140C50588 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
