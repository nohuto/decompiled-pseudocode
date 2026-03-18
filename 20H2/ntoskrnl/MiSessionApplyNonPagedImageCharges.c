/*
 * XREFs of MiSessionApplyNonPagedImageCharges @ 0x1408DD19C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14032DA58 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionApplyNonPagedImageCharges(unsigned __int64 a1)
{
  *((_BYTE *)MiSessionLookupImage(a1) + 64) = 1;
  return 0LL;
}
