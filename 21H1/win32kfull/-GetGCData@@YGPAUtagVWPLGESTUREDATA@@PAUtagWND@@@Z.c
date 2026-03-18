/*
 * XREFs of ?GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z @ 0xE353A
 * Callers:
 *     ?SetBitMask@@YGXPAUtagWND@@IH@Z @ 0xE31BA (-SetBitMask@@YGXPAUtagWND@@IH@Z.c)
 *     ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328 (-_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z.c)
 *     _SetGestureConfigSettings@20 @ 0xE3454 (_SetGestureConfigSettings@20.c)
 *     _GetGestureConfigSettings@24 @ 0x1887F4 (_GetGestureConfigSettings@24.c)
 * Callees:
 *     _VWPLGetData@12 @ 0x7FF58 (_VWPLGetData@12.c)
 */

struct tagVWPLGESTUREDATA *__thiscall GetGCData(_DWORD *this)
{
  int v1; // eax
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0;
  v1 = VWPLGetData(*(unsigned int **)(*(_DWORD *)(this[2] + 232) + 492), (int)this, &v3);
  return v1 != 0 ? (struct tagVWPLGESTUREDATA *)v3 : 0;
}
