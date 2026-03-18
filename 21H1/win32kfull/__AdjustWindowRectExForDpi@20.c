/*
 * XREFs of __AdjustWindowRectExForDpi@20 @ 0x313D6
 * Callers:
 *     _DwmChildRectChange@4 @ 0x30F5A (_DwmChildRectChange@4.c)
 * Callees:
 *     _GetWindowBordersForDpiWithCompatFlags2@24 @ 0x31540 (_GetWindowBordersForDpiWithCompatFlags2@24.c)
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     _NeedsWindowEdge@12 @ 0x32260 (_NeedsWindowEdge@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __ScaleSystemMetricForDPIWithoutCache@8 @ 0x15539C (__ScaleSystemMetricForDPIWithoutCache@8.c)
 */

int __fastcall _AdjustWindowRectExForDpi(_DWORD *a1, int a2, int a3, char a4, INT b)
{
  char v5; // esi^2
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v9; // ecx
  int v10; // eax
  int result; // eax
  int v12; // eax
  int DpiDependentMetric; // eax

  v5 = BYTE2(a2);
  NeedsWindowEdge(*(_DWORD *)(_gptiCurrent + 340) >= 0x400u);
  if ( (v5 & 0xC0) == 0xC0 )
  {
    v12 = *(unsigned __int16 *)(_gpsi + 6242);
    if ( a4 < 0 )
    {
      if ( b == v12 )
      {
        DpiDependentMetric = *(_DWORD *)(_gpsi + 1972);
      }
      else if ( b == 96 )
      {
        DpiDependentMetric = *(_DWORD *)(_gpsi + 2092);
      }
      else if ( GetDpiCacheSlot(b) == -1 )
      {
        DpiDependentMetric = _ScaleSystemMetricForDPIWithoutCache(22, b);
      }
      else
      {
        DpiDependentMetric = GetDpiDependentMetric(22, b);
      }
    }
    else if ( b == v12 )
    {
      DpiDependentMetric = *(_DWORD *)(_gpsi + 1892);
    }
    else if ( b == 96 )
    {
      DpiDependentMetric = *(_DWORD *)(_gpsi + 2012);
    }
    else if ( GetDpiCacheSlot(b) == -1 )
    {
      DpiDependentMetric = _ScaleSystemMetricForDPIWithoutCache(2, b);
    }
    else
    {
      DpiDependentMetric = GetDpiDependentMetric(2, b);
    }
    a1[1] -= DpiDependentMetric;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( *(_DWORD *)(ThreadWin32Thread + 340) > 0x9900u )
    v10 = 0;
  else
    v10 = *(_DWORD *)(ThreadWin32Thread + 352);
  result = GetWindowBordersForDpiWithCompatFlags2(v9, 1, b, v10);
  if ( result )
  {
    *a1 -= result;
    a1[2] += result;
    a1[1] -= result;
    a1[3] += result;
  }
  return result;
}
