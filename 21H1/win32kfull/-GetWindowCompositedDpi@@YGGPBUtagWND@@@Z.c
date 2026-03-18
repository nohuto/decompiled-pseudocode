/*
 * XREFs of ?GetWindowCompositedDpi@@YGGPBUtagWND@@@Z @ 0x70750
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _GetMaxTrackSizeForWindow@4 @ 0x706DC (_GetMaxTrackSizeForWindow@4.c)
 *     _IsSmallerThanScreen@8 @ 0x19E5B1 (_IsSmallerThanScreen@8.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __thiscall GetWindowCompositedDpi(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  LOWORD(v1) = 0;
  v2 = *(_DWORD *)(this[2] + 248);
  if ( v2 && (*(_BYTE *)(**(_DWORD **)(v2 + 4) + 32) & 1) != 0 )
    return (*(_DWORD *)(this[5] + 184) >> 8) & 0x1FF;
  return v1;
}
