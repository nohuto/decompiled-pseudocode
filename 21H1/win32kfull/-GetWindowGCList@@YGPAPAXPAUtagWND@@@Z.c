/*
 * XREFs of ?GetWindowGCList@@YGPAPAXPAUtagWND@@@Z @ 0xE35F0
 * Callers:
 *     ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328 (-_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z.c)
 *     _GetGestureConfigSettings@24 @ 0x1887F4 (_GetGestureConfigSettings@24.c)
 * Callees:
 *     _VWPLGetData@12 @ 0x7FF58 (_VWPLGetData@12.c)
 */

void **__thiscall GetWindowGCList(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  if ( VWPLGetData(*(unsigned int **)(*(_DWORD *)(this[2] + 232) + 492), (int)this, &v2) && v2 )
    return *(void ***)(v2 + 12);
  else
    return 0;
}
