/*
 * XREFs of _FONTOBJ_pvTrueTypeFontFile@8 @ 0x1F3643
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?pvFile@RFONTOBJ@@QAEPAXPAK@Z @ 0x2098FD (-pvFile@RFONTOBJ@@QAEPAXPAK@Z.c)
 */

PVOID __stdcall FONTOBJ_pvTrueTypeFontFile(FONTOBJ *pfo, ULONG *pcjFile)
{
  ULONG *v2; // ecx
  void *v3; // esi

  v2 = pcjFile;
  v3 = 0;
  pcjFile = &pfo->iUniq;
  *v2 = 0;
  if ( pfo )
    v3 = RFONTOBJ::pvFile((RFONTOBJ *)&pcjFile, v2);
  pcjFile = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&pcjFile);
  return v3;
}
