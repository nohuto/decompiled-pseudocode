/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C0122314
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C004B5F8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0233850 (xxxEndMenuLoop.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0033A54 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C003583C (MNIsOwnerDrawItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00361FC (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     GreSelectFont @ 0x1C00372A0 (GreSelectFont.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     GreSetTextColor @ 0x1C0092300 (GreSetTextColor.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     GetNonChildAncestor @ 0x1C00C5584 (GetNonChildAncestor.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00F7AF4 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ThreadLockMenuNoModify @ 0x1C00FB424 (ThreadLockMenuNoModify.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00FE61C (GetOemBitmapInfoForDpi.c)
 *     GreSetViewportOrg @ 0x1C0104B50 (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C011B8B8 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     CALL_LPK @ 0x1C014E024 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024BA44 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0252ACC (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025E8C4 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C0260224 (xxxPSMGetTextExtent.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v2; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 NonChildAncestor; // rax
  struct tagWND *v6; // r13
  BOOL v8; // r14d
  int v9; // ecx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 DCEx; // rax
  __int64 v13; // rcx
  HDC v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *DPIMetrics; // rax
  int v32; // r15d
  unsigned int v33; // r12d
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ebx
  unsigned int DpiForSystem; // eax
  __int64 v38; // r8
  char *OemBitmapInfoForDpi; // rax
  int v40; // edx
  int v41; // ebx
  __int64 v42; // rcx
  _DWORD *v43; // rax
  unsigned int v44; // ecx
  __int64 v45; // rax
  _BYTE *v46; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v48; // rcx
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v53[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A8h]
  __int64 v55; // [rsp+68h] [rbp-A0h]
  __int64 v56; // [rsp+70h] [rbp-98h]
  __int64 v57; // [rsp+78h] [rbp-90h]
  __int64 v58; // [rsp+80h] [rbp-88h]
  __int64 v59; // [rsp+88h] [rbp-80h]
  __int64 v60; // [rsp+90h] [rbp-78h]
  __int128 v61; // [rsp+98h] [rbp-70h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-60h]
  __int128 v63; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-48h]
  _BYTE v65[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v53, 0LL);
  v54 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v58 = 0LL;
  v60 = ThreadWin32Thread;
  if ( (gdwPUDFlags & 0x20000) == 0
    && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000
    && (GetAppCompatFlags2(0x400u) & 2) == 0 )
  {
    NonChildAncestor = GetNonChildAncestor(a1);
    v6 = (struct tagWND *)NonChildAncestor;
    if ( NonChildAncestor )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
      {
        SmartObjStackRefBase<tagMENU>::operator=(v53, *(_QWORD *)(NonChildAncestor + 168));
        if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v53) )
        {
          v8 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
            && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 40LL) & 1) == 0;
          v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 40LL);
          if ( v2 )
          {
            if ( (v9 & 4) != 0 )
              return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v53);
            v10 = *(_QWORD *)(gpsi + 4752LL);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 40LL) |= 4u;
          }
          else
          {
            if ( (v9 & 4) == 0 )
              return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v53);
            if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 24LL) )
            {
              v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 24LL);
            }
            else if ( v8 )
            {
              v10 = *(_QWORD *)(gpsi + 4936LL);
            }
            else
            {
              v10 = *(_QWORD *)(gpsi + 4728LL);
            }
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 40LL) &= ~4u;
          }
          v56 = v10;
          v11 = *(_QWORD *)(*(_QWORD *)v53[0] + 88LL);
          DCEx = _GetDCEx(v6, 0LL, 65539LL);
          v13 = v54;
          v14 = (HDC)DCEx;
          if ( !v54 )
            v13 = *(_QWORD *)v53[0];
          ThreadLockMenuNoModify(v13, &v63);
          LODWORD(v55) = 0;
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 44LL) )
          {
            do
            {
              v17 = v54;
              if ( !v54 )
                v17 = *(_QWORD *)v53[0];
              if ( (unsigned int)MNGetpItemIndex(v17, v11) == -1 )
                break;
              v18 = v54;
              if ( !v54 )
                v18 = *(_QWORD *)v53[0];
              v21 = MNIsOwnerDrawItem(v18, (_DWORD **)v11, v16);
              v59 = *(_QWORD *)(v11 + 88);
              v57 = *(_QWORD *)(v11 + 24);
              if ( v57 || v21 )
              {
                if ( v21 )
                {
                  GetDPIMETRICS(v6);
                  GreSelectFont(v14);
                  v24 = 0;
                  v25 = 0;
                }
                else
                {
                  GetDPIMetrics(v20, v19, v22, v23);
                  GreSelectFont(v14);
                  v24 = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
                  v25 = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
                }
                GreSetViewportOrg(v14, v25, v24);
                if ( v2 && (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 0x100) != 0 )
                  v26 = *(_QWORD *)(gpsi + 4904LL);
                else
                  v26 = v10;
                GreSelectBrush(v14, v26);
                if ( v21 )
                {
                  xxxSendMenuDrawItemMessage((__int64)v14, 1, v53, v11, 0, 0, 0LL);
                }
                else
                {
                  DPIMetrics = (_DWORD *)GetDPIMetrics(v28, v27, v29, v30);
                  v32 = DPIMetrics[5];
                  if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) - DPIMetrics[3] - v32 != 1 )
                    v32 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - DPIMetrics[3] - v32 - 1) >> 1;
                  v33 = DPIMetrics[2];
                  if ( (**(_DWORD **)v11 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(v14);
                    v34 = v54;
                    if ( !v54 )
                      v34 = *(_QWORD *)v53[0];
                    if ( (unsigned int)MNGetpItemIndex(v34, v11) == -1 || v59 != *(_QWORD *)(v11 + 88) )
                      break;
                    v36 = *(_DWORD *)(*(_QWORD *)v11 + 72LL);
                    DpiForSystem = GetDpiForSystem(v35);
                    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem, v38);
                    v33 = v36 - *((__int16 *)OemBitmapInfoForDpi + 2) - v58 + v33 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(v60) )
                  {
                    if ( a2 )
                    {
                      v40 = *(_DWORD *)(gpsi + 4596LL);
                    }
                    else if ( v8 )
                    {
                      v40 = *(_DWORD *)(gpsi + 4688LL);
                    }
                    else
                    {
                      v40 = *(_DWORD *)(gpsi + 4584LL);
                    }
                    v41 = GreSetTextColor(v14, v40);
                    xxxPSMTextOut(v14, *(_DWORD *)(*(_QWORD *)v11 + 48LL), 0x200000);
                    v42 = v54;
                    if ( !v54 )
                      v42 = *(_QWORD *)v53[0];
                    if ( (unsigned int)MNGetpItemIndex(v42, v11) == -1 || v59 != *(_QWORD *)(v11 + 88) )
                      break;
                    GreSetTextColor(v14, v41);
                  }
                  else
                  {
                    v62 = 0LL;
                    v43 = *(_DWORD **)v11;
                    v61 = 0LL;
                    v44 = v43[12];
                    if ( v44 < 0xFF )
                    {
                      v46 = v65;
                    }
                    else
                    {
                      v45 = Win32AllocPool(2LL * (v44 + 1), 1953657685LL);
                      v46 = (_BYTE *)v45;
                      if ( !v45 )
                        break;
                      PushW32ThreadLock(v45, &v61, (__int64)Win32FreePool);
                      v43 = *(_DWORD **)v11;
                    }
                    PrefixCount = GetPrefixCount(v57, (unsigned int)v43[12], v46, (unsigned int)v43[12]);
                    xxxDrawItemUnderline(v53, v11, v14, v33, v32, v46, PrefixCount);
                    if ( v46 != v65 )
                      PopAndFreeAlwaysW32ThreadLock((__int64)&v61);
                  }
                  v2 = a2;
                }
              }
              v48 = v54;
              v49 = v55 + 1;
              LODWORD(v55) = v55 + 1;
              if ( !v54 )
                v48 = *(_QWORD *)v53[0];
              v50 = MNGetpItemFromIndex(v48, v49);
              v10 = v56;
              v11 = v50;
            }
            while ( (unsigned int)v15 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v53[0] + 40LL) + 44LL) );
          }
          v51 = *(_QWORD *)(*((_QWORD *)&v63 + 1) + 40LL);
          *(_DWORD *)(v51 + 40) &= ~0x200u;
          ThreadUnlock1(v51, v15, v16);
          _ReleaseDC(v14);
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v53);
}
