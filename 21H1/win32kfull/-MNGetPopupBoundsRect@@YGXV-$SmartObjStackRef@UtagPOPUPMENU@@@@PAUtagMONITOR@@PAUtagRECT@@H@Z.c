/*
 * XREFs of ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B
 * Callers:
 *     ?MNCheckScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagMONITOR@@@Z @ 0x196697 (-MNCheckScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUt.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _SubtractRect@12 @ 0x9A66A (_SubtractRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GetMonitorMenuRectForWindow@8 @ 0x1B722C (_GetMonitorMenuRectForWindow@8.c)
 */

_DWORD *__fastcall MNGetPopupBoundsRect(int a1, int *a2, int a3, int a4, int a5)
{
  int *MonitorRectForWindow; // eax
  _DWORD *MonitorMenuRectForWindow; // eax
  int *v8; // esi
  int *v9; // esi
  int v10; // eax
  int CurrentThreadDpiAwarenessContext; // edi
  int v12; // ecx
  int *v13; // edi
  char v15[16]; // [esp+10h] [ebp-74h] BYREF
  int v16[5]; // [esp+20h] [ebp-64h] BYREF
  int *v17; // [esp+34h] [ebp-50h]
  int v18; // [esp+38h] [ebp-4Ch] BYREF
  _DWORD v19[4]; // [esp+3Ch] [ebp-48h] BYREF
  _DWORD v20[4]; // [esp+4Ch] [ebp-38h] BYREF
  int v21; // [esp+5Ch] [ebp-28h] BYREF
  int v22; // [esp+60h] [ebp-24h]
  int v23; // [esp+64h] [ebp-20h]
  int v24; // [esp+68h] [ebp-1Ch]
  int v25; // [esp+6Ch] [ebp-18h] BYREF
  int v26; // [esp+70h] [ebp-14h]
  int v27; // [esp+74h] [ebp-10h]
  int v28; // [esp+78h] [ebp-Ch]

  v17 = a2;
  MonitorRectForWindow = GetMonitorRectForWindow(v16);
  v21 = *MonitorRectForWindow;
  v22 = MonitorRectForWindow[1];
  v23 = MonitorRectForWindow[2];
  v24 = MonitorRectForWindow[3];
  if ( **(int **)a4 >= 0 )
  {
    v19[0] = v21;
    v19[1] = v22;
    v19[2] = v23;
    v19[3] = v24;
    v8 = v19;
  }
  else
  {
    MonitorMenuRectForWindow = (_DWORD *)GetMonitorMenuRectForWindow(a1, *(_DWORD *)(*(_DWORD *)a4 + 8), v15);
    v20[0] = *MonitorMenuRectForWindow;
    v20[1] = MonitorMenuRectForWindow[1];
    v20[2] = MonitorMenuRectForWindow[2];
    v20[3] = MonitorMenuRectForWindow[3];
    v8 = v20;
  }
  v25 = *v8;
  v9 = v8 + 1;
  v26 = *v9++;
  v27 = *v9;
  v28 = v9[1];
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a4 + 8) + 20) + 184) & 0xF) != 2 )
  {
    v10 = ValidateHmonitorNoRip(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a4 + 8) + 20) + 164));
    v18 = v10;
    if ( v10 )
    {
      if ( v10 != a1 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        if ( **(int **)a4 >= 0 || ERECTL::bWrapped((ERECTL *)(a1 + 164)) )
          PhysicalToLogicalDPIRect(&v25, *(_DWORD *)(a1 + 20) + 16, CurrentThreadDpiAwarenessContext, &v18);
        else
          PhysicalToLogicalDPIRect(&v25, v12, CurrentThreadDpiAwarenessContext, &v18);
        if ( !a3 )
          goto LABEL_15;
        PhysicalToLogicalDPIRect(&v21, *(_DWORD *)(a1 + 20) + 16, CurrentThreadDpiAwarenessContext, &v18);
      }
    }
  }
  if ( !a3 )
  {
LABEL_15:
    v13 = v17;
    *v17 = v25;
    *++v13 = v26;
    *++v13 = v27;
    v13[1] = v28;
    return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&a4);
  }
  SubtractRect(v17, &v21, &v25);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&a4);
}
