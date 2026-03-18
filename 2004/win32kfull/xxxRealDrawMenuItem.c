/*
 * XREFs of xxxRealDrawMenuItem @ 0x1C024E90C
 * Callers:
 *     xxxDrawState @ 0x1C0251DB4 (xxxDrawState.c)
 * Callees:
 *     xxxGetWindowSmIcon @ 0x1C002BFF8 (xxxGetWindowSmIcon.c)
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0061048 (-MNDrawHilite@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0061074 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     _DrawIconEx @ 0x1C0063888 (_DrawIconEx.c)
 *     GreDecBitmapExclusiveRefCnt @ 0x1C006503C (GreDecBitmapExclusiveRefCnt.c)
 *     GreExtGetObjectW @ 0x1C0065958 (GreExtGetObjectW.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     NtGdiAlphaBlend @ 0x1C007EE80 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     BitBltSysBmp @ 0x1C0101C5C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     PrepareHDCBITSBitmap @ 0x1C0101FBC (PrepareHDCBITSBitmap.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C024030C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C024CA20 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C024D214 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     BltColor @ 0x1C0251C6C (BltColor.c)
 *     xxxPSMTextOut @ 0x1C02540DC (xxxPSMTextOut.c)
 *     FindCharPosition @ 0x1C025F2C0 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C0261844 (xxxPSMGetTextExtent.c)
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
  int v18; // r8d
  unsigned __int64 v19; // rax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rbx
  unsigned int v27; // eax
  __int16 *OemBitmapInfoForDpi; // rax
  __int64 v29; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 WindowSmIcon; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // ecx
  int v36; // r14d
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // r12d
  int DpiDependentMetric; // r14d
  int v41; // ebx
  unsigned int v42; // eax
  __int64 v43; // rcx
  unsigned int v44; // eax
  int ObjectW; // eax
  __int64 v46; // rdx
  int v47; // r11d
  __int64 v48; // r15
  __int64 v49; // r13
  HDC CompatibleDC; // rbx
  __int64 v51; // rax
  unsigned __int8 *v52; // r9
  __int64 v53; // r10
  unsigned int v54; // r8d
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r9
  _WORD *v59; // r15
  int v60; // ebx
  __int64 DPIMetrics; // rax
  __int64 v62; // r10
  __int64 v63; // rdx
  int v64; // r8d
  int v65; // eax
  unsigned int CharPosition; // r12d
  unsigned int v67; // r11d
  int v68; // eax
  __int64 v69; // r10
  int v70; // r13d
  int v71; // r14d
  __int64 v72; // rcx
  unsigned int v73; // eax
  char *v74; // rax
  __int64 v75; // r9
  int v76; // r13d
  __int64 v77; // rcx
  __int64 v78; // rcx
  unsigned int v79; // esi
  __int64 v80; // rcx
  HDC v81; // r14
  __int64 v82; // rcx
  __int64 v83; // r14
  __int64 v84; // rcx
  __int64 v85; // r9
  int v86; // ebx
  unsigned int v87; // eax
  __int16 *v88; // rbx
  int v89; // esi
  int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // r9
  __int64 v93; // rcx
  int v94; // ebx
  __int64 v95; // rcx
  int v97; // [rsp+70h] [rbp-90h]
  int v99; // [rsp+80h] [rbp-80h]
  int v100; // [rsp+80h] [rbp-80h]
  int v102; // [rsp+88h] [rbp-78h]
  __int64 v103; // [rsp+88h] [rbp-78h]
  BOOL v104; // [rsp+90h] [rbp-70h]
  __int64 *v105[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v106; // [rsp+A8h] [rbp-58h]
  __int64 v107; // [rsp+B0h] [rbp-50h]
  __int64 v108; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v109; // [rsp+C0h] [rbp-40h]
  __int64 v110; // [rsp+C8h] [rbp-38h]
  __int64 v111; // [rsp+D0h] [rbp-30h]
  __int64 v112; // [rsp+D8h] [rbp-28h]
  __int128 v113; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v114; // [rsp+F0h] [rbp-10h]
  _OWORD v115[3]; // [rsp+F8h] [rbp-8h] BYREF
  _DWORD v116[28]; // [rsp+130h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v105, 0LL);
  v9 = *a2;
  v114 = 0LL;
  v10 = 0;
  v113 = 0LL;
  v104 = 0;
  v106 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v105, v9);
  v11 = a2[1];
  v12 = *(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 1;
  v97 = v12;
  if ( v12 )
  {
    v13 = 2;
    v14 = *v105[0];
    if ( *(int *)(*(_QWORD *)(*v105[0] + 40) + 40LL) >= 0 )
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
      v14 = *(_QWORD *)(*v105[0] + 40);
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
          v13 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 4;
        }
      }
      v12 = v97;
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
      v104 = *(char *)(*(_QWORD *)v11 + 4LL) < 0;
  }
  if ( !*(_QWORD *)(*(_QWORD *)v11 + 96LL) )
    goto LABEL_102;
  if ( v10 )
  {
    v14 = *v105[0];
    if ( (*(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 0x4000000) != 0 )
      goto LABEL_102;
  }
  if ( a5 )
    goto LABEL_63;
  v14 = *(_QWORD *)v11;
  v18 = *(_DWORD *)(*(_QWORD *)v11 + 4LL);
  v19 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
  if ( (v18 & 0x20000000) != 0 )
  {
    if ( v19 == 1 )
      goto LABEL_51;
    v20 = v13;
    if ( v19 > 7 )
      goto LABEL_39;
    v21 = v19 - 2;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 2;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
          {
            v25 = 21;
            goto LABEL_38;
          }
          if ( v24 == 1 )
          {
            v25 = 25;
            v20 = v13 + 2;
LABEL_38:
            BitBltSysBmp((__int64)a1, v20, 2, v25, 1);
LABEL_102:
            v36 = v97;
            goto LABEL_103;
          }
LABEL_39:
          if ( PrepareHDCBITSBitmap(0LL) )
          {
            v26 = *(_QWORD *)(*(_QWORD *)v11 + 96LL);
            v27 = GetDpiForSystem(*(_QWORD *)v11);
            OemBitmapInfoForDpi = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v26 + 79), v27);
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
        v25 = 18;
      }
      else
      {
        v25 = 22;
        v20 = v13 + 2;
      }
    }
    else
    {
      v25 = 26;
    }
    if ( (v18 & 0x80u) != 0 )
      ++v25;
    goto LABEL_38;
  }
  if ( v19 == -1LL )
  {
    xxxSendMenuDrawItemMessage((__int64)a1, 1, (__int64 ***)v105, (__int64 *)v11, 1, v13, 0LL);
    goto LABEL_102;
  }
  if ( *(_WORD *)(gptiCurrent + 624LL) > 0x400u
    || (!*(_QWORD *)(v14 + 56) || *(_QWORD *)(v11 + 24))
    && (v12
     || (v14 = *v105[0], v11 != *(_QWORD *)(*v105[0] + 88))
     || (v14 = *v105[0], *(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 44LL) <= 1u)
     || (v14 = *(_QWORD *)(*(_QWORD *)(*v105[0] + 88) + 96LL), *(_QWORD *)(v14 + 96))
     || !*(_QWORD *)(v11 + 16)) )
  {
LABEL_63:
    v38 = *(_QWORD *)v11;
    v39 = *(_DWORD *)(*(_QWORD *)v11 + 104LL);
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
    if ( v12 )
    {
      v41 = (*(_DWORD *)(v38 + 76) - DpiDependentMetric) / 2;
      if ( *(_DWORD *)(v38 + 76) - DpiDependentMetric <= 0 )
        v41 = 0;
      v102 = v41;
    }
    else
    {
      v42 = GetDpiForSystem(v14);
      if ( DpiDependentMetric <= (int)GetDpiDependentMetric(26LL, v42) )
      {
        v44 = GetDpiForSystem(v43);
        DpiDependentMetric = GetDpiDependentMetric(26LL, v44);
      }
      else
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v11 + 108LL);
      }
      v41 = 0;
      v102 = 0;
      if ( *(_QWORD *)(v11 + 24) )
        v13 += *(_DWORD *)(GetDPIMetrics(v43) + 8);
    }
    v109 = GreSelectBitmap(*(_QWORD *)ghdcMem2, *(_QWORD *)(*(_QWORD *)v11 + 96LL));
    if ( !v109 )
      goto LABEL_102;
    memset(v116, 0, 0x68uLL);
    ObjectW = GreExtGetObjectW(*(HBRUSH *)(*(_QWORD *)v11 + 96LL), 104LL, (char *)v116);
    v47 = 0;
    if ( !a5 || **(_DWORD **)v11 == 4 )
    {
      if ( ObjectW != 104 || HIWORD(v116[11]) != 32 || v116[12] || **(_DWORD **)v11 == 4 )
      {
        if ( LOWORD(v116[4]) * HIWORD(v116[4]) == 1 )
          v55 = 12060490;
        else
          v55 = (unsigned int)MNDrawHilite(v105, v11) != 0 ? 3342344 : 13369376;
        NtGdiBitBltInternal(
          a1,
          v104 + v13,
          v104 + v41,
          v39,
          DpiDependentMetric,
          *(HDC *)ghdcMem2,
          v47,
          v47,
          v55,
          0xFFFFFF,
          v47);
      }
      goto LABEL_101;
    }
    v48 = 0LL;
    v99 = 33488896;
    v49 = 0LL;
    if ( a6 )
    {
      v108 = 0LL;
      memset(v115, 0, 44);
      CompatibleDC = (HDC)GreCreateCompatibleDC(a1);
      if ( !CompatibleDC )
      {
LABEL_86:
        if ( a6 )
        {
          if ( v49 != -1 )
            GreSelectBitmap(CompatibleDC, v49);
          if ( v48 )
          {
            GreDecBitmapExclusiveRefCnt(v48, v46);
            GreDeleteObject(v48);
          }
          if ( CompatibleDC )
            GreDeleteDC(CompatibleDC);
        }
LABEL_101:
        GreSelectBitmap(*(_QWORD *)ghdcMem2, v109);
        goto LABEL_102;
      }
      memset((char *)&v115[1] + 4, 0, 24);
      LODWORD(v115[0]) = 40;
      *(_QWORD *)((char *)v115 + 4) = __PAIR64__(DpiDependentMetric, v39);
      *(_QWORD *)((char *)v115 + 12) = 2097153LL;
      v51 = GreCreateDIBitmapReal(CompatibleDC, 0, 0LL, (unsigned int *)v115, 0, 0x2Cu, 0, 0LL, 0, 0LL, 0, 0LL, &v108);
      v48 = v51;
      if ( v51 )
      {
        v49 = GreSelectBitmap(CompatibleDC, v51);
        if ( v49 != -1 )
        {
          NtGdiAlphaBlend(
            CompatibleDC,
            0,
            0,
            v39,
            DpiDependentMetric,
            *(HDC *)ghdcMem2,
            0,
            0,
            v39,
            DpiDependentMetric,
            33488896);
          if ( v39 * DpiDependentMetric > 0 )
          {
            v52 = (unsigned __int8 *)v108;
            v53 = (unsigned int)(v39 * DpiDependentMetric);
            do
            {
              v46 = 29 * v52[2] + 150 * (unsigned int)v52[1];
              v54 = ((unsigned int)v46 + 77 * *v52 + 129) >> 8;
              *(_DWORD *)v52 = v54 | ((v54 | ((v54 | (v52[3] << 8)) << 8)) << 8);
              v52 = (unsigned __int8 *)(v108 + 4);
              v108 += 4LL;
              --v53;
            }
            while ( v53 );
          }
          BYTE2(v99) = 102;
        }
      }
    }
    else
    {
      CompatibleDC = *(HDC *)ghdcMem2;
    }
    if ( CompatibleDC )
      NtGdiAlphaBlend(
        a1,
        v104 + v13,
        v104 + v102,
        v39,
        DpiDependentMetric,
        CompatibleDC,
        0,
        0,
        v39,
        DpiDependentMetric,
        v99);
    goto LABEL_86;
  }
  while ( 1 )
  {
LABEL_51:
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) && *(_QWORD *)(*v105[0] + 80) )
      SetupFakeMDIAppStuff((__int64)v105, (_QWORD *)v11);
    v29 = HMValidateHandleNoRip(*(_QWORD *)(*(_QWORD *)v11 + 56LL), 1);
    if ( v29 )
      break;
    if ( !*(_QWORD *)(*(_QWORD *)v11 + 56LL) )
      goto LABEL_58;
    *(_QWORD *)(*(_QWORD *)v11 + 56LL) = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v113 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v113;
  *((_QWORD *)&v113 + 1) = v29;
  HMLockObject(v29);
  WindowSmIcon = xxxGetWindowSmIcon(v29, 0);
  ThreadUnlock1(v33, v32, v34);
  if ( WindowSmIcon )
    goto LABEL_59;
LABEL_58:
  WindowSmIcon = qword_1C03317E0;
LABEL_59:
  v35 = a3 - 4;
  v36 = v97;
  v37 = a4 - 2;
  if ( v97 && v37 < v35 )
    v35 = a4 - 2;
  DrawIconEx(a1, v13 + 4, 1u, WindowSmIcon, v35, v37, 0, *(_QWORD *)(gpsi + 4728LL), 19);
LABEL_103:
  v56 = v106;
  if ( !v106 )
    v56 = *v105[0];
  if ( (unsigned int)MNGetpItemIndex(v56, v11) == -1 )
    goto LABEL_147;
  if ( a5 != (_DWORD)v58 )
    goto LABEL_147;
  v59 = *(_WORD **)(v11 + 24);
  if ( !v59 )
    goto LABEL_147;
  v60 = *(_DWORD *)(*(_QWORD *)v11 + 48LL);
  if ( !v60 )
    goto LABEL_147;
  v103 = *(_QWORD *)(v11 + 88);
  if ( !v36 || (v57 = *v105[0], *(_DWORD *)(*v105[0] + 72) == (_DWORD)v58) )
  {
    if ( *(_QWORD *)(*(_QWORD *)v11 + 96LL) != v58 )
      v13 += *(_DWORD *)(*(_QWORD *)v11 + 104LL) + 2;
  }
  else
  {
    v57 = *v105[0];
    v13 = *(_DWORD *)(*v105[0] + 72);
  }
  DPIMetrics = GetDPIMetrics(v57);
  v62 = *(_QWORD *)v11;
  v63 = DPIMetrics;
  v107 = DPIMetrics;
  v64 = *(_DWORD *)(DPIMetrics + 20);
  v100 = v64;
  v65 = *(_DWORD *)(v62 + 76) - *(_DWORD *)(DPIMetrics + 12) - v64 - 1;
  if ( v65 > 0 )
  {
    v63 = v107;
    v100 = v65 / 2 + v64;
  }
  if ( !v36 && !*(_QWORD *)(v62 + 96) )
    v13 += *(_DWORD *)(v63 + 8);
  if ( *v59 == 8 && !v36 )
  {
    ++v59;
    if ( !--v60 )
    {
      v81 = a1;
      goto LABEL_148;
    }
  }
  CharPosition = FindCharPosition(v59, 9LL);
  v68 = FindCharPosition(v59, v67);
  v70 = *(_DWORD *)(v69 + 72);
  v71 = v68;
  v73 = GetDpiForSystem(v72);
  v74 = GetOemBitmapInfoForDpi(63LL, v73);
  v75 = 0LL;
  v76 = v70 - *((__int16 *)v74 + 2) - 2;
  if ( !v71 || v71 == v60 )
  {
    if ( CharPosition && v71 == v60 )
    {
      if ( (**(_DWORD **)v11 & 0x2000) != 0 )
      {
        v81 = a1;
        v112 = 0LL;
        xxxPSMGetTextExtent(a1);
        v91 = v106;
        if ( !v106 )
          v91 = *v105[0];
        if ( (unsigned int)MNGetpItemIndex(v91, v11) == -1 )
          goto LABEL_148;
        v83 = v103;
        if ( v103 != *(_QWORD *)(v11 + 88) )
          goto LABEL_147;
        v13 = v76 - v112;
        if ( v97 == (_DWORD)v92 && *(_QWORD *)(*(_QWORD *)v11 + 96LL) == v92 )
          v13 += *(_DWORD *)(v107 + 8);
      }
      else
      {
        v83 = v103;
      }
      xxxDrawMenuItemText(
        v105,
        v11,
        a1,
        v104 + v13,
        v104 + v100,
        (__int64)v59,
        CharPosition,
        *(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 4);
      v93 = v106;
      if ( !v106 )
        v93 = *v105[0];
      if ( (unsigned int)MNGetpItemIndex(v93, v11) == -1 || v83 != *(_QWORD *)(v11 + 88) )
        goto LABEL_147;
      goto LABEL_176;
    }
    goto LABEL_175;
  }
  if ( (**(_DWORD **)v11 & 0x2000) != 0 && v97 )
  {
    v110 = 0LL;
    xxxPSMGetTextExtent(a1);
    v77 = v106;
    if ( !v106 )
      v77 = *v105[0];
    if ( (unsigned int)MNGetpItemIndex(v77, v11) == -1 || v103 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
    v13 = v76 - v110;
  }
  xxxDrawMenuItemText(
    v105,
    v11,
    a1,
    v104 + v13,
    v104 + v100,
    (__int64)v59,
    v71,
    *(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) & 4);
  v78 = v106;
  if ( !v106 )
    v78 = *v105[0];
  if ( (unsigned int)MNGetpItemIndex(v78, v11) == -1 || v103 != *(_QWORD *)(v11 + 88) )
  {
LABEL_147:
    v81 = a1;
    goto LABEL_148;
  }
  if ( CharPosition <= v71 + 1 )
  {
LABEL_175:
    v83 = v103;
    goto LABEL_176;
  }
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v97 == (_DWORD)v75 )
  {
    v111 = v75;
    v79 = CharPosition - v71;
    xxxPSMGetTextExtent(a1);
    v80 = v106;
    if ( !v106 )
      v80 = *v105[0];
    if ( (unsigned int)MNGetpItemIndex(v80, v11) == -1 || v103 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
  }
  else
  {
    v79 = CharPosition - v71;
  }
  v81 = a1;
  xxxPSMTextOut(a1, v79 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) << 18) & 0x100000);
  v82 = v106;
  if ( !v106 )
    v82 = *v105[0];
  if ( (unsigned int)MNGetpItemIndex(v82, v11) == -1 )
    goto LABEL_148;
  v83 = v103;
  if ( v103 != *(_QWORD *)(v11 + 88) )
    goto LABEL_147;
LABEL_176:
  if ( CharPosition >= v60 - 1 )
    goto LABEL_147;
  if ( (**(_DWORD **)v11 & 0x2000) == 0 || v97 == (_DWORD)v75 )
  {
    v94 = v60 - CharPosition;
  }
  else
  {
    v109 = v75;
    v94 = v60 - CharPosition;
    xxxPSMGetTextExtent(a1);
    v95 = v106;
    if ( !v106 )
      v95 = *v105[0];
    if ( (unsigned int)MNGetpItemIndex(v95, v11) == -1 || v83 != *(_QWORD *)(v11 + 88) )
      goto LABEL_147;
  }
  v81 = a1;
  xxxPSMTextOut(a1, v94 - 1, ~(*(_DWORD *)(*(_QWORD *)(*v105[0] + 40) + 40LL) << 18) & 0x100000);
LABEL_148:
  v84 = v106;
  if ( !v106 )
    v84 = *v105[0];
  if ( (unsigned int)MNGetpItemIndex(v84, v11) != -1
    && a5 == (_DWORD)v85
    && v97 != (_DWORD)v85
    && *(_QWORD *)(v11 + 16) != v85 )
  {
    v86 = (**(_DWORD **)v11 & 0x2000) != 0 ? 0x1E : 0;
    v87 = GetDpiForSystem(-(**(_DWORD **)v11 & 0x2000));
    v88 = (__int16 *)GetOemBitmapInfoForDpi((unsigned int)(v86 + 62), v87);
    if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) >= v88[3] )
    {
      if ( PrepareHDCBITSBitmap(0LL) )
      {
        v89 = v88[3];
        v90 = (*(_DWORD *)(*(_QWORD *)v11 + 76LL) - v89 - 2) / 2;
        if ( v90 <= 0 )
          v90 = 0;
        BltColor(v81, v90, v88[2], v89, *v88, v88[1], 1);
      }
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v105);
  return 1LL;
}
