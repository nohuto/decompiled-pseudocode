/*
 * XREFs of ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C0072DC0
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     CalcVisRgn @ 0x1C0072BA0 (CalcVisRgn.c)
 * Callees:
 *     GreSubtractRgnRectList @ 0x1C001C910 (GreSubtractRgnRectList.c)
 *     GetMonitorRectForDpiContext @ 0x1C0023470 (GetMonitorRectForDpiContext.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C005166C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00516B0 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C006F2B0 (IsDpiBoundaryBetweenWindows.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1C00722EC (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1C0072304 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRect @ 0x1C0073934 (PhysicalToLogicalInPlaceRect.c)
 *     ?ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z @ 0x1C00ECA10 (-ExcludeWindowRects@@YAHPEAUtagWND@@00PEAUtagRECT@@PEAU_CalcVisRgnData@@PEAH@Z.c)
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C01097BC (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x1C010AF94 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z @ 0x1C0145744 (-ResizeVisExcludeMemory@@YAHPEAU_CalcVisRgnData@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     DpiRectContainsRectWithSubpixel @ 0x1C01E5994 (DpiRectContainsRectWithSubpixel.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x1C01E5A90 (DpiRectIntersectsRectWithSubpixel.c)
 */

__int64 __fastcall CalcVisRgnWorker(struct tagWND *const a1, HRGN *a2, int a3)
{
  HRGN *v3; // rbx
  char v4; // di
  HRGN v5; // r13
  __int64 v6; // r8
  HRGN v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  HRGN v13; // r15
  HRGN v14; // rdi
  HRGN v15; // r9
  HRGN v16; // r12
  __int16 v17; // bx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned int v23; // edx
  unsigned int v24; // r8d
  int v25; // ecx
  int v26; // eax
  LONG left; // edx
  LONG v28; // ecx
  LONG v29; // edx
  LONG v30; // ecx
  HRGN v31; // rbx
  LONG v32; // r8d
  LONG v33; // ecx
  LONG v34; // ecx
  LONG v35; // r8d
  _QWORD *v36; // r15
  _QWORD *v37; // r8
  __int64 v38; // r12
  int v39; // ecx
  int v40; // r10d
  HRGN v41; // r14
  int v42; // eax
  HRGN v43; // rbx
  int v44; // esi
  __int64 v45; // rdx
  LONG *v46; // rdi
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  unsigned int v50; // r8d
  unsigned int v51; // r9d
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // r8
  unsigned int v57; // ebx
  LONG v59; // eax
  LONG right; // ecx
  unsigned int v61; // r8d
  unsigned int v62; // edx
  int v63; // ecx
  int v64; // eax
  LONG top; // ecx
  LONG bottom; // r8d
  struct tagWND *v67; // rdx
  int v68; // eax
  int v69; // r13d
  int v70; // r15d
  _BYTE *v71; // rax
  __int64 v72; // rdi
  HRGN v73; // rdx
  __int64 v74; // rsi
  _QWORD *v75; // r14
  __int64 v76; // rbx
  __int64 v77; // rcx
  HRGN v78; // rcx
  __int64 EmptyRgn; // rax
  _BYTE *v80; // r12
  __int64 v81; // rcx
  __int64 v82; // r14
  __int64 v83; // rbx
  int v84; // r12d
  __int64 v85; // rax
  __int64 v86; // rdi
  int v87; // esi
  __int64 v88; // rdx
  __int64 v89; // r8
  int v90; // r14d
  struct tagWND *v91; // r15
  BOOL v92; // edi
  struct tagWND *v93; // r12
  __int64 v94; // rdi
  __int64 *v95; // rbx
  __int64 v96; // r10
  __int64 v97; // rcx
  __int64 v98; // r8
  unsigned int v99; // edx
  unsigned int v100; // r9d
  int v101; // ecx
  int v102; // eax
  int v103; // ecx
  unsigned __int16 WindowCoordinateSpaceDpi; // bx
  __int64 v105; // rbx
  unsigned __int16 v107; // bx
  __int64 v108; // rbx
  int v109; // eax
  int *v110; // rbx
  HRGN v111; // rbx
  HRGN v112; // r15
  struct tagWND *v113; // rdi
  int v114; // [rsp+38h] [rbp-D0h]
  HRGN *v115; // [rsp+40h] [rbp-C8h]
  __int128 v116; // [rsp+48h] [rbp-C0h] BYREF
  HRGN v117; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v118; // [rsp+60h] [rbp-A8h]
  struct tagWND *v119; // [rsp+68h] [rbp-A0h] BYREF
  struct tagWND *v120; // [rsp+70h] [rbp-98h] BYREF
  __int64 v121; // [rsp+78h] [rbp-90h]
  HRGN v122; // [rsp+80h] [rbp-88h]
  __int128 v123; // [rsp+88h] [rbp-80h] BYREF
  __int128 v124; // [rsp+98h] [rbp-70h]
  HRGN v125; // [rsp+A8h] [rbp-60h]
  __int128 v126; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v127; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT v128; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v129[240]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v130[480]; // [rsp+1D8h] [rbp+D0h] BYREF

  v3 = a2;
  v4 = a3;
  v5 = (HRGN)a1;
  LODWORD(v118) = a3;
  v115 = a2;
  v119 = a1;
  LODWORD(v121) = 0;
  memset(v129, 0, sizeof(v129));
  v6 = *((_QWORD *)v5 + 13);
  v7 = 0LL;
  v114 = 0;
  v122 = 0LL;
  v125 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  if ( !v6 )
    goto LABEL_6;
  v8 = *((_QWORD *)v5 + 3);
  v9 = 0LL;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      v9 = *(_QWORD *)(v10 + 24);
  }
  if ( v6 == v9
    || (v61 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL),
        v62 = *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL),
        (((unsigned __int16)(v62 >> 8) ^ (unsigned __int16)(v61 >> 8)) & 0x1FF) == 0)
    && ((v62 & 0xF) != 2 || (v62 & 0x20000000) == 0 ? (v63 = 0) : (v63 = 1),
        (v61 & 0xF) != 2 || (v61 & 0x20000000) == 0 ? (v64 = 0) : (v64 = 1),
        v63 == v64) )
  {
LABEL_6:
    v11 = 0;
  }
  else
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((struct tagWND *)v5);
    if ( WindowCoordinateSpaceDpi == GetWindowCoordinateSpaceDpi(*((struct tagWND **)v5 + 13)) )
    {
      v105 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v5 + 5) + 256LL));
      if ( !v105
        || *(_QWORD *)(*(_QWORD *)(v105 + 40) + 28LL) == *(_QWORD *)GetMonitorRectForDpiContext(
                                                                      &v126,
                                                                      v105,
                                                                      *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL)) )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        v114 = 1;
      }
    }
    else
    {
      v11 = 1;
      v114 = 1;
    }
    v3 = v115;
  }
  v12 = *((_QWORD *)v5 + 5);
  LODWORD(v120) = v11;
  if ( (v4 & 1) != 0 )
  {
    v128 = *(struct tagRECT *)(v12 + 88);
  }
  else
  {
    v128 = *(struct tagRECT *)(v12 + 104);
    v59 = *(_DWORD *)(v12 + 88);
    v128.left = _mm_cvtsi128_si32((__m128i)v128);
    if ( v128.left <= v59 )
      v128.left = v59;
    right = v128.right;
    if ( v128.right >= *(_DWORD *)(v12 + 96) )
      right = *(_DWORD *)(v12 + 96);
    v128.right = right;
    if ( v128.left >= right )
      goto LABEL_118;
    top = v128.top;
    bottom = v128.bottom;
    if ( v128.top <= *(_DWORD *)(v12 + 92) )
      top = *(_DWORD *)(v12 + 92);
    v128.top = top;
    if ( v128.bottom >= *(_DWORD *)(v12 + 100) )
      bottom = *(_DWORD *)(v12 + 100);
    v128.bottom = bottom;
    if ( top >= bottom )
LABEL_118:
      v128 = 0LL;
  }
  v13 = v5;
  v14 = (HRGN)*((_QWORD *)v5 + 13);
  v15 = *(HRGN *)(*(_QWORD *)(*((_QWORD *)v5 + 3) + 8LL) + 24LL);
  v117 = v15;
  v16 = (HRGN)*((_QWORD *)v15 + 13);
  *(_QWORD *)&v126 = v16;
  if ( !v14 )
    goto LABEL_177;
  if ( v14 == v16 )
  {
    if ( (*(_WORD *)(v12 + 42) & 0x3FFF) == 0x29D )
    {
LABEL_127:
      v17 = v118;
      goto LABEL_60;
    }
    goto LABEL_177;
  }
  while ( 1 )
  {
    if ( *((HRGN *)v14 + 13) == v16 && (*(_WORD *)(*((_QWORD *)v14 + 5) + 42LL) & 0x3FFF) != 0x29D )
      goto LABEL_176;
    v17 = v118;
    if ( (v118 & 0x1004000) != 0 && (*(_WORD *)(*((_QWORD *)v14 + 5) + 42LL) & 0x3FFF) == 0x29D )
      goto LABEL_60;
    if ( (v118 & 0x4000) != 0 )
    {
      v103 = *(_DWORD *)(*((_QWORD *)v13 + 5) + 24LL);
      if ( ((v103 & 0x80000) != 0 || (v103 & 0x20000000) != 0) && ((v103 & 0x2000000) == 0 || v14 == v15) )
        goto LABEL_60;
    }
    if ( (v118 & 0x8000000) != 0 && (*(_WORD *)(*((_QWORD *)v14 + 5) + 42LL) & 0x3FFF) == 0x29D )
    {
      if ( (unsigned int)IsWindowDesktopComposed(v14) )
        break;
    }
    v18 = *((_QWORD *)v14 + 5);
    if ( *(_QWORD *)(v18 + 168) )
      LODWORD(v121) = 1;
    if ( !v114 )
    {
      v19 = *((_QWORD *)v14 + 13);
      if ( v19 )
      {
        v20 = *((_QWORD *)v14 + 3);
        v21 = 0LL;
        if ( v20 )
        {
          v22 = *(_QWORD *)(v20 + 8);
          if ( v22 )
            v21 = *(_QWORD *)(v22 + 24);
        }
        if ( v19 != v21 )
        {
          v23 = *(_DWORD *)(v18 + 288);
          v24 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL);
          if ( (((unsigned __int16)(v23 >> 8) ^ (unsigned __int16)(v24 >> 8)) & 0x1FF) != 0
            || ((v23 & 0xF) == 2 && (v23 & 0x20000000) != 0 ? (v25 = 1) : (v25 = 0),
                (v24 & 0xF) == 2 && (v24 & 0x20000000) != 0 ? (v26 = 1) : (v26 = 0),
                v25 != v26) )
          {
            v107 = GetWindowCoordinateSpaceDpi((struct tagWND *)v14);
            if ( v107 != GetWindowCoordinateSpaceDpi(*((struct tagWND **)v14 + 13))
              || (v108 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v14 + 5) + 256LL))) != 0
              && *(_QWORD *)(*(_QWORD *)(v108 + 40) + 28LL) != *(_QWORD *)GetMonitorRectForDpiContext(
                                                                            &v127,
                                                                            v108,
                                                                            *(_DWORD *)(*((_QWORD *)v14 + 5) + 288LL)) )
            {
              v114 = 1;
              LODWORD(v120) = 1;
            }
          }
        }
      }
    }
    v116 = *(_OWORD *)(*((_QWORD *)v14 + 5) + 104LL);
    if ( v114 )
    {
      v31 = v5 + 56;
      if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v116, v14 + 56, v14, &v128, v5 + 56, v5) )
        goto LABEL_45;
      LogicalToPhysicalInPlaceRectWithSubpixel((struct tagWND *)v14, (int *)&v116, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel((struct tagWND *)v5, (int *)&v116, 0LL);
    }
    else
    {
      PhysicalToLogicalInPlaceRect(v13, &v116);
    }
    left = v128.left;
    v28 = v128.right;
    if ( v128.left <= (int)v116 )
      left = v116;
    v128.left = left;
    if ( v128.right >= SDWORD2(v116) )
      v28 = DWORD2(v116);
    v128.right = v28;
    if ( left >= v28 )
      goto LABEL_175;
    v29 = v128.top;
    v30 = v128.bottom;
    if ( v128.top <= SDWORD1(v116) )
      v29 = DWORD1(v116);
    v128.top = v29;
    if ( v128.bottom >= SHIDWORD(v116) )
      v30 = HIDWORD(v116);
    v128.bottom = v30;
    if ( v29 >= v30 )
    {
LABEL_175:
      v128 = 0LL;
      goto LABEL_176;
    }
    v31 = v5 + 56;
LABEL_45:
    v116 = *(_OWORD *)(*((_QWORD *)v14 + 5) + 88LL);
    if ( v114 )
    {
      if ( (unsigned int)DpiRectContainsRectWithSubpixel(&v116, v14 + 56, v14, &v128, v31, v5) )
        goto LABEL_57;
      LogicalToPhysicalInPlaceRectWithSubpixel((struct tagWND *)v14, (int *)&v116, 0LL);
      PhysicalToLogicalInPlaceRectWithSubpixel((struct tagWND *)v5, (int *)&v116, 0LL);
    }
    else
    {
      PhysicalToLogicalInPlaceRect(v13, &v116);
    }
    v32 = v128.left;
    v33 = v128.right;
    if ( v128.left <= (int)v116 )
      v32 = v116;
    v128.left = v32;
    if ( v128.right >= SDWORD2(v116) )
      v33 = DWORD2(v116);
    v128.right = v33;
    if ( v32 >= v33 )
      goto LABEL_175;
    v34 = v128.top;
    v35 = v128.bottom;
    if ( v128.top <= SDWORD1(v116) )
      v34 = DWORD1(v116);
    v128.top = v34;
    if ( v128.bottom >= SHIDWORD(v116) )
      v35 = HIDWORD(v116);
    v128.bottom = v35;
    if ( v34 >= v35 )
      goto LABEL_175;
LABEL_57:
    v15 = v117;
    v13 = v14;
    v14 = (HRGN)*((_QWORD *)v14 + 13);
    if ( v14 == v16 )
      goto LABEL_127;
  }
  v15 = v117;
LABEL_60:
  v36 = (_QWORD *)*((_QWORD *)v5 + 13);
  v37 = (_QWORD *)v126;
  v38 = 0LL;
  *((_QWORD *)&v124 + 1) = v129;
  v39 = v17 & 0x10;
  *(_QWORD *)((char *)&v123 + 4) = 0x1E00000000LL;
  v40 = 30;
  *(_QWORD *)&v124 = v129;
  v41 = v5;
  if ( v36 != (_QWORD *)v126 )
  {
    v42 = v17 & 0x4000;
    LODWORD(v116) = v42;
    while ( 2 )
    {
      if ( !v42
        || (v55 = *((_QWORD *)v41 + 5), (*(_BYTE *)(v55 + 27) & 0x20) == 0)
        || (*(_DWORD *)(v55 + 24) & 0x2000000) != 0 && v36 != (_QWORD *)v15 )
      {
        if ( !v39 )
          goto LABEL_73;
        v43 = (HRGN)v36[14];
        if ( v43 == v41 )
          goto LABEL_73;
        v44 = 0;
        if ( !v43 )
          goto LABEL_73;
LABEL_66:
        if ( v43 == v41 )
        {
LABEL_70:
          v47 = v114;
          v37 = (_QWORD *)v126;
          if ( v44 )
            v47 = 1;
          v114 = v47;
          LODWORD(v120) = v47;
LABEL_73:
          v48 = v36[5];
          v41 = (HRGN)v36;
          v36 = (_QWORD *)v36[13];
          v39 = *(_BYTE *)(v48 + 31) & 4;
          if ( v36 != v37 )
          {
            v42 = v116;
            v15 = v117;
            continue;
          }
          break;
        }
        v45 = *((_QWORD *)v43 + 5);
        v46 = (LONG *)(v45 + 88);
        if ( !v44 )
        {
          v49 = *((_QWORD *)v5 + 5);
          v50 = *(_DWORD *)(v49 + 288);
          if ( *(_QWORD *)(v49 + 256) == *(_QWORD *)(v45 + 256) )
          {
            v51 = *(_DWORD *)(v45 + 288);
            if ( (((unsigned __int16)(v50 >> 8) ^ (unsigned __int16)(v51 >> 8)) & 0x1FF) == 0 )
            {
              v52 = (v50 & 0xF) == 2 && (v50 & 0x20000000) != 0;
              v53 = (v51 & 0xF) == 2 && (v51 & 0x20000000) != 0;
              if ( v52 == v53 )
                goto LABEL_68;
            }
          }
          else if ( (v50 & 0xF) == 2 && (*(_DWORD *)(v45 + 288) & 0xF) == 2 )
          {
            goto LABEL_68;
          }
          v44 = 1;
        }
LABEL_68:
        if ( (*(_BYTE *)(v45 + 31) & 0x10) != 0 && (*(_BYTE *)(v45 + 26) & 8) == 0 && (*(_BYTE *)(v45 + 24) & 0x20) == 0 )
        {
          if ( v44 )
          {
            v109 = DpiRectIntersectsRectWithSubpixel(v46, v43 + 56, v43, &v128, v5 + 56, v5);
            v40 = DWORD2(v123);
            if ( v109 )
            {
LABEL_92:
              if ( *v46 < v46[2] && v46[1] < v46[3] )
              {
                if ( (_DWORD)v38 == v40 )
                {
                  if ( !(unsigned int)ResizeVisExcludeMemory((struct _CalcVisRgnData *)&v123) )
                  {
                    v7 = v125;
                    goto LABEL_176;
                  }
                  LODWORD(v38) = DWORD1(v123);
                  v40 = DWORD2(v123);
                }
                v54 = (int)v38;
                v38 = (unsigned int)(v38 + 1);
                DWORD1(v123) = v38;
                *(_QWORD *)(v124 + 8 * v54) = v43;
              }
            }
          }
          else if ( v128.left < *(_DWORD *)(v45 + 96)
                 && *v46 < v128.right
                 && v128.top < *(_DWORD *)(v45 + 100)
                 && *(_DWORD *)(v45 + 92) < v128.bottom )
          {
            goto LABEL_92;
          }
        }
        v43 = (HRGN)*((_QWORD *)v43 + 11);
        if ( !v43 )
          goto LABEL_70;
        goto LABEL_66;
      }
      break;
    }
    v7 = v125;
    LOBYTE(v17) = v118;
    v122 = v125;
  }
  if ( (v17 & 8) != 0 )
  {
    v67 = (struct tagWND *)*((_QWORD *)v5 + 14);
    if ( v67 )
    {
      v68 = ExcludeWindowRects((struct tagWND *)v5, v67, 0LL, &v128, (struct _CalcVisRgnData *)&v123, (int *)&v120);
      v7 = v125;
      if ( !v68 )
        goto LABEL_176;
      v38 = DWORD1(v123);
      v114 = (int)v120;
      v122 = v125;
    }
  }
  if ( (int)v38 > 0 )
  {
    v69 = 0;
    v70 = 0;
    if ( (int)v38 > 30 )
    {
      v71 = (_BYTE *)Win32AllocPoolWithQuota(16LL * (int)v38, 1769370453LL);
      *(_QWORD *)&v116 = v71;
      if ( !v71 )
      {
LABEL_176:
        v3 = v115;
        goto LABEL_177;
      }
    }
    else
    {
      v71 = v130;
      *(_QWORD *)&v116 = v130;
    }
    v72 = v124;
    v73 = (HRGN)v71;
    v74 = v116;
    v75 = (_QWORD *)v124;
    do
    {
      v76 = v69;
      v77 = *(_QWORD *)(*(_QWORD *)v72 + 40LL);
      if ( *(_QWORD *)(v77 + 168) )
      {
        ++v70;
        *v75++ = *(_QWORD *)v72;
      }
      else
      {
        ++v69;
        *(_OWORD *)v73 = *(_OWORD *)(v77 + 88);
        v73 += 4;
        v117 = v73;
        if ( v114 )
        {
          v120 = *(struct tagWND **)v72;
          if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v119, (__int64)v120) )
          {
            v110 = (int *)(v74 + 16 * v76);
            LogicalToPhysicalInPlaceRectWithSubpixel(v120, v110, 0LL);
            PhysicalToLogicalInPlaceRectWithSubpixel(v119, v110, 0LL);
          }
          v73 = v117;
        }
      }
      v72 += 8LL;
      --v38;
    }
    while ( v38 );
    v7 = v122;
    v3 = v115;
    v78 = *v115;
    if ( !*v115 )
    {
      EmptyRgn = CreateEmptyRgn(0LL);
      *v115 = (HRGN)EmptyRgn;
      v78 = (HRGN)EmptyRgn;
    }
    if ( v69 )
    {
      v80 = (_BYTE *)v116;
      GreSubtractRgnRectList(v78, (struct _RECTL *)&v128, (struct _RECTL *)v116, v69);
    }
    else
    {
      SetRectRgnIndirect(v78, &v128);
      v80 = (_BYTE *)v116;
    }
    if ( !v7 )
    {
      v7 = (HRGN)CreateEmptyRgn(v81);
      v122 = v7;
    }
    v82 = v70;
    if ( v70 <= 0 )
    {
LABEL_154:
      if ( v80 != v130 )
        Win32FreePool(v80);
      v5 = (HRGN)v119;
LABEL_104:
      v56 = *(_QWORD *)(*((_QWORD *)v5 + 5) + 168LL);
      if ( v56 )
        GreCombineRgn(*v3, *v3, v56, 1LL);
      if ( !(_DWORD)v121 || (v83 = *((_QWORD *)v5 + 13), v84 = 0, v85 = v126, v86 = (__int64)v5, v83 == (_QWORD)v126) )
      {
LABEL_107:
        v57 = 1;
        goto LABEL_108;
      }
      v87 = v118;
      while ( 1 )
      {
        v88 = *(_QWORD *)(v83 + 40);
        if ( !*(_QWORD *)(v88 + 168) )
          goto LABEL_164;
        v89 = *(_QWORD *)(v86 + 40);
        if ( (*(_BYTE *)(v89 + 26) & 8) != 0 && (*(_DWORD *)(v89 + 232) & 0x20) == 0 )
          break;
        if ( (v87 & 0x1000000) != 0 )
        {
          v84 = 1;
LABEL_253:
          if ( (*(_WORD *)(v88 + 42) & 0x3FFF) == 0x29D )
            goto LABEL_165;
          goto LABEL_169;
        }
        if ( v84 )
          goto LABEL_253;
LABEL_169:
        v119 = *(struct tagWND **)(v88 + 168);
        if ( (unsigned int)IsDpiBoundaryBetweenWindows((__int64)v5, v83) )
        {
          v113 = 0LL;
          if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v83, &v119, 1LL) )
            v113 = v119;
          v90 = PhysicalToLogicalInPlaceRgnWorker((struct tagWND *)v5, (HRGN *)&v119, 1);
          if ( v90 && v113 )
            GreDeleteObject(v113);
        }
        else
        {
          v90 = PhysicalToLogicalInPlaceRgn(v86, (__int64)&v119);
        }
        v91 = v119;
        v92 = GreCombineRgn(*v115, *v115, v119, 1LL) == 1;
        if ( v90 )
          GreDeleteObject(v91);
        if ( v92 )
        {
LABEL_165:
          v7 = v122;
          goto LABEL_107;
        }
        v85 = v126;
LABEL_164:
        v86 = v83;
        v83 = *(_QWORD *)(v83 + 104);
        if ( v83 == v85 )
          goto LABEL_165;
      }
      v84 = 1;
      goto LABEL_253;
    }
    v93 = v119;
    v94 = 0LL;
    while ( 1 )
    {
      v95 = (__int64 *)(v124 + 8 * v94);
      SetRectRgnIndirect(v7, *(_QWORD *)(*v95 + 40) + 88LL);
      GreCombineRgn(v7, v7, *(_QWORD *)(*(_QWORD *)(*v95 + 40) + 168LL), 1LL);
      if ( v114 )
      {
        v96 = *v95;
        v97 = *((_QWORD *)v93 + 5);
        v98 = *(_QWORD *)(*v95 + 40);
        v99 = *(_DWORD *)(v97 + 288);
        if ( *(_QWORD *)(v97 + 256) == *(_QWORD *)(v98 + 256) )
        {
          v100 = *(_DWORD *)(v98 + 288);
          if ( (((unsigned __int16)(v99 >> 8) ^ (unsigned __int16)(v100 >> 8)) & 0x1FF) != 0
            || ((v99 & 0xF) != 2 || (v99 & 0x20000000) == 0 ? (v101 = 0) : (v101 = 1),
                (v100 & 0xF) != 2 || (v100 & 0x20000000) == 0 ? (v102 = 0) : (v102 = 1),
                v101 != v102) )
          {
LABEL_239:
            v117 = v7;
            v111 = 0LL;
            if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v96, &v117, 1LL) )
              v111 = v117;
            v112 = 0LL;
            if ( (unsigned int)PhysicalToLogicalInPlaceRgnWorker(v93, &v117, 1) )
              v112 = v117;
            if ( v117 != v7 )
              GreCombineRgn(v7, v117, 0LL, 5LL);
            if ( v111 )
              GreDeleteObject(v111);
            if ( v112 )
              GreDeleteObject(v112);
          }
        }
        else if ( (v99 & 0xF) != 2 || (*(_DWORD *)(v98 + 288) & 0xF) != 2 )
        {
          goto LABEL_239;
        }
      }
      v3 = v115;
      if ( (unsigned int)GreCombineRgn(*v115, *v115, v7, 4LL) != 1 && ++v94 < v82 )
        continue;
      v80 = (_BYTE *)v116;
      goto LABEL_154;
    }
  }
  if ( *(char *)(*((_QWORD *)v5 + 5) + 19LL) < 0 )
    v128 = 0LL;
  v3 = v115;
  if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(v115, &v128) )
    goto LABEL_104;
LABEL_177:
  SetOrCreateRectRgnIndirectPublic(v3, gZero);
  v57 = 0;
LABEL_108:
  if ( v7 )
    GreDeleteObject(v7);
  if ( (_DWORD)v123 )
    Win32FreePool(v124);
  return v57;
}
