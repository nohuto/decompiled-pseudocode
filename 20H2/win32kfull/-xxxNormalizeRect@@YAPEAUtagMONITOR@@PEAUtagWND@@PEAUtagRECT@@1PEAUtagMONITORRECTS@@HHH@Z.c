/*
 * XREFs of ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C001BA50
 * Callers:
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C001B9CC (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     xxxComputeProposedPerMonRect @ 0x1C003A4A0 (xxxComputeProposedPerMonRect.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     IsValidMonitor @ 0x1C001BE98 (IsValidMonitor.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C001BEC8 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     GetMonitorRectForDpi @ 0x1C003BDF0 (GetMonitorRectForDpi.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C003BE70 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     ScaleDPIRect @ 0x1C003DE78 (ScaleDPIRect.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004C5DC (GetWindowBordersWithDpiAwareness.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D5D68 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E5BA8 (xxxAppAdjustDpiCandidateRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023EE78 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 */

struct tagMONITOR *__fastcall xxxNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  struct tagRECT v8; // xmm0
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  __int64 v15; // r9
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // dx
  char v18; // cl
  LONG right; // r12d
  int bottom; // edi
  LONG top; // r8d
  _DWORD *v22; // rdx
  int v23; // ecx
  int v24; // r10d
  int v25; // eax
  int v26; // r11d
  int v27; // ebx
  int v28; // r15d
  _DWORD *v29; // rbx
  LONG v30; // edx
  LONG v31; // r8d
  LONG left; // ecx
  LONG v33; // r9d
  LONG v34; // r9d
  LONG v35; // r8d
  LONG v36; // ecx
  LONG v37; // r10d
  LONG v38; // ecx
  INT v40; // eax
  INT v41; // eax
  int v42; // r11d
  int v43; // ecx
  int v44; // ebx
  __int128 v45; // xmm0
  struct tagRECT *v46; // rax
  bool v47; // zf
  int WindowBordersWithDpiAwareness; // eax
  int v49; // edx
  LONG v50; // r8d
  __int128 v51; // xmm0
  int v52; // eax
  int v53; // eax
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  INT v60; // eax
  INT v61; // eax
  BOOL v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  int v66; // eax
  int v67; // ecx
  unsigned __int16 v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v70; // [rsp+34h] [rbp-CCh]
  int v71; // [rsp+34h] [rbp-CCh]
  __int64 v72; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v73; // [rsp+40h] [rbp-C0h] BYREF
  struct tagMONITOR *NewMonitor; // [rsp+50h] [rbp-B0h] BYREF
  int v75; // [rsp+58h] [rbp-A8h]
  struct tagRECT v76; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT *v77; // [rsp+70h] [rbp-90h]
  int v78; // [rsp+78h] [rbp-88h]
  _QWORD v79[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v80[3]; // [rsp+98h] [rbp-68h] BYREF
  char v81[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v82; // [rsp+C0h] [rbp-40h] BYREF
  char v83[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v84; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v85; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v86[88]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v87[43]; // [rsp+158h] [rbp+58h] BYREF

  v8 = *a3;
  v75 = 0;
  v77 = a3;
  v12 = 48LL * a5;
  v73 = v8;
  v13 = ValidateHmonitor(*(_QWORD *)((char *)a4 + v12 + 48));
  NewMonitor = (struct tagMONITOR *)v13;
  v14 = 96;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v12 + 8));
    v15 = (__int64)NewMonitor;
    if ( !NewMonitor )
    {
      v15 = *(_QWORD *)(GetDispInfo() + 96);
      NewMonitor = (struct tagMONITOR *)v15;
    }
  }
  v16 = *(_WORD *)((char *)a4 + v12 + 40);
  v70 = v16;
  v17 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL);
  v68 = v17;
  v18 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  v78 = 2;
  if ( v18 == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0 && !a6 && v17 != v16 )
    {
      v79[2] = 0LL;
      v80[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v79[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v79;
      v79[1] = a1;
      HMLockObject(a1);
      v55 = NewMonitor;
      v56 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v80[0] = *(_QWORD *)(v56 + 416);
      *(_QWORD *)(v56 + 416) = v80;
      v80[1] = v55;
      HMLockObject(v55);
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect(a1, v68, &v73, &v73) )
      {
        bottom = v73.bottom;
        right = v73.right;
      }
      else
      {
        v60 = EngMulDiv(a3->right - a3->left, v68, v70);
        right = v73.left + v60;
        v61 = EngMulDiv(v77->bottom - v77->top, v68, v70);
        bottom = v73.top + v61;
      }
      v62 = ThreadUnlock1(v58, v57, v59) == 0;
      if ( v62 | (ThreadUnlock1(v64, v63, v65) == 0) )
        return 0LL;
      v15 = (__int64)NewMonitor;
      goto LABEL_6;
    }
  }
  else
  {
    memset(v86, 0, sizeof(v86));
    memset(v87, 0, 0x150uLL);
    v87[5] = v86;
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v86, (struct tagMONITORRECTS *)((char *)a4 + v12 + 8));
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 0 )
      v14 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    v76 = *(struct tagRECT *)GetMonitorRectForDpi(v81, v87, v14);
    ScaleDPIRect(
      (unsigned int)&v73,
      (unsigned int)&v73,
      v70,
      v14,
      *(_QWORD *)((char *)a4 + v12 + 8),
      *(__int64 *)&v76.left);
    v75 = 1;
    if ( !a6 )
    {
      v40 = EngMulDiv(a3->right - a3->left, v68, v14);
      right = v73.left + v40;
      v41 = EngMulDiv(v77->bottom - v77->top, v68, v14);
      top = v73.top;
      v15 = (__int64)NewMonitor;
      bottom = v73.top + v41;
      goto LABEL_7;
    }
    v15 = (__int64)NewMonitor;
  }
  right = v73.right;
  bottom = v73.bottom;
LABEL_6:
  top = v73.top;
LABEL_7:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v51 = *GetMonitorWorkRectForWindow(&v82, v15, a1);
      v46 = (struct tagRECT *)&v84;
      v84 = v51;
    }
    else
    {
      v45 = *(_OWORD *)GetMonitorRectForWindow(v83, v15, a1);
      v46 = (struct tagRECT *)&v85;
      v85 = v45;
    }
    v47 = *((_DWORD *)a1 + 77) == 0;
    v76 = *v46;
    if ( v47 )
    {
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
      v49 = v76.left - WindowBordersWithDpiAwareness;
      v50 = v76.top - WindowBordersWithDpiAwareness;
      a2->left = v76.left - WindowBordersWithDpiAwareness;
      a2->top = v50;
      a2->right = v76.right + v49 + 2 * WindowBordersWithDpiAwareness - v76.left;
      a2->bottom = v50 + 2 * WindowBordersWithDpiAwareness + v76.bottom - v76.top;
    }
    else
    {
      ExtendRectByWindowMargin(a1, &v76, &v76);
      *a2 = v76;
    }
  }
  else
  {
    v22 = *(_DWORD **)(v15 + 40);
    v69 = *(_DWORD *)((char *)a4 + v12 + 12);
    v71 = *(_DWORD *)((char *)a4 + v12 + 8);
    v23 = v22[7];
    v24 = v23 - v71;
    v25 = v22[8];
    v26 = v25 - v69;
    LODWORD(v77) = *(_DWORD *)((char *)a4 + v12 + 16) - v71;
    v27 = *(_DWORD *)((char *)a4 + v12 + 20) - v69;
    LODWORD(v72) = v22[9] - v23;
    v28 = v22[10] - v25;
    if ( (_DWORD)v72 != (_DWORD)v77 || v28 != v27 )
    {
      v24 += (((int)v72 - (int)v77) * (v73.left - v71) + (int)v77 / v78) / (int)v77;
      v26 += ((v28 - v27) * (top - v69) + v27 / 2) / v27;
    }
    v72 = 0LL;
    a2->left = v24 + v73.left;
    a2->right = right + v24;
    a2->top = top + v26;
    a2->bottom = bottom + v26;
    v29 = *(_DWORD **)(v15 + 40);
    GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v72);
    v30 = a2->right;
    v31 = v29[13];
    left = a2->left;
    if ( v30 > v31 )
    {
      left += v31 + SWORD1(v72) - v30;
      v30 = v31 + SWORD1(v72);
      a2->left = left;
      a2->right = v30;
    }
    v33 = v29[11];
    if ( left < v33 )
    {
      v34 = v33 - (__int16)v72;
      v30 = v34 + v30 - left;
      a2->left = v34;
      a2->right = v30;
    }
    else
    {
      v34 = left;
    }
    v35 = a2->bottom;
    v36 = v29[14];
    if ( v35 > v36 )
    {
      v52 = SHIWORD(v72) - v35;
      a2->right = v30;
      v53 = v36 + v52;
      v35 += v53;
      a2->top += v53;
      a2->bottom = v35;
    }
    v37 = a2->top;
    v38 = v29[12];
    if ( v37 < v38 )
    {
      v66 = SWORD2(v72);
      a2->right = v30;
      v67 = v38 - v66 - v37;
      v35 += v67;
      v37 += v67;
      a2->bottom = v35;
      a2->top = v37;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
    {
      v42 = v29[13];
      v43 = 0;
      if ( v30 - SWORD1(v72) > v42 )
      {
        v30 = SWORD1(v72) + v42;
        v43 = 1;
        a2->right = v30;
      }
      v44 = v29[14];
      if ( v35 - SHIWORD(v72) > v44 )
      {
        v35 = SHIWORD(v72) + v44;
        ++v43;
        a2->bottom = v35;
      }
      if ( v43 == 2 )
      {
        a2->left = v34 + 1;
        a2->right = v30 - 1;
        a2->top = v37 + 1;
        a2->bottom = v35 - 1;
      }
    }
    if ( v75 )
      PhysicalToLogicalDPIRect(a2, a2, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &NewMonitor);
  }
  return NewMonitor;
}
