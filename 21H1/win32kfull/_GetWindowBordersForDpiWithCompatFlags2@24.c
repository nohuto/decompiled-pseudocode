/*
 * XREFs of _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540
 * Callers:
 *     __AdjustWindowRectExForDpi@20 @ 0x313D6 (__AdjustWindowRectExForDpi@20.c)
 *     _GetWindowBordersWithDpiAwareness@12 @ 0x314A8 (_GetWindowBordersWithDpiAwareness@12.c)
 *     _xxxDrawWindowFrame@12 @ 0x8E7D8 (_xxxDrawWindowFrame@12.c)
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 *     _xxxDrawCaptionBar@12 @ 0x8F42C (_xxxDrawCaptionBar@12.c)
 *     _FindNCHit@8 @ 0xA9F04 (_FindNCHit@8.c)
 *     _xxxGetMenuBarInfo@16 @ 0xB81C8 (_xxxGetMenuBarInfo@16.c)
 *     _MNPositionSysMenu@8 @ 0xC069A (_MNPositionSysMenu@8.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     ?xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z @ 0x19DBBC (-xxxAnimateCaption@@YGXPAUtagWND@@PAUHDC__@@PAUtagRECT@@2@Z.c)
 *     _xxxCalcCaptionButton@24 @ 0x1A52FE (_xxxCalcCaptionButton@24.c)
 *     _xxxMNRecomputeBarIfNeeded@8 @ 0x1ABA5C (_xxxMNRecomputeBarIfNeeded@8.c)
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 * Callees:
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 */

int __fastcall GetWindowBordersForDpiWithCompatFlags2(int a1, int a2, int a3, int a4, INT b, int a6)
{
  int v7; // ebx
  int v8; // edx
  int v9; // esi
  int v11; // eax
  int v13; // eax
  int DpiDependentMetric; // eax
  __int16 v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  INT ba; // [esp+30h] [ebp+10h]

  v15 = a2;
  v7 = 0;
  v8 = 1;
  if ( (v15 & 0x100) != 0 )
    v9 = 2;
  else
    v9 = ((unsigned int)&loc_20000 & a2) != 0;
  v16 = a1 & 0xC00000;
  if ( (a1 & 0xC00000) != 0 || (a2 & 1) != 0 )
    ++v9;
  v11 = a6 & 0x10000000;
  if ( (a6 & 0x10000000) == 0 && (a6 & 0x20000000) == 0 )
  {
    if ( b == *(unsigned __int16 *)(_gpsi + 6242) )
    {
      v7 = *(_DWORD *)(_gpsi + 2000);
    }
    else if ( b == 96 )
    {
      v7 = *(_DWORD *)(_gpsi + 2120);
    }
    else
    {
      if ( GetDpiCacheSlot(b) == -1 )
        DpiDependentMetric = _ScaleSystemMetricForDPIWithoutCache(29, b);
      else
        DpiDependentMetric = GetDpiDependentMetric(29, b);
      v7 = DpiDependentMetric;
      v8 = 1;
    }
    v11 = 0;
  }
  if ( (((unsigned int)&loc_3FFFD + 3) & a1) != 0 || v7 > 0 && v16 == 12582912 && (a6 & 0x30000000) == 0 )
  {
    if ( !v11 )
    {
      v8 = (b * *(_DWORD *)(Get96DpiServerInfo() + 4) + 48) / 96;
      ba = v8;
      if ( (a6 & 0x20000000) != 0 )
      {
        if ( b == *(unsigned __int16 *)(_gpsi + 6242) )
        {
          v13 = *(_DWORD *)(_gpsi + 2000);
        }
        else if ( b == 96 )
        {
          v13 = *(_DWORD *)(_gpsi + 2120);
        }
        else
        {
          if ( GetDpiCacheSlot(b) == -1 )
            v13 = _ScaleSystemMetricForDPIWithoutCache(29, b);
          else
            v13 = GetDpiDependentMetric(29, b);
          v8 = ba;
        }
        v8 += v13;
      }
    }
    v9 += v7 + v8;
  }
  if ( a4 && (v15 & 0x200) != 0 )
    v9 += 2;
  return v9;
}
