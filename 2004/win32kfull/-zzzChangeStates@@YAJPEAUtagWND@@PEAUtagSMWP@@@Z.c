/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0068320
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C006D280 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C00201F0 (UpdateSprite.c)
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C0022ADC (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C0022C54 (PWInsertAfter.c)
 *     PostShellHookMessages @ 0x1C0033A70 (PostShellHookMessages.c)
 *     DecomposeWindowIfNeeded @ 0x1C004E868 (DecomposeWindowIfNeeded.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C005166C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00516B0 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C0054488 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00648F0 (-ReValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0068010 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C0068030 (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C006DC54 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     LinkWindow @ 0x1C006EAD0 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C006F798 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     GreClientRgnUpdated @ 0x1C00753E0 (GreClientRgnUpdated.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     zzzCalcStartCursorHide @ 0x1C0089AF0 (zzzCalcStartCursorHide.c)
 *     UnlinkWindow @ 0x1C008A2D8 (UnlinkWindow.c)
 *     IsTrayWindow @ 0x1C009D060 (IsTrayWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     OffsetChildren @ 0x1C00B04D4 (OffsetChildren.c)
 *     SelectWindowRgn @ 0x1C0108600 (SelectWindowRgn.c)
 *     SetOldRedirectionBitmap @ 0x1C011F144 (SetOldRedirectionBitmap.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01E8E70 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  struct tagWND *v2; // r14
  unsigned int v3; // r12d
  int v4; // r15d
  struct tagSMWP *v5; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rdi
  int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // r13d
  __int64 DesktopWindow; // rax
  int v17; // r8d
  int v18; // r9d
  int v19; // r11d
  int v20; // ebx
  _DWORD *v21; // rdx
  int v22; // r15d
  int v23; // ecx
  unsigned int v24; // r15d
  int v25; // r12d
  unsigned int v26; // r12d
  _DWORD *v27; // rax
  _DWORD *v28; // rdx
  int v29; // ecx
  int v30; // ecx
  __int128 v31; // xmm0
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r11d
  __int64 v35; // rdx
  __int64 v36; // rcx
  BOOL v37; // r14d
  __int64 v38; // r8
  __int64 v39; // rdx
  int v40; // ebx
  int v41; // eax
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rbx
  BOOL v45; // eax
  __int64 v46; // r14
  struct tagRECT *v47; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 *v53; // rax
  __int64 v54; // r8
  int v55; // eax
  __int64 v56; // rcx
  int v57; // edx
  __int64 v58; // rdx
  struct tagCVR *v60; // rcx
  int v61; // r8d
  __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // eax
  unsigned int v68; // edx
  int v69; // ebx
  unsigned int v70; // eax
  __int64 v71; // rdx
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  __int64 i; // rbx
  int v76; // eax
  unsigned int v77; // ecx
  __int64 v78; // rax
  int v79; // ecx
  int v80; // r15d
  int v81; // r12d
  int v82; // ecx
  __int64 v83; // rcx
  char v84; // bl
  __int64 v85; // r8
  _DWORD *v86; // rdx
  int v87; // r8d
  char v88; // bl
  int v89; // edx
  int v90; // eax
  HSURF v91; // rbx
  __int64 v92; // rcx
  int v93; // r8d
  int v94; // r9d
  __int64 v95; // r10
  int v96; // r11d
  float *v97; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v100; // rcx
  __int64 CurrentThreadProcess; // rax
  int v102; // [rsp+20h] [rbp-E0h]
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v104; // [rsp+64h] [rbp-9Ch]
  int v105; // [rsp+68h] [rbp-98h]
  unsigned int v106; // [rsp+6Ch] [rbp-94h]
  HSURF v109; // [rsp+80h] [rbp-80h] BYREF
  int v110; // [rsp+88h] [rbp-78h]
  int v111; // [rsp+8Ch] [rbp-74h]
  int v112; // [rsp+90h] [rbp-70h]
  struct tagSIZE v113; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v114; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v115; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-48h] BYREF
  int v117; // [rsp+C0h] [rbp-40h]
  int v118; // [rsp+C4h] [rbp-3Ch]
  _BYTE v119[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v120[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v121; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v122; // [rsp+E8h] [rbp-18h]
  _QWORD v123[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v124; // [rsp+108h] [rbp+8h] BYREF
  __int128 v125; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v126; // [rsp+128h] [rbp+28h] BYREF
  __int128 v127; // [rsp+138h] [rbp+38h] BYREF
  __int128 v128; // [rsp+148h] [rbp+48h]

  v2 = a1;
  v3 = 0;
  updated = 0;
  v123[2] = 0LL;
  v4 = 0;
  v104 = 0;
  v110 = 0;
  v122 = 0LL;
  v5 = a2;
  v121 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v120);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v123[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v123;
  v123[1] = v2;
  HMLockObject(v2);
  v10 = (__int64 *)*((_QWORD *)v5 + 5);
  v11 = *((_DWORD *)v5 + 7) - 1;
  v112 = v11;
  if ( v11 < 0 )
    goto LABEL_66;
  do
  {
    v8 = *v10;
    v105 = 0;
    v106 = 0;
    v109 = 0LL;
    if ( !v8 )
      goto LABEL_63;
    LOBYTE(v7) = 1;
    v12 = HMValidateHandleNoSecure(v8, v7);
    if ( !v12 || !(unsigned int)IsStillWindowC((HWND)v10[1]) )
    {
      *((_DWORD *)v10 + 8) = 6159;
      *v10 = 0LL;
    }
    v8 = v10[4] & 0x18E7;
    if ( (_DWORD)v8 == 6151 )
    {
      *((_DWORD *)v10 + 8) |= 8u;
      goto LABEL_63;
    }
    if ( (_DWORD)v8 == 6147
      && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 19LL) & 4) == 0
      && (unsigned int)ValidateZorder((struct tagCVR *)v10) )
    {
      *((_DWORD *)v10 + 8) |= 0xCu;
      v8 = v10[12];
      if ( v8 )
      {
        GreDeleteObject(v8);
        v10[12] = 0LL;
      }
      goto LABEL_63;
    }
    v13 = 6147LL;
    if ( (v10[4] & 0x1803) != 0x1803 )
    {
      v14 = *(_QWORD *)(v12 + 40);
      if ( (*(_BYTE *)(v14 + 27) & 0x20) == 0 && (*(_BYTE *)(v14 + 26) & 8) == 0
        || (v15 = *(_DWORD *)(v14 + 100) - *(_DWORD *)(v14 + 92),
            v111 = *(_DWORD *)(v14 + 96) - *(_DWORD *)(v14 + 88),
            v111 == *((_DWORD *)v10 + 6))
        && v15 == *((_DWORD *)v10 + 7) )
      {
        v15 = HIDWORD(v109);
        v111 = (int)v109;
      }
      else
      {
        v105 = 1;
      }
      if ( *(_DWORD *)(v14 + 88) != *((_DWORD *)v10 + 4) || *(_DWORD *)(v14 + 92) != *((_DWORD *)v10 + 5) )
        v106 = 1;
      v115 = *(_OWORD *)(*((_QWORD *)v2 + 5) + 104LL);
      if ( (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)v12) )
      {
        v97 = 0LL;
        if ( (*((_DWORD *)v10 + 39) & 0x100) == 0 )
        {
          v97 = (float *)(v12 + 224);
          *(_DWORD *)(v12 + 228) = 0;
          *(_DWORD *)(v12 + 224) = 0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v2, (int *)&v115, v97);
        PhysicalToLogicalInPlaceRectWithSubpixel((struct tagWND *)v12, (int *)&v115, v97);
        v110 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) = *((_DWORD *)v10 + 4);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) = *((_DWORD *)v10 + 5);
      DesktopWindow = GetDesktopWindow(v12);
      v19 = DWORD1(v115);
      v20 = v115;
      if ( v2 != (struct tagWND *)DesktopWindow )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) += v115;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) += v19;
      }
      v21 = *(_DWORD **)(v12 + 40);
      v22 = v21[22];
      v23 = *((_DWORD *)v10 + 6) + v22;
      v24 = v22 - v17;
      v25 = v21[23];
      v21[24] = v23;
      v26 = v25 - v18;
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 100LL) = *((_DWORD *)v10 + 7) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL);
      v27 = *(_DWORD **)(v12 + 40);
      v28 = v27;
      v29 = v27[22];
      if ( v27[24] < v29 )
      {
        v27[24] = v29;
        v27 = *(_DWORD **)(v12 + 40);
        v28 = v27;
      }
      v30 = v27[23];
      if ( v27[25] < v30 )
      {
        v27[25] = v30;
        v28 = *(_DWORD **)(v12 + 40);
      }
      if ( v12 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 296LL) )
      {
        if ( v2 != (struct tagWND *)GetDesktopWindow(v12) )
        {
          v93 -= v20;
          v94 -= v96;
        }
        if ( v93 | v94 )
        {
          *(_DWORD *)(v95 + 316) += v93;
          *(_DWORD *)(v95 + 320) += v94;
          v28 = *(_DWORD **)(v12 + 40);
        }
      }
      v31 = *(_OWORD *)(v28 + 26);
      v28[26] = *((_DWORD *)v10 + 10);
      v32 = *(_QWORD *)(v12 + 40);
      v33 = *((_DWORD *)v10 + 11);
      v128 = v31;
      *(_DWORD *)(v32 + 108) = v33;
      if ( v2 != (struct tagWND *)GetDesktopWindow(v12) )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL) += v20;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL) += v34;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 112LL) = *((_DWORD *)v10 + 12) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 116LL) = *((_DWORD *)v10 + 13) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL);
      v35 = *(_QWORD *)(v12 + 40);
      v36 = v128 - *(_QWORD *)(v35 + 104);
      if ( (_QWORD)v128 == *(_QWORD *)(v35 + 104) )
        v36 = *((_QWORD *)&v128 + 1) - *(_QWORD *)(v35 + 112);
      v37 = v36 == 0;
      if ( (unsigned int)ShouldRemoveMonitorRgn((struct tagWND *)v12) )
        SelectWindowRgn((struct tagWND *)v12);
      if ( v105 )
      {
        *((_DWORD *)v10 + 39) |= 1u;
        v83 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v83 + 27) & 0x20) != 0 && (v84 = *(_BYTE *)(v83 + 26), (v84 & 0x20) == 0) )
        {
          v87 = *(_DWORD *)(v83 + 92);
          v88 = v84 & 8;
          v89 = *(_DWORD *)(v83 + 88);
          v109 = 0LL;
          v90 = RecreateRedirectionBitmap(
                  (struct tagWND *)v12,
                  v89 - *((_DWORD *)v10 + 20),
                  v87 - *((_DWORD *)v10 + 21),
                  0,
                  0,
                  (HBRUSH *)((unsigned __int64)&v109 & -(__int64)(v88 != 0)));
          updated = v90;
          if ( v88 && v90 >= 0 )
          {
            v91 = v109;
            if ( v109 )
            {
              if ( (unsigned int)SetOldRedirectionBitmap(v12, v109) )
                v91 = 0LL;
            }
            else
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v119);
              xxxInternalInvalidate((struct tagWND *)v12, (HRGN)1, 0x401u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v119);
            }
          }
          else
          {
            v91 = v109;
          }
          if ( v91 )
            DeleteOrSetRedirectionBitmap(v12, v91, 1);
        }
        else if ( (unsigned int)IsWindowDesktopComposed(v12) )
        {
          v86 = *(_DWORD **)(v12 + 40);
          v113.cx = v86[24] - v86[22];
          v113.cy = v86[25] - v86[23];
          updated = UpdateSprite(
                      *(HDEV *)(gpDispInfo + 40LL),
                      (struct tagWND *)v12,
                      v85,
                      0LL,
                      0LL,
                      &v113,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      0LL);
        }
      }
      if ( v24 || v26 )
      {
        v64 = *(_QWORD *)(v12 + 40);
        v38 = 1LL;
        v65 = *(_QWORD *)(v64 + 168);
        if ( v65 <= 1 || (*(_BYTE *)(v64 + 21) & 8) != 0 )
          goto LABEL_31;
        GreOffsetRgn(v65, v24, v26);
      }
      v38 = 1LL;
LABEL_31:
      if ( v10[9] || v110 )
      {
        v63 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 136LL);
        if ( v63 > 1 )
          GreOffsetRgn(v63, *((unsigned int *)v10 + 18), *((unsigned int *)v10 + 19));
        OffsetChildren((struct tagWND *)v12, v102);
      }
      v13 = v106;
      if ( v106 || !v37 || v24 || v26 )
      {
        v39 = *(_QWORD *)(v12 + 40);
        v40 = 0;
        v114 = *(struct tagPOINT *)(v39 + 88);
        v125 = 0LL;
        if ( v106 )
        {
          v41 = *(_DWORD *)(v39 + 232);
          if ( (v41 & 0x8000) != 0 )
          {
            *(_DWORD *)(v39 + 232) = v41 & 0xFFFF7FFF;
            PostShellHookMessages(0x36uLL, *(_QWORD *)v12);
            v39 = *(_QWORD *)(v12 + 40);
          }
          if ( (*(_BYTE *)(v39 + 26) & 8) != 0 )
          {
            if ( v105 )
            {
              v79 = *(_DWORD *)(v39 + 96) - *(_DWORD *)(v39 + 88);
              v80 = -v24;
              v81 = -v26;
              v116 = 0LL;
              v117 = v79;
              v82 = *(_DWORD *)(v39 + 100) - *(_DWORD *)(v39 + 92);
              DWORD2(v125) = v80 + v111;
              v118 = v82;
              HIDWORD(v125) = v81 + v15;
              *(_QWORD *)&v125 = __PAIR64__(v81, v80);
              IntersectRect(&v125, &v125, &v116);
            }
            if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
            {
              InvalidateGDIWindows(v12);
              GreClientRgnUpdated(1LL);
            }
            if ( !v105 || (v40 = 1, (unsigned int)IsWindowDesktopComposed(v12)) )
              v40 = 0;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) != 0 )
          updated = UpdateSprite(
                      *(HDEV *)(gpDispInfo + 40LL),
                      (struct tagWND *)v12,
                      v38,
                      0LL,
                      &v114,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      (struct tagRECT *)((unsigned __int64)&v125 & -(__int64)(v40 != 0)));
        if ( v106 )
          goto LABEL_41;
      }
      if ( v105 )
      {
LABEL_41:
        v13 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 && (*(_BYTE *)(v13 + 26) & 0x20) == 0 )
        {
          v13 = gptiCurrent;
          v78 = *(_QWORD *)(gptiCurrent + 664LL);
          if ( (!v78 || (*(_DWORD *)(v78 + 196) & 0x100000) == 0)
            && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter((HWND *)v12) )
          {
            *(_DWORD *)(*(_QWORD *)(v12 + 40) + 232LL) &= ~0x80000u;
            RecreateRedirectionBitmap((struct tagWND *)v12, 0, 0, 0, 0, 0LL);
          }
        }
      }
      v4 = v104;
      v3 = updated;
      v2 = a1;
      v5 = a2;
    }
    if ( (v10[4] & 4) != 0 )
      goto LABEL_44;
    if ( !(unsigned int)ReValidateZorder((struct tagCVR *)v10) )
      goto LABEL_163;
    if ( !(unsigned int)ValidateWindowPos(v60, v2) )
    {
      v61 = *((_DWORD *)v10 + 8);
LABEL_163:
      *((_DWORD *)v10 + 8) = v61 | 4;
      SetOrClrWF(0LL, v12, 772LL, 1LL);
      goto LABEL_44;
    }
    UnlinkWindow(v12, v2);
    PWInsertAfter(v10[1], v62);
    LinkWindow((struct tagWND *)v12);
    v104 = v4 + 1;
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 19LL) & 4) != 0 )
    {
      SetOrClrWF(0LL, v12, 772LL, 1LL);
      *(_BYTE *)(*(_QWORD *)(v12 + 40) + 24LL) ^= 8u;
    }
LABEL_44:
    if ( (*((_DWORD *)v10 + 39) & 0x20) != 0 )
    {
      v42 = ValidateHmonitor(v10[16]);
      v43 = *((_DWORD *)v10 + 39);
      v44 = v42;
      v126 = 0LL;
      if ( (v43 & 0x80u) != 0 )
        v126 = *(struct tagRECT *)(v10 + 17);
      v45 = IsRectEmptyInl(&v126);
      v46 = 0LL;
      v47 = &v126;
      if ( v45 )
        v47 = 0LL;
      NewMonitor = GetNewMonitor((struct tagWND *)v12, v47);
      if ( NewMonitor && v44 != NewMonitor )
        *((_DWORD *)v10 + 39) ^= (*((_DWORD *)v10 + 39) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                           v12,
                                                                           NewMonitor,
                                                                           v10 + 20,
                                                                           0) << 6)) & 0x40;
    }
    else
    {
      v46 = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v13)
      || (CurrentProcess = PsGetCurrentProcess(v51, v50, v52),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v100),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      v53 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v53 )
        v46 = *v53;
    }
    *(_QWORD *)&v121 = *(_QWORD *)(v46 + 408);
    *(_QWORD *)(v46 + 408) = &v121;
    *((_QWORD *)&v121 + 1) = v12;
    HMLockObject(v12);
    v55 = *((_DWORD *)v10 + 8);
    if ( (v55 & 0x40) != 0 )
    {
      v66 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL);
      if ( (*(_DWORD *)(v66 + 12) & 0x40) != 0 )
        zzzCalcStartCursorHide(v66, 5000LL);
      v67 = SetVisible((struct tagWND *)v12, 9u);
      v68 = 3;
      v69 = v67;
      if ( !gdwDeferWinEvent )
        v68 = 1;
      xxxWindowEvent(0x8002u, v68);
      if ( v69 )
      {
        *((_DWORD *)v10 + 39) |= 2u;
        if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) == 0 )
        {
          v3 = ComposeWindowIfNeeded((struct tagWND *)v12);
          updated = v3;
        }
      }
      v70 = IsTrayWindow(v12);
      v71 = *(_QWORD *)(v12 + 40);
      v54 = v70;
      if ( (*(_WORD *)(v71 + 42) & 0x3FFF) == 0x2AA )
      {
        if ( (*(_BYTE *)(v71 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *((_DWORD *)v10 + 8) |= 0x40000000u;
        }
        v73 = *((_DWORD *)v10 + 8);
        v72 = v73;
      }
      else
      {
        if ( (*(_BYTE *)(v71 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *((_DWORD *)v10 + 8) |= 0x40000000u;
        }
        v72 = *((_DWORD *)v10 + 8);
        if ( !(_DWORD)v54 && !*(_QWORD *)(v12 + 120) )
        {
LABEL_101:
          LOWORD(v73) = v72;
          if ( (v72 & 0x40000000) != 0 )
            *((_DWORD *)v10 + 39) |= 0x10u;
LABEL_103:
          if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 20LL) & 0x40) != 0 )
          {
            *((_DWORD *)v5 + 6) |= 1u;
            *((_DWORD *)v10 + 8) |= 0x80000000;
            v73 = *((_DWORD *)v10 + 8);
          }
LABEL_105:
          if ( (v73 & 0x4008) != 8
            && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL) + 9LL) & 8) != 0
            && *(_QWORD *)(v12 + 24) == grpdeskRitInput )
          {
            v74 = *(_QWORD *)(v12 + 104);
            v124 = 0LL;
            for ( i = *(_QWORD *)(v74 + 112); i; i = *(_QWORD *)(i + 88) )
            {
              if ( i == v12 )
              {
                CreateSpb((struct tagWND *)v12);
                goto LABEL_57;
              }
              v92 = *(_QWORD *)(i + 40);
              if ( (*(_BYTE *)(v92 + 31) & 0x10) != 0 )
              {
                v127 = *(_OWORD *)(v92 + 88);
                TransformRectBetweenCoordinateSpaces(&v127, &v127, v12, i);
                if ( (unsigned int)IntersectRect(&v124, *(_QWORD *)(v12 + 40) + 88LL, &v127) )
                  goto LABEL_57;
              }
            }
          }
          goto LABEL_57;
        }
        *((_DWORD *)v5 + 6) |= 1u;
        v73 = *((_DWORD *)v10 + 8) | 0x10000000;
        *((_DWORD *)v10 + 8) = v73;
        v72 = v73;
        if ( (_DWORD)v54 )
          goto LABEL_105;
        *((_DWORD *)v10 + 39) |= 8u;
      }
      if ( (_DWORD)v54 )
        goto LABEL_105;
      if ( *(_QWORD *)(v12 + 120) )
        goto LABEL_103;
      goto LABEL_101;
    }
    if ( (v55 & 0x80u) != 0 )
    {
      v76 = IsTrayWindow(v12);
      if ( (v10[4] & 0x1F) != 0x1F && v76 && (*(_WORD *)(*(_QWORD *)(v12 + 40) + 42LL) & 0x3FFF) != 0x2AA )
      {
        *((_DWORD *)v5 + 6) |= 1u;
        *((_DWORD *)v10 + 8) |= 0x20000000u;
      }
      if ( (unsigned int)SetVisible((struct tagWND *)v12, 0xAu) )
        DecomposeWindowIfNeeded((struct tagWND *)v12);
      v77 = 3;
      if ( !gdwDeferWinEvent )
        v77 = 1;
      xxxWindowEvent(0x8003u, v77);
    }
LABEL_57:
    v56 = *(_QWORD *)(v12 + 40);
    if ( (*(_BYTE *)(v56 + 31) & 0x10) != 0 )
    {
      v57 = *((_DWORD *)v10 + 8);
      if ( (v57 & 0x8000) != 0 || (*(_BYTE *)(v56 + 21) & 1) == 0 && (v57 & 8) != 0 )
        SetOrClrWF(1LL, v12, 264LL, 1LL);
    }
    v58 = v10[14];
    if ( v58 )
      SelectWindowRgn((struct tagWND *)v12);
    ThreadUnlock1(v56, v58, v54);
    v2 = a1;
    v11 = v112;
    v4 = v104;
LABEL_63:
    v10 += 21;
    v112 = --v11;
  }
  while ( v11 >= 0 );
  if ( v4 )
    xxxWindowEvent(0x8004u, gdwDeferWinEvent != 0 ? 2 : 0);
LABEL_66:
  ThreadUnlock1(v8, v7, v9);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v120);
  return v3;
}
