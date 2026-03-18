/*
 * XREFs of ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C0140540
 * Callers:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00185D0 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00183F0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetMatchFromPalentry(struct PALETTE **this, struct tagPALETTEENTRY a2)
{
  return XEPALOBJ::ulDispatchGFPEFunction(this, *((_DWORD *)*this + 25), *(_DWORD *)&a2);
}
