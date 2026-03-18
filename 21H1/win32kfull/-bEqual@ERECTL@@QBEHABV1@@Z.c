/*
 * XREFs of ?bEqual@ERECTL@@QBEHABV1@@Z @ 0x1E64D2
 * Callers:
 *     _GreSetClientRgn@12 @ 0x1E7093 (_GreSetClientRgn@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall ERECTL::bEqual(ERECTL *this, const struct ERECTL *a2)
{
  return *(_DWORD *)this == *(_DWORD *)a2
      && *((_DWORD *)this + 2) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)this + 1) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)this + 3) == *((_DWORD *)a2 + 3);
}
