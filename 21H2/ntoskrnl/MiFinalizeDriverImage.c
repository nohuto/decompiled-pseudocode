/*
 * XREFs of MiFinalizeDriverImage @ 0x14075BC48
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 *     VfDriverLoadImage @ 0x1409C3090 (VfDriverLoadImage.c)
 */

__int64 __fastcall MiFinalizeDriverImage(__int64 a1)
{
  VfDriverLoadImage(a1, 0LL, 0LL, 0LL);
  return KseDriverLoadImage(a1);
}
