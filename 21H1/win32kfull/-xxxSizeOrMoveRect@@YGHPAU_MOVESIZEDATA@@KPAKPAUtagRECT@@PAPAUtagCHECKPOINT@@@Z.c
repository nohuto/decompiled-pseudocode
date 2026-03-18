/*
 * XREFs of ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@@PAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x174294 (-xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@.c)
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _CkptRestore@8 @ 0xB487A (_CkptRestore@8.c)
 *     ?ComputeMoveOutcome@@YG?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x170D2A (-ComputeMoveOutcome@@YG-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QBU_MOVESIZEDATA@@PAPAUtagMONITOR@@PA.c)
 *     ?DisableTemporayMetricsOverrides@@YGXPAU_MOVESIZEDATA@@@Z @ 0x171025 (-DisableTemporayMetricsOverrides@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z @ 0x171112 (-GetOrUpdateCheckPointIfNotPresent@@YGPAUtagCHECKPOINT@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1717C5 (-IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x171919 (-IsSemiMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x17197A (-IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z @ 0x1719C0 (-MakeArrangedStateObservable@@YGXQBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x171DE6 (-MoveRect@@YGHPAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z @ 0x172097 (-SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1720CE (-SetDragInThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17210F (-SetDragInToDragOutThreshold@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17213C (-SetDragOutThresholdAlways@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17217D (-SetDragOutToDragInThreshold@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x172710 (-VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 *     ?WasMaximized@@YGEPAU_MOVESIZEDATA@@@Z @ 0x172B7C (-WasMaximized@@YGEPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x175C45 (-xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

int __userpurge xxxSizeOrMoveRect@<eax>(
        unsigned int a1@<edx>,
        int *a2@<ecx>,
        struct _MOVESIZEDATA *a3,
        int *a4,
        unsigned int *a5,
        struct tagRECT *a6,
        struct tagCHECKPOINT **a7)
{
  LONG v8; // esi
  struct _MOVESIZEDATA *v9; // edi
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  char *v17; // esi
  int v18; // edx
  bool v19; // zf
  int *v20; // ecx
  LONG v21; // edi
  int v22; // edx
  char *v23; // edx
  int v24; // edi
  int *MonitorWorkRectForWindow; // eax
  int v26; // edi
  bool v27; // al
  int v28; // ecx
  int v29; // esi
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // ecx
  int *v34; // edi
  int *v35; // edi
  struct _MOVESIZEDATA *v36; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  LONG v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  int v43; // edx
  struct _MOVESIZEDATA *v44; // esi
  int v45; // eax
  bool v46; // al
  int v47; // ecx
  int v48; // edx
  int v49; // eax
  int v50; // esi
  LONG v51; // ecx
  int v52; // edi
  int v53; // edx
  LONG v54; // eax
  int v55; // edi
  int v56; // edi
  int v57; // ecx
  int v58; // eax
  int v59; // edx
  int v60; // esi
  int v61; // eax
  unsigned int v62; // eax
  int *v63; // eax
  int v64; // ecx
  int v65; // edi
  int v66; // ecx
  int v67; // eax
  int v68; // edi
  unsigned int v69; // edx
  unsigned int v70; // ecx
  int v71; // edi
  int v72; // eax
  int v73; // edi
  LONG v74; // ecx
  unsigned int v75; // edx
  int v76; // ecx
  unsigned int v77; // ecx
  int *v78; // ecx
  int v79; // ecx
  struct tagCHECKPOINT *v80; // esi
  PKTHREAD v81; // eax
  int v82; // eax
  int v83; // edi
  LONG v84; // esi
  unsigned int v85; // eax
  int v86; // eax
  struct tagMONITOR *v87; // [esp+0h] [ebp-6Ch]
  int v88; // [esp+4h] [ebp-68h]
  int v89[4]; // [esp+10h] [ebp-5Ch] BYREF
  int v90; // [esp+20h] [ebp-4Ch]
  int v91; // [esp+24h] [ebp-48h]
  int v92; // [esp+28h] [ebp-44h]
  int v93; // [esp+2Ch] [ebp-40h]
  int v94; // [esp+30h] [ebp-3Ch] BYREF
  LONG v95; // [esp+34h] [ebp-38h]
  int v96; // [esp+38h] [ebp-34h]
  int v97; // [esp+3Ch] [ebp-30h]
  int v98; // [esp+40h] [ebp-2Ch]
  int v99; // [esp+44h] [ebp-28h]
  struct _MOVESIZEDATA *v100; // [esp+48h] [ebp-24h]
  unsigned int v101; // [esp+4Ch] [ebp-20h]
  int v102; // [esp+50h] [ebp-1Ch]
  LONG v103; // [esp+54h] [ebp-18h] BYREF
  struct tagCHECKPOINT *v104; // [esp+58h] [ebp-14h]
  LONG v105; // [esp+5Ch] [ebp-10h]
  int v106; // [esp+60h] [ebp-Ch]
  LONG v107[2]; // [esp+64h] [ebp-8h] BYREF

  v98 = 1;
  v101 = a1;
  v8 = (__int16)a1 - a2[39];
  v9 = (struct _MOVESIZEDATA *)(SHIWORD(a1) - a2[40]);
  v103 = 0;
  v107[0] = 0;
  v99 = 0;
  v102 = 0;
  v96 = 0;
  v105 = v8;
  v100 = v9;
  v104 = GetOrUpdateCheckPointIfNotPresent(a2);
  if ( !v104 || v8 == a2[67] && v9 == (struct _MOVESIZEDATA *)a2[68] )
    return 0;
  v10 = ComputeMoveOutcome((int)a2, &v103, v107, v8, v9);
  v11 = a2[46];
  v12 = v10;
  a2[67] = v8;
  a2[68] = (int)v9;
  v13 = v101;
  v97 = v10;
  v106 = v11;
  if ( (v11 & 0x6000000) == 0x6000000 )
  {
    a2[46] = v11 & 0xFDFFFFFF;
    v14 = MoveRect(a2, v13, 0);
    a2[46] |= 0x2000000u;
    v11 = a2[46];
    v12 = v97;
    v98 = v14;
    v106 = v11;
  }
  if ( v12 != 1 || v107[0] != 1 && v107[0] != 2 )
  {
    a2[62] &= ~2u;
    if ( v12 != 1 )
    {
      switch ( v12 )
      {
        case 3:
          v21 = v107[0];
          if ( !a2[52] && !v107[0] && IsVerticallyMaximizedMoveSizeData(a2) )
          {
            v23 = (char *)(v22 & 0x38000);
            if ( v23 == (char *)&loc_20000 || v23 == (_BYTE *)&loc_27FFD + 3 )
            {
              v24 = v103;
              v98 = v103;
              do
              {
                MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v24, (_DWORD *)a2[2], v89);
                v90 = *MonitorWorkRectForWindow;
                v91 = MonitorWorkRectForWindow[1];
                v92 = MonitorWorkRectForWindow[2];
                v93 = MonitorWorkRectForWindow[3];
                v26 = v98;
                v27 = IsDockTargetActive((int)a2, v98, 0);
                v29 = v105;
                if ( v27 && v90 <= v105 && v105 < v92 )
                  v99 = v26;
                if ( IsDockTargetActive(v28, v26, 3) && v90 <= v29 && v29 < v92 )
                {
                  v30 = v26;
                  v102 = v26;
                }
                else
                {
                  v30 = v102;
                }
                v31 = *(_DWORD *)(v26 + 156);
                if ( v31 == _gpDispInfo + 80 )
                  v31 = *(_DWORD *)(_gpDispInfo + 80);
                v24 = v31 - 156;
                v98 = v24;
              }
              while ( v24 != a2[51] );
              if ( v30 && v99 )
              {
                v90 = a2[7];
                v91 = a2[8];
                v92 = a2[9];
                v93 = a2[10];
                MoveRect(a2, v101, 3);
                v32 = v99;
                if ( VerticalSizeRectFromHitTarget((int)a2, v99, 0, v102, v105, v33) )
                {
                  a2[52] = 0;
                  SetCurrentHitTargetMonitor(v32, a2, (struct _MOVESIZEDATA *)1, v87, v88);
                  a2[53] = 2;
                  return 1;
                }
                v34 = a2 + 15;
                if ( (a2[46] & 0x2000000) == 0 )
                  v34 = a2 + 7;
                *v34 = v90;
                v35 = v34 + 1;
                *v35++ = v91;
                *v35 = v92;
                v35[1] = v93;
              }
              v21 = v107[0];
            }
          }
          if ( (a2[46] & 0x6000000) == 0x4000000 )
          {
            if ( !MoveRect(a2, v101, 0) )
              return 0;
            v36 = a3;
            *(_DWORD *)a3 |= 8u;
            a2[46] |= 0x2000000u;
          }
          else
          {
            v36 = a3;
          }
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v94 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v94;
          v39 = v103;
          v95 = v103;
          if ( v103 )
          {
            HMLockObject(v103);
            v39 = v103;
          }
          xxxSizeRectFromHitTarget(a2, v39, v21);
          if ( v21 )
          {
            if ( v21 == 1 )
            {
              v40 = a2[46] & 0xFFFFFCFF | 0x100;
              goto LABEL_68;
            }
            if ( v21 == 2 )
            {
              v40 = a2[46] & 0xFFFFFCFF | 0x200;
LABEL_68:
              a2[46] = v40;
              if ( (*(_BYTE *)(*(_DWORD *)(a2[2] + 20) + 23) & 1) != 0 )
              {
                v41 = (unsigned int)v104;
                *a4 = a2[7];
                *(_DWORD *)a3 |= 1u;
                a4[1] = a2[8];
                *a5 = v41;
                a4[2] = a2[9];
                a4[3] = a2[10];
                v21 = v107[0];
              }
              SetDragOutThresholdAlways(a2);
              goto LABEL_75;
            }
          }
          else
          {
            v42 = a2[46];
            a2[62] &= ~2u;
            v42 &= 0xFFFFFCFF;
            a2[46] = v42;
            if ( (v42 & 0x4000000) == 0 )
              *(_DWORD *)v36 |= 2u;
            SetDragInToDragOutThreshold(a2);
          }
          if ( v21 == 3 )
          {
LABEL_76:
            v43 = v103;
            a2[52] = v21;
            SetCurrentHitTargetMonitor(v43, a2, (struct _MOVESIZEDATA *)1, v87, v88);
            a2[53] = 2;
LABEL_77:
            ThreadUnlock1();
            return 1;
          }
LABEL_75:
          MakeArrangedStateObservable(a2);
          goto LABEL_76;
        case 4:
          v44 = a3;
          if ( (v11 & 0x80u) == 0 )
          {
            MoveRect(a2, v13, 0);
            v45 = a2[52];
            if ( v45 )
            {
              if ( (unsigned int)(v45 - 1) <= 1 )
              {
                ++a2[72];
                SetDragOutToDragInThreshold(a2);
              }
            }
            else
            {
              ++a2[71];
              SetDragInThresholdAlways(a2);
            }
            goto LABEL_133;
          }
          v97 = a2[52];
          v90 = *(_DWORD *)v104;
          v91 = *((_DWORD *)v104 + 1);
          v92 = *((_DWORD *)v104 + 2);
          v93 = *((_DWORD *)v104 + 3);
          v46 = WasMaximized(a2);
          v47 = v92 - v90;
          if ( !v48 )
          {
            if ( v46 )
            {
              v49 = a2[3];
              v50 = v105 - v49;
              if ( v105 - v49 >= v47 / 2 )
              {
                if ( v50 <= a2[5] - v49 - v47 / 2 )
                  v50 = v47 / 2;
                else
                  v50 = v47 - a2[5] + v105;
              }
              v51 = a2[64];
              goto LABEL_100;
            }
            v52 = a2[29] - a2[27];
            v50 = a2[65];
            if ( v52 <= v47 )
            {
              if ( v50 < v52 / 2 )
                goto LABEL_99;
              if ( v50 <= v52 / 2 )
              {
                v50 = v52 / 2;
                goto LABEL_99;
              }
            }
            else
            {
              if ( v50 < v47 / 2 )
              {
LABEL_99:
                v51 = a2[66];
LABEL_100:
                v53 = v106;
                v54 = v51;
                v107[0] = v51;
                goto LABEL_115;
              }
              if ( v50 <= v52 - v47 / 2 )
              {
                v50 = v47 / 2;
                goto LABEL_99;
              }
            }
            v50 += v47 - v52;
            goto LABEL_99;
          }
          v55 = a2[29] - a2[27];
          v50 = a2[65];
          if ( v46 )
          {
            if ( v50 < v47 / 2 )
            {
LABEL_113:
              v53 = v106;
              goto LABEL_114;
            }
            if ( v50 <= v55 - v47 / 2 )
            {
              v50 = v47 / 2;
              goto LABEL_113;
            }
          }
          else if ( v55 <= v47 )
          {
            if ( v50 < v55 / 2 )
              goto LABEL_113;
            if ( v50 <= v55 / 2 )
            {
              v50 = v55 / 2;
              goto LABEL_113;
            }
          }
          else
          {
            if ( v50 < v47 / 2 )
              goto LABEL_113;
            if ( v50 <= v55 - v47 / 2 )
            {
              v50 = v47 / 2;
              v53 = a2[46];
LABEL_114:
              v54 = a2[66];
              v107[0] = v54;
LABEL_115:
              if ( !v97 )
              {
                v71 = (int)v100 - v91 - v54;
                v98 = v92 + v105 - v90 - v50;
                v92 = v98;
                v72 = v71 + v93;
                v97 = v105 - v50;
                v73 = v91 + v71;
                v90 = v105 - v50;
                v99 = v72;
                v93 = v72;
                v91 = v73;
                if ( (v53 & 0x80u) != 0 )
                {
                  v74 = v107[0];
                  v75 = v53 & 0xFFFFFF7F;
                  a2[46] = v75;
                  a2[63] = v50;
                  a2[64] = v74;
                  if ( (v75 & 0x20) != 0 )
                  {
                    *a4 = v97;
                    v76 = v98;
                    a4[1] = v73;
                    a4[2] = v76;
                    a4[3] = v99;
                    v77 = (unsigned int)v104;
                    *(_DWORD *)a3 |= 1u;
                    *a5 = v77;
                  }
                }
                ++a2[71];
                SetDragInThresholdAlways(a2);
                goto LABEL_132;
              }
              if ( v97 == 1 )
              {
                v65 = (int)v100 - v91 - v54;
                v66 = v105 - v50;
                v60 = v105 - v90 - v50 + v92;
                v67 = v65 + v93;
                v97 = v66;
                v68 = v91 + v65;
                v90 = v66;
                v92 = v60;
                v98 = v67;
                v93 = v67;
                v91 = v68;
                if ( (v53 & 0x80u) == 0 )
                  goto LABEL_127;
                v69 = v53 & 0xFFFFFF7F;
                a2[46] = v69;
                if ( (v69 & 0x20) == 0 )
                  goto LABEL_127;
                v63 = a4;
                *a4 = v66;
                v64 = v98;
                a4[1] = v68;
              }
              else
              {
                if ( v97 != 2 )
                {
                  if ( v97 == 3 )
                  {
                    v93 += (int)v100 - v91 - v107[0];
                    v92 += v105 - v90 - v50;
                    v90 = v105 - v50;
                    v91 = (int)v100 - v107[0];
                  }
                  goto LABEL_132;
                }
                v56 = (int)v100 - v91 - v54;
                v57 = v56 + v91;
                v58 = v105 - v90 - v50;
                v91 += v56;
                v59 = v105 - v50;
                v60 = v58 + v92;
                v90 += v58;
                v92 += v58;
                v97 = v56 + v93;
                v93 += v56;
                v61 = a2[46];
                if ( (v61 & 0x80u) == 0 || (v62 = v61 & 0xFFFFFF7F, a2[46] = v62, (v62 & 0x20) == 0) )
                {
LABEL_127:
                  ++a2[72];
                  SetDragOutToDragInThreshold(a2);
LABEL_132:
                  a2[7] = v90;
                  a2[8] = v91;
                  a2[9] = v92;
                  a2[10] = v93;
                  v44 = a3;
LABEL_133:
                  a2[46] &= 0xFFFFFCFF;
                  a2[62] &= ~2u;
                  a2[52] = 4;
                  DisableTemporayMetricsOverrides(a2);
                  MakeArrangedStateObservable(v78);
                  v79 = a2[46];
                  a2[53] = 0;
                  if ( (v79 & 0x6000000) == 0x6000000 )
                  {
                    *(_DWORD *)v44 |= 4u;
                    a2[46] = v79 & 0xFDFFFFFF;
                  }
                  return 1;
                }
                v63 = a4;
                *a4 = v59;
                a4[1] = v57;
                v64 = v97;
              }
              v63[2] = v60;
              v63[3] = v64;
              v70 = (unsigned int)v104;
              *(_DWORD *)a3 |= 1u;
              *a5 = v70;
              goto LABEL_127;
            }
          }
          v50 += v47 - v55;
          goto LABEL_113;
        case 5:
          return MoveRect(a2, v13, a2[53]);
      }
      if ( v12 != 6 )
        return 0;
      if ( (v11 & 0x40000) == 0 )
      {
        CkptRestore(a2[2], (int)(a2 + 27));
        v11 = a2[46] | 0x40000;
        a2[46] = v11;
        if ( (v11 & 0x1000000) != 0 )
        {
          v80 = v104;
          a2[35] = *(_DWORD *)v104;
          v80 = (struct tagCHECKPOINT *)((char *)v80 + 4);
          a2[36] = *(_DWORD *)v80;
          v80 = (struct tagCHECKPOINT *)((char *)v80 + 4);
          a2[37] = *(_DWORD *)v80;
          a2[38] = *((_DWORD *)v80 + 1);
        }
      }
      if ( (v11 & 0x6000000) == 0x4000000 )
      {
        if ( !MoveRect(a2, v101, 0) )
          return 0;
        *(_DWORD *)a3 |= 8u;
        a2[46] |= 0x2000000u;
      }
      v81 = KeGetCurrentThread();
      v82 = W32GetThreadWin32Thread(v81);
      v83 = v103;
      v94 = *(_DWORD *)(v82 + 228);
      *(_DWORD *)(v82 + 228) = &v94;
      v95 = v83;
      if ( v83 )
        HMLockObject(v83);
      v84 = v107[0];
      xxxSizeRectFromHitTarget(a2, v83, v107[0]);
      if ( v84 )
      {
        if ( v84 == 1 )
        {
          v85 = a2[46] & 0xFFFFFCFF | 0x100;
        }
        else
        {
          if ( v84 != 2 )
          {
            if ( v84 == 3 )
            {
              a2[46] &= 0xFFFFFCFF;
              a2[62] &= ~2u;
            }
            goto LABEL_156;
          }
          v85 = a2[46] & 0xFFFFFCFF | 0x200;
        }
        a2[46] = v85;
      }
      else
      {
        v86 = a2[46];
        a2[62] &= ~2u;
        v86 &= 0xFFFFFCFF;
        a2[46] = v86;
        if ( (v86 & 0x4000000) == 0 )
          *(_DWORD *)a3 |= 2u;
      }
      SetDragInToDragOutThreshold(a2);
LABEL_156:
      MakeArrangedStateObservable(a2);
      a2[52] = v84;
      SetCurrentHitTargetMonitor(v83, a2, (struct _MOVESIZEDATA *)1, v87, v88);
      goto LABEL_77;
    }
  }
  v15 = a2[52];
  if ( v15 != 1 && v15 != 2 || (v11 & 0x300) != 0 )
  {
    if ( !v15 )
    {
      v17 = (char *)(v11 & 0x38000);
      if ( IsVerticallyMaximizedMoveSizeData(a2) && (v17 == (char *)&loc_20000 || v17 == (_BYTE *)&loc_27FFD + 3) )
      {
        v19 = (v18 & 0x2000000) == 0;
        goto LABEL_21;
      }
      if ( IsSemiMaximizedMoveSizeData(a2) && (v17 == (char *)&loc_20000 || v17 == (_BYTE *)&loc_27FFD + 3) )
      {
        a2[46] = v11 | 0x300;
        MakeArrangedStateObservable(v20);
        v19 = (a2[46] & 0x2000000) == 0;
LABEL_21:
        if ( v19 )
          return MoveRect(a2, v13, 3);
        return v98;
      }
    }
    if ( (v11 & 0x2000000) != 0 )
      return v98;
    return 0;
  }
  if ( (v11 & 0x2000000) != 0 )
    return v98;
  return MoveRect(a2, v13, a2[53]);
}
