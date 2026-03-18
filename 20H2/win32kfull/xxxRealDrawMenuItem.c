/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C024D304
 * Callers:
 *     xxxDrawState @ 0x1C02507A4 (xxxDrawState.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0033A54 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0033C8C (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     _DrawIconEx @ 0x1C0091C78 (_DrawIconEx.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C0093A7C (GreDecBitmapExclusiveRefCnt.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxGetWindowSmIcon @ 0x1C00C37C8 (xxxGetWindowSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C00FE72C (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023F06C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024B418 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024BC0C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     BltColor @ 0x1C025065C (BltColor.c)
 *     xxxPSMTextOut @ 0x1C0252ACC (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C025DCAC (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 */

__int64 __fastcall xxxRealDrawMenuItem(HDC a1, __int64 *a2, int a3, int a4, int a5, int a6)
{
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // rdi
  int v12; // edx
  int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rcx
  bool v16; // zf
  unsigned int DpiForSystem; // eax
  __int64 v18; // r8
  int v19; // r8d
  unsigned __int64 v20; // rax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // r8
  __int16 *OemBitmapInfoForDpi; // rax
  unsigned __int64 v31; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // ecx
  int v38; // r14d
  unsigned int v39; // r8d
  __int64 v40; // rax
  int v41; // r12d
  int DpiDependentMetric; // r14d
  int v43; // ebx
  unsigned int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  unsigned int v48; // eax
  int ObjectW; // eax
  __int64 v50; // rdx
  int v51; // r11d
  __int64 v52; // r15
  __int64 v53; // r13
  HDC CompatibleDC; // rbx
  __int64 v55; // rax
  unsigned __int8 *v56; // r9
  __int64 v57; // r10
  unsigned int v58; // r8d
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  _WORD *v65; // r15
  int v66; // ebx
  __int64 DPIMetrics; // rax
  __int64 v68; // r10
  __int64 v69; // rdx
  int v70; // r8d
  int v71; // eax
  unsigned int CharPosition; // r12d
  unsigned int v73; // r11d
  int v74; // eax
  __int64 v75; // r10
  int v76; // r13d
  int v77; // r14d
  __int64 v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // r8
  char *v81; // rax
  __int64 v82; // r9
  int v83; // r13d
  __int64 v84; // rcx
  __int64 v85; // rcx
  unsigned int v86; // esi
  __int64 v87; // rcx
  HDC v88; // r14
  __int64 v89; // rcx
  __int64 v90; // r14
  __int64 v91; // rcx
  __int64 v92; // r9
  int v93; // ebx
  unsigned int v94; // eax
  __int64 v95; // r8
  __int16 *v96; // rbx
  int v97; // esi
  int v98; // eax
  __int64 v99; // rcx
  __int64 v100; // r9
  __int64 v101; // rcx
  int v102; // ebx
  __int64 v103; // rcx
  int v105; // [rsp+70h] [rbp-90h]
  int v107; // [rsp+80h] [rbp-80h]
  int v108; // [rsp+80h] [rbp-80h]
  int v110; // [rsp+88h] [rbp-78h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  BOOL v112; // [rsp+90h] [rbp-70h]
  __int64 *v113[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v114; // [rsp+A8h] [rbp-58h]
  __int64 v115; // [rsp+B0h] [rbp-50h]
  unsigned __int8 *v116; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v117; // [rsp+C0h] [rbp-40h]
  __int64 v118; // [rsp+C8h] [rbp-38h]
  __int64 v119; // [rsp+D0h] [rbp-30h]
  __int64 v120; // [rsp+D8h] [rbp-28h]
  __int128 v121; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v122; // [rsp+F0h] [rbp-10h]
  _OWORD v123[3]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v124[28]; // [rsp+130h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v113, 0LL);
  v9 = *a2;
  v122 = 0LL;
  v10 = 0;
  v121 = 0LL;
  v112 = 0;
  v114 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v113, v9);
  v11 = a2[1];
  v12 = *(_DWORD *)(*(_QWORD *)(*v113[0] + 40) + 40LL) & 1;
  v105 = v12;
  if ( v12 )
  {
    v13 = 2;
    v14 = *v113[0];
    if ( *(int *)(*(_QWORD *)(*v113[0] + 40) + 40LL) >= 0 )
    {
      if ( a5 )
      {
        v15 = *(_QWORD *)v11;
        if ( (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 8) != 0 )
          v16 = *(_QWORD *)(v15 + 24) == 0LL;
        else
          v16 = *(_QWORD *)(v15 + 32) == 0LL;
        LOBYTE(v10) = !v16;
      }
      else
      {
        v10 = DrawMenuItemCheckMark(a1, (struct tagITEM *)v11);
      }
      v14 = *(_QWORD *)(*v113[0] + 40);
      if ( (*(_DWORD *)(v14 + 40) & 0x4000000) == 0
        || (v14 = *(_QWORD *)v11, !*(_QWORD *)(*(_QWORD *)v11 + 96LL))
        || v10 )
      {
        if ( (**(_DWORD **)v11 & 0x2000) != 0 )
        {
          v13 = 2;
        }
        else
        {
          DpiForSystem = GetDpiForSystem(v14);
          v13 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem, v18) + 2) + 4;
        }
      }
      v12 = v105;
    }
    else
    {
      v13 = 4;
    }
  }
  else
  {
    v13 = 0;
    v14 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
    if ( (_DWORD)v14 != -2147352576 )
      v112 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
    goto LABEL_102;
  if ( v10 )
  {
    v14 = *v113[0];
    if ( (*(_DWORD *)(*(_QWORD *)(*v113[0] + 40) + 40LL) & 0x4000000) != 0 )
      goto LABEL_102;
  }
  if ( a5 )
    goto LABEL_63;
  v14 = *(_QWORD *)v11;
  v19 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  v20 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v19 & 0x20000000) != 0 )
  {
    if ( v20 == 1 )
      goto LABEL_51;
    v21 = v13;
    if ( v20 > 7 )
      goto LABEL_39;
    v22 = v20 - 2;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 2;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( !v25 )
          {
            v26 = 21;
            goto LABEL_38;
          }
          if ( v25 == 1 )
          {
            v26 = 25;
            v21 = v13 + 2;
LABEL_38:
            BitBltSysBmp((__int64)a1, v21, 2, v26, 1);
LABEL_102:
            v38 = v105;
            goto LABEL_103;
          }
LABEL_39:
          if ( PrepareHDCBITSBitmap(0LL) )
          {
            v27 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v28 = GetDpiForSystem(*(_QWORD *)v11);
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v27 + 79), v28, v29);
            BltColor(
              a1,
              (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - OemBitmapInfoForDpi[3]) >> 1,
              OemBitmapInfoForDpi[2],
              OemBitmapInfoForDpi[3],
              *OemBitmapInfoForDpi,
              OemBitmapInfoForDpi[1],
              1);
          }
          goto LABEL_102;
        }
        v26 = 18;
      }
      else
      {
        v26 = 22;
        v21 = v13 + 2;
      }
    }
    else
    {
      v26 = 26;
    }
    if ( (v19 & 0x80u) != 0 )
      ++v26;
    goto LABEL_38;
  }
  if ( v20 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, (__int64 *)v113, v11, 1, v13, 0LL);
    goto LABEL_102;
  }
  if ( *(_WORD *)(gptiCurrent + 632LL) > 0x400u
    || (!*(_QWORD *)(v14 + 56) || *(_QWORD *)(v11 + 24))
    && (v12
     || (v14 = *v113[0], v11 != *(_QWORD *)(*v113[0] + 88))
     || (v14 = *v113[0], *(_DWORD *)(*(_QWORD *)(*v113[0] + 40) + 44LL) <= 1u)
     || (v14 = *(_QWORD *)(*(_QWORD *)(*v113[0] + 88) + 96LL), *(_QWORD *)(v14 + 96))
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_63:
    v40 = *(_QWORD *)v11;
    v41 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( v12 )
    {
      v43 = (*(_DWORD *)(v40 + 76) - DpiDependentMetric) / 2;
      if ( *(_DWORD *)(v40 + 76) - DpiDependentMetric <= 0 )
        v43 = 0;
      v110 = v43;
    }
    else
    {
      v44 = GetDpiForSystem(v14);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v44) )
      {
        v48 = GetDpiForSystem(v46);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v48);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v43 = 0;
      v110 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v13 += *(_DWORD *)(GetDPIMetrics(v46, v45, v47, 0LL) + 8);
    }
    v117 = GreSelectBitmap(ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
    if ( !v117 )
      goto LABEL_102;
    memset(v124, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v11 + 96LL), 104LL, (char *)v124);
    v51 = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || HIWORD(v124[11]) != 32 || v124[12] || **(_DWORD **)v11 == 4 )
      {
        if ( LOWORD(v124[4]) * HIWORD(v124[4]) == 1 )
          v59 = 12060490;
        else
          v59 = (unsigned int)MNDrawHilite(v113, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(a1, v112 + v13, v112 + v43, v41, DpiDependentMetric, ghdcMem2, v51, v51, v59, 0xFFFFFF, v51);
      }
      goto LABEL_101;
    }
    v52 = 0LL;
    v107 = 33488896;
    v53 = 0LL;
    if ( a6 )
    {
      v116 = 0LL;
      memset(v123, 0, 44);
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
      {
LABEL_86:
        if ( a6 )
        {
          if ( v53 != -1 )
            GreSelectBitmap(CompatibleDC, v53);
          if ( v52 )
          {
            GreDecBitmapExclusiveRefCnt(v52, v50);
            GreDeleteObject(v52);
          }
          if ( CompatibleDC )
            GreDeleteDC(CompatibleDC);
        }
LABEL_101:
        GreSelectBitmap(ghdcMem2, v117);
        goto LABEL_102;
      }
      memset((char *)&v123[1] + 4, 0, 24);
      LODWORD(v123[0]) = 40;
      *(_QWORD *)((char *)v123 + 4) = __PAIR64__(DpiDependentMetric, v41);
      *(_QWORD *)((char *)v123 + 12) = 2097153LL;
      v55 = GreCreateDIBitmapReal(CompatibleDC, 0, 0LL, (__int64)v123, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v116);
      v52 = v55;
      if ( v55 )
      {
        v53 = GreSelectBitmap(CompatibleDC, v55);
        if ( v53 != -1 )
        {
          NtGdiAlphaBlend(
            CompatibleDC,
            0,
            0,
            v41,
            DpiDependentMetric,
            ghdcMem2,
            0,
            0,
            v41,
            DpiDependentMetric,
            33488896);
          if ( v41 * DpiDependentMetric > 0 )
          {
            v56 = v116;
            v57 = (unsigned int)(v41 * DpiDependentMetric);
            do
            {
              v50 = 29 * v56[2] + 150 * (unsigned int)v56[1];
              v58 = ((unsigned int)v50 + 77 * *v56 + 129) >> 8;
              *(_DWORD *)v56 = v58 | ((v58 | ((v58 | (v56[3] << 8)) << 8)) << 8);
              v56 = v116 + 4;
              v116 += 4;
              --v57;
            }
            while ( v57 );
          }
          BYTE2(v107) = 102;
        }
      }
    }
    else
    {
      CompatibleDC = (HDC)ghdcMem2;
    }
    if ( CompatibleDC )
      NtGdiAlphaBlend(
        a1,
        v112 + v13,
        v112 + v110,
        v41,
        DpiDependentMetric,
        (POINTL)CompatibleDC,
        0,
        0,
        v41,
        DpiDependentMetric,
        v107);
    goto LABEL_86;
  }
  while ( 1 )
  {
LABEL_51:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v113[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v113, (_QWORD *)v11);
    v31 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), 1);
    if ( v31 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_58;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v121 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v121;
  *((_QWORD *)&v121 + 1) = v31;
  HMLockObject(v31);
  WindowSmIcon = xxxGetWindowSmIcon(v31, 0);
  ThreadUnlock1(v35, v34, v36);
  if ( WindowSmIcon )
    goto LABEL_59;
LABEL_58:
  WindowSmIcon = qword_1C03307E0;
LABEL_59:
  v37 = a3 - 4;
  v38 = v105;
  v39 = a4 - 2;
  if ( v105 && v39 < v37 )
    v37 = a4 - 2;
  DrawIconEx(a1, v13 + 4, 1u, WindowSmIcon, v37, v39, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_103:
  v60 = v114;
  if ( !v114 )
    v60 = *v113[0];
  if ( (unsigned int)MNGetpItemIndex(v60, v11) == -1 )
    goto LABEL_147;
  if ( a5 != (_DWORD)v64 )
    goto LABEL_147;
  v65 = *(_WORD **)(v11 + 24);
  if ( !v65 )
    goto LABEL_147;
  v66 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v66 )
    goto LABEL_147;
  v111 = *(_QWORD *)(v11 + 88);
  if ( !v38 || (v62 = *v113[0], *(_DWORD *)(*v113[0] + 72) == (_DWORD)v64) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v64 )
      v13 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v62 = *v113[0];
    v13 = *(_DWORD *)(*v113[0] + 72);
  }
  DPIMetrics = GetDPIMetrics(v62, v61, v63, v64);
  v68 = *(_QWORD *)v11;
  v69 = DPIMetrics;
  v115 = DPIMetrics;
  v70 = *(_DWORD *)(DPIMetrics + 20);
  v108 = v70;
  v71 = *(_DWORD *)(v68 + 76) - *(_DWORD *)(DPIMetrics + 12) - v70 - 1;
  if ( v71 > 0 )
  {
    v69 = v115;
    v108 = v71 / 2 + v70;
  }
  if ( !v38 && !*(_QWORD *)(v68 + 96) )
    v13 += *(_DWORD *)(v69 + 8);
  if ( *v65 == 8 && !v38 )
  {
    ++v65;
    if ( !--v66 )
    {
      v88 = a1;
      goto LABEL_148;
    }
  }
  CharPosition = FindCharPosition(v65, 9LL);
  v74 = FindCharPosition(v65, v73);
  v76 = *(_DWORD *)(v75 + 72);
  v77 = v74;
  v79 = GetDpiForSystem(v78);
  v81 = GetOemBitmapInfoForDpi(63LL, v79, v80);
  v82 = 0LL;
  v83 = v76 - *((__int16 *)v81 + 2) - 2;
  if ( !v77 || v77 == v66 )
  {
    if ( CharPosition && v77 == v66 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v88 = a1;
        v120 = 0LL;
        xxxPSMGetTextExtent(a1);
        v99 = v114;
        if ( !v114 )
          v99 = *v113[0];
        if ( (unsigned int)MNGetpItemIndex(v99, v11) == -1 )
          goto LABEL_148;
        v90 = v111;
        if ( v111 != *(_QWORD *)(v11 + 88) )
          goto LABEL_147;
        v13 = v83 - v120;
        if ( v105 == (_DWORD)v100 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v100 )
          v13 += *(_DWORD *)(v115 + 8);
      }
      else
      {
        v90 = v111;
      }
      xxxDrawMenuItemText(
        v113,
        v11,
        a1,
        v112 + v13,
        v112 + v108,
        (__int64)v65,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v113[0] + 40) + 40LL) & 4);
      v101 = v114;
      if ( !v114 )
        v101 = *v113[0];
      if ( (unsigned int)MNGetpItemIndex(v101, v11) == -1 || v90 != *(_QWORD *)(v11 + 88) )
        goto LABEL_147;
      goto LABEL_176;
    }
    goto LABEL_175;
  }
  if ( (**(_DWORD **)v11 & 0x2000) != 0 && v105 )
  {
    v118 = 0LL;
    xxxPSMGetTextExtent(a1);
    v84 = v114;
    if ( !v114 )
      v84 = *v113[0];
    if ( (unsigned int)MNGetpItemIndex(v84, v11) == -1 || v111 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
    v13 = v83 - v118;
  }
  xxxDrawMenuItemText(
    v113,
    v11,
    a1,
    v112 + v13,
    v112 + v108,
    (__int64)v65,
    v77,
    *(_DWORD *)(*(_QWORD *)(*v113[0] + 40) + 40LL) & 4);
  v85 = v114;
  if ( !v114 )
    v85 = *v113[0];
  if ( (unsigned int)MNGetpItemIndex(v85, v11) == -1 || v111 != *(_QWORD *)(v11 + 88) )
  {
LABEL_147:
    v88 = a1;
    goto LABEL_148;
  }
  if ( CharPosition <= v77 + 1 )
  {
LABEL_175:
    v90 = v111;
    goto LABEL_176;
  }
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v105 == (_DWORD)v82 )
  {
    v119 = v82;
    v86 = CharPosition - v77;
    xxxPSMGetTextExtent(a1);
    v87 = v114;
    if ( !v114 )
      v87 = *v113[0];
    if ( (unsigned int)MNGetpItemIndex(v87, v11) == -1 || v111 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
  }
  else
  {
    v86 = CharPosition - v77;
  }
  v88 = a1;
  xxxPSMTextOut(a1, v86 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v113[0] + 40) + 40LL) << 18) & 0x100000);
  v89 = v114;
  if ( !v114 )
    v89 = *v113[0];
  if ( (unsigned int)MNGetpItemIndex(v89, v11) == -1 )
    goto LABEL_148;
  v90 = v111;
  if ( v111 != *(_QWORD *)(v11 + 88) )
    goto LABEL_147;
LABEL_176:
  if ( CharPosition >= v66 - 1 )
    goto LABEL_147;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v105 == (_DWORD)v82 )
  {
    v102 = v66 - CharPosition;
  }
  else
  {
    v117 = v82;
    v102 = v66 - CharPosition;
    xxxPSMGetTextExtent(a1);
    v103 = v114;
    if ( !v114 )
      v103 = *v113[0];
    if ( (unsigned int)MNGetpItemIndex(v103, v11) == -1 || v90 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
  }
  v88 = a1;
  xxxPSMTextOut(a1, v102 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v113[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_148:
  v91 = v114;
  if ( !v114 )
    v91 = *v113[0];
  if ( (unsigned int)MNGetpItemIndex(v91, v11) != -1
    && a5 == (_DWORD)v92
    && v105 != (_DWORD)v92
    && *(_QWORD *)(v11 + 16) != v92 )
  {
    v93 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v94 = GetDpiForSystem(-(**(_DWORD **)v11 & 0x2000));
    v96 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v93 + 62), v94, v95);
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= v96[3] )
    {
      if ( PrepareHDCBITSBitmap(0LL) )
      {
        v97 = v96[3];
        v98 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v97 - 2) / 2;
        if ( v98 <= 0 )
          v98 = 0;
        BltColor(v88, v98, v96[2], v97, *v96, v96[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v113);
  return 1LL;
}
