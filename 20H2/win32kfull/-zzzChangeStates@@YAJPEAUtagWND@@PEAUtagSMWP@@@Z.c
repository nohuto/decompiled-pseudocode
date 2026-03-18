/*
 * XREFs of ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     OffsetChildren @ 0x1C003F1FC (OffsetChildren.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     GreClientRgnUpdated @ 0x1C00456A8 (GreClientRgnUpdated.c)
 *     IntersectRect @ 0x1C0045758 (IntersectRect.c)
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0047C30 (-ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C00482A4 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     GetNewMonitor @ 0x1C004A5B0 (GetNewMonitor.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     SetVisible @ 0x1C00925D0 (SetVisible.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PostShellHookMessages @ 0x1C00BF140 (PostShellHookMessages.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C2A48 (DecomposeWindowIfNeeded.c)
 *     SelectWindowRgn @ 0x1C00C7B7C (SelectWindowRgn.c)
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00C9C2C (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     PWInsertAfter @ 0x1C00C9DA4 (PWInsertAfter.c)
 *     ?ReValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x1C00CA020 (-ReValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z @ 0x1C00CAD2C (-ShouldRemoveMonitorRgn@@YAHPEAUtagWND@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     zzzCalcStartCursorHide @ 0x1C00CC4C0 (zzzCalcStartCursorHide.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C00CEAA8 (UnlinkWindow.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F9A00 (UpdateMonitorForWindowAndChildren.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00F9BFC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00F9C40 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C0110620 (WindowRedirectionBitmapMatchesMonitorAdapter.c)
 *     SetOldRedirectionBitmap @ 0x1C01207E4 (SetOldRedirectionBitmap.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     InvalidateGDIWindows @ 0x1C01E81B0 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzChangeStates(struct tagWND *a1, struct tagSMWP *a2)
{
  struct tagWND *v2; // r14
  unsigned int v3; // r12d
  int v4; // r15d
  struct tagSMWP *v5; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
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
  int v45; // eax
  __int64 v46; // r8
  __int64 v47; // r14
  struct tagRECT *v48; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 *v54; // rax
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rcx
  int v58; // edx
  HRGN v59; // rdx
  struct tagCVR *v61; // rcx
  int v62; // r8d
  struct tagWND *v63; // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rax
  unsigned __int64 v66; // rcx
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // edx
  int v70; // ebx
  unsigned int v71; // eax
  __int64 v72; // rdx
  int v73; // eax
  int v74; // edx
  __int64 v75; // rax
  __int64 i; // rbx
  int v77; // eax
  unsigned int v78; // ecx
  __int64 v79; // rax
  int v80; // ecx
  int v81; // r15d
  int v82; // r12d
  int v83; // ecx
  __int64 v84; // rcx
  char v85; // bl
  __int64 v86; // r8
  _DWORD *v87; // rdx
  char v88; // bl
  int v89; // eax
  HSURF v90; // rbx
  __int64 v91; // rcx
  int v92; // r8d
  int v93; // r9d
  __int64 v94; // r10
  int v95; // r11d
  __int64 v96; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v99; // rcx
  __int64 CurrentThreadProcess; // rax
  int v101; // [rsp+20h] [rbp-E0h]
  unsigned int updated; // [rsp+60h] [rbp-A0h]
  int v103; // [rsp+64h] [rbp-9Ch]
  int v104; // [rsp+68h] [rbp-98h]
  unsigned int v105; // [rsp+6Ch] [rbp-94h]
  HSURF v108; // [rsp+80h] [rbp-80h] BYREF
  int v109; // [rsp+88h] [rbp-78h]
  int v110; // [rsp+8Ch] [rbp-74h]
  int v111; // [rsp+90h] [rbp-70h]
  struct tagSIZE v112; // [rsp+98h] [rbp-68h] BYREF
  struct tagPOINT v113; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v114; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v115; // [rsp+B8h] [rbp-48h] BYREF
  int v116; // [rsp+C0h] [rbp-40h]
  int v117; // [rsp+C4h] [rbp-3Ch]
  _BYTE v118[8]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v119[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v120; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-18h]
  _QWORD v122[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v123; // [rsp+108h] [rbp+8h] BYREF
  __int128 v124; // [rsp+118h] [rbp+18h] BYREF
  struct tagRECT v125; // [rsp+128h] [rbp+28h] BYREF
  __int128 v126; // [rsp+138h] [rbp+38h] BYREF
  __int128 v127; // [rsp+148h] [rbp+48h]

  v2 = a1;
  v3 = 0;
  updated = 0;
  v122[2] = 0LL;
  v4 = 0;
  v103 = 0;
  v109 = 0;
  v121 = 0LL;
  v5 = a2;
  v120 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v119);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v122[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v122;
  v122[1] = v2;
  HMLockObject(v2);
  v10 = *((_QWORD *)v5 + 5);
  v11 = *((_DWORD *)v5 + 7) - 1;
  v111 = v11;
  if ( v11 < 0 )
    goto LABEL_66;
  do
  {
    v8 = *(_QWORD *)v10;
    v104 = 0;
    v105 = 0;
    v108 = 0LL;
    if ( !v8 )
      goto LABEL_63;
    v12 = HMValidateHandleNoSecure(v8, 1);
    if ( !v12 || !IsStillWindowC(*(_QWORD *)(v10 + 8), v7) )
    {
      *(_DWORD *)(v10 + 32) = 6159;
      *(_QWORD *)v10 = 0LL;
    }
    v8 = *(_DWORD *)(v10 + 32) & 0x18E7;
    if ( (_DWORD)v8 == 6151 )
    {
      *(_DWORD *)(v10 + 32) |= 8u;
      goto LABEL_63;
    }
    if ( (_DWORD)v8 == 6147
      && (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 19LL) & 4) == 0
      && (unsigned int)ValidateZorder((struct tagCVR *)v10) )
    {
      *(_DWORD *)(v10 + 32) |= 0xCu;
      v8 = *(_QWORD *)(v10 + 96);
      if ( v8 )
      {
        GreDeleteObject(v8);
        *(_QWORD *)(v10 + 96) = 0LL;
      }
      goto LABEL_63;
    }
    v13 = 6147LL;
    if ( (*(_DWORD *)(v10 + 32) & 0x1803) != 0x1803 )
    {
      v14 = *(_QWORD *)(v12 + 40);
      if ( (*(_BYTE *)(v14 + 27) & 0x20) == 0 && (*(_BYTE *)(v14 + 26) & 8) == 0
        || (v15 = *(_DWORD *)(v14 + 100) - *(_DWORD *)(v14 + 92),
            v110 = *(_DWORD *)(v14 + 96) - *(_DWORD *)(v14 + 88),
            v110 == *(_DWORD *)(v10 + 24))
        && v15 == *(_DWORD *)(v10 + 28) )
      {
        v15 = HIDWORD(v108);
        v110 = (int)v108;
      }
      else
      {
        v104 = 1;
      }
      if ( *(_DWORD *)(v14 + 88) != *(_DWORD *)(v10 + 16) || *(_DWORD *)(v14 + 92) != *(_DWORD *)(v10 + 20) )
        v105 = 1;
      v114 = *(_OWORD *)(*((_QWORD *)v2 + 5) + 104LL);
      if ( (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)v12) )
      {
        v96 = 0LL;
        if ( (*(_DWORD *)(v10 + 156) & 0x100) == 0 )
        {
          v96 = v12 + 224;
          *(_DWORD *)(v12 + 228) = 0;
          *(_DWORD *)(v12 + 224) = 0;
        }
        LogicalToPhysicalInPlaceRectWithSubpixel(v2, &v114, v96);
        PhysicalToLogicalInPlaceRectWithSubpixel(v12, &v114, v96);
        v109 = 1;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) = *(_DWORD *)(v10 + 16);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) = *(_DWORD *)(v10 + 20);
      DesktopWindow = GetDesktopWindow(v12);
      v19 = DWORD1(v114);
      v20 = v114;
      if ( v2 != (struct tagWND *)DesktopWindow )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 88LL) += v114;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL) += v19;
      }
      v21 = *(_DWORD **)(v12 + 40);
      v22 = v21[22];
      v23 = *(_DWORD *)(v10 + 24) + v22;
      v24 = v22 - v17;
      v25 = v21[23];
      v21[24] = v23;
      v26 = v25 - v18;
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 100LL) = *(_DWORD *)(v10 + 28) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 92LL);
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
      if ( v12 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
      {
        if ( v2 != (struct tagWND *)GetDesktopWindow(v12) )
        {
          v92 -= v20;
          v93 -= v95;
        }
        if ( v92 | v93 )
        {
          *(_DWORD *)(v94 + 316) += v92;
          *(_DWORD *)(v94 + 320) += v93;
          v28 = *(_DWORD **)(v12 + 40);
        }
      }
      v31 = *(_OWORD *)(v28 + 26);
      v28[26] = *(_DWORD *)(v10 + 40);
      v32 = *(_QWORD *)(v12 + 40);
      v33 = *(_DWORD *)(v10 + 44);
      v127 = v31;
      *(_DWORD *)(v32 + 108) = v33;
      if ( v2 != (struct tagWND *)GetDesktopWindow(v12) )
      {
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL) += v20;
        *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL) += v34;
      }
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 112LL) = *(_DWORD *)(v10 + 48) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 104LL);
      *(_DWORD *)(*(_QWORD *)(v12 + 40) + 116LL) = *(_DWORD *)(v10 + 52) + *(_DWORD *)(*(_QWORD *)(v12 + 40) + 108LL);
      v35 = *(_QWORD *)(v12 + 40);
      v36 = v127 - *(_QWORD *)(v35 + 104);
      if ( (_QWORD)v127 == *(_QWORD *)(v35 + 104) )
        v36 = *((_QWORD *)&v127 + 1) - *(_QWORD *)(v35 + 112);
      v37 = v36 == 0;
      if ( (unsigned int)ShouldRemoveMonitorRgn((struct tagWND *)v12) )
        SelectWindowRgn((struct tagWND *)v12, 0LL, ((*(_DWORD *)(v10 + 32) >> 3) & 1) == 0);
      if ( v104 )
      {
        *(_DWORD *)(v10 + 156) |= 1u;
        v84 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v84 + 27) & 0x20) != 0 && (v85 = *(_BYTE *)(v84 + 26), (v85 & 0x20) == 0) )
        {
          v88 = v85 & 8;
          v108 = 0LL;
          v89 = RecreateRedirectionBitmap((struct tagWND *)v12, 0, (unsigned __int64)&v108 & -(__int64)(v88 != 0));
          updated = v89;
          if ( v88 && v89 >= 0 )
          {
            v90 = v108;
            if ( v108 )
            {
              if ( (unsigned int)SetOldRedirectionBitmap(v12, v108) )
                v90 = 0LL;
            }
            else
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v118);
              xxxInternalInvalidate((struct tagWND *)v12, (HRGN)1, 0x401u);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v118);
            }
          }
          else
          {
            v90 = v108;
          }
          if ( v90 )
            DeleteOrSetRedirectionBitmap(v12, v90, 1);
        }
        else if ( (unsigned int)IsWindowDesktopComposed(v12) )
        {
          v87 = *(_DWORD **)(v12 + 40);
          v112.cx = v87[24] - v87[22];
          v112.cy = v87[25] - v87[23];
          updated = UpdateSprite(
                      *(HDEV *)(gpDispInfo + 40LL),
                      (struct tagWND *)v12,
                      v86,
                      0LL,
                      0LL,
                      &v112,
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
        v65 = *(_QWORD *)(v12 + 40);
        v38 = 1LL;
        v66 = *(_QWORD *)(v65 + 168);
        if ( v66 <= 1 || (*(_BYTE *)(v65 + 21) & 8) != 0 )
          goto LABEL_31;
        GreOffsetRgn(v66, v24, v26);
      }
      v38 = 1LL;
LABEL_31:
      v39 = *(unsigned int *)(v10 + 72);
      if ( *(_QWORD *)(v10 + 72) || v109 )
      {
        v64 = *(_QWORD *)(*(_QWORD *)(v12 + 40) + 136LL);
        if ( v64 > 1 )
        {
          GreOffsetRgn(v64, v39, *(unsigned int *)(v10 + 76));
          LODWORD(v39) = *(_DWORD *)(v10 + 72);
        }
        OffsetChildren((struct tagWND *)v12, v39, *(_DWORD *)(v10 + 76), 0LL, v101);
      }
      v13 = v105;
      if ( v105 || !v37 || v24 || v26 )
      {
        v39 = *(_QWORD *)(v12 + 40);
        v40 = 0;
        v113 = *(struct tagPOINT *)(v39 + 88);
        v124 = 0LL;
        if ( v105 )
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
            if ( v104 )
            {
              v80 = *(_DWORD *)(v39 + 96) - *(_DWORD *)(v39 + 88);
              v81 = -v24;
              v82 = -v26;
              v115 = 0LL;
              v116 = v80;
              v83 = *(_DWORD *)(v39 + 100) - *(_DWORD *)(v39 + 92);
              DWORD2(v124) = v81 + v110;
              v117 = v83;
              HIDWORD(v124) = v82 + v15;
              *(_QWORD *)&v124 = __PAIR64__(v82, v81);
              IntersectRect(&v124, (int *)&v124, (int *)&v115);
            }
            if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
            {
              InvalidateGDIWindows(v12);
              GreClientRgnUpdated(1);
            }
            if ( !v104 || (v40 = 1, (unsigned int)IsWindowDesktopComposed(v12)) )
              v40 = 0;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) != 0 )
          updated = UpdateSprite(
                      *(HDEV *)(gpDispInfo + 40LL),
                      (struct tagWND *)v12,
                      v38,
                      0LL,
                      &v113,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0,
                      (struct tagRECT *)((unsigned __int64)&v124 & -(__int64)(v40 != 0)));
        if ( v105 )
          goto LABEL_41;
      }
      if ( v104 )
      {
LABEL_41:
        v13 = *(_QWORD *)(v12 + 40);
        if ( (*(_BYTE *)(v13 + 27) & 0x20) != 0 && (*(_BYTE *)(v13 + 26) & 0x20) == 0 )
        {
          v13 = gptiCurrent;
          v79 = *(_QWORD *)(gptiCurrent + 672LL);
          if ( (!v79 || (*(_DWORD *)(v79 + 196) & 0x100000) == 0)
            && !(unsigned int)WindowRedirectionBitmapMatchesMonitorAdapter(v12, v39, v38) )
          {
            *(_DWORD *)(*(_QWORD *)(v12 + 40) + 232LL) &= ~0x80000u;
            RecreateRedirectionBitmap((struct tagWND *)v12, 0, 0LL);
          }
        }
      }
      v4 = v103;
      v3 = updated;
      v2 = a1;
      v5 = a2;
    }
    if ( (*(_DWORD *)(v10 + 32) & 4) != 0 )
      goto LABEL_44;
    if ( !(unsigned int)ReValidateZorder((struct tagCVR *)v10) )
      goto LABEL_163;
    if ( !ValidateWindowPos(v61, v2) )
    {
      v62 = *(_DWORD *)(v10 + 32);
LABEL_163:
      *(_DWORD *)(v10 + 32) = v62 | 4;
      SetOrClrWF(0LL, v12, 772LL, 1LL);
      goto LABEL_44;
    }
    UnlinkWindow(v12, v2);
    v63 = (struct tagWND *)PWInsertAfter(*(_QWORD *)(v10 + 8));
    LinkWindow((struct tagWND *)v12, v63, v2);
    v103 = v4 + 1;
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 19LL) & 4) != 0 )
    {
      SetOrClrWF(0LL, v12, 772LL, 1LL);
      *(_BYTE *)(*(_QWORD *)(v12 + 40) + 24LL) ^= 8u;
    }
LABEL_44:
    if ( (*(_DWORD *)(v10 + 156) & 0x20) != 0 )
    {
      v42 = ValidateHmonitor(*(_QWORD *)(v10 + 128));
      v43 = *(_DWORD *)(v10 + 156);
      v44 = v42;
      v125 = 0LL;
      if ( (v43 & 0x80u) != 0 )
        v125 = *(struct tagRECT *)(v10 + 136);
      v45 = IsRectEmptyInl(&v125);
      v47 = 0LL;
      v48 = &v125;
      if ( v45 )
        v48 = 0LL;
      NewMonitor = GetNewMonitor((struct tagWND *)v12, v48, v46);
      if ( NewMonitor && v44 != NewMonitor )
        *(_DWORD *)(v10 + 156) ^= (*(_DWORD *)(v10 + 156) ^ ((unsigned int)UpdateMonitorForWindowAndChildren(
                                                                             v12,
                                                                             NewMonitor,
                                                                             v10 + 160,
                                                                             0LL) << 6)) & 0x40;
    }
    else
    {
      v47 = 0LL;
    }
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v13)
      || (CurrentProcess = PsGetCurrentProcess(v52, v51, v53),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v99),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      v54 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v54 )
        v47 = *v54;
    }
    *(_QWORD *)&v120 = *(_QWORD *)(v47 + 416);
    *(_QWORD *)(v47 + 416) = &v120;
    *((_QWORD *)&v120 + 1) = v12;
    HMLockObject(v12);
    v56 = *(_DWORD *)(v10 + 32);
    if ( (v56 & 0x40) != 0 )
    {
      v67 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL);
      if ( (*(_DWORD *)(v67 + 12) & 0x40) != 0 )
        zzzCalcStartCursorHide(v67, 5000LL);
      v68 = SetVisible((struct tagWND *)v12, 9u);
      v69 = 3;
      v70 = v68;
      if ( !gdwDeferWinEvent )
        v69 = 1;
      xxxWindowEvent(0x8002u, v69);
      if ( v70 )
      {
        *(_DWORD *)(v10 + 156) |= 2u;
        if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 26LL) & 8) == 0 )
        {
          v3 = ComposeWindowIfNeeded((struct tagWND *)v12);
          updated = v3;
        }
      }
      v71 = IsTrayWindow((_QWORD *)v12);
      v72 = *(_QWORD *)(v12 + 40);
      v55 = v71;
      if ( (*(_WORD *)(v72 + 42) & 0x2FFF) == 0x2AA )
      {
        if ( (*(_BYTE *)(v72 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *(_DWORD *)(v10 + 32) |= 0x40000000u;
        }
        v74 = *(_DWORD *)(v10 + 32);
        v73 = v74;
      }
      else
      {
        if ( (*(_BYTE *)(v72 + 16) & 0x40) != 0 )
        {
          *((_DWORD *)v5 + 6) |= 1u;
          *(_DWORD *)(v10 + 32) |= 0x40000000u;
        }
        v73 = *(_DWORD *)(v10 + 32);
        if ( !(_DWORD)v55 && !*(_QWORD *)(v12 + 120) )
        {
LABEL_101:
          LOWORD(v74) = v73;
          if ( (v73 & 0x40000000) != 0 )
            *(_DWORD *)(v10 + 156) |= 0x10u;
LABEL_103:
          if ( (*(_BYTE *)(*(_QWORD *)(v12 + 40) + 20LL) & 0x40) != 0 )
          {
            *((_DWORD *)v5 + 6) |= 1u;
            *(_DWORD *)(v10 + 32) |= 0x80000000;
            v74 = *(_DWORD *)(v10 + 32);
          }
LABEL_105:
          if ( (v74 & 0x4008) != 8
            && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 136) + 8LL) + 9LL) & 8) != 0
            && *(_QWORD *)(v12 + 24) == grpdeskRitInput )
          {
            v75 = *(_QWORD *)(v12 + 104);
            v123 = 0LL;
            for ( i = *(_QWORD *)(v75 + 112); i; i = *(_QWORD *)(i + 88) )
            {
              if ( i == v12 )
              {
                CreateSpb((struct tagWND *)v12);
                goto LABEL_57;
              }
              v91 = *(_QWORD *)(i + 40);
              if ( (*(_BYTE *)(v91 + 31) & 0x10) != 0 )
              {
                v126 = *(_OWORD *)(v91 + 88);
                TransformRectBetweenCoordinateSpaces(&v126, &v126, v12, i);
                if ( (unsigned int)IntersectRect(&v123, (int *)(*(_QWORD *)(v12 + 40) + 88LL), (int *)&v126) )
                  goto LABEL_57;
              }
            }
          }
          goto LABEL_57;
        }
        *((_DWORD *)v5 + 6) |= 1u;
        v74 = *(_DWORD *)(v10 + 32) | 0x10000000;
        *(_DWORD *)(v10 + 32) = v74;
        v73 = v74;
        if ( (_DWORD)v55 )
          goto LABEL_105;
        *(_DWORD *)(v10 + 156) |= 8u;
      }
      if ( (_DWORD)v55 )
        goto LABEL_105;
      if ( *(_QWORD *)(v12 + 120) )
        goto LABEL_103;
      goto LABEL_101;
    }
    if ( (v56 & 0x80u) != 0 )
    {
      v77 = IsTrayWindow((_QWORD *)v12);
      if ( (*(_BYTE *)(v10 + 32) & 0x1F) != 0x1F && v77 && (*(_WORD *)(*(_QWORD *)(v12 + 40) + 42LL) & 0x2FFF) != 0x2AA )
      {
        *((_DWORD *)v5 + 6) |= 1u;
        *(_DWORD *)(v10 + 32) |= 0x20000000u;
      }
      if ( (unsigned int)SetVisible((struct tagWND *)v12, 0xAu) )
        DecomposeWindowIfNeeded((struct tagWND *)v12);
      v78 = 3;
      if ( !gdwDeferWinEvent )
        v78 = 1;
      xxxWindowEvent(0x8003u, v78);
    }
LABEL_57:
    v57 = *(_QWORD *)(v12 + 40);
    if ( (*(_BYTE *)(v57 + 31) & 0x10) != 0 )
    {
      v58 = *(_DWORD *)(v10 + 32);
      if ( (v58 & 0x8000) != 0 || (*(_BYTE *)(v57 + 21) & 1) == 0 && (v58 & 8) != 0 )
        SetOrClrWF(1LL, v12, 264LL, 1LL);
    }
    v59 = *(HRGN *)(v10 + 112);
    if ( v59 )
      SelectWindowRgn((struct tagWND *)v12, v59, ((*(_DWORD *)(v10 + 32) >> 3) & 1) == 0);
    ThreadUnlock1(v57, v59, v55);
    v2 = a1;
    v11 = v111;
    v4 = v103;
LABEL_63:
    v10 += 168LL;
    v111 = --v11;
  }
  while ( v11 >= 0 );
  if ( v4 )
    xxxWindowEvent(0x8004u, gdwDeferWinEvent != 0 ? 2 : 0);
LABEL_66:
  ThreadUnlock1(v8, v7, v9);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v119);
  return v3;
}
