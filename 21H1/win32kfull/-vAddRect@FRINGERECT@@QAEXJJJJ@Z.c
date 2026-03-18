/*
 * XREFs of ?vAddRect@FRINGERECT@@QAEXJJJJ@Z @ 0xABF28
 * Callers:
 *     _EngTextOut@40 @ 0x54580 (_EngTextOut@40.c)
 * Callees:
 *     <none>
 */

void __thiscall FRINGERECT::vAddRect(FRINGERECT *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 4 * *((_DWORD *)this + 4) + 5) = a2;
  *((_DWORD *)this + 4 * *((_DWORD *)this + 4) + 6) = a3;
  *((_DWORD *)this + 4 * *((_DWORD *)this + 4) + 7) = a4;
  *((_DWORD *)this + 4 * (*((_DWORD *)this + 4))++ + 8) = a5;
}
