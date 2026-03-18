/*
 * XREFs of ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E
 * Callers:
 *     _xxxComputeProposedPerMonRect@12 @ 0x15354 (_xxxComputeProposedPerMonRect@12.c)
 *     ?NormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HH@Z @ 0x15740 (-NormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HH@Z.c)
 * Callees:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     _ScaleDPIRect@32 @ 0x155FE (_ScaleDPIRect@32.c)
 *     ?Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z @ 0x156AE (-Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z.c)
 *     _IsValidMonitor@4 @ 0x15D06 (_IsValidMonitor@4.c)
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 *     _GetWindowBordersWithDpiAwareness@12 @ 0x314A8 (_GetWindowBordersWithDpiAwareness@12.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?FindNewMonitor@@YGPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x144E6D (-FindNewMonitor@@YGPAUtagMONITOR@@PAUtagRECT@@@Z.c)
 *     _xxxAppAdjustDpiCandidateRect@16 @ 0x151E6B (_xxxAppAdjustDpiCandidateRect@16.c)
 *     ?ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E382 (-ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 */

struct tagMONITOR *__userpurge xxxNormalizeRect@<eax>(
        INT *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        struct tagMONITORRECTS *a6,
        int a7,
        int a8,
        int a9)
{
  INT *v9; // ebx
  struct tagMONITOR *v10; // eax
  struct tagMONITOR *NewMonitor; // esi
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // dx
  _DWORD *v14; // edi
  _DWORD *v15; // edx
  int v16; // ecx
  struct tagRECT *v17; // edi
  struct tagRECT *v18; // eax
  int v19; // ecx
  int v20; // ebx
  int v21; // ecx
  int v22; // ecx
  bool v23; // zf
  int *v24; // ebx
  struct tagRECT *v25; // edx
  int v26; // eax
  int v27; // esi
  int *v28; // edi
  int v29; // ecx
  int v30; // edx
  int v31; // edx
  int v32; // eax
  _DWORD *v33; // edi
  int v35; // eax
  INT *MonitorRectForDpi; // eax
  unsigned __int16 v37; // si
  INT v38; // ebx
  INT v39; // eax
  INT v40; // eax
  int *MonitorWorkRectForWindow; // eax
  int WindowBordersWithDpiAwareness; // eax
  int v43; // edx
  INT v44; // esi
  int v45; // eax
  int v46; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagMONITOR *v49; // esi
  PKTHREAD v50; // eax
  int v51; // eax
  unsigned __int16 v52; // si
  INT v53; // edi
  INT v54; // eax
  INT v55; // eax
  BOOL v56; // edi
  int v57; // eax
  int v58; // edx
  struct tagRECT *v59; // edi
  int v60; // eax
  struct tagRECT *v61; // eax
  _DWORD *v62; // [esp-4h] [ebp-198h]
  struct tagRECT *v63; // [esp+0h] [ebp-194h]
  struct tagRECT *v64; // [esp+4h] [ebp-190h]
  INT v65; // [esp+10h] [ebp-184h] BYREF
  int v66; // [esp+14h] [ebp-180h] BYREF
  _DWORD *v67; // [esp+18h] [ebp-17Ch]
  int v68; // [esp+1Ch] [ebp-178h]
  int v69; // [esp+20h] [ebp-174h]
  int v70; // [esp+24h] [ebp-170h]
  INT v71; // [esp+28h] [ebp-16Ch] BYREF
  int v72; // [esp+2Ch] [ebp-168h]
  int v73; // [esp+30h] [ebp-164h]
  struct tagWND *v74; // [esp+34h] [ebp-160h]
  INT *v75; // [esp+3Ch] [ebp-158h]
  int v76; // [esp+40h] [ebp-154h]
  int v77; // [esp+44h] [ebp-150h]
  int v78; // [esp+48h] [ebp-14Ch]
  int v79; // [esp+4Ch] [ebp-148h]
  int v80; // [esp+50h] [ebp-144h]
  struct tagMONITOR *v81; // [esp+54h] [ebp-140h] BYREF
  _DWORD *v82; // [esp+58h] [ebp-13Ch]
  struct tagWND *v83; // [esp+5Ch] [ebp-138h]
  int v84; // [esp+60h] [ebp-134h]
  struct tagRECT *v85; // [esp+64h] [ebp-130h]
  _BYTE v86[76]; // [esp+68h] [ebp-12Ch] BYREF
  _DWORD v87[50]; // [esp+B4h] [ebp-E0h] BYREF
  INT v88; // [esp+17Ch] [ebp-18h]
  int v89; // [esp+180h] [ebp-14h] BYREF
  int v90; // [esp+184h] [ebp-10h]
  int v91; // [esp+188h] [ebp-Ch]

  v82 = a2;
  v9 = a1;
  v69 = 0;
  v75 = a1;
  v83 = a3;
  v71 = *(_DWORD *)a3;
  v85 = a4;
  v72 = *((_DWORD *)a3 + 1);
  v73 = *((_DWORD *)a3 + 2);
  v74 = (struct tagWND *)*((_DWORD *)a3 + 3);
  v76 = 40 * (_DWORD)a5;
  v10 = (struct tagMONITOR *)ValidateHmonitor(*(&a4[2].right + 10 * (_DWORD)a5));
  NewMonitor = v10;
  v81 = v10;
  if ( !v10 || !IsValidMonitor(v10) )
  {
    NewMonitor = FindNewMonitor(v63);
    v81 = NewMonitor;
    if ( !NewMonitor )
    {
      NewMonitor = *(struct tagMONITOR **)(GetDispInfo() + 52);
      v81 = NewMonitor;
    }
  }
  v12 = *(_WORD *)(*((_DWORD *)NewMonitor + 5) + 52);
  v80 = v12;
  v13 = *((_WORD *)&v85[2].top + 20 * (_DWORD)a5);
  v14 = v82;
  v79 = v13;
  if ( (*(_DWORD *)(v82[5] + 184) & 0xF) == 2 )
  {
    if ( a7 && (*(_DWORD *)(v82[2] + 352) & 0x2000000) == 0 && !a6 && v12 != v13 )
    {
      v68 = 0;
      v91 = 0;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v62 = v82;
      v66 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v66;
      v67 = v14;
      HMLockObject(v62);
      v49 = v81;
      v50 = KeGetCurrentThread();
      v51 = W32GetThreadWin32Thread(v50);
      v89 = *(_DWORD *)(v51 + 228);
      *(_DWORD *)(v51 + 228) = &v89;
      v90 = (int)v49;
      HMLockObject(v49);
      v52 = v80;
      if ( xxxAppAdjustDpiCandidateRect(v82, v80, &v71, &v71) )
      {
        v83 = v74;
        v80 = v73;
      }
      else
      {
        v53 = (unsigned __int16)v79;
        v54 = EngMulDiv(*((_DWORD *)v83 + 2) - *(_DWORD *)v83, v52, (unsigned __int16)v79);
        v80 = v71 + v54;
        v55 = EngMulDiv(*((_DWORD *)v83 + 3) - *((_DWORD *)v83 + 1), v52, v53);
        v83 = (struct tagWND *)(v72 + v55);
      }
      v56 = ThreadUnlock1() == 0;
      if ( v56 | (ThreadUnlock1() == 0) )
        return 0;
      goto LABEL_27;
    }
    v83 = v74;
  }
  else
  {
    memset(v86, 0, sizeof(v86));
    memset(v87, 0, 0xC4u);
    v87[5] = v86;
    v69 = (int)&v85->top + v76;
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v86, (struct tagMONITORPOS *)v69);
    if ( (*(_BYTE *)(v82[5] + 184) & 0xF) != 0 )
      v35 = *(unsigned __int16 *)(*(_DWORD *)(v82[2] + 232) + 160);
    else
      v35 = 96;
    v84 = v35;
    MonitorRectForDpi = GetMonitorRectForDpi((int)v87, v35, &v65);
    v88 = *MonitorRectForDpi;
    v89 = MonitorRectForDpi[1];
    v90 = MonitorRectForDpi[2];
    v91 = MonitorRectForDpi[3];
    v37 = v84;
    ScaleDPIRect(&v71, &v71, v79, v84, *(_DWORD *)v69, *(_DWORD *)(v69 + 4), v88, v89);
    v69 = 1;
    if ( !a6 )
    {
      v38 = (unsigned __int16)v80;
      v39 = EngMulDiv(*((_DWORD *)v83 + 2) - *(_DWORD *)v83, (unsigned __int16)v80, v37);
      v80 = v71 + v39;
      v40 = EngMulDiv(*((_DWORD *)v83 + 3) - *((_DWORD *)v83 + 1), v38, v37);
      v83 = (struct tagWND *)(v72 + v40);
LABEL_27:
      NewMonitor = v81;
      v9 = v75;
      v14 = v82;
      goto LABEL_7;
    }
    NewMonitor = v81;
    v14 = v82;
    v83 = v74;
  }
  v80 = v73;
LABEL_7:
  if ( a6 )
  {
    if ( a6 == (struct tagMONITORRECTS *)1 )
      MonitorWorkRectForWindow = (int *)GetMonitorWorkRectForWindow(NewMonitor, v14, &v71);
    else
      MonitorWorkRectForWindow = (int *)GetMonitorRectForWindow(NewMonitor, v14, &v65);
    v23 = v82[45] == 0;
    v88 = *MonitorWorkRectForWindow;
    v89 = MonitorWorkRectForWindow[1];
    v90 = MonitorWorkRectForWindow[2];
    v91 = MonitorWorkRectForWindow[3];
    v71 = v88;
    v72 = v89;
    v73 = v90;
    v74 = (struct tagWND *)v91;
    if ( v23 )
    {
      WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(v82);
      v43 = v71 - WindowBordersWithDpiAwareness;
      v44 = v72 - WindowBordersWithDpiAwareness;
      *v9 = v71 - WindowBordersWithDpiAwareness;
      v9[1] = v44;
      v9[2] = v73 + v43 + 2 * WindowBordersWithDpiAwareness - v71;
      v9[3] = (INT)v74 + 2 * WindowBordersWithDpiAwareness - v72 + v44;
    }
    else
    {
      ExtendRectByWindowMargin((const struct tagWND *)&v71, v63, v64);
      *v9 = v71;
      v9[1] = v72;
      v9[2] = v73;
      v9[3] = (INT)v74;
    }
  }
  else
  {
    v15 = (_DWORD *)*((_DWORD *)NewMonitor + 5);
    v68 = v15[4];
    v16 = v68 - *(LONG *)((char *)&v85->top + v76);
    v17 = v85;
    v18 = (struct tagRECT *)v15[5];
    v79 = *(LONG *)((char *)&v85->top + v76);
    v84 = v16;
    v85 = v18;
    v19 = *(LONG *)((char *)&v17->right + v76);
    v85 = (struct tagRECT *)((char *)v18 - v19);
    v77 = v19;
    v20 = *(LONG *)((char *)&v17[1].left + v76) - v19;
    v78 = *(LONG *)((char *)&v17->bottom + v76) - v79;
    v21 = v15[7];
    v76 = v20;
    v22 = v21 - (_DWORD)v18;
    v23 = v15[6] - v68 == v78;
    v68 = v15[6] - v68;
    v24 = v75;
    v70 = v22;
    if ( v23 && v22 == v76 )
    {
      v25 = v85;
    }
    else
    {
      v84 += ((v68 - v78) * (v71 - v79) + v78 / 2) / v78;
      v25 = (struct tagRECT *)((char *)v85 + ((v70 - v76) * (v72 - v77) + v76 / 2) / v76);
    }
    *v75 = v84 + v71;
    v24[2] = v84 + v80;
    v24[1] = (int)v25 + v72;
    v24[3] = (int)v83 + (_DWORD)v25;
    v26 = *((_DWORD *)NewMonitor + 5);
    v27 = 0;
    v67 = 0;
    v75 = (INT *)(v26 + 32);
    v68 = 0;
    GetWindowExtendedMargin((const struct tagWND *)v63, (struct FRAME_MARGIN *)v64);
    v28 = v75;
    v29 = v24[2];
    v30 = *v24;
    v84 = *v24;
    v70 = v75[2];
    if ( v29 > v70 )
    {
      v57 = v70 + SHIWORD(v67) - v29;
      v29 = v70 + SHIWORD(v67);
      v84 = v57 + v30;
      *v24 = v57 + v30;
      v24[2] = v29;
    }
    if ( v84 < *v28 )
    {
      v58 = *v28 - (__int16)v67;
      v29 = v58 + v29 - v84;
      v79 = v58;
      *v24 = v58;
      v24[2] = v29;
    }
    else
    {
      v79 = v84;
    }
    v31 = v24[3];
    v70 = v28[3];
    if ( v31 > v70 )
    {
      v45 = SHIWORD(v68) - v31;
      v24[2] = v29;
      v46 = v70 + v45;
      v31 += v46;
      v24[1] += v46;
      v24[3] = v31;
    }
    v85 = (struct tagRECT *)v24[1];
    v32 = v28[1];
    v33 = v82;
    v84 = v32;
    if ( (int)v85 < v32 )
    {
      v84 -= (__int16)v68;
      v59 = v85;
      v60 = v84 - (_DWORD)v85;
      v24[2] = v29;
      v31 += v60;
      v61 = (struct tagRECT *)((char *)v59 + v60);
      v85 = v61;
      v33 = v82;
      v24[3] = v31;
      v24[1] = (int)v61;
    }
    if ( (*(_BYTE *)(v33[5] + 22) & 4) != 0 )
    {
      v77 = v75[2];
      v78 = SHIWORD(v67);
      if ( v29 - SHIWORD(v67) > v77 )
      {
        v29 = v77 + v78;
        v27 = 1;
        v24[2] = v77 + v78;
      }
      v77 = SHIWORD(v68);
      v78 = v75[3];
      if ( v31 - SHIWORD(v68) > v78 )
      {
        v31 = v77 + v78;
        ++v27;
        v24[3] = v77 + v78;
      }
      if ( v27 == 2 )
      {
        *v24 = v79 + 1;
        v24[2] = v29 - 1;
        v24[1] = (int)&v85->left + 1;
        v24[3] = v31 - 1;
      }
    }
    if ( v69 )
      PhysicalToLogicalDPIRect(v24, v24, *(_DWORD *)(v33[5] + 184), &v81);
  }
  return v81;
}
