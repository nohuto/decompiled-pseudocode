/*
 * XREFs of MiFinalizeDriverImage @ 0x14075BA88
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BAFC (MmLoadSystemImageEx.c)
 * Callees:
 *     KseDriverLoadImage @ 0x14075B560 (KseDriverLoadImage.c)
 *     VfDriverLoadImage @ 0x1409C2090 (VfDriverLoadImage.c)
 */

__int64 __fastcall MiFinalizeDriverImage(__int64 a1)
{
  VfDriverLoadImage(a1, 0LL, 0LL, 0LL);
  return KseDriverLoadImage(a1);
}
