/*
 * XREFs of ?SetDragOutThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17213C
 * Callers:
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall SetDragOutThresholdAlways(_DWORD *this)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  int v3; // eax

  v1 = this[46];
  v2 = (v1 >> 15) & 7;
  if ( v2 < 2 )
  {
    v3 = v1 + 0x10000;
    goto LABEL_6;
  }
  if ( v2 == 4 || v2 == 5 )
  {
    v3 = ((this[46] >> 15) - 2) << 15;
LABEL_6:
    this[46] = v1 ^ (v1 ^ v3) & 0x38000;
  }
}
