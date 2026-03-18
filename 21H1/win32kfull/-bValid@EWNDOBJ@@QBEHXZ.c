/*
 * XREFs of ?bValid@EWNDOBJ@@QBEHXZ @ 0x1E6503
 * Callers:
 *     ?vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z @ 0x1E6921 (-vUpdateClientRgnOnSpriteOverlap@@YGXPAVEWNDOBJ@@AAVRGNOBJ@@@Z.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 *     _GreSetClientRgn@12 @ 0x1E7093 (_GreSetClientRgn@12.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EWNDOBJ::bValid(EWNDOBJ *this)
{
  return *((_DWORD *)this + 31) == 1145984837 && **((_DWORD **)this + 33) == 1128354388;
}
