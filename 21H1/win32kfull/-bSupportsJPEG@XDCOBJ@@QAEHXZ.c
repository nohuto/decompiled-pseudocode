/*
 * XREFs of ?bSupportsJPEG@XDCOBJ@@QAEHXZ @ 0x1D7C13
 * Callers:
 *     ?iCheckPassthroughImage@@YGHAAVDCOBJ@@AAVPDEVOBJ@@HHPAXH2@Z @ 0x1D7C6A (-iCheckPassthroughImage@@YGHAAVDCOBJ@@AAVPDEVOBJ@@HHPAXH2@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QAEHK@Z @ 0x2269E2 (-bSupportsPassthroughImage@XDCOBJ@@QAEHK@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall XDCOBJ::bSupportsJPEG(XDCOBJ *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *(_DWORD *)this;
  if ( (*(_BYTE *)(v1 + 52) & 1) == 0 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(v1 + 20) == 1 )
    return 0;
  return result;
}
