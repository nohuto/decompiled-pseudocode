/*
 * XREFs of _RFONTOBJ_vDeleteRFONTWrap@16 @ 0xD090A
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 */

void __stdcall RFONTOBJ_vDeleteRFONTWrap(RFONTOBJ *a1, struct PDEVOBJ *a2, struct PFFOBJ *a3, struct RFONT *a4)
{
  RFONTOBJ::vDeleteRFONT(a1, a2, a3, a4);
}
