/*
 * XREFs of GetPrimaryMonitorRectForWindow @ 0x1C003A034
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3D1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 */

_OWORD *__fastcall GetPrimaryMonitorRectForWindow(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 DispInfo; // rax
  __int128 v7; // xmm0
  _OWORD *result; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DispInfo = GetDispInfo(a1, a2, a3, a4);
  v7 = *(_OWORD *)GetMonitorRectForWindow(v9, *(_QWORD *)(DispInfo + 96), a2);
  result = a1;
  *a1 = v7;
  return result;
}
