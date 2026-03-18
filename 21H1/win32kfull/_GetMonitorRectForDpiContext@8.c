/*
 * XREFs of _GetMonitorRectForDpiContext@8 @ 0x3356A
 * Callers:
 *     _InitializeDPIINFO@16 @ 0x24784 (_InitializeDPIINFO@16.c)
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _GetScreenRectForDpiContext@4 @ 0x338A8 (_GetScreenRectForDpiContext@4.c)
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 *     _GetMonitorTransform@12 @ 0x99CB2 (_GetMonitorTransform@12.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     ?GetMonitorMenuRectForDpiContext@@YG?AUtagRECT@@PBUtagMONITOR@@K@Z @ 0x1B70D7 (-GetMonitorMenuRectForDpiContext@@YG-AUtagRECT@@PBUtagMONITOR@@K@Z.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _ExpandMonitorSpaceVertex@16 @ 0x15678 (_ExpandMonitorSpaceVertex@16.c)
 */

INT *__fastcall GetMonitorRectForDpiContext(int a1, unsigned int a2, INT *a3)
{
  int v3; // eax
  int v4; // ebx
  INT *p_a; // esi
  INT *result; // eax
  INT *v7; // esi
  INT v8; // eax
  int v9; // edx
  INT a; // [esp+Ch] [ebp-14h] BYREF
  INT v11; // [esp+10h] [ebp-10h]
  int v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]

  v14 = a1;
  if ( (a2 & 0xF) == 2 && (a2 & 0x20000000) != 0 )
  {
    p_a = (INT *)(*(_DWORD *)(a1 + 20) + 60);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 20);
    a = *(_DWORD *)(v3 + 16);
    v11 = *(_DWORD *)(v3 + 20);
    v12 = *(_DWORD *)(v3 + 24);
    v13 = *(_DWORD *)(v3 + 28);
    v4 = (a2 >> 8) & 0x1FF;
    if ( v4 )
    {
      v8 = ExpandMonitorSpaceVertex(v4, *(_WORD *)(v3 + 54), a, v11);
      ScaleDPIRect(&a, &a, v4, *(_WORD *)(*(_DWORD *)(v14 + 20) + 52), v8, v9, a, v11);
    }
    p_a = &a;
  }
  result = a3;
  *a3 = *p_a;
  v7 = p_a + 1;
  a3[1] = *v7++;
  a3[2] = *v7;
  a3[3] = v7[1];
  return result;
}
