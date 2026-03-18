/*
 * XREFs of ?bRedirHooked@SURFACE@@QAEHXZ @ 0x525DA
 * Callers:
 *     _EngDrawStream@36 @ 0x50172 (_EngDrawStream@36.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall SURFACE::bRedirHooked(SURFACE *this)
{
  return (*((_BYTE *)this + 76) & 1) == 0 && (*((_DWORD *)this + 18) & 0x800) != 0 && *((_WORD *)this + 32) == 3;
}
