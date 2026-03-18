/*
 * XREFs of MiFinalizeDriverImage @ 0x140755DA8
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 * Callees:
 *     KseDriverLoadImage @ 0x1407546AC (KseDriverLoadImage.c)
 *     VfDriverLoadImage @ 0x1409C50A0 (VfDriverLoadImage.c)
 */

__int64 __fastcall MiFinalizeDriverImage(__int64 a1)
{
  VfDriverLoadImage(a1, 0LL, 0LL, 0LL);
  return KseDriverLoadImage(a1);
}
