/*
 * XREFs of ?IsDraggingForegroundModernApp@@YGHPAUtagWND@@@Z @ 0x171804
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z @ 0x170B43 (-AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsDraggingForegroundModernApp(_DWORD *this)
{
  _DWORD *v1; // edx
  int v2; // esi

  v1 = (_DWORD *)this[2];
  v2 = 0;
  if ( ((unsigned int)&loc_1C0000 & v1[172]) == 0x40000 && v1[200] && (_DWORD *)v1[199] == this && _gptiForeground )
    return v1[59] == *(_DWORD *)(_gptiForeground + 236);
  return v2;
}
