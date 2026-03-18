/*
 * XREFs of _GetScreenRectForDpi@4 @ 0x338F2
 * Callers:
 *     _GetScreenRectForDpiContext@4 @ 0x338A8 (_GetScreenRectForDpiContext@4.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     _xxxSoundSentry@0 @ 0x1782B3 (_xxxSoundSentry@0.c)
 * Callees:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 */

INT *__fastcall GetScreenRectForDpi(__int16 a1, int a2, INT *a3)
{
  __int16 v3; // di
  int DispInfo; // eax
  _DWORD *v5; // edx
  INT *MonitorRectForDpi; // esi
  INT *result; // eax
  INT *v8; // esi
  int v9; // eax
  int v10; // eax
  INT v11; // ebx
  INT *v12; // eax
  int v13; // [esp+10h] [ebp-38h]
  INT v15; // [esp+18h] [ebp-30h] BYREF
  INT v16; // [esp+1Ch] [ebp-2Ch]
  INT v17; // [esp+20h] [ebp-28h]
  INT v18; // [esp+24h] [ebp-24h]
  INT v19; // [esp+28h] [ebp-20h] BYREF
  INT v20; // [esp+2Ch] [ebp-1Ch]
  INT v21; // [esp+30h] [ebp-18h]
  INT v22; // [esp+34h] [ebp-14h]
  INT v23[4]; // [esp+38h] [ebp-10h] BYREF

  v3 = a1;
  DispInfo = GetDispInfo();
  v5 = *(_DWORD **)DispInfo;
  if ( v3 )
  {
    if ( *v5 == 1 )
    {
      v9 = GetDispInfo();
      MonitorRectForDpi = GetMonitorRectForDpi(*(_DWORD *)(v9 + 52), v3, &v19);
    }
    else
    {
      v10 = *(_DWORD *)(DispInfo + 56);
      v11 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v13 = v10;
      if ( v10 )
      {
        do
        {
          if ( (*(_BYTE *)(*(_DWORD *)(v10 + 20) + 12) & 1) != 0 )
          {
            v12 = GetMonitorRectForDpi(v13, v3, v23);
            v19 = *v12;
            v20 = v12[1];
            v21 = v12[2];
            v22 = v12[3];
            if ( v11 >= v19 )
              v11 = v19;
            if ( v16 >= v20 )
              v16 = v20;
            if ( v17 <= v21 )
              v17 = v21;
            v3 = a1;
            if ( v18 <= v22 )
              v18 = v22;
          }
          v10 = *(_DWORD *)(v13 + 28);
          v13 = v10;
        }
        while ( v10 );
        v15 = v11;
      }
      MonitorRectForDpi = &v15;
    }
  }
  else
  {
    MonitorRectForDpi = v5 + 3;
  }
  result = a3;
  *a3 = *MonitorRectForDpi;
  v8 = MonitorRectForDpi + 1;
  a3[1] = *v8++;
  a3[2] = *v8;
  a3[3] = v8[1];
  return result;
}
