/*
 * XREFs of sub_1405D4314 @ 0x1405D4314
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D3D00 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405D3E30 @ 0x1405D3E30 (sub_1405D3E30.c)
 *     WbDecryptEncryptionSegment @ 0x1405D3EC4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D3F88 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D404C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D41C8 (WbGetWarbirdEncryptionSegment.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x14065C010 (WbInPlaceEncryptionUnloadModule.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405D4BB8 (WbFreeWarbirdEncryptionSegment.c)
 */

signed __int64 __fastcall sub_1405D4314(volatile signed __int64 *a1)
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
