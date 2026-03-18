/*
 * XREFs of BgpFwInitializeReservePool @ 0x140AADC80
 * Callers:
 *     BgpFwReservePoolSwap @ 0x140AAB1AC (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x140AAD490 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140AAE918 (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_140C54910 = a1;
  dword_140C54930 = a2;
  stru_140C54920.SizeOfBitMap = a2;
  stru_140C54920.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140C54920);
}
