/*
 * XREFs of ??4EPOINTQF@@QAEXAAVEPOINTFL@@@Z @ 0x223A5A
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 * Callees:
 *     _vEfToLfx@8 @ 0xEF2B4 (_vEfToLfx@8.c)
 */

__int64 __thiscall EPOINTQF::operator=(__int64 *this, int *a2)
{
  vEfToLfx(a2, this);
  return vEfToLfx(a2 + 2, this + 1);
}
