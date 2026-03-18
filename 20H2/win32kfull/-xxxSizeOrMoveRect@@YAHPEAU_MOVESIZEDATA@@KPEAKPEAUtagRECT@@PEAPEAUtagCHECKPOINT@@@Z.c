/*
 * XREFs of ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F894
 * Callers:
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020E500 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C02103FC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0018B80 (GetMonitorWorkRectForWindow.c)
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?ComputeMoveOutcome@@YA?AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@@PEAW4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020A540 (-ComputeMoveOutcome@@YA-AW4_MOUSE_MOVE_OUTCOME@@UtagPOINT@@QEBU_MOVESIZEDATA@@PEAPEAUtagMONITOR@.c)
 *     ?DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020A8D4 (-DisableTemporayMetricsOverrides@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020AA68 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020B23C (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B424 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C020B96C (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020BC94 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020BCCC (-SetDragInThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020BD18 (-SetDragInToDragOutThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020BD44 (-SetDragOutThresholdAlways@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020BD8C (-SetDragOutToDragInThreshold@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020C470 (-VerticalSizeRectFromHitTarget@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECT.c)
 *     ?xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C021027C (-xxxSizeRectFromHitTarget@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@.c)
 */

__int64 __fastcall xxxSizeOrMoveRect(
        struct _MOVESIZEDATA *a1,
        int a2,
        unsigned int *a3,
        struct tagRECT *a4,
        struct tagCHECKPOINT **a5)
{
  int v5; // r15d
  unsigned int *v6; // rsi
  int v7; // r14d
  int v9; // r13d
  int v10; // eax
  int v11; // r8d
  int v12; // r12d
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  int v15; // r9d
  int v16; // ecx
  int v17; // r8d
  __int64 result; // rax
  int v19; // eax
  bool v20; // zf
  struct tagMONITOR *v21; // rsi
  struct tagMONITOR *v22; // rbx
  struct tagMONITOR *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // r8d
  __int64 v27; // rbx
  struct tagMONITOR *v28; // rbx
  __int128 v29; // xmm6
  unsigned int v30; // r8d
  __int64 v31; // rax
  struct tagMONITOR *v32; // r12
  unsigned int v33; // r14d
  unsigned int v34; // eax
  struct tagRECT *v35; // rax
  struct tagRECT v36; // xmm0
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  int v42; // r10d
  int v43; // ecx
  __m128i v44; // xmm1
  int v45; // r14d
  int v46; // r12d
  int v47; // eax
  int v48; // r9d
  int v49; // edx
  int v50; // ecx
  int v51; // r10d
  int v52; // r11d
  int v53; // ecx
  int v54; // r10d
  int v55; // r10d
  int v56; // r15d
  int v57; // r13d
  int v58; // eax
  int v59; // r15d
  int v60; // r13d
  LONG v61; // r9d
  LONG v62; // r10d
  unsigned int v63; // eax
  struct tagRECT *v64; // rax
  struct tagCHECKPOINT **v65; // rax
  int v66; // r15d
  int v67; // r13d
  LONG v68; // r10d
  LONG v69; // r11d
  unsigned int v70; // r8d
  struct tagRECT *v71; // rax
  int v72; // r15d
  int v73; // r13d
  LONG v74; // ebx
  LONG v75; // ecx
  unsigned int v76; // r8d
  struct tagRECT *v77; // rax
  struct tagCHECKPOINT **v78; // rax
  const struct _MOVESIZEDATA *v79; // rcx
  int v80; // ecx
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v82; // r14
  unsigned int v83; // r12d
  unsigned int v84; // eax
  int v85; // eax
  __int128 v86; // [rsp+38h] [rbp-61h]
  __m128i v87; // [rsp+38h] [rbp-61h]
  __m128i *v89; // [rsp+48h] [rbp-51h]
  struct tagMONITOR *v90; // [rsp+50h] [rbp-49h] BYREF
  int v91; // [rsp+58h] [rbp-41h]
  struct tagMONITOR *v92; // [rsp+60h] [rbp-39h]
  __int128 v93; // [rsp+68h] [rbp-31h] BYREF
  __int64 v94; // [rsp+78h] [rbp-21h] BYREF
  struct tagMONITOR *v95; // [rsp+80h] [rbp-19h]
  __int64 v96; // [rsp+88h] [rbp-11h]
  unsigned int v97; // [rsp+F8h] [rbp+5Fh] BYREF
  int v98; // [rsp+100h] [rbp+67h]
  unsigned int *v99; // [rsp+108h] [rbp+6Fh]
  struct tagRECT *v100; // [rsp+110h] [rbp+77h]

  v100 = a4;
  v99 = a3;
  v98 = a2;
  v5 = (__int16)a2 - *((_DWORD *)a1 + 42);
  v6 = a3;
  v7 = a2;
  v9 = SHIWORD(a2) - *((_DWORD *)a1 + 43);
  v90 = 0LL;
  v97 = 0;
  v92 = 0LL;
  v96 = 0LL;
  v91 = 1;
  v89 = (__m128i *)GetOrUpdateCheckPointIfNotPresent(a1);
  if ( !v89 || v5 == *((_DWORD *)a1 + 75) && v9 == *((_DWORD *)a1 + 76) )
    return 0LL;
  v10 = ComputeMoveOutcome(__PAIR64__(v9, v5), (__int64)a1, &v90, &v97);
  v11 = *((_DWORD *)a1 + 49);
  v12 = v10;
  *(_QWORD *)((char *)a1 + 300) = __PAIR64__(v9, v5);
  if ( (v11 & 0x6000000) == 0x6000000 )
  {
    *((_DWORD *)a1 + 49) = v11 & 0xFDFFFFFF;
    v13 = MoveRect((__int64)a1, v7, 0);
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    v11 = *((_DWORD *)a1 + 49);
  }
  else
  {
    v13 = v91;
  }
  v14 = v97;
  if ( v12 == 1 && v97 - 1 <= 1 || (*((_DWORD *)a1 + 70) &= ~2u, v12 == 1) )
  {
    v15 = *((_DWORD *)a1 + 60);
    if ( (unsigned int)(v15 - 1) > 1 )
    {
      v16 = v11 & 0x300;
    }
    else
    {
      v16 = v11 & 0x300;
      if ( (v11 & 0x300) == 0 )
      {
        if ( (v11 & 0x2000000) == 0 )
        {
LABEL_13:
          v17 = *((_DWORD *)a1 + 61);
          return MoveRect((__int64)a1, v7, v17);
        }
        return v13;
      }
    }
    if ( !v15 )
    {
      v19 = v11 & 0x38000;
      if ( v16 == 768 && (v19 == 0x20000 || v19 == 163840) )
      {
        v20 = (v11 & 0x2000000) == 0;
        goto LABEL_21;
      }
      if ( v16 && ((v19 - 0x20000) & 0xFFFF7FFF) == 0 )
      {
        *((_DWORD *)a1 + 49) = v11 | 0x300;
        MakeArrangedStateObservable(a1);
        v20 = (*((_DWORD *)a1 + 49) & 0x2000000) == 0;
LABEL_21:
        if ( v20 )
        {
          v17 = 3;
          return MoveRect((__int64)a1, v7, v17);
        }
        return v13;
      }
    }
    if ( (v11 & 0x2000000) != 0 )
      return v13;
    return 0LL;
  }
  if ( v12 != 3 )
  {
    if ( v12 == 4 )
    {
      if ( (v11 & 0x80u) == 0 )
      {
        MoveRect((__int64)a1, v7, 0);
        v41 = *((_DWORD *)a1 + 60);
        if ( v41 )
        {
          if ( (unsigned int)(v41 - 1) <= 1 )
          {
            ++*((_DWORD *)a1 + 80);
            SetDragOutToDragInThreshold(a1);
          }
        }
        else
        {
          ++*((_DWORD *)a1 + 79);
          SetDragInThresholdAlways(a1);
        }
        goto LABEL_126;
      }
      v42 = *((_DWORD *)a1 + 60);
      v43 = v11 & 0x7000;
      v44 = *v89;
      v45 = _mm_cvtsi128_si32(*v89);
      v46 = _mm_cvtsi128_si32(_mm_srli_si128(*v89, 8));
      v87 = *v89;
      if ( !v42 )
      {
        if ( v43 == 4096 )
        {
          v47 = *((_DWORD *)a1 + 6);
          v48 = v5 - v47;
          if ( v5 - v47 >= (v46 - v45) / 2 )
          {
            if ( v48 <= *((_DWORD *)a1 + 8) - v47 - (v46 - v45) / 2 )
              v48 = (v46 - v45) / 2;
            else
              v48 = v46 - v45 - *((_DWORD *)a1 + 8) + v5;
          }
          v49 = *((_DWORD *)a1 + 72);
          v11 = *((_DWORD *)a1 + 49);
          goto LABEL_95;
        }
        v50 = v46 - v45;
        v51 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
        v48 = *((_DWORD *)a1 + 73);
        if ( v51 <= v46 - v45 )
        {
          if ( v48 < v51 / 2 )
            goto LABEL_94;
          if ( v48 <= v51 / 2 )
          {
            v48 = v51 / 2;
            goto LABEL_94;
          }
        }
        else
        {
          if ( v48 < v50 / 2 )
          {
LABEL_94:
            v49 = *((_DWORD *)a1 + 74);
LABEL_95:
            v42 = 0;
            goto LABEL_107;
          }
          if ( v48 <= v51 - v50 / 2 )
          {
            v48 = v50 / 2;
            goto LABEL_94;
          }
        }
        v48 += v50 - v51;
        goto LABEL_94;
      }
      v52 = *((_DWORD *)a1 + 32) - *((_DWORD *)a1 + 30);
      v48 = *((_DWORD *)a1 + 73);
      if ( v43 == 4096 )
      {
        v53 = v46 - v45;
      }
      else
      {
        v53 = v46 - v45;
        if ( v52 <= v46 - v45 )
        {
          if ( v48 < v52 / 2 )
            goto LABEL_106;
          if ( v48 <= v52 / 2 )
          {
            v48 = v52 / 2;
            goto LABEL_106;
          }
          goto LABEL_104;
        }
      }
      if ( v48 < v53 / 2 )
      {
LABEL_106:
        v49 = *((_DWORD *)a1 + 74);
LABEL_107:
        if ( !v42 )
        {
          v72 = v5 - v45 - v48;
          v73 = v9 - v87.m128i_i32[1] - v49;
          v74 = v73 + v87.m128i_i32[3];
          v75 = v73 + v87.m128i_i32[1];
          v87.m128i_i32[3] += v73;
          v87.m128i_i32[0] = v72 + v45;
          v87.m128i_i32[2] = v72 + v46;
          v87.m128i_i32[1] += v73;
          if ( (v11 & 0x80u) != 0 )
          {
            v76 = v11 & 0xFFFFFF7F;
            *((_DWORD *)a1 + 71) = v48;
            *((_DWORD *)a1 + 49) = v76;
            *((_DWORD *)a1 + 72) = v49;
            if ( (v76 & 0x20) != 0 )
            {
              v77 = v100;
              v100->left = v72 + v45;
              v77->top = v75;
              v77->right = v72 + v46;
              v77->bottom = v74;
              v78 = a5;
              *v6 |= 1u;
              *v78 = (struct tagCHECKPOINT *)v89;
            }
          }
          ++*((_DWORD *)a1 + 79);
          SetDragInThresholdAlways(a1);
          goto LABEL_124;
        }
        v54 = v42 - 1;
        if ( v54 )
        {
          v55 = v54 - 1;
          if ( v55 )
          {
            if ( v55 != 1 )
            {
LABEL_125:
              *(__m128i *)((char *)a1 + 40) = v44;
LABEL_126:
              *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
              *((_DWORD *)a1 + 70) &= ~2u;
              *((_DWORD *)a1 + 60) = 4;
              DisableTemporayMetricsOverrides(a1);
              MakeArrangedStateObservable(v79);
              v80 = *((_DWORD *)a1 + 49);
              *((_DWORD *)a1 + 61) = 0;
              if ( (v80 & 0x6000000) == 0x6000000 )
              {
                *v6 |= 4u;
                *((_DWORD *)a1 + 49) = v80 & 0xFDFFFFFF;
              }
              return 1LL;
            }
            v56 = v5 - v45 - v48;
            v57 = v9 - v87.m128i_i32[1] - v49;
            v87.m128i_i32[0] = v56 + v45;
            v87.m128i_i32[3] += v57;
            v87.m128i_i32[1] += v57;
            v87.m128i_i32[2] = v56 + v46;
LABEL_124:
            v44 = v87;
            goto LABEL_125;
          }
          v58 = *((_DWORD *)a1 + 49);
          v59 = v5 - v45 - v48;
          v60 = v9 - v87.m128i_i32[1] - v49;
          v61 = v60 + v87.m128i_i32[3];
          v87.m128i_i32[3] += v60;
          v87.m128i_i32[0] = v59 + v45;
          v87.m128i_i32[2] = v59 + v46;
          v62 = v87.m128i_i32[1] + v60;
          v87.m128i_i32[1] += v60;
          if ( (v58 & 0x80u) == 0 || (v63 = v58 & 0xFFFFFF7F, *((_DWORD *)a1 + 49) = v63, (v63 & 0x20) == 0) )
          {
LABEL_116:
            ++*((_DWORD *)a1 + 80);
            SetDragOutToDragInThreshold(a1);
            goto LABEL_124;
          }
          v64 = v100;
          v100->left = v59 + v45;
          v64->top = v62;
          v64->right = v59 + v46;
          v64->bottom = v61;
        }
        else
        {
          v66 = v5 - v45 - v48;
          v67 = v9 - v87.m128i_i32[1] - v49;
          v68 = v67 + v87.m128i_i32[3];
          v87.m128i_i32[3] += v67;
          v87.m128i_i32[0] = v66 + v45;
          v87.m128i_i32[2] = v66 + v46;
          v69 = v87.m128i_i32[1] + v67;
          v87.m128i_i32[1] += v67;
          if ( (v11 & 0x80u) == 0 )
            goto LABEL_116;
          v70 = v11 & 0xFFFFFF7F;
          *((_DWORD *)a1 + 49) = v70;
          if ( (v70 & 0x20) == 0 )
            goto LABEL_116;
          v71 = v100;
          v100->left = v66 + v45;
          v71->top = v69;
          v71->right = v66 + v46;
          v71->bottom = v68;
        }
        v65 = a5;
        *v6 |= 1u;
        *v65 = (struct tagCHECKPOINT *)v89;
        goto LABEL_116;
      }
      if ( v48 <= v52 - v53 / 2 )
      {
        v48 = v53 / 2;
        goto LABEL_106;
      }
LABEL_104:
      v48 += v53 - v52;
      goto LABEL_106;
    }
    if ( v12 == 5 )
      goto LABEL_13;
    if ( v12 != 6 )
      return 0LL;
    if ( (v11 & 0x40000) == 0 )
    {
      CkptRestore(*((_QWORD *)a1 + 2), (struct _MOVESIZEDATA *)((char *)a1 + 120));
      v11 = *((_DWORD *)a1 + 49) | 0x40000;
      *((_DWORD *)a1 + 49) = v11;
      if ( (v11 & 0x1000000) != 0 )
        *(__m128i *)((char *)a1 + 152) = *v89;
    }
    if ( (v11 & 0x6000000) == 0x4000000 )
    {
      if ( !(unsigned int)MoveRect((__int64)a1, v7, 0) )
        return 0LL;
      *v6 |= 8u;
      *((_DWORD *)a1 + 49) |= 0x2000000u;
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v82 = v90;
    v94 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v94;
    v95 = v82;
    if ( v82 )
      HMLockObject(v82);
    v83 = v97;
    xxxSizeRectFromHitTarget(a1, v82, v97);
    if ( v83 )
    {
      if ( v83 == 1 )
      {
        v84 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
      }
      else
      {
        if ( v83 != 2 )
        {
          if ( v83 == 3 )
          {
            *((_DWORD *)a1 + 49) &= 0xFFFFFCFF;
            *((_DWORD *)a1 + 70) &= ~2u;
          }
          goto LABEL_149;
        }
        v84 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
      }
      *((_DWORD *)a1 + 49) = v84;
    }
    else
    {
      v85 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v85 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v85;
      if ( (v85 & 0x4000000) == 0 )
        *v6 |= 2u;
    }
    SetDragInToDragOutThreshold(a1);
LABEL_149:
    MakeArrangedStateObservable(a1);
    *((_DWORD *)a1 + 60) = v83;
    SetCurrentHitTargetMonitor(a1, v82, 1);
    goto LABEL_71;
  }
  if ( !*((_DWORD *)a1 + 60) && !v14 && (v11 & 0x300) == 0x300 && (((v11 & 0x38000) - 0x20000) & 0xFFFF7FFF) == 0 )
  {
    v21 = v92;
    v22 = v90;
    v23 = v92;
    do
    {
      v86 = *GetMonitorWorkRectForWindow(&v93, (__int64)v22, *((const struct tagWND **)a1 + 2));
      if ( IsDockTargetActive((__int64)a1, (__int64)v22, 0) && (int)v86 <= v5 && v5 < SDWORD2(v86) )
        v21 = v22;
      if ( IsDockTargetActive(v25, v24, 3) && (int)v86 <= v5 && v5 < SDWORD2(v86) )
        v23 = v22;
      v27 = *((_QWORD *)v22 + 35);
      if ( v27 == gpDispInfo + 144LL )
        v27 = *(_QWORD *)(gpDispInfo + 144LL);
      v22 = (struct tagMONITOR *)(v27 - 280);
    }
    while ( v22 != *((struct tagMONITOR **)a1 + 29) );
    *(_QWORD *)&v93 = v23;
    v20 = v23 == 0LL;
    v7 = v98;
    v92 = v21;
    v6 = v99;
    if ( !v20 )
    {
      v28 = v92;
      if ( v92 )
      {
        v29 = *(_OWORD *)((char *)a1 + 40);
        MoveRect((__int64)a1, v98, v26);
        if ( (unsigned int)VerticalSizeRectFromHitTarget((__int64)a1, (__int64)v28, 0, v93, v5) )
        {
          *((_DWORD *)a1 + 60) = 0;
          SetCurrentHitTargetMonitor(a1, v28, 1);
          result = v30;
          *((_DWORD *)a1 + 61) = v30 + 1;
          return result;
        }
        if ( (*((_DWORD *)a1 + 49) & 0x2000000) != 0 )
          *(_OWORD *)((char *)a1 + 72) = v29;
        else
          *(_OWORD *)((char *)a1 + 40) = v29;
      }
    }
  }
  if ( (*((_DWORD *)a1 + 49) & 0x6000000) != 0x4000000 )
  {
LABEL_55:
    v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v32 = v90;
    v94 = *(_QWORD *)(v31 + 416);
    *(_QWORD *)(v31 + 416) = &v94;
    v95 = v32;
    if ( v32 )
      HMLockObject(v32);
    v33 = v97;
    xxxSizeRectFromHitTarget(a1, v32, v97);
    if ( v33 )
    {
      if ( v33 == 1 )
      {
        v34 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x100;
        goto LABEL_62;
      }
      if ( v33 == 2 )
      {
        v34 = *((_DWORD *)a1 + 49) & 0xFFFFFCFF | 0x200;
LABEL_62:
        *((_DWORD *)a1 + 49) = v34;
        if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 31LL) & 1) != 0 )
        {
          v35 = v100;
          v36 = *(struct tagRECT *)((char *)a1 + 40);
          *v6 |= 1u;
          *v35 = v36;
          *a5 = (struct tagCHECKPOINT *)v89;
        }
        SetDragOutThresholdAlways(a1);
        goto LABEL_69;
      }
    }
    else
    {
      v37 = *((_DWORD *)a1 + 49);
      *((_DWORD *)a1 + 70) &= ~2u;
      v37 &= 0xFFFFFCFF;
      *((_DWORD *)a1 + 49) = v37;
      if ( (v37 & 0x4000000) == 0 )
        *v6 |= 2u;
      SetDragInToDragOutThreshold(a1);
    }
    if ( v33 == 3 )
    {
LABEL_70:
      *((_DWORD *)a1 + 60) = v33;
      SetCurrentHitTargetMonitor(a1, v32, 1);
      *((_DWORD *)a1 + 61) = 2;
LABEL_71:
      ThreadUnlock1(v39, v38, v40);
      return 1LL;
    }
LABEL_69:
    MakeArrangedStateObservable(a1);
    goto LABEL_70;
  }
  if ( (unsigned int)MoveRect((__int64)a1, v7, 0) )
  {
    *v6 |= 8u;
    *((_DWORD *)a1 + 49) |= 0x2000000u;
    goto LABEL_55;
  }
  return 0LL;
}
