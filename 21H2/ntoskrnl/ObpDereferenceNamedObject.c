/*
 * XREFs of ObpDereferenceNamedObject @ 0x14026D018
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObpDeleteNameCheck @ 0x140663D60 (ObpDeleteNameCheck.c)
 */

void __fastcall ObpDereferenceNamedObject(__int64 a1)
{
  if ( _InterlockedExchangeAdd(
         (volatile signed __int32 *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 3] + 24),
         0xFFFFFFFF) == 1 )
    ObpDeleteNameCheck(a1);
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 + 48));
}
