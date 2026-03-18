/*
 * XREFs of _GetWindowNCMetrics@4 @ 0x91522
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z @ 0x91676 (-GetResizeBorderWidthForDpiWithAppCompat2@@YGHIK@Z.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z @ 0x916D2 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YGHHIK@Z.c)
 *     _GetScaledLogFontForDpi@12 @ 0x91944 (_GetScaledLogFontForDpi@12.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 */

int __thiscall GetWindowNCMetrics(_DWORD *this)
{
  INT DpiForSystem; // edi
  PKTHREAD CurrentThread; // eax
  int v4; // ebx
  PKTHREAD v5; // eax
  int ThreadWin32Thread; // eax
  struct HLFONT__ **ProcessDpiMetrics; // eax
  struct HLFONT__ **v8; // ebx
  unsigned int v10; // [esp+0h] [ebp-10h]
  unsigned int v11; // [esp+0h] [ebp-10h]
  unsigned int v12; // [esp+4h] [ebp-Ch]
  unsigned int v13; // [esp+4h] [ebp-Ch]
  int DPIServerInfo; // [esp+Ch] [ebp-4h]

  DpiForSystem = GetDpiForSystem();
  this[5] = GetDpiDependentMetric(13, DpiForSystem);
  this[55] = GetDpiDependentMetric(26, DpiForSystem);
  CurrentThread = KeGetCurrentThread();
  W32GetThreadWin32Thread(CurrentThread);
  v4 = 0;
  this[1] = GetResizeBorderWidthForDpiWithAppCompat2(v10, v12);
  this[2] = GetDpiDependentMetric(0, DpiForSystem);
  this[3] = GetDpiDependentMetric(10, DpiForSystem);
  this[4] = GetDpiDependentMetric(12, DpiForSystem);
  this[29] = GetDpiDependentMetric(23, DpiForSystem);
  this[30] = GetDpiDependentMetric(24, DpiForSystem);
  this[54] = GetDpiDependentMetric(25, DpiForSystem);
  v5 = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(v5);
  if ( *(_DWORD *)(ThreadWin32Thread + 340) <= 0x9900u )
    v4 = *(_DWORD *)(ThreadWin32Thread + 352);
  this[125] = GetWindowFrameMetricForDpiWithCompatFlags2(v4, v11, v13);
  DPIServerInfo = GetDPIServerInfo();
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    ProcessDpiMetrics = (struct HLFONT__ **)GetProcessDpiMetrics();
  else
    ProcessDpiMetrics = (struct HLFONT__ **)Get96DpiMetrics();
  v8 = ProcessDpiMetrics;
  GreExtGetObjectW(*(struct HLFONT__ **)(DPIServerInfo + 8), 92, this + 6);
  GreExtGetObjectW(v8[7], 92, this + 31);
  GreExtGetObjectW(*v8, 92, this + 56);
  GreExtGetObjectW(v8[11], 92, this + 79);
  return GetScaledLogFontForDpi(5, DpiForSystem, this + 102);
}
