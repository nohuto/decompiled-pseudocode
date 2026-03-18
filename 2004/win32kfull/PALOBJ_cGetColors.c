/*
 * XREFs of PALOBJ_cGetColors @ 0x1C02BD780
 * Callers:
 *     <none>
 * Callees:
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C0115A3C (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ?CorrectColors@XEPALOBJ@@QEAAXPEAUtagPALETTEENTRY@@K@Z @ 0x1C02945F8 (-CorrectColors@XEPALOBJ@@QEAAXPEAUtagPALETTEENTRY@@K@Z.c)
 */

ULONG __stdcall PALOBJ_cGetColors(PALOBJ *ppalo, ULONG iStart, ULONG cColors, ULONG *pulColors)
{
  unsigned int Entries; // eax
  ULONG v7; // r11d

  Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)ppalo, iStart, cColors, (struct tagPALETTEENTRY *)pulColors, 0);
  v7 = Entries;
  if ( (*(_DWORD *)(*(_QWORD *)&ppalo->ulReserved + 24LL) & 0x800000) != 0 )
    XEPALOBJ::CorrectColors((XEPALOBJ *)ppalo, (struct tagPALETTEENTRY *)pulColors, Entries);
  return v7;
}
