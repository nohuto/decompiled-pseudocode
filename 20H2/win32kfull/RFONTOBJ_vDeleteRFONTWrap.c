/*
 * XREFs of RFONTOBJ_vDeleteRFONTWrap @ 0x1C01253B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00642D4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall RFONTOBJ_vDeleteRFONTWrap(struct _FONTOBJ **a1, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  RFONTOBJ::vDeleteRFONT(a1, a2, a3, a4);
}
