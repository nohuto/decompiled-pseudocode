/*
 * XREFs of MiSessionApplyNonPagedImageCharges @ 0x1408D735C
 * Callers:
 *     MmLoadSystemImageEx @ 0x14074603C (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14035CF98 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionApplyNonPagedImageCharges(unsigned __int64 a1)
{
  *((_BYTE *)MiSessionLookupImage(a1) + 64) = 1;
  return 0LL;
}
