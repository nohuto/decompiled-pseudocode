/*
 * XREFs of ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QAEHPBU_RECTL@@@Z @ 0x1F4842
 * Callers:
 *     _NtGdiPolyPatBlt@20 @ 0x56AE8 (_NtGdiPolyPatBlt@20.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ @ 0x1FDC9E (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QAEHXZ.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 * Callees:
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 */

int __thiscall DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect(
        DWMSCREENREADMODIFYWRITEASSIST *this,
        const struct _RECTL *a2)
{
  struct XDCOBJ *v2; // ecx
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  v2 = (struct XDCOBJ *)*((_DWORD *)this + 5);
  result = 0;
  if ( *(_DWORD *)v2 )
    return bSpDwmValidateSurface(
             a2->left,
             v2,
             (struct XDCOBJ *)a2->top,
             a2->right - a2->left,
             a2->bottom - a2->top,
             v4,
             v5);
  return result;
}
