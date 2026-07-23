/*
 * XREFs of BgpFwInitializeReservePool @ 0x1409F65B8
 * Callers:
 *     BgpFwReservePoolSwap @ 0x1409F41AC (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x1409F59E8 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1409F6F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x140204890 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_140C505F0 = 0;
  qword_140C505E8 = a1;
  dword_140C50608 = a2;
  stru_140C505F8.SizeOfBitMap = a2;
  stru_140C505F8.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C505F8);
}
