/*
 * XREFs of BgpFwInitializeReservePool @ 0x1409F45B8
 * Callers:
 *     BgpFwReservePoolSwap @ 0x1409F21AC (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x1409F39E8 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x1409F4F0C (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_140C507B0 = 0;
  qword_140C507A8 = a1;
  dword_140C507C8 = a2;
  stru_140C507B8.SizeOfBitMap = a2;
  stru_140C507B8.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C507B8);
}
