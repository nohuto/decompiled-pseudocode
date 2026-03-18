/*
 * XREFs of __GetOwnerTransformedMonitorRect@16 @ 0x151D96
 * Callers:
 *     _NtUserGetOwnerTransformedMonitorRect@16 @ 0x163BDD (_NtUserGetOwnerTransformedMonitorRect@16.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

char __fastcall _GetOwnerTransformedMonitorRect(_DWORD *a1, _DWORD *a2, int a3, _DWORD *a4)
{
  _DWORD *MonitorWorkRect; // eax
  int v5; // ecx
  int v6; // ebx
  int CurrentThreadDpiAwarenessContext; // eax
  _DWORD *v8; // edi
  _DWORD *v10; // [esp+Ch] [ebp-54h] BYREF
  _DWORD *v11; // [esp+10h] [ebp-50h]
  _DWORD *v12; // [esp+14h] [ebp-4Ch]
  int v13[4]; // [esp+18h] [ebp-48h] BYREF
  int v14[5]; // [esp+28h] [ebp-38h] BYREF
  int v15; // [esp+3Ch] [ebp-24h]
  int v16; // [esp+40h] [ebp-20h]
  int v17; // [esp+44h] [ebp-1Ch]
  int v18; // [esp+48h] [ebp-18h]
  int v19; // [esp+4Ch] [ebp-14h] BYREF
  int v20; // [esp+50h] [ebp-10h]
  int v21; // [esp+54h] [ebp-Ch]
  int v22; // [esp+58h] [ebp-8h]

  v10 = a1;
  v11 = a2;
  v12 = a4;
  if ( a3 )
    MonitorWorkRect = GetMonitorWorkRect(a2, v13);
  else
    MonitorWorkRect = GetMonitorRect(a2, v14);
  v15 = *MonitorWorkRect;
  v5 = v10[5];
  v16 = MonitorWorkRect[1];
  v17 = MonitorWorkRect[2];
  v18 = MonitorWorkRect[3];
  v19 = v15;
  v20 = v16;
  v21 = v17;
  v22 = v18;
  LOBYTE(MonitorWorkRect) = *(_DWORD *)(v5 + 184) & 0xF;
  if ( (_BYTE)MonitorWorkRect != 2 )
  {
    MonitorWorkRect = (_DWORD *)ValidateHmonitorNoRip(*(_DWORD *)(v5 + 164));
    v10 = MonitorWorkRect;
    if ( MonitorWorkRect )
    {
      if ( MonitorWorkRect != v11 )
      {
        v6 = v11[5] + (a3 != 0 ? 32 : 16);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
        LOBYTE(MonitorWorkRect) = PhysicalToLogicalDPIRect(&v19, v6, CurrentThreadDpiAwarenessContext, &v10);
      }
    }
  }
  v8 = v12;
  *v12 = v19;
  *++v8 = v20;
  *++v8 = v21;
  v8[1] = v22;
  return (char)MonitorWorkRect;
}
