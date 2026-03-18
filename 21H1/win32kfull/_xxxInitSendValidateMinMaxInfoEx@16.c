/*
 * XREFs of _xxxInitSendValidateMinMaxInfoEx@16 @ 0x6DD46
 * Callers:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YGXPAUtagWND@@@Z @ 0x12F80 (-xxxEndGetWidnowTrackInfoAsync@@YGXPAUtagWND@@@Z.c)
 *     _xxxAdjustSize@12 @ 0x2D59A (_xxxAdjustSize@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     ?xxxGetMinMaxTrackInfo@@YGXPAU_MOVESIZEDATA@@H@Z @ 0x1743B3 (-xxxGetMinMaxTrackInfo@@YGXPAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetWindowBordersWithDpiAwareness@12 @ 0x314A8 (_GetWindowBordersWithDpiAwareness@12.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     _GetMaxTrackSizeForWindow@4 @ 0x706DC (_GetMaxTrackSizeForWindow@4.c)
 *     _GetMonitorMaxArea@8 @ 0x7307A (_GetMonitorMaxArea@8.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     __GetClientRect@8 @ 0xB2C9E (__GetClientRect@8.c)
 */

int __fastcall xxxInitSendValidateMinMaxInfoEx(_DWORD *a1, int a2, struct tagMONITOR *a3, int a4)
{
  int *MonitorRectForWindow; // eax
  int v6; // esi
  int v7; // ecx
  int WindowBordersWithDpiAwareness; // esi
  _DWORD *v9; // edi
  int v10; // ecx
  int Prop; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int WindowDpiLastNotify; // eax
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int DpiDependentMetric; // eax
  __int64 MaxTrackSizeForWindow; // rax
  int v24; // ecx
  int *MonitorMaxArea; // eax
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // esi
  int v34; // eax
  int *v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // edx
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // esi
  char v45; // dl
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // ebx
  int v50; // ebx
  int v51; // edx
  int v52; // eax
  int v53; // eax
  int v54; // edx
  int v55; // eax
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  int v59; // eax
  int v60; // eax
  int v61; // ebx
  int ProcessDpiServerInfo; // eax
  int v63; // eax
  int result; // eax
  unsigned int v65; // [esp+0h] [ebp-78h]
  int v66; // [esp+4h] [ebp-74h]
  int v67; // [esp+Ch] [ebp-6Ch]
  struct tagMONITOR *v68; // [esp+10h] [ebp-68h]
  int v70; // [esp+1Ch] [ebp-5Ch]
  int v71; // [esp+20h] [ebp-58h]
  int v72; // [esp+24h] [ebp-54h]
  int v73; // [esp+28h] [ebp-50h]
  int v74; // [esp+2Ch] [ebp-4Ch]
  _DWORD v75[3]; // [esp+30h] [ebp-48h] BYREF
  _DWORD v76[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  int v77; // [esp+48h] [ebp-30h]
  int v78; // [esp+4Ch] [ebp-2Ch]
  int v79; // [esp+50h] [ebp-28h]
  int v80; // [esp+54h] [ebp-24h]
  int v81; // [esp+58h] [ebp-20h] BYREF
  int v82; // [esp+5Ch] [ebp-1Ch]
  int v83; // [esp+60h] [ebp-18h]
  int v84; // [esp+64h] [ebp-14h]
  _DWORD v85[4]; // [esp+68h] [ebp-10h] BYREF

  v75[2] = 0;
  v76[2] = 0;
  v81 = 0;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  *(_DWORD *)a2 = *(_DWORD *)(_gpsi + 1724);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(_gpsi + 1728);
  v73 = *(_DWORD *)(GetDispInfo() + 52);
  MonitorRectForWindow = GetMonitorRectForWindow(v85);
  v77 = *MonitorRectForWindow;
  v78 = MonitorRectForWindow[1];
  v79 = MonitorRectForWindow[2];
  v80 = MonitorRectForWindow[3];
  v6 = a1[14];
  if ( v6 == _GetDesktopWindow(a1) )
  {
    v70 = 1;
    v68 = _MonitorFromWindowInternal(1, (int)a1, (struct tagWND *)1, v65, v66);
    if ( a3 )
      v68 = a3;
    v81 = v77;
    v82 = v78;
    v83 = v79;
    v84 = v80;
  }
  else
  {
    v70 = 0;
    v68 = 0;
    _GetClientRect(v6, &v81);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v7);
  v71 = v81 - WindowBordersWithDpiAwareness;
  v72 = v82 - WindowBordersWithDpiAwareness;
  v9 = (_DWORD *)a2;
  v10 = WindowBordersWithDpiAwareness - (v82 - WindowBordersWithDpiAwareness) + v84;
  *(_DWORD *)(a2 + 8) = WindowBordersWithDpiAwareness - (v81 - WindowBordersWithDpiAwareness) + v83;
  *(_DWORD *)(a2 + 12) = v10;
  Prop = _GetProp(1);
  if ( Prop && (*(_BYTE *)(Prop + 48) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(Prop + 40);
    v12 = *(_DWORD *)(Prop + 44);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v71;
    v12 = v72;
  }
  *(_DWORD *)(a2 + 20) = v12;
  v13 = 2 * WindowBordersWithDpiAwareness;
  v14 = a1[5];
  v67 = 2 * WindowBordersWithDpiAwareness;
  v74 = 2 * WindowBordersWithDpiAwareness;
  if ( (*(_BYTE *)(v14 + 22) & 0xC0) != 0 && *(char *)(v14 + 16) >= 0 )
  {
    v15 = *(_DWORD *)(v14 + 184) & 0xF;
    if ( v15 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v14 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v14 + 144) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( !v15 && (v17 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v17 + 4) + 32) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16, WindowDpiLastNotify);
    v18 = a1[5];
    v19 = *(_DWORD *)(v18 + 184) & 0xF;
    if ( v19 == 3 )
    {
      v20 = (*(_DWORD *)(v18 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v18 + 144) & 0x8000000) != 0 )
    {
      v20 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v19 && (v21 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v21 + 4) + 32) & 1) != 0 )
    {
      v20 = 96;
    }
    else
    {
      v20 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    DpiDependentMetric = GetDpiDependentMetric(17, v20);
  }
  else
  {
    if ( v13 < 2 )
      v13 = 2;
    *(_DWORD *)(a2 + 24) = v13;
    DpiDependentMetric = 2;
    if ( 2 * WindowBordersWithDpiAwareness >= 2 )
      DpiDependentMetric = 2 * WindowBordersWithDpiAwareness;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  MaxTrackSizeForWindow = GetMaxTrackSizeForWindow(a1);
  v24 = _gptiCurrent;
  *(_QWORD *)(a2 + 32) = MaxTrackSizeForWindow;
  v75[0] = *(_DWORD *)(_gptiCurrent + 228);
  *(_DWORD *)(_gptiCurrent + 228) = v75;
  v75[1] = v68;
  if ( v68 )
  {
    HMLockObject(v68);
    v24 = _gptiCurrent;
  }
  v76[0] = *(_DWORD *)(v24 + 228);
  *(_DWORD *)(v24 + 228) = v76;
  v76[1] = v73;
  HMLockObject(v73);
  if ( !a4 )
    xxxSendMessage(a1, 0, a2);
  *(_DWORD *)a2 = *(_DWORD *)(_gpsi + 1724);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(_gpsi + 1728);
  if ( v70 )
  {
    MonitorMaxArea = (int *)GetMonitorMaxArea(v85);
    v81 = *MonitorMaxArea;
    v82 = MonitorMaxArea[1];
    v83 = MonitorMaxArea[2];
    v84 = MonitorMaxArea[3];
    v9 = (_DWORD *)a2;
    if ( *(_DWORD *)(a2 + 8) < v79 - v77 || *(_DWORD *)(a2 + 12) < v80 - v78 )
    {
      SetOrClrWF(0, (int)a1, 0x340u, 1);
      v37 = v82;
      v36 = v81;
    }
    else
    {
      SetOrClrWF(1, (int)a1, 0x340u, 1);
      v26 = _GetProp(1);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 48);
        if ( (v27 & 0x40) != 0 && (*(_BYTE *)(a1[5] + 22) & 4) != 0 )
        {
          v28 = *(_DWORD *)(a2 + 16);
          if ( v28 != v71 && *(_DWORD *)(v26 + 40) == v28 )
          {
            *(_DWORD *)(v26 + 48) = v27 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 16) = v71;
            *(_DWORD *)(a2 + 20) = v72;
          }
        }
      }
      v29 = a1[5];
      v30 = *(_DWORD *)(v29 + 184) & 0xF;
      if ( v30 == 3 )
      {
        v31 = (*(_DWORD *)(v29 + 184) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v29 + 144) & 0x8000000) != 0 )
      {
        v31 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v30 && (v32 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v32 + 4) + 32) & 1) != 0 )
      {
        v31 = 96;
      }
      else
      {
        v31 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
      }
      v33 = *(_DWORD *)(a2 + 20);
      v34 = GetDpiDependentMetric(2, v31);
      if ( v33 + v34 <= v78 && v33 + *(_DWORD *)(a2 + 12) >= v80 )
      {
        v35 = GetMonitorRectForWindow(v85);
        v81 = *v35;
        v82 = v35[1];
        v83 = v35[2];
        v84 = v35[3];
        v9 = (_DWORD *)a2;
      }
      v36 = v81;
      v9[2] += v77 + v83 - v81 - v79;
      v37 = v82;
      v9[3] += v78 + v84 - v82 - v80;
    }
    v9[4] += v36;
    v9[5] += v37;
  }
  ThreadUnlock1();
  ThreadUnlock1();
  v38 = a1[5];
  if ( (*(_BYTE *)(v38 + 8) & 8) != 0 )
  {
    v39 = *(_DWORD *)(v38 + 184) & 0xF;
    if ( v39 == 3 )
    {
      v40 = (*(_DWORD *)(v38 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v38 + 144) & 0x8000000) != 0 )
    {
      v40 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v39 && (v41 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v41 + 4) + 32) & 1) != 0 )
    {
      v40 = 96;
    }
    else
    {
      v40 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    v42 = GetDpiDependentMetric(17, v40);
    v43 = a1[5];
    v44 = v42;
    v45 = *(_BYTE *)(v43 + 22) & 8;
    if ( *(char *)(v43 + 16) >= 0 )
    {
      if ( !v45 )
        goto LABEL_121;
      if ( (*(_BYTE *)(v43 + 22) & 3) != 0 )
      {
        v51 = *(_DWORD *)(v43 + 184) & 0xF;
        if ( v51 == 3 )
        {
          v52 = (*(_DWORD *)(v43 + 184) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v43 + 144) & 0x8000000) != 0 )
        {
          v52 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v51 && (v53 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v53 + 4) + 32) & 1) != 0 )
        {
          v52 = 96;
        }
        else
        {
          v52 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
        }
        v67 += 3 * GetDpiDependentMetric(12, v52);
      }
      else if ( (*(_BYTE *)(v43 + 17) & 4) != 0 )
      {
        v54 = *(_DWORD *)(v43 + 184) & 0xF;
        if ( v54 == 3 )
        {
          v55 = (*(_DWORD *)(v43 + 184) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v43 + 144) & 0x8000000) != 0 )
        {
          v55 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v54 && (v56 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v56 + 4) + 32) & 1) != 0 )
        {
          v55 = 96;
        }
        else
        {
          v55 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
        }
        v67 += 2 * GetDpiDependentMetric(12, v55);
      }
      if ( _HasCaptionIcon(a1) )
      {
        v57 = a1[5];
        v58 = *(_DWORD *)(v57 + 184) & 0xF;
        if ( v58 == 3 )
        {
          v59 = (*(_DWORD *)(v57 + 184) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v57 + 144) & 0x8000000) != 0 )
        {
          v59 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v58 && (v60 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v60 + 4) + 32) & 1) != 0 )
        {
          v59 = 96;
        }
        else
        {
          v59 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
        }
        v61 = GetDpiDependentMetric(13, v59) + v67;
      }
      else
      {
LABEL_121:
        v61 = v67;
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        ProcessDpiServerInfo = GetProcessDpiServerInfo();
      else
        ProcessDpiServerInfo = Get96DpiServerInfo();
      v49 = v61 + 4 * *(_DWORD *)(ProcessDpiServerInfo + 12);
    }
    else if ( v45 )
    {
      v46 = *(_DWORD *)(v43 + 184) & 0xF;
      if ( v46 == 3 )
      {
        v47 = (*(_DWORD *)(v43 + 184) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v43 + 144) & 0x8000000) != 0 )
      {
        v47 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v46 && (v48 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v48 + 4) + 32) & 1) != 0 )
      {
        v47 = 96;
      }
      else
      {
        v47 = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
      }
      v49 = GetDpiDependentMetric(23, v47) + v67;
    }
    else
    {
      v49 = v67;
    }
    v50 = v49 + 4;
  }
  else
  {
    v50 = v67;
    v44 = v74;
  }
  v63 = v9[6];
  if ( v63 <= v50 )
    v63 = v50;
  v9[6] = v63;
  result = v9[7];
  if ( result <= v44 )
    result = v44;
  v9[7] = result;
  return result;
}
