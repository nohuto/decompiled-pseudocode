/*
 * XREFs of _PrepareGammaRampData@12 @ 0xD0E00
 * Callers:
 *     _xxxSwitchDesktopWithFade@20 @ 0xAF188 (_xxxSwitchDesktopWithFade@20.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _GreGetDeviceGammaRamp@8 @ 0xD0F8E (_GreGetDeviceGammaRamp@8.c)
 */

int __stdcall PrepareGammaRampData(unsigned int *a1, unsigned int **a2, int *a3)
{
  unsigned int v3; // edi
  int DCEx; // eax
  int v5; // esi
  unsigned int DeviceCaps; // eax
  int i; // ecx
  int *v8; // ecx
  unsigned int *v9; // ebx
  _DWORD *v10; // esi
  int DisplayDC; // eax
  int v12; // edi
  ULONG *v14; // [esp+0h] [ebp-18h]
  unsigned int v15; // [esp+0h] [ebp-18h]
  unsigned int *v16; // [esp+4h] [ebp-14h]
  _DWORD *v17; // [esp+10h] [ebp-8h]
  int DeviceGammaRamp; // [esp+14h] [ebp-4h]

  v3 = 0;
  DeviceGammaRamp = 0;
  DCEx = _GetDCEx(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12), 0, 8388611);
  v5 = DCEx;
  if ( !DCEx )
    return -1073741801;
  DeviceCaps = GreGetDeviceCaps(DCEx, 116);
  *a1 = DeviceCaps;
  if ( DeviceCaps < 0x3C )
    *a1 = 60;
  _ReleaseDC(v5);
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(_DWORD *)(_gpDispInfo + 56); i; i = *(_DWORD *)(i + 28) )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 12) & 1) != 0 )
      ++v3;
  }
  if ( ULongLongToULong(1540LL * v3, v14) < 0 || (ULongAdd(0, 0x604u, v8, v15, v16) & 0x80000000) != 0 )
  {
    _ReleaseDC(v5);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    return -1073741675;
  }
  v9 = (unsigned int *)Win32AllocPoolZInit(0, 1835231559);
  if ( !v9 )
  {
    _ReleaseDC(v5);
    GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
    return -1073741801;
  }
  *v9 = v3;
  if ( _gProtocolType )
  {
    DeviceGammaRamp = 0;
    goto LABEL_20;
  }
  v10 = *(_DWORD **)(_gpDispInfo + 56);
  if ( !v10 )
    goto LABEL_20;
  v17 = v9 + 385;
  while ( (*(_BYTE *)(v10[5] + 12) & 1) == 0 )
  {
LABEL_19:
    v10 = (_DWORD *)v10[7];
    if ( !v10 )
      goto LABEL_20;
  }
  DisplayDC = GreCreateDisplayDC(v10[30], 0, 2);
  v12 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_20;
  DeviceGammaRamp = GreGetDeviceGammaRamp(DisplayDC, v17 + 1);
  if ( DeviceGammaRamp )
  {
    *v17 = v12;
    v17 += 385;
    goto LABEL_19;
  }
  GreDeleteDC(v12);
LABEL_20:
  *a3 = DeviceGammaRamp;
  *a2 = v9;
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  return 0;
}
