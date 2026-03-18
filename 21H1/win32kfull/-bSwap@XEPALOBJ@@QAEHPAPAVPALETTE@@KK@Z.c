/*
 * XREFs of ?bSwap@XEPALOBJ@@QAEHPAPAVPALETTE@@KK@Z @ 0x222F10
 * Callers:
 *     _NtGdiResizePalette@8 @ 0x21E909 (_NtGdiResizePalette@8.c)
 * Callees:
 *     <none>
 */

int __thiscall XEPALOBJ::bSwap(XEPALOBJ *this, struct PALETTE **a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v5; // ebx
  int result; // eax

  v5 = *a2;
  result = HmgSwapLockedHandleContents(**(_DWORD **)this, 1, *(_DWORD *)*a2, 1, 8);
  if ( result )
  {
    *a2 = *(struct PALETTE **)this;
    *(_DWORD *)this = v5;
  }
  return result;
}
