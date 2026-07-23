/*
 * XREFs of BgpFwInitializeReservePool @ 0x1409F05B8
 * Callers:
 *     BgpFwReservePoolSwap @ 0x1409EE1AC (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x1409EF9E8 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1409F0F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402E0FC0 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_140C506B0 = 0;
  qword_140C506A8 = a1;
  dword_140C506C8 = a2;
  stru_140C506B8.SizeOfBitMap = a2;
  stru_140C506B8.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C506B8);
}
