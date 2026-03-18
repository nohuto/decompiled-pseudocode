/*
 * XREFs of _VirtualizeMultiMonDigitizerSize@4 @ 0x151D24
 * Callers:
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     _MiPGetPhysicalRect@0 @ 0xCB4FC (_MiPGetPhysicalRect@0.c)
 *     _RemapHimetricPointsForMultiMonDigitizers@28 @ 0x151698 (_RemapHimetricPointsForMultiMonDigitizers@28.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     ExpandedMonitorSpace @ 0x14FC21 (ExpandedMonitorSpace.c)
 */

char __thiscall VirtualizeMultiMonDigitizerSize(INT *this)
{
  INT v2; // eax
  int *ScreenRect; // eax
  _DWORD v5[4]; // [esp+10h] [ebp-30h] BYREF
  int v6; // [esp+20h] [ebp-20h]
  int v7; // [esp+24h] [ebp-1Ch]
  int v8; // [esp+28h] [ebp-18h]
  int v9; // [esp+2Ch] [ebp-14h]
  INT v10; // [esp+30h] [ebp-10h] BYREF
  int v11; // [esp+34h] [ebp-Ch]
  int v12; // [esp+38h] [ebp-8h]
  int v13; // [esp+3Ch] [ebp-4h]

  LOBYTE(v2) = W32GetCurrentThreadDpiAwarenessContext() & 0xF;
  if ( (_BYTE)v2 != 2 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    ExpandedMonitorSpace(&v10);
    ScreenRect = GetScreenRect(v5);
    v6 = *ScreenRect;
    v7 = ScreenRect[1];
    v8 = ScreenRect[2];
    v9 = ScreenRect[3];
    this[2] = EngMulDiv(this[2], v8 - v6, v12 - v10);
    v2 = EngMulDiv(this[3], v9 - v7, v13 - v11);
    this[3] = v2;
  }
  return v2;
}
