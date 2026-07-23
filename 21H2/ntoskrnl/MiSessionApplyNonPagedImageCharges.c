/*
 * XREFs of MiSessionApplyNonPagedImageCharges @ 0x1408DAABC
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14024D9E8 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionApplyNonPagedImageCharges(unsigned __int64 a1)
{
  *((_BYTE *)MiSessionLookupImage(a1) + 64) = 1;
  return 0LL;
}
