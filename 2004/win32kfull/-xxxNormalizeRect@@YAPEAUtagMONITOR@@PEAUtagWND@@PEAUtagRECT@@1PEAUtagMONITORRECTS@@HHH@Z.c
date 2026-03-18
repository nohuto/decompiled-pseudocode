/*
 * XREFs of ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C002CABC
 * Callers:
 *     xxxComputeProposedPerMonRect @ 0x1C002A9E8 (xxxComputeProposedPerMonRect.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C002CA38 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0023434 (GetMonitorRectForWindow.c)
 *     ScaleDPIRect @ 0x1C0023520 (ScaleDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C0026D24 (GetMonitorRectForDpi.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0026DA4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     IsValidMonitor @ 0x1C002CF04 (IsValidMonitor.c)
 *     ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C002CF34 (-GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005CDF0 (GetMonitorWorkRectForWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00AD8A0 (GetWindowBordersWithDpiAwareness.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D6A28 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E6868 (xxxAppAdjustDpiCandidateRect.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0240118 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 */

struct tagMONITOR *__fastcall xxxNormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        __m128i *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  __m128i v8; // xmm0
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int16 v14; // bx
  __int64 v15; // r9
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // dx
  char v18; // cl
  __int32 v19; // r12d
  __int32 v20; // edi
  __int32 v21; // r8d
  _DWORD *v22; // rdx
  int v23; // ecx
  int v24; // r10d
  int v25; // eax
  int v26; // r11d
  int v27; // ebx
  int v28; // r15d
  _DWORD *v29; // rbx
  LONG right; // edx
  LONG v31; // r8d
  LONG left; // ecx
  LONG v33; // r9d
  LONG v34; // r9d
  LONG bottom; // r8d
  LONG v36; // ecx
  LONG top; // r10d
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
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v57; // rbx
  __int64 v58; // rax
  INT v59; // eax
  INT v60; // eax
  BOOL v61; // ebx
  int v62; // eax
  int v63; // ecx
  unsigned __int16 v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v66; // [rsp+34h] [rbp-CCh]
  int v67; // [rsp+34h] [rbp-CCh]
  __int64 v68; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v69; // [rsp+40h] [rbp-C0h] BYREF
  struct tagMONITOR *NewMonitor; // [rsp+50h] [rbp-B0h] BYREF
  int v71; // [rsp+58h] [rbp-A8h]
  struct tagRECT v72; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT *v73; // [rsp+70h] [rbp-90h]
  int v74; // [rsp+78h] [rbp-88h]
  _QWORD v75[3]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v76[3]; // [rsp+98h] [rbp-68h] BYREF
  __m128i v77; // [rsp+B0h] [rbp-50h] BYREF
  char v78[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v79; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v80; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v81; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v82[88]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v83[43]; // [rsp+158h] [rbp+58h] BYREF

  v8 = *a3;
  v71 = 0;
  v73 = (struct tagRECT *)a3;
  v12 = 48LL * a5;
  v69 = v8;
  v13 = ValidateHmonitor(*(_QWORD *)((char *)a4 + v12 + 48));
  NewMonitor = (struct tagMONITOR *)v13;
  v14 = 96;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v12 + 8));
    v15 = (__int64)NewMonitor;
    if ( !NewMonitor )
    {
      v15 = *(_QWORD *)(GetDispInfo(v55, v54) + 96);
      NewMonitor = (struct tagMONITOR *)v15;
    }
  }
  v16 = *(_WORD *)((char *)a4 + v12 + 40);
  v66 = v16;
  v17 = *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL);
  v64 = v17;
  v18 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF;
  v74 = 2;
  if ( v18 == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 640LL) & 0x2000000) == 0 && !a6 && v17 != v16 )
    {
      v75[2] = 0LL;
      v76[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v75[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v75;
      v75[1] = a1;
      HMLockObject(a1);
      v57 = NewMonitor;
      v58 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v76[0] = *(_QWORD *)(v58 + 408);
      *(_QWORD *)(v58 + 408) = v76;
      v76[1] = v57;
      HMLockObject(v57);
      if ( (unsigned int)xxxAppAdjustDpiCandidateRect(a1, v64, &v69, &v69) )
      {
        v20 = v69.m128i_i32[3];
        v19 = v69.m128i_i32[2];
      }
      else
      {
        v59 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v64, v66);
        v19 = v69.m128i_i32[0] + v59;
        v60 = EngMulDiv(v73->bottom - v73->top, v64, v66);
        v20 = v69.m128i_i32[1] + v60;
      }
      v61 = ThreadUnlock1() == 0;
      if ( v61 | (ThreadUnlock1() == 0) )
        return 0LL;
      v15 = (__int64)NewMonitor;
      goto LABEL_6;
    }
  }
  else
  {
    memset(v82, 0, sizeof(v82));
    memset(v83, 0, 0x150uLL);
    v83[5] = v82;
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v82, (struct tagMONITORRECTS *)((char *)a4 + v12 + 8));
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 0 )
      v14 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    v72 = (struct tagRECT)*GetMonitorRectForDpi(&v77, (__int64)v83, v14);
    ScaleDPIRect(&v69, &v69, v66, v14, *(_QWORD *)((char *)a4 + v12 + 8), *(__int64 *)&v72.left);
    v71 = 1;
    if ( !a6 )
    {
      v40 = EngMulDiv(a3->m128i_i32[2] - a3->m128i_i32[0], v64, v14);
      v19 = v69.m128i_i32[0] + v40;
      v41 = EngMulDiv(v73->bottom - v73->top, v64, v14);
      v21 = v69.m128i_i32[1];
      v15 = (__int64)NewMonitor;
      v20 = v69.m128i_i32[1] + v41;
      goto LABEL_7;
    }
    v15 = (__int64)NewMonitor;
  }
  v19 = v69.m128i_i32[2];
  v20 = v69.m128i_i32[3];
LABEL_6:
  v21 = v69.m128i_i32[1];
LABEL_7:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v51 = *(_OWORD *)GetMonitorWorkRectForWindow(v78, v15, a1);
      v46 = (struct tagRECT *)&v80;
      v80 = v51;
    }
    else
    {
      v45 = *GetMonitorRectForWindow(&v79, v15, a1);
      v46 = (struct tagRECT *)&v81;
      v81 = v45;
    }
    v47 = *((_DWORD *)a1 + 77) == 0;
    v72 = *v46;
    if ( v47 )
    {
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
      v49 = v72.left - WindowBordersWithDpiAwareness;
      v50 = v72.top - WindowBordersWithDpiAwareness;
      a2->left = v72.left - WindowBordersWithDpiAwareness;
      a2->top = v50;
      a2->right = v72.right + v49 + 2 * WindowBordersWithDpiAwareness - v72.left;
      a2->bottom = v50 + 2 * WindowBordersWithDpiAwareness + v72.bottom - v72.top;
    }
    else
    {
      ExtendRectByWindowMargin(a1, &v72, &v72);
      *a2 = v72;
    }
  }
  else
  {
    v22 = *(_DWORD **)(v15 + 40);
    v65 = *(_DWORD *)((char *)a4 + v12 + 12);
    v67 = *(_DWORD *)((char *)a4 + v12 + 8);
    v23 = v22[7];
    v24 = v23 - v67;
    v25 = v22[8];
    v26 = v25 - v65;
    LODWORD(v73) = *(_DWORD *)((char *)a4 + v12 + 16) - v67;
    v27 = *(_DWORD *)((char *)a4 + v12 + 20) - v65;
    LODWORD(v68) = v22[9] - v23;
    v28 = v22[10] - v25;
    if ( (_DWORD)v68 != (_DWORD)v73 || v28 != v27 )
    {
      v24 += (((int)v68 - (int)v73) * (v69.m128i_i32[0] - v67) + (int)v73 / v74) / (int)v73;
      v26 += ((v28 - v27) * (v21 - v65) + v27 / 2) / v27;
    }
    v68 = 0LL;
    a2->left = v24 + v69.m128i_i32[0];
    a2->right = v19 + v24;
    a2->top = v21 + v26;
    a2->bottom = v20 + v26;
    v29 = *(_DWORD **)(v15 + 40);
    GetWindowExtendedMargin(a1, (struct FRAME_MARGIN *)&v68);
    right = a2->right;
    v31 = v29[13];
    left = a2->left;
    if ( right > v31 )
    {
      left += v31 + SWORD1(v68) - right;
      right = v31 + SWORD1(v68);
      a2->left = left;
      a2->right = right;
    }
    v33 = v29[11];
    if ( left < v33 )
    {
      v34 = v33 - (__int16)v68;
      right = v34 + right - left;
      a2->left = v34;
      a2->right = right;
    }
    else
    {
      v34 = left;
    }
    bottom = a2->bottom;
    v36 = v29[14];
    if ( bottom > v36 )
    {
      v52 = SHIWORD(v68) - bottom;
      a2->right = right;
      v53 = v36 + v52;
      bottom += v53;
      a2->top += v53;
      a2->bottom = bottom;
    }
    top = a2->top;
    v38 = v29[12];
    if ( top < v38 )
    {
      v62 = SWORD2(v68);
      a2->right = right;
      v63 = v38 - v62 - top;
      bottom += v63;
      top += v63;
      a2->bottom = bottom;
      a2->top = top;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
    {
      v42 = v29[13];
      v43 = 0;
      if ( right - SWORD1(v68) > v42 )
      {
        right = SWORD1(v68) + v42;
        v43 = 1;
        a2->right = right;
      }
      v44 = v29[14];
      if ( bottom - SHIWORD(v68) > v44 )
      {
        bottom = SHIWORD(v68) + v44;
        ++v43;
        a2->bottom = bottom;
      }
      if ( v43 == 2 )
      {
        a2->left = v34 + 1;
        a2->right = right - 1;
        a2->top = top + 1;
        a2->bottom = bottom - 1;
      }
    }
    if ( v71 )
      PhysicalToLogicalDPIRect(a2, a2, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), &NewMonitor);
  }
  return NewMonitor;
}
