/*
 * XREFs of ?IsMinimizedSausageWindow@@YGHQAUtagWND@@@Z @ 0x2D45A
 * Callers:
 *     ?SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z @ 0x2D4D2 (-SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMinimizedSausageWindow(_DWORD *this)
{
  int v1; // ecx
  int v2; // edx

  v1 = this[5];
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 23) & 0x20) != 0
    && *(_DWORD *)(v1 + 52) == -32000
    && *(_DWORD *)(v1 + 56) == -32000
    && *(_DWORD *)(v1 + 76) == *(_DWORD *)(v1 + 68) )
  {
    return *(_DWORD *)(v1 + 80) == *(_DWORD *)(v1 + 72);
  }
  return v2;
}
