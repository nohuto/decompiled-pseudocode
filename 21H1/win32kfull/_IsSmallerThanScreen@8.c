/*
 * XREFs of _IsSmallerThanScreen@8 @ 0x19E5B1
 * Callers:
 *     ?ShouldRemoveMonitorRgn@@YGHPAUtagWND@@@Z @ 0x2D436 (-ShouldRemoveMonitorRgn@@YGHPAUtagWND@@@Z.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     ?GetWindowCompositedDpi@@YGGPBUtagWND@@@Z @ 0x70750 (-GetWindowCompositedDpi@@YGGPBUtagWND@@@Z.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     ?GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z @ 0x1B7171 (-GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z.c)
 */

BOOL __fastcall IsSmallerThanScreen(_DWORD *a1, HRGN *a2)
{
  int *MonitorWorkRectForWindow; // eax
  int v4; // edi
  int v5; // esi
  HRGN MonitorRegionForDpi; // eax
  _DWORD *v7; // ecx
  unsigned int v9; // [esp+0h] [ebp-38h]
  struct tagMONITOR *v10; // [esp+0h] [ebp-38h]
  int v11; // [esp+4h] [ebp-34h]
  unsigned __int16 v12; // [esp+4h] [ebp-34h]
  int v13[4]; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+20h] [ebp-18h]
  int v15; // [esp+24h] [ebp-14h]
  int v16; // [esp+28h] [ebp-10h]
  int v17; // [esp+2Ch] [ebp-Ch]
  struct tagMONITOR *v18; // [esp+30h] [ebp-8h]
  HRGN *v19; // [esp+34h] [ebp-4h]

  v19 = a2;
  v18 = _MonitorFromWindowInternal(1, (int)a1, 0, v9, v11);
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((int)v18, a1, v13);
  v14 = *MonitorWorkRectForWindow;
  v15 = MonitorWorkRectForWindow[1];
  v16 = MonitorWorkRectForWindow[2];
  v17 = MonitorWorkRectForWindow[3];
  v4 = v16 - v14;
  v5 = v17 - v15;
  if ( v19 )
  {
    GetWindowCompositedDpi(a1);
    MonitorRegionForDpi = GetMonitorRegionForDpi(v10, v12);
    *v19 = MonitorRegionForDpi;
  }
  v7 = (_DWORD *)a1[5];
  return v7[15] - v7[13] < v4 || v7[16] - v7[14] < v5;
}
