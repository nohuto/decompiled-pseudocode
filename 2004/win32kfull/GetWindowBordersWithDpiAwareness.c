/*
 * XREFs of GetWindowBordersWithDpiAwareness @ 0x1C00AD8A0
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C002CABC (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     xxxCheckFullScreen @ 0x1C008E698 (xxxCheckFullScreen.c)
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 * Callees:
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiCacheSlot @ 0x1C00A0088 (GetDpiCacheSlot.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C00AFB3C (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01EA9F0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v2; // rdx
  int v3; // r9d
  int v4; // ecx
  unsigned int WindowDpiLastNotify; // ebx
  __int64 v6; // rax
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // r15d
  int v10; // edx
  unsigned int v11; // esi
  int v12; // edi
  __int64 result; // rax
  __int64 v14; // rax
  int DpiDependentMetric; // eax

  v1 = *(_DWORD **)(a1 + 40);
  v2 = a1;
  v3 = 1;
  v4 = v1[72] & 0xF;
  if ( v4 == 3 )
  {
    WindowDpiLastNotify = (v1[72] >> 8) & 0x1FF;
  }
  else if ( (v1[58] & 0x8000000) != 0 )
  {
    WindowDpiLastNotify = GetWindowDpiLastNotify(v2);
  }
  else if ( !v4
         && (v14 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 448LL)) != 0
         && (*(_DWORD *)(**(_QWORD **)(v14 + 8) + 64LL) & 1) != 0 )
  {
    WindowDpiLastNotify = 96;
  }
  else
  {
    WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 416LL) + 284LL);
  }
  v6 = *(_QWORD *)(v2 + 16);
  if ( *(_DWORD *)(v6 + 624) > 0x9900u )
    v7 = 0;
  else
    v7 = *(_DWORD *)(v6 + 640);
  v8 = v1[6];
  v9 = v1[7];
  if ( (v8 & 0x100) != 0 )
  {
    v10 = 2;
  }
  else
  {
    v10 = 0;
    if ( (v8 & 0x20000) != 0 )
      v10 = v3;
  }
  v11 = v10 + 1;
  if ( (v9 & 0xC00000) == 0 && ((unsigned __int8)v8 & (unsigned __int8)v3) == 0 )
    v11 = v10;
  if ( (v7 & 0x10000000) != 0 || (v7 & 0x20000000) != 0 )
  {
    v12 = 0;
  }
  else if ( WindowDpiLastNotify == *(unsigned __int16 *)(gpsi + 6998LL) )
  {
    v12 = *(_DWORD *)(gpsi + 2400LL);
  }
  else if ( WindowDpiLastNotify == 96 )
  {
    v12 = *(_DWORD *)(gpsi + 2520LL);
  }
  else
  {
    if ( (unsigned int)GetDpiCacheSlot(WindowDpiLastNotify) == -1 )
      DpiDependentMetric = ScaleSystemMetricForDPIWithoutCache(29LL, WindowDpiLastNotify);
    else
      DpiDependentMetric = GetDpiDependentMetric(29LL, WindowDpiLastNotify);
    v12 = DpiDependentMetric;
  }
  if ( (v9 & 0x40000) != 0 )
    return v12 + v11 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, v7);
  result = v11;
  if ( v12 > 0 && (v9 & 0xC00000) == 0xC00000 && (v7 & 0x30000000) == 0 )
    return v12 + v11 + (unsigned int)GetResizeBorderWidthForDpiWithAppCompat2(WindowDpiLastNotify, v7);
  return result;
}
