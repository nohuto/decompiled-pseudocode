/*
 * XREFs of ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040
 * Callers:
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     _CalcVisRgn@16 @ 0x36880 (_CalcVisRgn@16.c)
 * Callees:
 *     _GreSubtractRgnRectList@16 @ 0x24CD0 (_GreSubtractRgnRectList@16.c)
 *     _IsDpiBoundaryBetweenWindows@8 @ 0x2B03C (_IsDpiBoundaryBetweenWindows@8.c)
 *     _GetMonitorRectForDpiContext@8 @ 0x3356A (_GetMonitorRectForDpiContext@8.c)
 *     _PhysicalToLogicalInPlaceRgn@8 @ 0x36FCA (_PhysicalToLogicalInPlaceRgn@8.c)
 *     _PhysicalToLogicalInPlaceRgnWorker@12 @ 0x36FD6 (_PhysicalToLogicalInPlaceRgnWorker@12.c)
 *     _PhysicalToLogicalInPlaceRect@8 @ 0x37E2C (_PhysicalToLogicalInPlaceRect@8.c)
 *     ?ExcludeWindowRects@@YGHPAUtagWND@@00PAUtagRECT@@PAU_CalcVisRgnData@@PAH@Z @ 0x8D78E (-ExcludeWindowRects@@YGHPAUtagWND@@00PAUtagRECT@@PAU_CalcVisRgnData@@PAH@Z.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12 (_LogicalToPhysicalInPlaceRgnWorker@12.c)
 *     ?GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z @ 0xA3A82 (-GetWindowCoordinateSpaceDpi@@YGGPAUtagWND@@@Z.c)
 *     ?ResizeVisExcludeMemory@@YGHPAU_CalcVisRgnData@@@Z @ 0xBFBBA (-ResizeVisExcludeMemory@@YGHPAU_CalcVisRgnData@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??9?$RedirectedFieldleft@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z @ 0x14FA99 (--9-$RedirectedFieldleft@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z.c)
 *     ??9?$RedirectedFieldtop@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z @ 0x14FAB0 (--9-$RedirectedFieldtop@J@RedirectedRecttagMONITORrcMonitorReal@tagMONITOR@@QBEEABJ@Z.c)
 *     _DpiRectContainsRectWithSubpixel@24 @ 0x150EDA (_DpiRectContainsRectWithSubpixel@24.c)
 *     _DpiRectIntersectsRectWithSubpixel@24 @ 0x150F7B (_DpiRectIntersectsRectWithSubpixel@24.c)
 */

int __userpurge CalcVisRgnWorker@<eax>(
        HRGN *a1@<edx>,
        struct tagRECT *a2@<ecx>,
        struct tagWND *const a3,
        HRGN *a4,
        unsigned int a5)
{
  LONG v6; // ebx
  LONG right; // eax
  LONG bottom; // edx
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned __int16 WindowCoordinateSpaceDpi; // si
  int v16; // eax
  INT *MonitorRectForDpiContext; // eax
  LONG top; // edx
  LONG v19; // eax
  LONG v20; // eax
  HRGN v21; // edi
  HRGN v22; // esi
  int v23; // ebx
  HRGN v24; // eax
  char v25; // dl
  LONG v26; // esi
  char v27; // al
  struct tagRECT *v28; // edx
  int v29; // eax
  HRGN v30; // ecx
  _DWORD *v31; // edi
  _DWORD *v32; // esi
  struct _RECTL *v33; // ebx
  int v34; // ecx
  HRGN v35; // ebx
  int v36; // eax
  int v37; // edi
  LONG v38; // eax
  unsigned int v39; // edx
  int v40; // edx
  struct _RECTL *v41; // ecx
  int v42; // eax
  int v43; // ebx
  LONG left; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // esi
  int v50; // ecx
  int v51; // eax
  struct _RECTL *v52; // ebx
  unsigned __int16 v53; // si
  int v54; // eax
  INT *v55; // eax
  _DWORD *v56; // ecx
  LONG *p_bottom; // esi
  struct tagRECT *v58; // edx
  LONG v59; // ecx
  LONG v60; // eax
  LONG v61; // ecx
  LONG v62; // eax
  _DWORD *v63; // ecx
  int v64; // eax
  LONG v65; // eax
  int v66; // eax
  int v67; // edx
  struct _RECTL *v68; // eax
  LONG v69; // ebx
  struct _RECTL *v70; // edi
  int v71; // eax
  _DWORD *v72; // ecx
  HRGN v73; // ecx
  HRGN v74; // edi
  HRGN EmptyRgn; // eax
  HRGN v76; // ecx
  int v77; // ebx
  _BYTE *v78; // esi
  LONG v79; // eax
  int v80; // ecx
  unsigned int v81; // edx
  unsigned int v82; // esi
  int v83; // ecx
  int v84; // eax
  HRGN v85; // esi
  HRGN v86; // edi
  void (__stdcall *v87)(HRGN); // esi
  HRGN *v88; // ebx
  struct tagRECT *v89; // edx
  int v90; // ecx
  int v91; // edi
  int v92; // ebx
  _DWORD *v93; // eax
  struct tagRECT *v94; // esi
  int v95; // ecx
  int v96; // edx
  LONG v97; // eax
  struct tagRECT *v98; // ebx
  HRGN v99; // esi
  int v100; // ebx
  BOOL v101; // esi
  int v102; // esi
  HRGN v104; // [esp-4h] [ebp-2FCh]
  struct tagWND *v105; // [esp+0h] [ebp-2F8h]
  struct tagWND *v106; // [esp+0h] [ebp-2F8h]
  struct tagWND *v107; // [esp+0h] [ebp-2F8h]
  int *v108; // [esp+4h] [ebp-2F4h]
  int v109; // [esp+Ch] [ebp-2ECh] BYREF
  struct tagRECT *v110; // [esp+10h] [ebp-2E8h]
  struct _RECTL *v111; // [esp+14h] [ebp-2E4h]
  _BYTE *v112; // [esp+18h] [ebp-2E0h]
  HRGN v113; // [esp+1Ch] [ebp-2DCh]
  int v114; // [esp+20h] [ebp-2D8h]
  LONG v115; // [esp+24h] [ebp-2D4h]
  struct tagRECT *v116; // [esp+28h] [ebp-2D0h] BYREF
  _DWORD *v117; // [esp+2Ch] [ebp-2CCh]
  HRGN *v118; // [esp+30h] [ebp-2C8h]
  LONG v119; // [esp+34h] [ebp-2C4h] BYREF
  LONG v120; // [esp+38h] [ebp-2C0h] BYREF
  LONG v121; // [esp+3Ch] [ebp-2BCh]
  LONG v122; // [esp+40h] [ebp-2B8h]
  _DWORD *v123; // [esp+44h] [ebp-2B4h]
  struct tagRECT v124; // [esp+48h] [ebp-2B0h] BYREF
  _BYTE *v125; // [esp+58h] [ebp-2A0h]
  _BYTE *v126; // [esp+5Ch] [ebp-29Ch]
  HRGN v127; // [esp+60h] [ebp-298h]
  int v128; // [esp+64h] [ebp-294h]
  INT v129; // [esp+68h] [ebp-290h] BYREF
  _DWORD v130[3]; // [esp+6Ch] [ebp-28Ch] BYREF
  INT v131[4]; // [esp+78h] [ebp-280h] BYREF
  struct _RECTL v132; // [esp+88h] [ebp-270h] BYREF
  _BYTE v133[120]; // [esp+98h] [ebp-260h] BYREF
  _BYTE v134[484]; // [esp+110h] [ebp-1E8h] BYREF

  v118 = a1;
  v128 = 0;
  v110 = a2;
  memset(v133, 0, sizeof(v133));
  v6 = 0;
  v112 = 0;
  memset(&v124.top, 0, 12);
  v126 = 0;
  right = a2[3].right;
  v113 = 0;
  v127 = 0;
  v115 = 0;
  if ( right )
  {
    bottom = a2->bottom;
    v9 = 0;
    if ( bottom )
    {
      v10 = *(_DWORD *)(bottom + 4);
      if ( v10 )
        v9 = *(_DWORD *)(v10 + 12);
    }
    if ( right != v9 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(right + 20) + 184);
      v12 = *(_DWORD *)(a2[1].top + 184);
      if ( (((v11 >> 8) ^ (v12 >> 8)) & 0x1FF) != 0
        || ((v12 & 0xF) != 2 || (v12 & 0x20000000) == 0 ? (v13 = 0) : (v13 = 1),
            (v11 & 0xF) != 2 || (v11 & 0x20000000) == 0 ? (v14 = 0) : (v14 = 1),
            v13 != v14) )
      {
        WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi(v105);
        if ( WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi(v106)
          || (v16 = ValidateHmonitorNoRip(*(_DWORD *)(a2[1].top + 164))) != 0
          && ((MonitorRectForDpiContext = GetMonitorRectForDpiContext(v16, *(_DWORD *)(a2[1].top + 184), &v129),
               v119 = *MonitorRectForDpiContext,
               v120 = MonitorRectForDpiContext[1],
               v121 = MonitorRectForDpiContext[2],
               v122 = MonitorRectForDpiContext[3],
               (unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldleft<long>::operator!=(&v119))
           || (unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldtop<long>::operator!=(&v120)) )
        {
          v6 = 1;
          v115 = 1;
        }
      }
    }
  }
  top = a2[1].top;
  v124.left = v6;
  if ( ((unsigned __int8)a3 & 1) != 0 )
  {
    v132.left = *(_DWORD *)(top + 52);
    v132.top = *(_DWORD *)(top + 56);
    v132.right = *(_DWORD *)(top + 60);
    v19 = *(_DWORD *)(top + 64);
LABEL_34:
    v132.bottom = v19;
    goto LABEL_35;
  }
  v132 = *(struct _RECTL *)(top + 68);
  if ( v132.left <= *(_DWORD *)(top + 52) )
    v132.left = *(_DWORD *)(top + 52);
  if ( v132.right >= *(_DWORD *)(top + 60) )
    v132.right = *(_DWORD *)(top + 60);
  if ( v132.left >= v132.right )
    goto LABEL_33;
  if ( v132.top <= *(_DWORD *)(top + 56) )
    v132.top = *(_DWORD *)(top + 56);
  if ( v132.bottom >= *(_DWORD *)(top + 64) )
    v132.bottom = *(_DWORD *)(top + 64);
  if ( v132.top >= v132.bottom )
  {
LABEL_33:
    v19 = 0;
    memset(&v132, 0, 12);
    goto LABEL_34;
  }
LABEL_35:
  v20 = a2->bottom;
  v21 = (HRGN)a2[3].right;
  v22 = (HRGN)v110;
  v109 = (int)v110;
  v23 = *(_DWORD *)(*(_DWORD *)(v20 + 4) + 12);
  v123 = (_DWORD *)v23;
  v24 = *(HRGN *)(v23 + 56);
  v117 = v24;
  if ( !v21 )
    goto LABEL_251;
  if ( v21 != v24 )
  {
    while ( 1 )
    {
      v41 = (struct _RECTL *)(v21 + 14);
      v111 = (struct _RECTL *)(v21 + 14);
      if ( *((HRGN *)v21 + 14) == v24 && (*(_WORD *)(*((_DWORD *)v21 + 5) + 30) & 0x3FFF) != 0x29D )
        goto LABEL_251;
      v25 = (char)a3;
      if ( ((unsigned int)a3 & 0x1004000) != 0 && (*(_WORD *)(*((_DWORD *)v21 + 5) + 30) & 0x3FFF) == 0x29D )
        goto LABEL_39;
      if ( ((unsigned __int16)a3 & 0x4000) != 0 )
      {
        v42 = *(_DWORD *)(*((_DWORD *)v22 + 5) + 16);
        if ( (v42 & 0x20080000) != 0 && ((v42 & 0x2000000) == 0 || v21 == (HRGN)v23) )
          goto LABEL_39;
      }
      if ( ((unsigned int)a3 & 0x8000000) != 0 && (*(_WORD *)(*((_DWORD *)v21 + 5) + 30) & 0x3FFF) == 0x29D )
      {
        if ( IsWindowDesktopComposed(v21) )
          goto LABEL_38;
        v41 = v111;
      }
      v43 = *((_DWORD *)v21 + 5);
      if ( *(_DWORD *)(v43 + 108) )
        v128 = 1;
      if ( v115 )
        goto LABEL_93;
      left = v41->left;
      if ( !v41->left )
        goto LABEL_93;
      v45 = *((_DWORD *)v21 + 3);
      v46 = 0;
      if ( v45 )
      {
        v47 = *(_DWORD *)(v45 + 4);
        if ( v47 )
          v46 = *(_DWORD *)(v47 + 12);
      }
      if ( left == v46 )
        goto LABEL_93;
      v48 = *(_DWORD *)(v43 + 184);
      v49 = *(_DWORD *)(*(_DWORD *)(left + 20) + 184);
      if ( (((v49 >> 8) ^ (v48 >> 8)) & 0x1FF) == 0 )
      {
        v50 = (v48 & 0xF) == 2 && (v48 & 0x20000000) != 0;
        v51 = (v49 & 0xF) == 2 && (v49 & 0x20000000) != 0;
        if ( v50 == v51 )
          break;
      }
      v52 = v111;
      v53 = GetWindowCoordinateSpaceDpi(v105);
      if ( v53 != GetWindowCoordinateSpaceDpi(v107)
        || (v54 = ValidateHmonitorNoRip(*(_DWORD *)(*((_DWORD *)v21 + 5) + 164))) != 0
        && ((v55 = GetMonitorRectForDpiContext(v54, *(_DWORD *)(*((_DWORD *)v21 + 5) + 184), v131),
             v129 = *v55,
             v130[0] = v55[1],
             v130[1] = v55[2],
             v130[2] = v55[3],
             (unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldleft<long>::operator!=(&v129))
         || (unsigned __int8)tagMONITOR::RedirectedRecttagMONITORrcMonitorReal::RedirectedFieldtop<long>::operator!=(v130)) )
      {
        v115 = 1;
        v124.left = 1;
      }
      v22 = (HRGN)v109;
LABEL_94:
      v56 = (_DWORD *)*((_DWORD *)v21 + 5);
      v119 = v56[17];
      v120 = v56[18];
      v121 = v56[19];
      v122 = v56[20];
      if ( v115 )
      {
        p_bottom = &v110[7].bottom;
        if ( DpiRectContainsRectWithSubpixel((float *)v21, (int)&v132, (int)&v110[7].bottom, v110) )
        {
          v58 = v110;
          goto LABEL_110;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v21, &v119, 0);
        PhysicalToLogicalInPlaceRectWithSubpixel(v110, &v119, 0);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v22, &v119);
      }
      v59 = v132.left;
      if ( v132.left <= v119 )
      {
        v59 = v119;
        v132.left = v119;
      }
      v60 = v132.right;
      if ( v132.right >= v121 )
      {
        v60 = v121;
        v132.right = v121;
      }
      if ( v59 >= v60 )
        goto LABEL_250;
      v61 = v132.top;
      if ( v132.top <= v120 )
      {
        v61 = v120;
        v132.top = v120;
      }
      v62 = v132.bottom;
      if ( v132.bottom >= v122 )
      {
        v62 = v122;
        v132.bottom = v122;
      }
      if ( v61 >= v62 )
      {
LABEL_250:
        memset(&v132, 0, sizeof(v132));
        goto LABEL_251;
      }
      v58 = v110;
      p_bottom = &v110[7].bottom;
LABEL_110:
      v63 = (_DWORD *)*((_DWORD *)v21 + 5);
      v119 = v63[13];
      v120 = v63[14];
      v121 = v63[15];
      v122 = v63[16];
      if ( v115 )
      {
        if ( DpiRectContainsRectWithSubpixel((float *)v21, (int)&v132, (int)p_bottom, v58) )
          goto LABEL_124;
        LogicalToPhysicalInPlaceRectWithSubpixel(v21, &v119, 0);
        PhysicalToLogicalInPlaceRectWithSubpixel(v110, &v119, 0);
      }
      else
      {
        PhysicalToLogicalInPlaceRect(v109, &v119);
      }
      if ( v132.left <= v119 )
        v132.left = v119;
      if ( v132.right >= v121 )
        v132.right = v121;
      if ( v132.left >= v132.right )
        goto LABEL_250;
      if ( v132.top <= v120 )
        v132.top = v120;
      if ( v132.bottom >= v122 )
        v132.bottom = v122;
      if ( v132.top >= v132.bottom )
        goto LABEL_250;
LABEL_124:
      v24 = (HRGN)v117;
      v22 = v21;
      v21 = (HRGN)v52->left;
      v109 = (int)v22;
      if ( v21 == (HRGN)v117 )
        goto LABEL_38;
      v23 = (int)v123;
    }
    v22 = (HRGN)v109;
LABEL_93:
    v52 = v111;
    goto LABEL_94;
  }
  if ( (*(_WORD *)(top + 30) & 0x3FFF) != 0x29D )
    goto LABEL_251;
LABEL_38:
  v25 = (char)a3;
LABEL_39:
  v124.bottom = 30;
  v126 = v133;
  v26 = 0;
  v112 = v133;
  v125 = v133;
  v27 = v25;
  v28 = v110;
  v29 = v27 & 0x10;
  v30 = (HRGN)v110;
  v124.right = 0;
  v116 = v110;
  v31 = (_DWORD *)v110[3].right;
  v114 = (int)v31;
  if ( v31 != v117 )
  {
    v32 = v117;
    v33 = (struct _RECTL *)((unsigned __int16)a3 & 0x4000);
    v111 = v33;
    while ( 1 )
    {
      if ( v33 )
      {
        v34 = *((_DWORD *)v30 + 5);
        if ( (*(_BYTE *)(v34 + 19) & 0x20) != 0 && ((*(_DWORD *)(v34 + 16) & 0x2000000) == 0 || v31 == v123) )
          goto LABEL_158;
        v30 = (HRGN)v116;
      }
      if ( !v29 )
        goto LABEL_157;
      v35 = (HRGN)v31[15];
      if ( v35 == v30 || (v36 = 0, v109 = 0, !v35) )
      {
        v33 = v111;
        goto LABEL_157;
      }
      while ( v35 != v30 )
      {
        v37 = *((_DWORD *)v35 + 5);
        if ( !v36 )
        {
          v38 = v28[1].top;
          v39 = *(_DWORD *)(v38 + 184);
          if ( *(_DWORD *)(v38 + 164) == *(_DWORD *)(v37 + 164) )
          {
            v113 = *(HRGN *)(v37 + 184);
            if ( (((v39 >> 8) ^ ((unsigned int)v113 >> 8)) & 0x1FF) == 0 )
            {
              v40 = (v39 & 0xF) == 2 && (v39 & 0x20000000) != 0;
              v64 = ((unsigned __int8)v113 & 0xF) == 2 && ((unsigned int)v113 & 0x20000000) != 0;
              if ( v40 == v64 )
              {
LABEL_132:
                v36 = v109;
LABEL_133:
                v28 = v110;
                goto LABEL_134;
              }
            }
          }
          else if ( (v39 & 0xF) == 2 && (*(_DWORD *)(v37 + 184) & 0xF) == 2 )
          {
            goto LABEL_132;
          }
          v36 = 1;
          v109 = 1;
          goto LABEL_133;
        }
LABEL_134:
        if ( (*(_BYTE *)(v37 + 23) & 0x10) != 0 && (*(_BYTE *)(v37 + 18) & 8) == 0 && (*(_BYTE *)(v37 + 16) & 0x20) == 0 )
        {
          if ( v36 )
          {
            if ( DpiRectIntersectsRectWithSubpixel((float *)v35, (int)&v132, (int)&v28[7].bottom, v28) )
              goto LABEL_147;
          }
          else if ( v132.left < *(_DWORD *)(v37 + 60)
                 && *(_DWORD *)(v37 + 52) < v132.right
                 && v132.top < *(_DWORD *)(v37 + 64)
                 && *(_DWORD *)(v37 + 56) < v132.bottom )
          {
LABEL_147:
            if ( *(_DWORD *)(v37 + 52) < *(_DWORD *)(v37 + 60) && *(_DWORD *)(v37 + 56) < *(_DWORD *)(v37 + 64) )
            {
              v65 = v124.right;
              if ( v124.right == v124.bottom )
              {
                if ( !ResizeVisExcludeMemory(v105) )
                  goto LABEL_166;
                v112 = v125;
                v65 = v124.right;
              }
              *(_DWORD *)&v112[4 * v65] = v35;
              v124.right = v65 + 1;
            }
          }
        }
        v35 = (HRGN)*((_DWORD *)v35 + 12);
        v36 = v109;
        v28 = v110;
        v30 = (HRGN)v116;
        if ( !v35 )
          break;
      }
      v31 = (_DWORD *)v114;
      v33 = v111;
      v32 = v117;
      if ( v36 )
      {
        v115 = 1;
        v124.left = 1;
      }
LABEL_157:
      v66 = v31[5];
      v30 = (HRGN)v31;
      v31 = (_DWORD *)v31[14];
      v116 = (struct tagRECT *)v30;
      v114 = (int)v31;
      v29 = *(_BYTE *)(v66 + 23) & 4;
      if ( v31 == v32 )
      {
LABEL_158:
        v26 = v124.right;
        v113 = v127;
        break;
      }
    }
  }
  if ( ((unsigned __int8)a3 & 8) != 0 && v28[3].bottom )
  {
    if ( !ExcludeWindowRects(0, (struct tagWND *)&v132, (struct tagWND *)&v124.top, &v124, v105, v108) )
    {
LABEL_166:
      v113 = v127;
      v112 = v125;
      goto LABEL_251;
    }
    v26 = v124.right;
    v115 = v124.left;
    v113 = v127;
    v112 = v125;
  }
  if ( v26 > 0 )
  {
    v67 = 0;
    v114 = 0;
    v109 = 0;
    if ( v26 <= 30 )
    {
      v68 = (struct _RECTL *)v134;
      v111 = (struct _RECTL *)v134;
LABEL_169:
      v69 = 0;
      v70 = v68 - 1;
      do
      {
        v71 = *(_DWORD *)&v112[4 * v69];
        v72 = *(_DWORD **)(v71 + 20);
        if ( v72[27] )
        {
          v73 = (HRGN)v109;
          *(_DWORD *)&v112[4 * v109] = v71;
          v109 = (int)v73 + 1;
        }
        else
        {
          v70[1].left = v72[13];
          v70[1].top = v72[14];
          v70[1].right = v72[15];
          v70[1].bottom = v72[16];
          ++v70;
          v114 = v67 + 1;
          if ( v115 )
          {
            v123 = *(_DWORD **)&v112[4 * v69];
            if ( IsDpiBoundaryBetweenWindows((int)v110, (int)v123) )
            {
              LogicalToPhysicalInPlaceRectWithSubpixel(v123, v70, 0);
              PhysicalToLogicalInPlaceRectWithSubpixel(v110, v70, 0);
            }
          }
        }
        v67 = v114;
        ++v69;
      }
      while ( v69 < v26 );
      v74 = (HRGN)v109;
      EmptyRgn = *v118;
      if ( !*v118 )
      {
        EmptyRgn = (HRGN)CreateEmptyRgn();
        *v118 = EmptyRgn;
      }
      if ( v114 )
        GreSubtractRgnRectList(EmptyRgn, &v132, v111, v114);
      else
        SetRectRgnIndirect(EmptyRgn, &v132);
      v76 = v113;
      if ( !v113 )
      {
        v76 = (HRGN)CreateEmptyRgn();
        v113 = v76;
      }
      v77 = 0;
      if ( (int)v74 > 0 )
      {
        v78 = v112;
        while ( 1 )
        {
          SetRectRgnIndirect(v76, *(_DWORD *)(*(_DWORD *)&v78[4 * v77] + 20) + 52);
          GreCombineRgn(v113, v113, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v78[4 * v77] + 20) + 108), 1);
          if ( v115 )
          {
            v123 = *(_DWORD **)&v78[4 * v77];
            v79 = v110[1].top;
            v80 = v123[5];
            v81 = *(_DWORD *)(v79 + 184);
            if ( *(_DWORD *)(v79 + 164) == *(_DWORD *)(v80 + 164) )
            {
              v82 = *(_DWORD *)(v80 + 184);
              if ( (((v81 >> 8) ^ (v82 >> 8)) & 0x1FF) != 0
                || ((v81 & 0xF) != 2 || (v81 & 0x20000000) == 0 ? (v83 = 0) : (v83 = 1),
                    (v82 & 0xF) != 2 || (v82 & 0x20000000) == 0 ? (v84 = 0) : (v84 = 1),
                    v83 != v84) )
              {
LABEL_203:
                v116 = (struct tagRECT *)v113;
                v85 = 0;
                v86 = 0;
                if ( LogicalToPhysicalInPlaceRgnWorker(v123, &v116, 1) )
                  v85 = (HRGN)v116;
                if ( PhysicalToLogicalInPlaceRgnWorker((struct tagWND *)v110, (HRGN *)&v116, 1) )
                  v86 = (HRGN)v116;
                if ( v116 != (struct tagRECT *)v113 )
                  GreCombineRgn(v113, v116, 0, 5);
                if ( v85 )
                {
                  v104 = v85;
                  v87 = (void (__stdcall *)(HRGN))GreDeleteObject;
                  GreDeleteObject(v104);
                }
                else
                {
                  v87 = (void (__stdcall *)(HRGN))GreDeleteObject;
                }
                if ( v86 )
                  v87(v86);
                v74 = (HRGN)v109;
              }
              v78 = v112;
              goto LABEL_216;
            }
            if ( (v81 & 0xF) != 2 || (*(_DWORD *)(v80 + 184) & 0xF) != 2 )
              goto LABEL_203;
          }
LABEL_216:
          if ( GreCombineRgn(*v118, *v118, v113, 4) == 1 )
            break;
          if ( ++v77 >= (int)v74 )
            break;
          v76 = v113;
        }
      }
      if ( v111 != (struct _RECTL *)v134 )
        Win32FreePool(v111);
      v88 = v118;
      goto LABEL_221;
    }
    v68 = (struct _RECTL *)Win32AllocPoolWithQuota(16 * v26, 1769370453);
    v111 = v68;
    if ( v68 )
    {
      v67 = 0;
      goto LABEL_169;
    }
LABEL_251:
    SetOrCreateRectRgnIndirectPublic(v118, _gZero);
    v102 = 0;
    goto LABEL_252;
  }
  if ( *(char *)(v110[1].top + 11) < 0 )
    memset(&v132, 0, sizeof(v132));
  v88 = v118;
  if ( !SetOrCreateRectRgnIndirectPublic(v118, &v132) )
    goto LABEL_251;
LABEL_221:
  v89 = v110;
  v90 = *(_DWORD *)(v110[1].top + 108);
  if ( v90 )
  {
    GreCombineRgn(*v88, *v88, v90, 1);
    v89 = v110;
  }
  if ( v128 )
  {
    v91 = v89[3].right;
    v92 = 0;
    v93 = v117;
    v94 = v89;
    v114 = 0;
    if ( (_DWORD *)v91 != v117 )
    {
      while ( 1 )
      {
        v95 = *(_DWORD *)(v91 + 20);
        v96 = *(_DWORD *)(v95 + 108);
        if ( !v96 )
          goto LABEL_248;
        v97 = v94[1].top;
        if ( (*(_BYTE *)(v97 + 18) & 8) != 0 && (*(_BYTE *)(v97 + 144) & 0x20) == 0 )
          break;
        if ( ((unsigned int)a3 & 0x1000000) != 0 )
        {
          v114 = 1;
LABEL_236:
          if ( (*(_WORD *)(v95 + 30) & 0x3FFF) == 0x29D )
            goto LABEL_249;
          goto LABEL_237;
        }
        if ( v92 )
          goto LABEL_236;
LABEL_237:
        v98 = v110;
        v109 = v96;
        if ( IsDpiBoundaryBetweenWindows((int)v110, v91) )
        {
          v99 = 0;
          if ( LogicalToPhysicalInPlaceRgnWorker(v91, &v109, 1) )
            v99 = (HRGN)v109;
          v100 = PhysicalToLogicalInPlaceRgnWorker((struct tagWND *)v98, (HRGN *)&v109, 1);
          if ( v100 && v99 )
            GreDeleteObject(v99);
        }
        else
        {
          v100 = PhysicalToLogicalInPlaceRgn();
        }
        v101 = GreCombineRgn(*v118, *v118, v109, 1) == 1;
        if ( v100 )
          GreDeleteObject(v109);
        if ( v101 )
          goto LABEL_249;
        v92 = v114;
        v93 = v117;
LABEL_248:
        v94 = (struct tagRECT *)v91;
        v91 = *(_DWORD *)(v91 + 56);
        if ( (_DWORD *)v91 == v93 )
          goto LABEL_249;
      }
      v114 = 1;
      goto LABEL_236;
    }
  }
LABEL_249:
  v102 = 1;
LABEL_252:
  if ( v113 )
    GreDeleteObject(v113);
  if ( v124.top )
    Win32FreePool(v112);
  return v102;
}
