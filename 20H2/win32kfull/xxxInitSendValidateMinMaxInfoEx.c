/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C003D294
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxAdjustSize @ 0x1C009086C (xxxAdjustSize.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C011413C (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020E67C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00332F0 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C003C56C (_GetClientRect.c)
 *     GetMaxTrackSizeForWindow @ 0x1C003DA48 (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004C5DC (GetWindowBordersWithDpiAwareness.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C005C5D8 (_HasCaptionIcon.c)
 *     GetMonitorMaxArea @ 0x1C00C6E4C (GetMonitorMaxArea.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r12
  __int128 v10; // xmm6
  __int64 DesktopWindow; // rax
  __int64 v12; // r8
  int v13; // r14d
  struct tagMONITOR *v14; // r13
  int WindowBordersWithDpiAwareness; // esi
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  __int64 Lock_low; // rdx
  __int64 Prop; // rax
  __int64 v22; // rax
  int v23; // esi
  __int64 v24; // rcx
  int v25; // edx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // eax
  int DpiDependentMetric; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  int v38; // r14d
  int v39; // eax
  __int64 result; // rax
  int v41; // r15d
  signed int v42; // r12d
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // ecx
  unsigned int v46; // eax
  int v47; // r14d
  __int64 v48; // rcx
  int v49; // ecx
  unsigned int v50; // eax
  int v51; // eax
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  int v56; // edx
  unsigned int v57; // eax
  int v58; // eax
  __int64 v59; // rdx
  int v60; // ecx
  unsigned int v61; // eax
  int v62; // r8d
  int v63; // ecx
  __int64 v64; // rax
  __int64 v65; // rax
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  int v69; // edx
  unsigned int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rax
  int v73; // edx
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  __int128 v77; // [rsp+38h] [rbp-39h] BYREF
  __int128 v78; // [rsp+48h] [rbp-29h] BYREF
  _QWORD v79[3]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v80[5]; // [rsp+70h] [rbp-1h] BYREF
  int v81; // [rsp+D8h] [rbp+67h]
  int v82; // [rsp+E0h] [rbp+6Fh]

  v79[2] = 0LL;
  v80[2] = 0LL;
  v77 = 0LL;
  v7 = *(unsigned int *)(gpsi + 2124LL);
  *(_DWORD *)a2 = v7;
  v8 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v8;
  v9 = *(_QWORD *)(GetDispInfo(v8, a2, a3, v7) + 96);
  v10 = *(_OWORD *)GetMonitorRectForWindow(&v78, v9, a1);
  v78 = v10;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v12 == DesktopWindow )
  {
    v13 = 1;
    v77 = v10;
    v14 = _MonitorFromWindowInternal(a1, 1u, 1);
    if ( a3 )
      v14 = a3;
  }
  else
  {
    v13 = 0;
    v14 = 0LL;
    GetClientRect(v12, (__int64)&v77);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
  v81 = v77 - WindowBordersWithDpiAwareness;
  v16 = WindowBordersWithDpiAwareness - (v77 - WindowBordersWithDpiAwareness);
  LODWORD(v77) = v77 - WindowBordersWithDpiAwareness;
  v17 = v16 + DWORD2(v77);
  v82 = DWORD1(v77) - WindowBordersWithDpiAwareness;
  v18 = WindowBordersWithDpiAwareness - (DWORD1(v77) - WindowBordersWithDpiAwareness);
  DWORD1(v77) -= WindowBordersWithDpiAwareness;
  v19 = v18 + HIDWORD(v77);
  *(_DWORD *)(a2 + 8) = v17;
  Lock_low = LOWORD(WPP_MAIN_CB.DeviceQueue.Lock);
  *(_DWORD *)(a2 + 12) = v19;
  Prop = GetProp(a1, Lock_low, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v22 = *(_QWORD *)(Prop + 40);
  else
    v22 = v77;
  *(_QWORD *)(a2 + 16) = v22;
  v23 = 2 * WindowBordersWithDpiAwareness;
  v24 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v24 + 30) & 0xC0) != 0 && *(char *)(v24 + 24) >= 0 )
  {
    v25 = *(_DWORD *)(v24 + 288) & 0xF;
    if ( v25 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( !v25
           && (v64 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v64 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v27 = *((_QWORD *)a1 + 5);
    v28 = *(_DWORD *)(v27 + 288) & 0xF;
    if ( v28 == 3 )
    {
      v29 = (*(_DWORD *)(v27 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v27 + 232) & 0x8000000) != 0 )
    {
      v29 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v28
           && (v65 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v65 + 8) + 64LL) & 1) != 0 )
    {
      v29 = 96;
    }
    else
    {
      v29 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v29);
  }
  else
  {
    v66 = v23;
    if ( v23 < 2 )
      v66 = 2;
    *(_DWORD *)(a2 + 24) = v66;
    DpiDependentMetric = v23;
    if ( v23 < 2 )
      DpiDependentMetric = 2;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(_QWORD *)(a2 + 32) = GetMaxTrackSizeForWindow(a1);
  v79[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v79;
  v79[1] = v14;
  if ( v14 )
    HMLockObject(v14);
  v80[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v80;
  v80[1] = v9;
  HMLockObject(v9);
  if ( !a4 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  v32 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v33 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v33;
  if ( v13 )
  {
    v77 = *(_OWORD *)GetMonitorMaxArea(&v77, a1, v14);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v78) - (int)v78
      || (v41 = HIDWORD(v78), v42 = DWORD1(v78), *(_DWORD *)(a2 + 12) < HIDWORD(v78) - DWORD1(v78)) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v32 = v77;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v43 = GetProp(a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
      if ( v43 )
      {
        v62 = *(_DWORD *)(v43 + 48);
        if ( (v62 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v63 = *(_DWORD *)(a2 + 16);
          if ( v63 != v81 && *(_DWORD *)(v43 + 40) == v63 )
          {
            *(_DWORD *)(v43 + 48) = v62 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 20) = v82;
            *(_DWORD *)(a2 + 16) = v81;
          }
        }
      }
      v44 = *((_QWORD *)a1 + 5);
      v45 = *(_DWORD *)(v44 + 288) & 0xF;
      if ( v45 == 3 )
      {
        v46 = (*(_DWORD *)(v44 + 288) >> 8) & 0x1FF;
      }
      else if ( (*(_DWORD *)(v44 + 232) & 0x8000000) != 0 )
      {
        v46 = GetWindowDpiLastNotify(a1);
      }
      else if ( !v45
             && (v67 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v67 + 8) + 64LL) & 1) != 0 )
      {
        v46 = 96;
      }
      else
      {
        v46 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      v47 = *(_DWORD *)(a2 + 20);
      if ( (int)(v47 + GetDpiDependentMetric(2LL, v46)) <= v42 && v47 + *(_DWORD *)(a2 + 12) >= v41 )
        v77 = *(_OWORD *)GetMonitorRectForWindow(&v77, v14, a1);
      v32 = v77;
      v48 = HIDWORD(*((_QWORD *)&v77 + 1));
      *(_DWORD *)(a2 + 8) += v78 + DWORD2(v77) - v77 - DWORD2(v78);
      v33 = (unsigned int)(v42 + v48 - HIDWORD(v32) - v41);
      *(_DWORD *)(a2 + 12) += v33;
    }
    *(_DWORD *)(a2 + 16) += v32;
    *(_DWORD *)(a2 + 20) += DWORD1(v77);
  }
  ThreadUnlock1(v33, v32, v31);
  ThreadUnlock1(v35, v34, v36);
  v37 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v37 + 16) & 8) != 0 )
  {
    v49 = *(_DWORD *)(v37 + 288) & 0xF;
    if ( v49 == 3 )
    {
      v50 = (*(_DWORD *)(v37 + 288) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v37 + 232) & 0x8000000) != 0 )
    {
      v50 = GetWindowDpiLastNotify(a1);
    }
    else if ( !v49
           && (v68 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v68 + 8) + 64LL) & 1) != 0 )
    {
      v50 = 96;
    }
    else
    {
      v50 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v51 = GetDpiDependentMetric(17LL, v50);
    v53 = *((_QWORD *)a1 + 5);
    v38 = v51;
    LOBYTE(v54) = *(_BYTE *)(v53 + 30);
    LOBYTE(v55) = v54 & 8;
    if ( *(char *)(v53 + 24) < 0 )
    {
      if ( (_BYTE)v55 )
      {
        v73 = *(_DWORD *)(v53 + 288) & 0xF;
        if ( v73 == 3 )
        {
          v74 = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v53 + 232) & 0x8000000) != 0 )
        {
          v74 = GetWindowDpiLastNotify(a1);
        }
        else if ( !v73
               && (v75 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v75 + 8) + 64LL) & 1) != 0 )
        {
          v74 = 96;
        }
        else
        {
          v74 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        v23 += GetDpiDependentMetric(23LL, v74);
      }
    }
    else
    {
      if ( (_BYTE)v55 )
      {
        if ( (v54 & 3) != 0 )
        {
          v56 = *(_DWORD *)(v53 + 288) & 0xF;
          if ( v56 == 3 )
          {
            v57 = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v53 + 232) & 0x8000000) != 0 )
          {
            v57 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v56
                 && (v71 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v71 + 8) + 64LL) & 1) != 0 )
          {
            v57 = 96;
          }
          else
          {
            v57 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v58 = GetDpiDependentMetric(12LL, v57);
          v23 += v58 + 2 * v58;
        }
        else if ( (*(_BYTE *)(v53 + 25) & 4) != 0 )
        {
          v69 = *(_DWORD *)(v53 + 288) & 0xF;
          if ( v69 == 3 )
          {
            v70 = (*(_DWORD *)(v53 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v53 + 232) & 0x8000000) != 0 )
          {
            v70 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v69
                 && (v76 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v76 + 8) + 64LL) & 1) != 0 )
          {
            v70 = 96;
          }
          else
          {
            v70 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v23 += 2 * GetDpiDependentMetric(12LL, v70);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v59 = *((_QWORD *)a1 + 5);
          v60 = *(_DWORD *)(v59 + 288) & 0xF;
          if ( v60 == 3 )
          {
            v61 = (*(_DWORD *)(v59 + 288) >> 8) & 0x1FF;
          }
          else if ( (*(_DWORD *)(v59 + 232) & 0x8000000) != 0 )
          {
            v61 = GetWindowDpiLastNotify(a1);
          }
          else if ( !v60
                 && (v72 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v72 + 8) + 64LL) & 1) != 0 )
          {
            v61 = 96;
          }
          else
          {
            v61 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v23 += GetDpiDependentMetric(13LL, v61);
        }
      }
      v23 += 4 * *(_DWORD *)(GetDPIServerInfo(v53, v55, v54, v52) + 16);
    }
    v23 += 4;
  }
  else
  {
    v38 = v23;
  }
  v39 = *(_DWORD *)(a2 + 24);
  if ( v39 <= v23 )
    v39 = v23;
  *(_DWORD *)(a2 + 24) = v39;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v38 )
    result = (unsigned int)v38;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
