/*
 * XREFs of _PALOBJ_cGetColors@16 @ 0x2235D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z @ 0xAD8F8 (-ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z.c)
 *     ?CorrectColors@XEPALOBJ@@QAEXPAUtagPALETTEENTRY@@K@Z @ 0x1F4872 (-CorrectColors@XEPALOBJ@@QAEXPAUtagPALETTEENTRY@@K@Z.c)
 */

ULONG __stdcall PALOBJ_cGetColors(PALOBJ *ppalo, ULONG iStart, ULONG cColors, ULONG *pulColors)
{
  unsigned int Entries; // eax
  ULONG v5; // edi

  Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)ppalo, iStart, cColors, (struct tagPALETTEENTRY *)pulColors, 0);
  v5 = Entries;
  if ( (*(_DWORD *)(ppalo->ulReserved + 16) & 0x800000) != 0 )
    XEPALOBJ::CorrectColors((XEPALOBJ *)ppalo, (struct tagPALETTEENTRY *)pulColors, Entries);
  return v5;
}
