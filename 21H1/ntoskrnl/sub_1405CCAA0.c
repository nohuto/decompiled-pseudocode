/*
 * XREFs of sub_1405CCAA0 @ 0x1405CCAA0
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CC48C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405CC5BC @ 0x1405CC5BC (sub_1405CC5BC.c)
 *     WbDecryptEncryptionSegment @ 0x1405CC650 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CC714 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CC7D8 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CC954 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406D54B0 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405CD344 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_1405CCAA0(volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx

  v1 = 0LL;
  if ( a1 )
  {
    v1 = _InterlockedDecrement64(a1);
    if ( !v1 )
      WbFreeWarbirdEncryptionSegment((PVOID)a1);
  }
  return v1;
}
