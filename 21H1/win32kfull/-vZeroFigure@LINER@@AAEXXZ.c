/*
 * XREFs of ?vZeroFigure@LINER@@AAEXXZ @ 0x237951
 * Callers:
 *     ?vNextEvent@LINER@@QAEXXZ @ 0x236CF6 (-vNextEvent@LINER@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall LINER::vZeroFigure(LINER *this)
{
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 64) = 16;
  *((_DWORD *)this + 66) = 16;
  *((_DWORD *)this + 171) = (char *)this + 224;
  *((_DWORD *)this + 172) = (char *)this + 224;
}
