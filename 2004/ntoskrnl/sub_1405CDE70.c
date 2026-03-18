/*
 * XREFs of sub_1405CDE70 @ 0x1405CDE70
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405CD85C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405CD98C @ 0x1405CD98C (sub_1405CD98C.c)
 *     WbDecryptEncryptionSegment @ 0x1405CDA20 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405CDAE4 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405CDBA8 (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405CDD24 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406F8930 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405CE714 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_1405CDE70(volatile signed __int64 *a1)
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
