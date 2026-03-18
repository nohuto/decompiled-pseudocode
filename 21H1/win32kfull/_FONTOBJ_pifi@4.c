/*
 * XREFs of _FONTOBJ_pifi@4 @ 0x1F35DA
 * Callers:
 *     ?UmfdEscFONTOBJ_pifi@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCDEC (-UmfdEscFONTOBJ_pifi@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     _NtGdiFONTOBJ_pifi@4 @ 0x21A29C (_NtGdiFONTOBJ_pifi@4.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  PVOID pvConsumer; // eax
  IFIMETRICS *v2; // esi

  pvConsumer = pfo[1].pvConsumer;
  if ( pvConsumer )
    v2 = (IFIMETRICS *)*((_DWORD *)pvConsumer + 5);
  else
    v2 = 0;
  pfo = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&pfo);
  return v2;
}
