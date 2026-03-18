/*
 * XREFs of _GetMonitorWorkRectForDpiContext@8 @ 0x71F62
 * Callers:
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 * Callees:
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     _GetMonitorWorkRectForDpi@8 @ 0x71FAA (_GetMonitorWorkRectForDpi@8.c)
 */

int *__fastcall GetMonitorWorkRectForDpiContext(int a1, int a2, int *a3)
{
  int *MonitorWorkRectForDpi; // esi
  int *result; // eax
  int *v5; // esi
  int v6; // ecx
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // [esp-14h] [ebp-2Ch]
  int v10; // [esp-10h] [ebp-28h]
  int v11; // [esp-Ch] [ebp-24h]
  int v12; // [esp-8h] [ebp-20h]
  int v13; // [esp-4h] [ebp-1Ch]
  int v14[4]; // [esp+8h] [ebp-10h] BYREF

  if ( (a2 & 0xF) == 2 && (a2 & 0x20000000) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    v13 = *(_DWORD *)(v6 + 20);
    v7 = *(_WORD *)(v6 + 52);
    v12 = *(_DWORD *)(v6 + 16);
    v14[0] = *(_DWORD *)(v6 + 32);
    v11 = *(_DWORD *)(v6 + 64);
    v10 = *(_DWORD *)(v6 + 60);
    v14[1] = *(_DWORD *)(v6 + 36);
    v9 = v7;
    v8 = *(_WORD *)(v6 + 56);
    v14[2] = *(_DWORD *)(v6 + 40);
    v14[3] = *(_DWORD *)(v6 + 44);
    ScaleDPIRect(v14, v14, v8, v9, v10, v11, v12, v13);
    MonitorWorkRectForDpi = v14;
  }
  else
  {
    MonitorWorkRectForDpi = (int *)GetMonitorWorkRectForDpi(v14);
  }
  result = a3;
  *a3 = *MonitorWorkRectForDpi;
  v5 = MonitorWorkRectForDpi + 1;
  a3[1] = *v5++;
  a3[2] = *v5;
  a3[3] = v5[1];
  return result;
}
