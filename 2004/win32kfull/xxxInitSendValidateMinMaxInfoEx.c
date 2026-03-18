/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C00216DC
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxAdjustSize @ 0x1C00ADCE8 (xxxAdjustSize.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0113370 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020F4FC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     GetMaxTrackSizeForWindow @ 0x1C002307C (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0023434 (GetMonitorRectForWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0024A64 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     _GetClientRect @ 0x1C0025248 (_GetClientRect.c)
 *     GetDPIServerInfo @ 0x1C0060838 (GetDPIServerInfo.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00AD8A0 (GetWindowBordersWithDpiAwareness.c)
 *     GetMonitorMaxArea @ 0x1C00E7954 (GetMonitorMaxArea.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  __int64 v7; // r12
  __int128 v8; // xmm6
  __int64 DesktopWindow; // rax
  __int64 v10; // r8
  int v11; // r14d
  struct tagMONITOR *v12; // r13
  int WindowBordersWithDpiAwareness; // esi
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rdx
  __int64 Prop; // rax
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // eax
  int DpiDependentMetric; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // r14d
  int v34; // eax
  __int64 result; // rax
  int v36; // r15d
  signed int v37; // r12d
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // r14d
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // ecx
  unsigned int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // r8
  char v51; // dl
  __int64 v52; // rdx
  unsigned int v53; // eax
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rdx
  int v57; // ecx
  unsigned int v58; // eax
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // eax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rdx
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  __int128 v73; // [rsp+38h] [rbp-39h] BYREF
  __int128 v74; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v75[3]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v76[5]; // [rsp+70h] [rbp-1h] BYREF
  int v77; // [rsp+D8h] [rbp+67h]
  int v78; // [rsp+E0h] [rbp+6Fh]

  v75[2] = 0LL;
  v76[2] = 0LL;
  v73 = 0LL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  v7 = *(_QWORD *)(GetDispInfo() + 96);
  v8 = *(_OWORD *)GetMonitorRectForWindow(&v74, v7, a1);
  v74 = v8;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v10 == DesktopWindow )
  {
    v11 = 1;
    v73 = v8;
    v12 = _MonitorFromWindowInternal(a1, 1u, 1);
    if ( a3 )
      v12 = a3;
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
    GetClientRect(v10, &v73);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
  v77 = v73 - WindowBordersWithDpiAwareness;
  v14 = WindowBordersWithDpiAwareness - (v73 - WindowBordersWithDpiAwareness);
  LODWORD(v73) = v73 - WindowBordersWithDpiAwareness;
  v15 = v14 + DWORD2(v73);
  v78 = DWORD1(v73) - WindowBordersWithDpiAwareness;
  v16 = WindowBordersWithDpiAwareness - (DWORD1(v73) - WindowBordersWithDpiAwareness);
  DWORD1(v73) -= WindowBordersWithDpiAwareness;
  v17 = v16 + HIDWORD(v73);
  *(_DWORD *)(a2 + 8) = v15;
  v18 = WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
  *(_DWORD *)(a2 + 12) = v17;
  Prop = GetProp(a1, v18, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v20 = *(_QWORD *)(Prop + 40);
  else
    v20 = v73;
  *(_QWORD *)(a2 + 16) = v20;
  v21 = 2 * WindowBordersWithDpiAwareness;
  v22 = *((_QWORD *)a1 + 5);
  v23 = 2LL;
  if ( (*(_BYTE *)(v22 + 30) & 0xC0) != 0 && *(char *)(v22 + 24) >= 0 )
  {
    v24 = *(_DWORD *)(v22 + 288) & 0xF;
    if ( (_DWORD)v24 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v22 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v22 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1, v24, 2LL);
    }
    else if ( !(_DWORD)v24
           && (v60 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify, v23);
    v27 = *((_QWORD *)a1 + 5);
    v28 = *(_DWORD *)(v27 + 288) & 0xF;
    if ( v28 == 3 )
    {
      v29 = (*(_DWORD *)(v27 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v27 + 232) & 0x8000000) != 0 )
    {
      v29 = GetWindowDpiLastNotify(a1, v27, v26);
    }
    else if ( !v28
           && (v61 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v61 + 8) + 64LL) & 1) != 0 )
    {
      v29 = 96;
    }
    else
    {
      v29 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v29, v26);
  }
  else
  {
    v62 = v21;
    if ( v21 < 2 )
      v62 = 2;
    *(_DWORD *)(a2 + 24) = v62;
    DpiDependentMetric = v21;
    if ( v21 < 2 )
      DpiDependentMetric = 2;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(_QWORD *)(a2 + 32) = GetMaxTrackSizeForWindow(a1);
  v75[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v75;
  v75[1] = v12;
  if ( v12 )
    HMLockObject(v12);
  v76[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v76;
  v76[1] = v7;
  HMLockObject(v7);
  if ( !a4 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  if ( v11 )
  {
    v73 = *(_OWORD *)GetMonitorMaxArea(&v73, a1, v12);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v74) - (int)v74
      || (v36 = HIDWORD(v74), v37 = DWORD1(v74), *(_DWORD *)(a2 + 12) < HIDWORD(v74) - DWORD1(v74)) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      LODWORD(v44) = v73;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v38 = GetProp(a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
      if ( v38 )
      {
        v39 = *(unsigned int *)(v38 + 48);
        if ( (v39 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v59 = *(_DWORD *)(a2 + 16);
          if ( v59 != v77 && *(_DWORD *)(v38 + 40) == v59 )
          {
            v39 = (unsigned int)v39 & 0xFFFFFFBF;
            *(_DWORD *)(v38 + 48) = v39;
            *(_DWORD *)(a2 + 20) = v78;
            *(_DWORD *)(a2 + 16) = v77;
          }
        }
      }
      v40 = *((_QWORD *)a1 + 5);
      v41 = *(_DWORD *)(v40 + 288) & 0xF;
      if ( v41 == 3 )
      {
        v42 = (*(_DWORD *)(v40 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v40 + 232) & 0x8000000) != 0 )
      {
        v42 = GetWindowDpiLastNotify(a1, v40, v39);
      }
      else if ( !v41
             && (v63 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v63 + 8) + 64LL) & 1) != 0 )
      {
        v42 = 96;
      }
      else
      {
        v42 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      v43 = *(_DWORD *)(a2 + 20);
      if ( (int)(v43 + GetDpiDependentMetric(2LL, v42, v39)) <= v37 && v43 + *(_DWORD *)(a2 + 12) >= v36 )
        v73 = *(_OWORD *)GetMonitorRectForWindow(&v73, v12, a1);
      v44 = v73;
      v45 = HIDWORD(*((_QWORD *)&v73 + 1));
      *(_DWORD *)(a2 + 8) += v74 + DWORD2(v73) - v73 - DWORD2(v74);
      *(_DWORD *)(a2 + 12) += v37 + v45 - HIDWORD(v44) - v36;
    }
    *(_DWORD *)(a2 + 16) += v44;
    *(_DWORD *)(a2 + 20) += DWORD1(v73);
  }
  ThreadUnlock1();
  ThreadUnlock1();
  v32 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v32 + 16) & 8) != 0 )
  {
    v46 = *(_DWORD *)(v32 + 288) & 0xF;
    if ( v46 == 3 )
    {
      v47 = (*(_DWORD *)(v32 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v32 + 232) & 0x8000000) != 0 )
    {
      v47 = GetWindowDpiLastNotify(a1, v32, v31);
    }
    else if ( !v46
           && (v64 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v64 + 8) + 64LL) & 1) != 0 )
    {
      v47 = 96;
    }
    else
    {
      v47 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    v48 = GetDpiDependentMetric(17LL, v47, v31);
    v49 = *((_QWORD *)a1 + 5);
    v33 = v48;
    LOBYTE(v50) = *(_BYTE *)(v49 + 30);
    v51 = v50 & 8;
    if ( *(char *)(v49 + 24) < 0 )
    {
      if ( v51 )
      {
        v69 = *(_DWORD *)(v49 + 288) & 0xF;
        if ( (_DWORD)v69 == 3 )
        {
          v70 = (*(_DWORD *)(v49 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
        {
          v70 = GetWindowDpiLastNotify(a1, v69, v50);
        }
        else if ( !(_DWORD)v69
               && (v71 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v71 + 8) + 64LL) & 1) != 0 )
        {
          v70 = 96;
        }
        else
        {
          v70 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
        }
        v21 += GetDpiDependentMetric(23LL, v70, v50);
      }
    }
    else
    {
      if ( v51 )
      {
        if ( (v50 & 3) != 0 )
        {
          v52 = *(_DWORD *)(v49 + 288) & 0xF;
          if ( (_DWORD)v52 == 3 )
          {
            v53 = (*(_DWORD *)(v49 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
          {
            v53 = GetWindowDpiLastNotify(a1, v52, v50);
          }
          else if ( !(_DWORD)v52
                 && (v67 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v67 + 8) + 64LL) & 1) != 0 )
          {
            v53 = 96;
          }
          else
          {
            v53 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v54 = GetDpiDependentMetric(12LL, v53, v50);
          v21 += v54 + 2 * v54;
        }
        else if ( (*(_BYTE *)(v49 + 25) & 4) != 0 )
        {
          v65 = *(_DWORD *)(v49 + 288) & 0xF;
          if ( (_DWORD)v65 == 3 )
          {
            v66 = (*(_DWORD *)(v49 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
          {
            v66 = GetWindowDpiLastNotify(a1, v65, v50);
          }
          else if ( !(_DWORD)v65
                 && (v72 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v72 + 8) + 64LL) & 1) != 0 )
          {
            v66 = 96;
          }
          else
          {
            v66 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v21 += 2 * GetDpiDependentMetric(12LL, v66, v50);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v56 = *((_QWORD *)a1 + 5);
          v57 = *(_DWORD *)(v56 + 288) & 0xF;
          if ( v57 == 3 )
          {
            v58 = (*(_DWORD *)(v56 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v56 + 232) & 0x8000000) != 0 )
          {
            v58 = GetWindowDpiLastNotify(a1, v56, v55);
          }
          else if ( !v57
                 && (v68 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v68 + 8) + 64LL) & 1) != 0 )
          {
            v58 = 96;
          }
          else
          {
            v58 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v21 += GetDpiDependentMetric(13LL, v58, v55);
        }
      }
      v21 += 4 * *(_DWORD *)(GetDPIServerInfo(v49) + 16);
    }
    v21 += 4;
  }
  else
  {
    v33 = v21;
  }
  v34 = *(_DWORD *)(a2 + 24);
  if ( v34 <= v21 )
    v34 = v21;
  *(_DWORD *)(a2 + 24) = v34;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v33 )
    result = (unsigned int)v33;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
