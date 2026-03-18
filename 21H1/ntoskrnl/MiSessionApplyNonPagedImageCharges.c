/*
 * XREFs of MiSessionApplyNonPagedImageCharges @ 0x1408D600C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1407444BC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14031F488 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionApplyNonPagedImageCharges(unsigned __int64 a1)
{
  *((_BYTE *)MiSessionLookupImage(a1) + 64) = 1;
  return 0LL;
}
