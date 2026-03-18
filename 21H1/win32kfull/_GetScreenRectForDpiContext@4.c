/*
 * XREFs of _GetScreenRectForDpiContext@4 @ 0x338A8
 * Callers:
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _GetMaxTrackSizeForWindow@4 @ 0x706DC (_GetMaxTrackSizeForWindow@4.c)
 *     _GetScreenRectForWindow@4 @ 0x1B725D (_GetScreenRectForWindow@4.c)
 * Callees:
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     _GetScreenRectForDpi@4 @ 0x338F2 (_GetScreenRectForDpi@4.c)
 */

INT *__fastcall GetScreenRectForDpiContext(unsigned int a1, int a2, INT *a3)
{
  unsigned int v3; // esi
  INT *ScreenRectForDpi; // eax
  INT *v5; // esi
  INT *result; // eax
  INT *v7; // esi
  int DispInfo; // eax
  int v9; // eax
  int v10; // eax
  INT v11; // ebx
  INT *MonitorRectForDpiContext; // eax
  INT v13[4]; // [esp+10h] [ebp-3Ch] BYREF
  INT v14; // [esp+20h] [ebp-2Ch] BYREF
  INT v15; // [esp+24h] [ebp-28h]
  INT v16; // [esp+28h] [ebp-24h]
  INT v17; // [esp+2Ch] [ebp-20h]
  INT v18; // [esp+30h] [ebp-1Ch] BYREF
  INT v19; // [esp+34h] [ebp-18h]
  INT v20; // [esp+38h] [ebp-14h]
  INT v21; // [esp+3Ch] [ebp-10h]
  unsigned int v22; // [esp+40h] [ebp-Ch]
  int v23; // [esp+44h] [ebp-8h]

  v3 = a1;
  v22 = a1;
  if ( (a1 & 0xF) != 2 || (a1 & 0x20000000) == 0 )
  {
    ScreenRectForDpi = (INT *)GetScreenRectForDpi(v13);
LABEL_4:
    v5 = ScreenRectForDpi;
    goto LABEL_5;
  }
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 )
  {
    v9 = GetDispInfo();
    ScreenRectForDpi = GetMonitorRectForDpiContext(*(_DWORD *)(v9 + 52), v3, &v14);
    goto LABEL_4;
  }
  v10 = *(_DWORD *)(DispInfo + 56);
  v11 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v23 = v10;
  if ( v10 )
  {
    do
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v10 + 20) + 12) & 1) != 0 )
      {
        MonitorRectForDpiContext = GetMonitorRectForDpiContext(v23, v3, v13);
        v14 = *MonitorRectForDpiContext;
        v15 = MonitorRectForDpiContext[1];
        v16 = MonitorRectForDpiContext[2];
        v17 = MonitorRectForDpiContext[3];
        if ( v11 >= v14 )
          v11 = v14;
        if ( v19 >= v15 )
          v19 = v15;
        if ( v20 <= v16 )
          v20 = v16;
        v3 = v22;
        if ( v21 <= v17 )
          v21 = v17;
      }
      v10 = *(_DWORD *)(v23 + 28);
      v23 = v10;
    }
    while ( v10 );
    v18 = v11;
  }
  v5 = &v18;
LABEL_5:
  result = a3;
  *a3 = *v5;
  v7 = v5 + 1;
  a3[1] = *v7++;
  a3[2] = *v7;
  a3[3] = v7[1];
  return result;
}
