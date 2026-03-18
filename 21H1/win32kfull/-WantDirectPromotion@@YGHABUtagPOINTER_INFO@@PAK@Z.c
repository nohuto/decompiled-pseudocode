/*
 * XREFs of ?WantDirectPromotion@@YGHABUtagPOINTER_INFO@@PAK@Z @ 0x17D7CB
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     _GetAppCompatFlags2QuadWord@4 @ 0xA14BE (_GetAppCompatFlags2QuadWord@4.c)
 */

int __fastcall WantDirectPromotion(int a1, int *a2)
{
  int v2; // eax
  int v4; // esi
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 12);
  if ( (v2 & 0x10000) != 0 )
  {
    v4 = 0x10000000;
  }
  else
  {
    if ( (v2 & 0x40004) != 0 )
      return 0;
    v4 = 0;
  }
  v5 = ValidateHwnd(*(_DWORD *)(a1 + 20));
  if ( v5 && (GetAppCompatFlags2QuadWord(*(_DWORD *)(v5 + 8)) & 0x40000000000LL) != 0 )
  {
    *a2 = v4;
    return 1;
  }
  return 0;
}
