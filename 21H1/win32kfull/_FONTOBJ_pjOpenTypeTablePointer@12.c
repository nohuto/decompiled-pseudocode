/*
 * XREFs of _FONTOBJ_pjOpenTypeTablePointer@12 @ 0x1F3609
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?pjTable@RFONTOBJ@@QAEPAEKPAK@Z @ 0x20988E (-pjTable@RFONTOBJ@@QAEPAEKPAK@Z.c)
 */

PBYTE __stdcall FONTOBJ_pjOpenTypeTablePointer(FONTOBJ *pfo, ULONG ulTag, ULONG *pcjTable)
{
  BYTE *v3; // esi

  v3 = 0;
  if ( pfo )
    v3 = RFONTOBJ::pjTable((RFONTOBJ *)&pfo, ulTag, pcjTable);
  pfo = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&pfo);
  return v3;
}
