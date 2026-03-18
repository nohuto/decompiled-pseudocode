/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C01214B4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C02346E0 (xxxEndMenuLoop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     GetNonChildAncestor @ 0x1C003366C (GetNonChildAncestor.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C005D240 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSetViewportOrg @ 0x1C005D314 (GreSetViewportOrg.c)
 *     ThreadLockMenuNoModify @ 0x1C005E1E4 (ThreadLockMenuNoModify.c)
 *     GetAppCompatFlags2 @ 0x1C0060800 (GetAppCompatFlags2.c)
 *     GetDPIMetrics @ 0x1C00608B0 (GetDPIMetrics.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0061074 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     GreSelectFont @ 0x1C0062690 (GreSelectFont.c)
 *     MNGetpItemIndex @ 0x1C00636B8 (MNGetpItemIndex.c)
 *     GreSetTextColor @ 0x1C0063F10 (GreSetTextColor.c)
 *     MNGetpItemFromIndex @ 0x1C00646F8 (MNGetpItemFromIndex.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4D2C (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     MNIsOwnerDrawItem @ 0x1C00AECA0 (MNIsOwnerDrawItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0101EAC (GetOemBitmapInfoForDpi.c)
 *     CALL_LPK @ 0x1C014B814 (CALL_LPK.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C024D04C (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C02540DC (xxxPSMTextOut.c)
 *     GetPrefixCount @ 0x1C025FEE4 (GetPrefixCount.c)
 *     xxxPSMGetTextExtent @ 0x1C0261844 (xxxPSMGetTextExtent.c)
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
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  int v22; // r8d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _DWORD *DPIMetrics; // rax
  int v27; // r15d
  unsigned int v28; // r12d
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ebx
  unsigned int DpiForSystem; // eax
  int v33; // edx
  int v34; // ebx
  __int64 v35; // rcx
  _DWORD *v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  _BYTE *v39; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v41; // rcx
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 **v46[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-A8h]
  __int64 v48; // [rsp+68h] [rbp-A0h]
  __int64 v49; // [rsp+70h] [rbp-98h]
  __int64 v50; // [rsp+78h] [rbp-90h]
  __int64 v51; // [rsp+80h] [rbp-88h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h]
  __int128 v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-60h]
  __int128 v56; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-48h]
  _BYTE v58[512]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v46, 0LL);
  v47 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v51 = 0LL;
  v53 = ThreadWin32Thread;
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
        SmartObjStackRefBase<tagMENU>::operator=(v46, *(_QWORD *)(NonChildAncestor + 168));
        if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v46) )
        {
          v8 = ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000
            && (*(_DWORD *)((*v46[0])[5] + 40) & 1) == 0;
          v9 = *(_DWORD *)((*v46[0])[5] + 40);
          if ( v2 )
          {
            if ( (v9 & 4) != 0 )
              return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v46);
            v10 = *(_QWORD *)(gpsi + 4752LL);
            *(_DWORD *)((*v46[0])[5] + 40) |= 4u;
          }
          else
          {
            if ( (v9 & 4) == 0 )
              return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v46);
            if ( *(_QWORD *)((*v46[0])[5] + 24) )
            {
              v10 = *(_QWORD *)((*v46[0])[5] + 24);
            }
            else if ( v8 )
            {
              v10 = *(_QWORD *)(gpsi + 4936LL);
            }
            else
            {
              v10 = *(_QWORD *)(gpsi + 4728LL);
            }
            *(_DWORD *)((*v46[0])[5] + 40) &= ~4u;
          }
          v49 = v10;
          v11 = (*v46[0])[11];
          DCEx = _GetDCEx(v6, 0LL, 65539LL);
          v13 = v47;
          v14 = (HDC)DCEx;
          if ( !v47 )
            v13 = (__int64)*v46[0];
          ThreadLockMenuNoModify(v13, &v56);
          LODWORD(v48) = 0;
          if ( *(_DWORD *)((*v46[0])[5] + 44) )
          {
            do
            {
              v17 = v47;
              if ( !v47 )
                v17 = (__int64)*v46[0];
              if ( (unsigned int)MNGetpItemIndex(v17, v11) == -1 )
                break;
              v19 = v47;
              if ( !v47 )
                v19 = (__int64)*v46[0];
              v21 = MNIsOwnerDrawItem(v19, (_DWORD **)v11, v16, v18);
              v52 = *(_QWORD *)(v11 + 88);
              v50 = *(_QWORD *)(v11 + 24);
              if ( v50 || v21 )
              {
                if ( v21 )
                {
                  GetDPIMETRICS(v6);
                  GreSelectFont(v14);
                  v22 = 0;
                  v23 = 0;
                }
                else
                {
                  GetDPIMetrics(v20);
                  GreSelectFont(v14);
                  v22 = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
                  v23 = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
                }
                GreSetViewportOrg(v14, v23, v22);
                if ( v2 && (*(_DWORD *)(*(_QWORD *)v11 + 4LL) & 0x100) != 0 )
                  v24 = *(_QWORD *)(gpsi + 4904LL);
                else
                  v24 = v10;
                GreSelectBrush(v14, v24);
                if ( v21 )
                {
                  xxxSendMenuDrawItemMessage((__int64)v14, 1, v46, (__int64 *)v11, 0, 0, 0LL);
                }
                else
                {
                  DPIMetrics = (_DWORD *)GetDPIMetrics(v25);
                  v27 = DPIMetrics[5];
                  if ( *(_DWORD *)(*(_QWORD *)v11 + 76LL) - DPIMetrics[3] - v27 != 1 )
                    v27 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v11 + 76LL) - DPIMetrics[3] - v27 - 1) >> 1;
                  v28 = DPIMetrics[2];
                  if ( (**(_DWORD **)v11 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(v14);
                    v29 = v47;
                    if ( !v47 )
                      v29 = (__int64)*v46[0];
                    if ( (unsigned int)MNGetpItemIndex(v29, v11) == -1 || v52 != *(_QWORD *)(v11 + 88) )
                      break;
                    v31 = *(_DWORD *)(*(_QWORD *)v11 + 72LL);
                    DpiForSystem = GetDpiForSystem(v30);
                    v28 = v31 - *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) - v51 + v28 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(v53) )
                  {
                    if ( a2 )
                    {
                      v33 = *(_DWORD *)(gpsi + 4596LL);
                    }
                    else if ( v8 )
                    {
                      v33 = *(_DWORD *)(gpsi + 4688LL);
                    }
                    else
                    {
                      v33 = *(_DWORD *)(gpsi + 4584LL);
                    }
                    v34 = GreSetTextColor(v14, v33);
                    xxxPSMTextOut(v14, *(_DWORD *)(*(_QWORD *)v11 + 48LL), 0x200000);
                    v35 = v47;
                    if ( !v47 )
                      v35 = (__int64)*v46[0];
                    if ( (unsigned int)MNGetpItemIndex(v35, v11) == -1 || v52 != *(_QWORD *)(v11 + 88) )
                      break;
                    GreSetTextColor(v14, v34);
                  }
                  else
                  {
                    v55 = 0LL;
                    v36 = *(_DWORD **)v11;
                    v54 = 0LL;
                    v37 = v36[12];
                    if ( v37 < 0xFF )
                    {
                      v39 = v58;
                    }
                    else
                    {
                      v38 = Win32AllocPool(2LL * (v37 + 1), 1953657685LL);
                      v39 = (_BYTE *)v38;
                      if ( !v38 )
                        break;
                      PushW32ThreadLock(v38, &v54, (__int64)Win32FreePool);
                      v36 = *(_DWORD **)v11;
                    }
                    PrefixCount = GetPrefixCount(v50, (unsigned int)v36[12], v39, (unsigned int)v36[12]);
                    xxxDrawItemUnderline(v46, v11, v14, v28, v27, v39, PrefixCount);
                    if ( v39 != v58 )
                      PopAndFreeAlwaysW32ThreadLock((__int64)&v54);
                  }
                  v2 = a2;
                }
              }
              v41 = v47;
              v42 = v48 + 1;
              LODWORD(v48) = v48 + 1;
              if ( !v47 )
                v41 = (__int64)*v46[0];
              v43 = MNGetpItemFromIndex(v41, v42);
              v10 = v49;
              v11 = v43;
            }
            while ( (unsigned int)v15 < *(_DWORD *)((*v46[0])[5] + 44) );
          }
          v44 = *(_QWORD *)(*((_QWORD *)&v56 + 1) + 40LL);
          *(_DWORD *)(v44 + 40) &= ~0x200u;
          ThreadUnlock1(v44, v15, v16);
          _ReleaseDC(v14);
        }
      }
    }
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v46);
}
