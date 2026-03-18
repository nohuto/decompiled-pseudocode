/*
 * XREFs of ?bValid@EWNDOBJ@@QEBAHXZ @ 0x1C0286008
 * Callers:
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C028654C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     GreDeleteWnd @ 0x1C0286D50 (GreDeleteWnd.c)
 *     GreSetClientRgn @ 0x1C0286F4C (GreSetClientRgn.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6000 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EWNDOBJ::bValid(EWNDOBJ *this)
{
  return *((_DWORD *)this + 38) == 1145984837 && **((_DWORD **)this + 21) == 1128354388;
}
