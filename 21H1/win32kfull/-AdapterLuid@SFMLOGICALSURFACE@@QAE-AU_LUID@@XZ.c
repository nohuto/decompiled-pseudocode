/*
 * XREFs of ?AdapterLuid@SFMLOGICALSURFACE@@QAE?AU_LUID@@XZ @ 0xB55CC
 * Callers:
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall SFMLOGICALSURFACE::AdapterLuid(SFMLOGICALSURFACE *this, _DWORD *a2)
{
  int v2; // edx
  _DWORD *result; // eax
  int v4; // ecx

  v2 = *((_DWORD *)this + 28);
  if ( v2 && (*(_BYTE *)(v2 + 60) & 1) != 0 )
  {
    result = a2;
    *a2 = *(_DWORD *)(v2 + 392);
    v4 = *(_DWORD *)(v2 + 396);
  }
  else
  {
    result = a2;
    *a2 = *((_DWORD *)this + 30);
    v4 = *((_DWORD *)this + 31);
  }
  result[1] = v4;
  return result;
}
