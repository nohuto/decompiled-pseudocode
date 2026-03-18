/*
 * XREFs of ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x1C0032340
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x1C00322B0 (ulGetNearestIndexFromColorref.c)
 * Callees:
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00C1630 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x1C00C19A0 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(XEPALOBJ *this, struct tagPALETTEENTRY a2, int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *(unsigned int *)(*(_QWORD *)this + 96LL), *(unsigned int *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
}
