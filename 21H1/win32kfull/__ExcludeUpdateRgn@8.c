/*
 * XREFs of __ExcludeUpdateRgn@8 @ 0x1964AE
 * Callers:
 *     ?UT_InvertCaret@@YGXXZ @ 0xBA85A (-UT_InvertCaret@@YGXXZ.c)
 *     _NtUserExcludeUpdateRgn@8 @ 0x1616C9 (_NtUserExcludeUpdateRgn@8.c)
 * Callees:
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _GetDCOrgOnScreen@8 @ 0xC3520 (_GetDCOrgOnScreen@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     ?CalcVirtualScreenClipRegion@@YGXPAUHRGN__@@PAUtagWND@@@Z @ 0x1962EE (-CalcVirtualScreenClipRegion@@YGXPAUHRGN__@@PAUtagWND@@@Z.c)
 */

int __fastcall _ExcludeUpdateRgn(HDC a1, int a2)
{
  int v4; // eax
  int result; // eax
  int v6; // [esp+Ch] [ebp-1Ch] BYREF
  int v7; // [esp+10h] [ebp-18h]
  _BYTE v8[16]; // [esp+14h] [ebp-14h] BYREF

  v6 = 0;
  v7 = 0;
  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 20) + 92);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      return GreIntersectClipRect(a1, 0, 0, 0, 0);
    }
    else
    {
      result = GetDCOrgOnScreen((int)a1, &v6);
      if ( result )
      {
        if ( GreGetRandomRgn((int)a1, _ghrgnInv1, 1) == 1 )
          GreOffsetRgn(_ghrgnInv1, v6, v7);
        else
          CalcVirtualScreenClipRegion(_ghrgnInv1, a2);
        GreCombineRgn(_ghrgnInv1, _ghrgnInv1, *(_DWORD *)(*(_DWORD *)(a2 + 20) + 92), 4);
        GreOffsetRgn(_ghrgnInv1, -v6, -v7);
        return GreExtSelectClipRgnInternal(a1, _ghrgnInv1, 5, 1);
      }
    }
  }
  else
  {
    memset(v8, 0, sizeof(v8));
    return GreGetClipBox(a1, v8, 0);
  }
  return result;
}
