/*
 * XREFs of ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0141F8C
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0141AB8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C0141E00 (NtGdiStartPage.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015D634 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C027C650 (NtGdiEndPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0141FB4 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vDone(XDCOBJ **this)
{
  XDCOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
    XDCOBJ::vSaveAttributesAlways(v2);
  *this = 0LL;
}
