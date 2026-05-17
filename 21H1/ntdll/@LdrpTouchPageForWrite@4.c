/*
 * XREFs of @LdrpTouchPageForWrite@4 @ 0x4B2F2950
 * Callers:
 *     _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01 (_LdrpPrepareImportAddressTableForSnap@4.c)
 *     _LdrpMakePermanentImageCommit@8 @ 0x4B2D1B08 (_LdrpMakePermanentImageCommit@8.c)
 * Callees:
 *     <none>
 */

void __thiscall LdrpTouchPageForWrite(_BYTE *this)
{
  *this = *this;
}
