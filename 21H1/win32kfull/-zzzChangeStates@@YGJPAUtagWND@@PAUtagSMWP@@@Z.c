/*
 * XREFs of ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     _PostShellHookMessages@8 @ 0x17142 (_PostShellHookMessages@8.c)
 *     _DecomposeWindowIfNeeded@4 @ 0x1B7B8 (_DecomposeWindowIfNeeded@4.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _ComposeWindowIfNeeded@8 @ 0x1CD56 (_ComposeWindowIfNeeded@8.c)
 *     _WindowRedirectionBitmapMatchesMonitorAdapter@4 @ 0x2026A (_WindowRedirectionBitmapMatchesMonitorAdapter@4.c)
 *     _DeleteOrSetRedirectionBitmap@12 @ 0x20636 (_DeleteOrSetRedirectionBitmap@12.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     _OffsetChildren@20 @ 0x2AECC (_OffsetChildren@20.c)
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?ShouldRemoveMonitorRgn@@YGHPAUtagWND@@@Z @ 0x2D436 (-ShouldRemoveMonitorRgn@@YGHPAUtagWND@@@Z.c)
 *     ?EqualRectInl@@YGKPBUtagRECT@@0@Z @ 0x334C0 (-EqualRectInl@@YGKPBUtagRECT@@0@Z.c)
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     _GetNewMonitor@12 @ 0x355FC (_GetNewMonitor@12.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GreClientRgnUpdated@4 @ 0x384C8 (_GreClientRgnUpdated@4.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     ?ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z @ 0x38C50 (-ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ?IsStillWindowC@@YGHPAUHWND__@@@Z @ 0x3D284 (-IsStillWindowC@@YGHPAUHWND__@@@Z.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _IsGhostWindow@4 @ 0x72B1C (_IsGhostWindow@4.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 *     ?ValidateZorder@@YGHPAUtagCVR@@@Z @ 0x93140 (-ValidateZorder@@YGHPAUtagCVR@@@Z.c)
 *     _PWInsertAfter@4 @ 0x9324A (_PWInsertAfter@4.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     _PhysicalToLogicalInPlaceRectWithSubpixel@12 @ 0x9B600 (_PhysicalToLogicalInPlaceRectWithSubpixel@12.c)
 *     _SetOldRedirectionBitmap@8 @ 0xA6D0A (_SetOldRedirectionBitmap@8.c)
 *     ?ReValidateZorder@@YGHPAUtagCVR@@@Z @ 0xA6D3C (-ReValidateZorder@@YGHPAUtagCVR@@@Z.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _InvalidateGDIWindows@4 @ 0x1541C8 (_InvalidateGDIWindows@4.c)
 */

int __fastcall zzzChangeStates(int a1, int a2)
{
  int v2; // esi
  PKTHREAD CurrentThread; // edi
  int *ThreadWin32Thread; // eax
  int v6; // edi
  int v7; // edx
  _DWORD *v8; // ebx
  int v9; // ecx
  int v10; // eax
  float *v11; // esi
  int v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int *v16; // esi
  float *v17; // edi
  _DWORD *v18; // esi
  int v19; // ecx
  int v20; // esi
  int DesktopWindow; // eax
  _DWORD *v22; // edx
  int v23; // ecx
  _DWORD *v24; // eax
  _DWORD *v25; // edx
  int v26; // ecx
  int v27; // ecx
  int v28; // esi
  int v29; // eax
  int v30; // ecx
  PKTHREAD v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // edi
  unsigned int v35; // ecx
  int v36; // edx
  char v37; // al
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  HSURF v41; // edi
  int v42; // eax
  int v43; // edx
  unsigned int v44; // eax
  int v45; // ecx
  BOOL v46; // edi
  int v47; // eax
  int v48; // edi
  int v49; // eax
  _DWORD *v50; // ecx
  int v51; // eax
  int v52; // eax
  int v53; // eax
  unsigned int v54; // eax
  bool v55; // zf
  int v56; // eax
  int v57; // ecx
  int NewMonitor; // eax
  int v59; // edi
  int *v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // esi
  int v64; // edi
  int v65; // edi
  int v66; // edx
  char v67; // dl
  int v68; // edx
  int v69; // ecx
  int v70; // eax
  float *i; // eax
  int v72; // ecx
  int v73; // eax
  int v74; // edx
  int v75; // eax
  int v76; // ecx
  HRGN v77; // edx
  struct tagCVR *v79; // [esp+0h] [ebp-100h]
  struct tagWND *v80; // [esp+0h] [ebp-100h]
  struct tagRECT *v81; // [esp+4h] [ebp-FCh]
  _BYTE v82[8]; // [esp+20h] [ebp-E0h] BYREF
  _BYTE v83[8]; // [esp+28h] [ebp-D8h] BYREF
  _DWORD v84[4]; // [esp+30h] [ebp-D0h] BYREF
  int v85; // [esp+40h] [ebp-C0h] BYREF
  float *v86; // [esp+44h] [ebp-BCh]
  int v87; // [esp+48h] [ebp-B8h]
  _DWORD v88[3]; // [esp+4Ch] [ebp-B4h] BYREF
  _DWORD v89[2]; // [esp+58h] [ebp-A8h] BYREF
  _DWORD v90[2]; // [esp+60h] [ebp-A0h] BYREF
  int v91; // [esp+68h] [ebp-98h] BYREF
  int v92; // [esp+6Ch] [ebp-94h]
  int v93; // [esp+70h] [ebp-90h]
  int v94; // [esp+74h] [ebp-8Ch]
  int v95; // [esp+78h] [ebp-88h]
  int v96; // [esp+7Ch] [ebp-84h]
  int v97; // [esp+80h] [ebp-80h]
  int v98; // [esp+84h] [ebp-7Ch]
  int v99; // [esp+88h] [ebp-78h]
  int v100; // [esp+8Ch] [ebp-74h]
  int v101; // [esp+90h] [ebp-70h]
  int v102; // [esp+94h] [ebp-6Ch]
  int updated; // [esp+98h] [ebp-68h]
  int v104; // [esp+9Ch] [ebp-64h]
  int v105; // [esp+A0h] [ebp-60h]
  PKTHREAD v106; // [esp+A4h] [ebp-5Ch]
  int v107; // [esp+A8h] [ebp-58h]
  HSURF v108; // [esp+ACh] [ebp-54h] BYREF
  float *v109; // [esp+B0h] [ebp-50h]
  char v110; // [esp+B7h] [ebp-49h]
  int v111; // [esp+B8h] [ebp-48h]
  int v112; // [esp+BCh] [ebp-44h]
  int v113; // [esp+C0h] [ebp-40h]
  int v114; // [esp+C4h] [ebp-3Ch]
  int v115; // [esp+C8h] [ebp-38h]
  _DWORD v116[4]; // [esp+CCh] [ebp-34h] BYREF
  int v117; // [esp+DCh] [ebp-24h] BYREF
  int v118; // [esp+E0h] [ebp-20h]
  int v119; // [esp+E4h] [ebp-1Ch]
  int v120; // [esp+E8h] [ebp-18h]
  int v121; // [esp+ECh] [ebp-14h] BYREF
  int v122; // [esp+F0h] [ebp-10h]
  int v123; // [esp+F4h] [ebp-Ch]
  int v124; // [esp+F8h] [ebp-8h]

  v111 = a1;
  v2 = 0;
  v85 = 0;
  updated = 0;
  v105 = a2;
  v88[2] = 0;
  v86 = 0;
  v97 = 0;
  v96 = 0;
  v87 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v82);
  CurrentThread = KeGetCurrentThread();
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v2 = *ThreadWin32Thread;
  }
  v6 = v111;
  v88[0] = *(_DWORD *)(v2 + 228);
  *(_DWORD *)(v2 + 228) = v88;
  v88[1] = v6;
  HMLockObject(v6);
  v8 = *(_DWORD **)(a2 + 24);
  v9 = *(_DWORD *)(v105 + 16) - 1;
  v104 = v9;
  if ( v9 >= 0 )
  {
    v10 = v9;
    while ( 1 )
    {
      v100 = 0;
      v98 = 0;
      v95 = 0;
      v102 = 0;
      if ( *v8 )
        break;
LABEL_166:
      v8 += 32;
      v104 = --v10;
      if ( v10 < 0 )
      {
        if ( v97 )
          xxxWindowEvent(32772, v6, -4, 0, _gdwDeferWinEvent != 0 ? 2 : 0);
        goto LABEL_169;
      }
    }
    LOBYTE(v7) = 1;
    v11 = (float *)HMValidateHandleNoSecure(*v8, v7);
    v109 = v11;
    if ( !v11 || !IsStillWindowC((HWND)v79) )
    {
      *v8 = 0;
      v8[6] = 6159;
    }
    v12 = v8[6] & 0x18E7;
    if ( v12 == 6151 )
    {
      v8[6] |= 8u;
LABEL_165:
      v10 = v104;
      goto LABEL_166;
    }
    if ( v12 == 6147 && (*(_BYTE *)(*((_DWORD *)v11 + 5) + 11) & 4) == 0 && ValidateZorder(v79) )
    {
      v8[6] |= 0xCu;
      if ( v8[20] )
      {
        GreDeleteObject(v8[20]);
        v8[20] = 0;
      }
      goto LABEL_165;
    }
    if ( (v8[6] & 0x1803) != 0x1803 )
    {
      v13 = *((_DWORD *)v11 + 5);
      if ( (*(_BYTE *)(v13 + 19) & 0x20) != 0 || (*(_BYTE *)(v13 + 18) & 8) != 0 )
      {
        v14 = *(_DWORD *)(v13 + 60) - *(_DWORD *)(v13 + 52);
        v15 = *(_DWORD *)(v13 + 64) - *(_DWORD *)(v13 + 56);
        if ( v14 != v8[4] || v15 != v8[5] )
        {
          v100 = 1;
          v95 = v14;
          v102 = v15;
        }
      }
      if ( *(_DWORD *)(v13 + 52) != v8[2] || *(_DWORD *)(v13 + 56) != v8[3] )
        v98 = 1;
      v16 = (int *)(*(_DWORD *)(v6 + 20) + 68);
      v91 = *v16++;
      v92 = *v16++;
      v93 = *v16;
      v94 = v16[1];
      v17 = v109;
      if ( IsChildWindowDpiBoundary(v109) )
      {
        v18 = 0;
        if ( (v8[30] & 0x100) == 0 )
        {
          v18 = v17 + 31;
          v17[31] = 0.0;
          v17[32] = 0.0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v111, &v91, v18);
        PhysicalToLogicalInPlaceRectWithSubpixel(v17, &v91, v18);
        v96 = 1;
      }
      v19 = *((_DWORD *)v17 + 5);
      v20 = *(_DWORD *)(v19 + 52);
      v107 = *(_DWORD *)(v19 + 56);
      *(_DWORD *)(v19 + 52) = v8[2];
      *(_DWORD *)(*((_DWORD *)v17 + 5) + 56) = v8[3];
      DesktopWindow = _GetDesktopWindow(v17);
      if ( v111 != DesktopWindow )
      {
        *(_DWORD *)(*((_DWORD *)v17 + 5) + 52) += v91;
        *(_DWORD *)(*((_DWORD *)v17 + 5) + 56) += v92;
      }
      v22 = (_DWORD *)*((_DWORD *)v17 + 5);
      v23 = v22[13];
      v99 = v23 - v20;
      v101 = v22[14] - v107;
      v22[15] = v23 + v8[4];
      *(_DWORD *)(*((_DWORD *)v17 + 5) + 64) = v8[5] + *(_DWORD *)(*((_DWORD *)v17 + 5) + 56);
      v24 = (_DWORD *)*((_DWORD *)v17 + 5);
      v25 = v24;
      v108 = (HSURF)v24;
      v26 = v24[13];
      if ( v24[15] < v26 )
      {
        v24[15] = v26;
        v24 = (_DWORD *)*((_DWORD *)v17 + 5);
        v25 = v24;
        v108 = (HSURF)v24;
      }
      v27 = v24[14];
      if ( v24[16] < v27 )
      {
        v24[16] = v27;
        v25 = (_DWORD *)*((_DWORD *)v17 + 5);
        v108 = (HSURF)v25;
      }
      v106 = (PKTHREAD)(*(_DWORD *)(_gptiCurrent + 236) + 216);
      if ( v17 == *(float **)v106 )
      {
        v28 = v8[15] + v25[17] - v8[7];
        v107 = v8[16] + v25[18] - v8[8];
        v29 = _GetDesktopWindow(v17);
        v30 = v107;
        if ( v111 != v29 )
        {
          v28 -= v91;
          v30 = v107 - v92;
        }
        v25 = v108;
        if ( v28 | v30 )
        {
          v31 = v106;
          *((_DWORD *)v106 + 4) += v28;
          *((_DWORD *)v31 + 5) += v30;
          v25 = (_DWORD *)*((_DWORD *)v17 + 5);
        }
      }
      v32 = v8[7];
      v112 = v25[17];
      v113 = v25[18];
      v114 = v25[19];
      v115 = v25[20];
      v11 = v109;
      v25[17] = v32;
      *(_DWORD *)(*((_DWORD *)v11 + 5) + 72) = v8[8];
      v33 = _GetDesktopWindow(v11);
      if ( v111 != v33 )
      {
        *(_DWORD *)(*((_DWORD *)v11 + 5) + 68) += v91;
        *(_DWORD *)(*((_DWORD *)v11 + 5) + 72) += v92;
      }
      *(_DWORD *)(*((_DWORD *)v11 + 5) + 76) = v8[9] + *(_DWORD *)(*((_DWORD *)v11 + 5) + 68);
      *(_DWORD *)(*((_DWORD *)v11 + 5) + 80) = v8[10] + *(_DWORD *)(*((_DWORD *)v11 + 5) + 72);
      v34 = EqualRectInl((const struct tagRECT *)v79, v81);
      v107 = v34;
      if ( ShouldRemoveMonitorRgn(v80) )
        SelectWindowRgn((int)v11, 0, (v8[6] & 8) == 0);
      if ( v100 )
      {
        v8[30] |= 1u;
        v36 = *((_DWORD *)v11 + 5);
        if ( (*(_BYTE *)(v36 + 19) & 0x20) == 0 || (v37 = *(_BYTE *)(v36 + 18), (v37 & 0x20) != 0) )
        {
          if ( IsWindowDesktopComposed(v11) )
          {
            v50 = (_DWORD *)*((_DWORD *)v11 + 5);
            v90[0] = v50[15] - v50[13];
            v90[1] = v50[16] - v50[14];
            updated = UpdateSprite(*(_DWORD *)(_gpDispInfo + 20), v11, 0, 0, 0, (int)v90, 0, 0, 0, 0, 0, 0);
          }
        }
        else
        {
          v108 = 0;
          v38 = *(_DWORD *)(v36 + 56);
          v39 = *(_DWORD *)(v36 + 52);
          v110 = v37 & 8;
          v40 = RecreateRedirectionBitmap(
                  (int)v11,
                  (struct tagBITMAP *)(v39 - v8[17]),
                  (struct tagBITMAP *)(v38 - v8[18]),
                  0,
                  0,
                  (v37 & 8) != 0 ? &v108 : 0);
          updated = v40;
          if ( v110 && v40 >= 0 )
          {
            v41 = v108;
            if ( v108 )
            {
              if ( SetOldRedirectionBitmap(v11, v108) )
                v41 = 0;
            }
            else
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v83);
              xxxInternalInvalidate(v11, 1, 1025);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v83);
            }
          }
          else
          {
            v41 = v108;
          }
          if ( v41 )
            DeleteOrSetRedirectionBitmap((int)v11, v41, 1);
          v34 = v107;
        }
      }
      if ( v99 || v101 )
      {
        v42 = *((_DWORD *)v11 + 5);
        v35 = *(_DWORD *)(v42 + 108);
        if ( v35 > 1 && (*(_BYTE *)(v42 + 13) & 8) == 0 )
          GreOffsetRgn(v35, v99, v101);
      }
      v43 = v8[15];
      if ( v43 || v8[16] || v96 )
      {
        v44 = *(_DWORD *)(*((_DWORD *)v11 + 5) + 92);
        if ( v44 > 1 )
        {
          GreOffsetRgn(v44, v43, v8[16]);
          v43 = v8[15];
        }
        OffsetChildren((int)v11, v43, v8[16], 0, v35);
      }
      if ( v98 || !v34 || v99 != v98 || v101 != v98 )
      {
        v45 = *((_DWORD *)v11 + 5);
        v89[0] = *(_DWORD *)(v45 + 52);
        v89[1] = *(_DWORD *)(v45 + 56);
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v124 = 0;
        v46 = 0;
        if ( v98 )
        {
          v47 = *(_DWORD *)(v45 + 144);
          if ( (v47 & 0x8000) != 0 )
          {
            *(_DWORD *)(v45 + 144) = v47 & 0xFFFF7FFF;
            PostShellHookMessages();
            v45 = *((_DWORD *)v11 + 5);
          }
          if ( (*(_BYTE *)(v45 + 18) & 8) != 0 )
          {
            v48 = v100;
            if ( v100 )
            {
              v49 = *(_DWORD *)(v45 + 60) - *(_DWORD *)(v45 + 52);
              v84[0] = 0;
              v84[1] = 0;
              v84[2] = v49;
              v84[3] = *(_DWORD *)(v45 + 64) - *(_DWORD *)(v45 + 56);
              v122 = -v101;
              v121 = -v99;
              v123 = v95 - v99;
              v124 = v102 - v101;
              IntersectRect(v84);
            }
            if ( gcountPWO )
            {
              InvalidateGDIWindows(v11);
              GreClientRgnUpdated(1);
            }
            v46 = v48 && !IsWindowDesktopComposed(v11);
          }
        }
        if ( (*(_BYTE *)(*((_DWORD *)v11 + 5) + 18) & 8) != 0 )
          updated = UpdateSprite(
                      *(_DWORD *)(_gpDispInfo + 20),
                      v11,
                      v45,
                      0,
                      (int)v89,
                      0,
                      0,
                      0,
                      0,
                      0,
                      0,
                      v46 ? (unsigned int)&v121 : 0);
        if ( v98 )
          goto LABEL_91;
      }
      if ( v100 )
      {
LABEL_91:
        v51 = *((_DWORD *)v11 + 5);
        if ( (*(_BYTE *)(v51 + 19) & 0x20) != 0 && (*(_BYTE *)(v51 + 18) & 0x20) == 0 )
        {
          v52 = *(_DWORD *)(_gptiCurrent + 368);
          if ( (!v52 || (*(_DWORD *)(v52 + 184) & 0x100000) == 0) && !WindowRedirectionBitmapMatchesMonitorAdapter(v11) )
          {
            *(_DWORD *)(*((_DWORD *)v11 + 5) + 144) &= ~0x80000u;
            RecreateRedirectionBitmap((int)v11, 0, 0, 0, 0, 0);
          }
        }
      }
      v6 = v111;
    }
    v106 = (PKTHREAD)v8[6];
    if ( ((unsigned __int8)v106 & 4) == 0 )
    {
      if ( ReValidateZorder(v79) )
      {
        if ( ValidateWindowPos(v79, (struct tagWND *)v81) )
        {
          UnlinkWindow(v11, v6);
          PWInsertAfter(v8[1]);
          LinkWindow(v6);
          v53 = *((_DWORD *)v11 + 5);
          ++v97;
          if ( (*(_BYTE *)(v53 + 11) & 4) != 0 )
          {
            SetOrClrWF(0, (int)v11, 0x304u, 1);
            *(_BYTE *)(*((_DWORD *)v11 + 5) + 16) ^= 8u;
          }
          goto LABEL_106;
        }
        v54 = v8[6];
      }
      else
      {
        v54 = (unsigned int)v106;
      }
      v8[6] = v54 | 4;
      SetOrClrWF(0, (int)v11, 0x304u, 1);
    }
LABEL_106:
    if ( (v8[30] & 0x20) != 0 )
    {
      v106 = (PKTHREAD)ValidateHmonitor(v8[24]);
      v55 = *((_BYTE *)v8 + 120) >= 0;
      v117 = 0;
      v118 = 0;
      v119 = 0;
      v120 = 0;
      if ( !v55 )
      {
        v117 = v8[25];
        v118 = v8[26];
        v119 = v8[27];
        v120 = v8[28];
        v11 = v109;
      }
      v56 = ERECTL::bWrapped((ERECTL *)&v117);
      NewMonitor = GetNewMonitor(v11, v56 == 0 ? v57 : 0, v8 + 25);
      if ( NewMonitor && v106 != (PKTHREAD)NewMonitor )
        v8[30] ^= (v8[30] ^ (UpdateMonitorForWindowAndChildren((int)v11, NewMonitor, v8 + 31, 0) << 6)) & 0x40;
    }
    v106 = KeGetCurrentThread();
    v59 = 0;
    if ( !IsThreadCrossSessionAttached() )
    {
      v60 = (int *)PsGetThreadWin32Thread(v106);
      if ( v60 )
        v59 = *v60;
    }
    v85 = *(_DWORD *)(v59 + 228);
    *(_DWORD *)(v59 + 228) = &v85;
    v86 = v11;
    HMLockObject(v11);
    v61 = v8[6];
    if ( (v61 & 0x40) == 0 )
    {
      if ( (v61 & 0x80u) != 0 )
      {
        v73 = IsTrayWindow(v11);
        if ( (v8[6] & 0x1F) != 0x1F && v73 && !IsGhostWindow(v11, v74) )
        {
          *(_DWORD *)(v105 + 12) |= 1u;
          v8[6] |= 0x20000000u;
        }
        if ( SetVisible(v11, 0xAu) )
          DecomposeWindowIfNeeded((int)v11);
        xxxWindowEvent(32771, v11, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
      }
LABEL_157:
      v75 = *((_DWORD *)v11 + 5);
      if ( (*(_BYTE *)(v75 + 23) & 0x10) != 0 )
      {
        v76 = v8[6];
        if ( (v76 & 0x8000) != 0 || (*(_BYTE *)(v75 + 13) & 1) == 0 && (v76 & 8) != 0 )
          SetOrClrWF(1, (int)v11, 0x108u, 1);
      }
      v77 = (HRGN)v8[22];
      if ( v77 )
        SelectWindowRgn((int)v11, v77, (v8[6] & 8) == 0);
      ThreadUnlock1();
      v6 = v111;
      goto LABEL_165;
    }
    v62 = *(_DWORD *)(*((_DWORD *)v11 + 2) + 232);
    if ( (*(_BYTE *)(v62 + 8) & 0x40) != 0 )
      zzzCalcStartCursorHide(v62, 5000);
    v63 = SetVisible(v11, 9u);
    v64 = (int)v109;
    xxxWindowEvent(32770, v109, 0, 0, _gdwDeferWinEvent != 0 ? 3 : 1);
    v55 = v63 == 0;
    v11 = (float *)v64;
    if ( !v55 )
    {
      v8[30] |= 2u;
      if ( (*(_BYTE *)(*(_DWORD *)(v64 + 20) + 18) & 8) == 0 )
        updated = ComposeWindowIfNeeded(v64, 0);
    }
    v65 = IsTrayWindow(v64);
    LOBYTE(v66) = *(_BYTE *)(*((_DWORD *)v11 + 5) + 8) & 0x40;
    if ( IsGhostWindow(v11, v66) )
    {
      v55 = v67 == 0;
      v68 = v105;
      if ( !v55 )
      {
        *(_DWORD *)(v105 + 12) |= 1u;
        v8[6] |= 0x40000000u;
      }
      v69 = v8[6];
      v70 = v69;
    }
    else
    {
      v55 = v67 == 0;
      v68 = v105;
      if ( !v55 )
      {
        *(_DWORD *)(v105 + 12) |= 1u;
        v8[6] |= 0x40000000u;
      }
      v70 = v8[6];
      if ( !v65 && !*((_DWORD *)v11 + 16) )
      {
LABEL_133:
        LOWORD(v69) = v70;
        if ( (v70 & 0x40000000) != 0 )
          v8[30] |= 0x10u;
LABEL_135:
        if ( (*(_BYTE *)(*((_DWORD *)v11 + 5) + 12) & 0x40) != 0 )
        {
          *(_DWORD *)(v68 + 12) |= 1u;
          v8[6] |= 0x80000000;
          v69 = v8[6];
        }
LABEL_137:
        if ( (v69 & 0x4008) != 8
          && (*(_BYTE *)(*(_DWORD *)(*((_DWORD *)v11 + 19) + 4) + 9) & 8) != 0
          && *((_DWORD *)v11 + 3) == _grpdeskRitInput )
        {
          for ( i = *(float **)(*((_DWORD *)v11 + 14) + 60); ; i = (float *)*((_DWORD *)i + 12) )
          {
            v102 = (int)i;
            if ( !i )
              break;
            if ( i == v11 )
            {
              CreateSpb(*(_DWORD *)(_gpDispInfo + 28));
              goto LABEL_157;
            }
            v72 = *((_DWORD *)i + 5);
            if ( (*(_BYTE *)(v72 + 23) & 0x10) != 0 )
            {
              v116[0] = *(_DWORD *)(v72 + 52);
              v116[1] = *(_DWORD *)(v72 + 56);
              v116[2] = *(_DWORD *)(v72 + 60);
              v116[3] = *(_DWORD *)(v72 + 64);
              v11 = v109;
              TransformRectBetweenCoordinateSpaces(v116, v116, v109, i);
              if ( IntersectRect(v116) )
                goto LABEL_157;
              i = (float *)v102;
            }
          }
        }
        goto LABEL_157;
      }
      *(_DWORD *)(v68 + 12) |= 1u;
      v69 = v8[6] | 0x10000000;
      v8[6] = v69;
      v70 = v69;
      if ( v65 )
        goto LABEL_137;
      v8[30] |= 8u;
    }
    if ( v65 )
      goto LABEL_137;
    if ( *((_DWORD *)v11 + 16) )
      goto LABEL_135;
    goto LABEL_133;
  }
LABEL_169:
  ThreadUnlock1();
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v82);
  return updated;
}
