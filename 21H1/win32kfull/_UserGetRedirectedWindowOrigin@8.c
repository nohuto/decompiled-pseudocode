/*
 * XREFs of _UserGetRedirectedWindowOrigin@8 @ 0x38754
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _GetDCOrgOnScreen@8 @ 0xC3520 (_GetDCOrgOnScreen@8.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 * Callees:
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 */

int __stdcall UserGetRedirectedWindowOrigin(int a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // edx
  int StyleWindow; // eax

  v2 = 0;
  GreLockVisRgnShared(*(_DWORD *)(_gpDispInfo + 20));
  v3 = LookupDC(a1, 1);
  if ( v3 && (*(_DWORD *)(v3 + 32) & 0x4000) != 0 )
  {
    v4 = *(_DWORD *)(v3 + 8);
    v5 = 0;
    v6 = *(_DWORD *)(v4 + 12);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 4);
      if ( v7 )
        v5 = *(_DWORD *)(v7 + 12);
    }
    if ( v4 == v5 )
    {
      *a2 = 0;
      a2[1] = 0;
      goto LABEL_9;
    }
    StyleWindow = GetStyleWindow(v4, 2848);
    if ( StyleWindow )
    {
      *a2 = *(_DWORD *)(*(_DWORD *)(StyleWindow + 20) + 52);
      a2[1] = *(_DWORD *)(*(_DWORD *)(StyleWindow + 20) + 56);
LABEL_9:
      v2 = 1;
    }
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  return v2;
}
