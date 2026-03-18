/*
 * XREFs of ?CalcVirtualScreenClipRegion@@YGXPAUHRGN__@@PAUtagWND@@@Z @ 0x1962EE
 * Callers:
 *     __ExcludeUpdateRgn@8 @ 0x1964AE (__ExcludeUpdateRgn@8.c)
 * Callees:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _GetScreenRectForWindow@4 @ 0x1B725D (_GetScreenRectForWindow@4.c)
 */

void __fastcall CalcVirtualScreenClipRegion(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int DispInfo; // eax
  INT *MonitorRectForDpi; // eax
  int EmptyRgn; // edi
  int i; // ecx
  INT *v9; // eax
  INT v10[4]; // [esp+10h] [ebp-30h] BYREF
  int v11; // [esp+20h] [ebp-20h]
  int v12; // [esp+24h] [ebp-1Ch]
  int v13; // [esp+28h] [ebp-18h]
  INT v14; // [esp+2Ch] [ebp-14h] BYREF
  INT v15; // [esp+30h] [ebp-10h]
  INT v16; // [esp+34h] [ebp-Ch]
  INT v17; // [esp+38h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 8);
  v13 = a2;
  v3 = *(_DWORD *)(v2 + 248);
  v12 = a1;
  if ( v3
    && (*(_BYTE *)(**(_DWORD **)(v3 + 4) + 32) & 1) != 0
    && (v4 = (*(_DWORD *)(*(_DWORD *)(a2 + 20) + 184) >> 8) & 0x1FF) != 0 )
  {
    SetEmptyRgn(a1);
    if ( *(_DWORD *)*_gpDispInfo == 1 )
    {
      DispInfo = GetDispInfo();
      MonitorRectForDpi = GetMonitorRectForDpi(*(_DWORD *)(DispInfo + 52), v4, v10);
LABEL_6:
      v14 = *MonitorRectForDpi;
      v15 = MonitorRectForDpi[1];
      v16 = MonitorRectForDpi[2];
      v17 = MonitorRectForDpi[3];
      SetRectRgnIndirect(v12, &v14);
      return;
    }
    EmptyRgn = CreateEmptyRgn();
    v11 = EmptyRgn;
    if ( !EmptyRgn )
    {
      MonitorRectForDpi = (INT *)GetScreenRectForWindow(v13, v10);
      goto LABEL_6;
    }
    for ( i = *(_DWORD *)(_gpDispInfo + 56); ; i = *(_DWORD *)(i + 28) )
    {
      v13 = i;
      if ( !i )
        break;
      if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 12) & 1) != 0 )
      {
        v9 = GetMonitorRectForDpi(i, v4, v10);
        v14 = *v9;
        v15 = v9[1];
        v16 = v9[2];
        v17 = v9[3];
        EmptyRgn = v11;
        SetRectRgnIndirect(v11, &v14);
        GreCombineRgn(v12, v12, EmptyRgn, 2);
        i = v13;
      }
    }
    GreDeleteObject(EmptyRgn);
  }
  else
  {
    GreCombineRgn(a1, *(_DWORD *)(_gpDispInfo + 64), 0, 5);
  }
}
