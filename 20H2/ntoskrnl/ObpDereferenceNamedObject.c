/*
 * XREFs of ObpDereferenceNamedObject @ 0x140204B80
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObpDeleteNameCheck @ 0x1405E06C0 (ObpDeleteNameCheck.c)
 */

void __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 + 48));
}
