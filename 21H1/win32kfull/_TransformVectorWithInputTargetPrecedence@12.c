/*
 * XREFs of _TransformVectorWithInputTargetPrecedence@12 @ 0x14E6DF
 * Callers:
 *     _EditionMouseSpeedHitTest@48 @ 0xF14D0 (_EditionMouseSpeedHitTest@48.c)
 *     _EditionGetLogicalPointForMouseCaptureButtonEvent@28 @ 0x147930 (_EditionGetLogicalPointForMouseCaptureButtonEvent@28.c)
 *     _EditionPhysicalToLogicalDPIPointWithInputDestHint@20 @ 0x151021 (_EditionPhysicalToLogicalDPIPointWithInputDestHint@20.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _GetMonitorTransform@12 @ 0x99CB2 (_GetMonitorTransform@12.c)
 *     _EnterFloatingPointRegion@0 @ 0xAD89E (_EnterFloatingPointRegion@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _TransformVector@20 @ 0x17BC83 (_TransformVector@20.c)
 */

int __fastcall TransformVectorWithInputTargetPrecedence(int a1, int a2, int a3)
{
  float *v3; // edi
  int v4; // ebx
  int TopLevelWindow; // esi
  int v6; // ecx
  int v7; // ecx
  int v10; // [esp+10h] [ebp-50h]
  float v12[17]; // [esp+18h] [ebp-48h] BYREF

  v3 = 0;
  memset(v12, 0, 0x40u);
  v4 = 0;
  TopLevelWindow = _GetTopLevelWindow((int)_gspwndInternalCapture);
  if ( TopLevelWindow && EnterFloatingPointRegion() )
  {
    v10 = *(_DWORD *)(a1 + 8);
    if ( TopLevelWindow == _GetTopLevelWindow(a1) )
    {
      v6 = *(_DWORD *)(v10 + 368);
      if ( v6 && *(_DWORD *)(v6 + 8) == TopLevelWindow )
      {
        if ( GetMonitorTransform(*(_DWORD *)(v6 + 192), a1, v12) )
          v3 = v12;
        goto LABEL_12;
      }
    }
    else
    {
      v7 = *(_DWORD *)(v10 + 236);
      if ( !v7
        || v7 != *(_DWORD *)(*((_DWORD *)_gspwndInternalCapture + 2) + 236)
        || *(struct tagWND *const *)(v7 + 56) != _gspwndInternalCapture )
      {
        goto LABEL_14;
      }
    }
    v3 = *(float **)(TopLevelWindow + 120);
LABEL_12:
    v4 = 1;
    if ( v3 )
      TransformVector(a2 + 4, a3, 1);
LABEL_14:
    KeRestoreFloatingPointState(_gfsSave);
    return v4;
  }
  return 0;
}
