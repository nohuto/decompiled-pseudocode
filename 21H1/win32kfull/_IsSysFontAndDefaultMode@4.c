/*
 * XREFs of _IsSysFontAndDefaultMode@4 @ 0x1B847A
 * Callers:
 *     ?DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z @ 0x1B7EEA (-DT_InitDrawTextInfo@@YGHPAUHDC__@@PAUtagRECT@@IPAUDRAWTEXTDATA@@PAUtagDRAWTEXTPARAMS@@@Z.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _GreGetHFONT@4 @ 0x1FF06B (_GreGetHFONT@4.c)
 *     _GreGetMapMode@4 @ 0x21D568 (_GreGetMapMode@4.c)
 */

int __thiscall IsSysFontAndDefaultMode(HDC this)
{
  int ProcessDpiServerInfo; // eax
  int v3; // esi
  int MapMode; // eax
  int v5; // ecx

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
    ProcessDpiServerInfo = GetProcessDpiServerInfo();
  else
    ProcessDpiServerInfo = Get96DpiServerInfo();
  v3 = *(_DWORD *)(ProcessDpiServerInfo + 20);
  if ( GreGetHFONT(this) != v3 )
    return 0;
  MapMode = GreGetMapMode(this);
  v5 = 1;
  if ( MapMode != 1 )
    return 0;
  return v5;
}
