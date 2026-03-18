/*
 * XREFs of _GetHimetricScaleForMonitor@12 @ 0x151143
 * Callers:
 *     _NtUserGetHimetricScaleFactorFromPixelLocation@20 @ 0x162E74 (_NtUserGetHimetricScaleFactorFromPixelLocation@20.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     ExpandedMonitorSpace @ 0x14FC21 (ExpandedMonitorSpace.c)
 *     ?ReduceFraction@@YGXPAK0@Z @ 0x150026 (-ReduceFraction@@YGXPAK0@Z.c)
 */

unsigned int *__fastcall GetHimetricScaleForMonitor(void *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int *result; // eax
  int *MonitorRect; // eax
  int *v7; // esi
  int *v8; // esi
  unsigned int v9; // ecx
  unsigned int i; // edx
  _DWORD v11[2]; // [esp+8h] [ebp-48h] BYREF
  int v12; // [esp+10h] [ebp-40h]
  int v13; // [esp+14h] [ebp-3Ch]
  int v14; // [esp+18h] [ebp-38h]
  int v15; // [esp+1Ch] [ebp-34h]
  int v16; // [esp+20h] [ebp-30h]
  int v17; // [esp+24h] [ebp-2Ch]
  int v18; // [esp+28h] [ebp-28h]
  int v19; // [esp+2Ch] [ebp-24h]
  int v20; // [esp+30h] [ebp-20h]
  int v21; // [esp+34h] [ebp-1Ch]
  INT v22[2]; // [esp+38h] [ebp-18h] BYREF
  int v23; // [esp+40h] [ebp-10h]
  int v24; // [esp+44h] [ebp-Ch]
  unsigned int v25; // [esp+48h] [ebp-8h] BYREF
  int v26; // [esp+4Ch] [ebp-4h] BYREF

  v25 = (unsigned int)a1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    result = a3;
    *a3 = 1;
    *a2 = 1;
  }
  else
  {
    MonitorRect = GetMonitorRect(a1, v11);
    v18 = *MonitorRect;
    v19 = MonitorRect[1];
    v20 = MonitorRect[2];
    v21 = MonitorRect[3];
    v7 = (int *)(*(_DWORD *)(v25 + 20) + 16);
    v11[0] = *v7++;
    v11[1] = *v7++;
    v12 = *v7;
    v13 = v7[1];
    v22[0] = 0;
    v22[1] = 0;
    v23 = 0;
    v24 = 0;
    ExpandedMonitorSpace(v22);
    v8 = (int *)(*_gpDispInfo + 12);
    v14 = *v8++;
    v15 = *v8++;
    v16 = *v8;
    v17 = v8[1];
    v26 = (v16 - v14) * (v20 - v18);
    v25 = (v23 - v22[0]) * (v12 - v11[0]);
    ReduceFraction((unsigned int *)&v26, (int *)&v25);
    v9 = v26;
    for ( i = v25; v9 > 0x7FFFFFFF || i > 0x7FFFFFFF; i >>= 1 )
      v9 >>= 1;
    if ( !i || !v9 )
    {
      v9 = 1;
      i = 1;
    }
    result = a3;
    *a2 = v9;
    *a3 = i;
  }
  return result;
}
