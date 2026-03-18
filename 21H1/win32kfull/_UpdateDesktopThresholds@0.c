/*
 * XREFs of _UpdateDesktopThresholds@0 @ 0xA5498
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?SetNCMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z @ 0xDB0A6 (-SetNCMetrics@@YGXPAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?UpdateThresholdFromMetric@@YGXHPAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0xE92D4 (-UpdateThresholdFromMetric@@YGXHPAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 * Callees:
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?SetDockTargetValue@@YGXPAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0xA555A (-SetDockTargetValue@@YGXPAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?UpdateDesktopThresholdsWorker@@YGXPAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0xA55E2 (-UpdateDesktopThresholdsWorker@@YGXPAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YGXPAUtagMONITOR_MARGIN@@@Z @ 0xA5700 (-UpdateDesktopMonitorNavigationOrder@@YGXPAUtagMONITOR_MARGIN@@@Z.c)
 */

int __stdcall UpdateDesktopThresholds()
{
  unsigned int v0; // eax
  int v1; // esi
  unsigned int i; // edi
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // esi
  ULONG *v7; // [esp+0h] [ebp-18h]
  struct tagMONITOR_MARGIN *v8; // [esp+0h] [ebp-18h]
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v9[0] = 0;
  v0 = *(_DWORD *)*_gpDispInfo;
  if ( !v0 )
    return 0;
  if ( ULongLongToULong(16LL * v0, v7) < 0 )
    return 0;
  v1 = Win32AllocPoolZInit(v9[0], 1835101525);
  v10 = v1;
  if ( !v1 )
    return 0;
  for ( i = 0; i < 4; ++i )
  {
    v3 = dword_251454[i];
    v9[0] = 0;
    v9[1] = v3;
    UpdateDesktopThresholdsWorker(v1, v3, v9);
    if ( v9[0] )
    {
      v4 = (_DWORD *)(v1 + 12);
      v5 = v9[0];
      do
      {
        SetDockTargetValue(*v4);
        v4 += 4;
        --v5;
      }
      while ( v5 );
      v1 = v10;
    }
  }
  UpdateDesktopMonitorNavigationOrder(v8);
  Win32FreePool(v1);
  return 1;
}
