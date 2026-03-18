/*
 * XREFs of ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74
 * Callers:
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     MNGetpItemFromIndex @ 0x1C00350E0 (MNGetpItemFromIndex.c)
 *     IsTrayWindow @ 0x1C0058D40 (IsTrayWindow.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00C9768 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C011B6F8 (xxxSendMinRectMessages.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02432D0 (-GetMenuRightAlignHint@MenuHelpers@@YA_NXZ.c)
 */

__int64 __fastcall xxxMNPositionHierarchy(__int64 **a1, __int64 *a2, int a3, int a4, int *a5, LONG *a6, __int64 a7)
{
  __int64 *v10; // rax
  _DWORD *v11; // r9
  bool v12; // zf
  __int64 *v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // di
  int v18; // esi
  __int64 *v19; // rax
  MenuHelpers *v20; // rcx
  bool v21; // bl
  __int64 v22; // r9
  LONG left; // eax
  int v24; // edx
  LONG v25; // ebx
  __int64 v26; // rax
  __int64 *v27; // rdx
  __int64 v28; // rsi
  LONG bottom; // edi
  int v30; // esi
  __int64 *v31; // rax
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagMONITOR *v36; // rax
  __int64 *v37; // rdx
  __int64 v38; // rbx
  int v39; // edi
  LONG v40; // ebx
  _DWORD *v41; // rcx
  unsigned int DpiForSystem; // eax
  _QWORD *v43; // rcx
  int v45; // [rsp+20h] [rbp-71h]
  __int128 v46; // [rsp+28h] [rbp-69h] BYREF
  __int64 v47; // [rsp+38h] [rbp-59h]
  int v48; // [rsp+40h] [rbp-51h]
  __int64 *v49; // [rsp+48h] [rbp-49h]
  int *v50; // [rsp+50h] [rbp-41h]
  LONG *v51; // [rsp+58h] [rbp-39h]
  __int64 v52; // [rsp+60h] [rbp-31h]
  int **v53[2]; // [rsp+68h] [rbp-29h] BYREF
  int **v54[2]; // [rsp+78h] [rbp-19h] BYREF
  struct tagRECT v55; // [rsp+88h] [rbp-9h] BYREF

  v50 = a5;
  v51 = a6;
  v52 = a7;
  v10 = *a1;
  v49 = a2;
  v46 = 0LL;
  v11 = (_DWORD *)*v10;
  v12 = (*(_DWORD *)*v10 & 1) == 0;
  v13 = *a1;
  if ( v12 )
  {
    v14 = 1;
    v30 = *(_DWORD *)(*a2 + 64) + *(_DWORD *)(*a2 + 72) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v13 + 16) + 40LL) + 88LL);
    bottom = *(_DWORD *)(*a2 + 68) + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 92LL);
    if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 124LL) & 3) != 0 )
    {
      v31 = (__int64 *)MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(*(_QWORD *)(**a1 + 40) + 116LL));
      v32 = *(_DWORD *)(*v31 + 68);
      bottom += *(_DWORD *)(GetDPIMetrics(*v31, v33, v34, v35) + 28) - v32;
    }
    v36 = _MonitorFromWindowInternal(*(struct tagWND **)(**a1 + 16), 1LL, 0LL, (__int64)v11);
    v37 = *a1;
    v38 = (__int64)v36;
    v47 = (__int64)v36;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v54, *v37);
    MNGetPopupBoundsRect(v54, v38, &v46, 0);
    if ( ((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0) != ((*(_DWORD *)**a1 & 0x10) != 0)
      && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3 >= (int)v46 )
    {
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
      v14 = 2;
    }
    if ( v30 + a3 > SDWORD2(v46) )
    {
      v14 = 2;
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) - a3 + 3;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
      v14 ^= 3u;
  }
  else
  {
    v14 = 4;
    v15 = *(_QWORD *)(*(_QWORD *)(*v13 + 16) + 40LL);
    v16 = *a2;
    v17 = *(_BYTE *)(v15 + 31) & 0x20;
    v18 = *(_DWORD *)(*a2 + 64);
    v48 = *(_DWORD *)(*a2 + 68);
    LODWORD(v15) = *(_DWORD *)(v16 + 72);
    LODWORD(v47) = *(_DWORD *)(v16 + 76);
    v45 = v15;
    v19 = *a1;
    v55 = *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
    v20 = (MenuHelpers *)*v19;
    v21 = 1;
    if ( *(_QWORD *)(*v19 + 40) )
    {
      v20 = *(MenuHelpers **)(*(_QWORD *)(**a1 + 40) + 40LL);
      if ( (*((_DWORD *)v20 + 10) & 0x20) != 0 )
        v21 = 0;
    }
    if ( v17 && (unsigned int)IsTrayWindow(*(_QWORD **)(**a1 + 16)) )
      xxxSendMinRectMessages(*(unsigned __int64 **)(**a1 + 16), (struct _LARGE_STRING *)&v55);
    if ( MenuHelpers::GetMenuRightAlignHint(v20) || !v21 )
    {
      v24 = v45;
      *(_DWORD *)**a1 |= 0x10u;
      left = v55.left;
      if ( v17 )
        v25 = v55.right - a3;
      else
        v25 = v55.left + v45 + v18 - a3;
    }
    else
    {
      left = v55.left;
      v24 = v45;
      if ( v17 )
        v25 = v55.left;
      else
        v25 = v18 + v55.left;
    }
    if ( !v17 )
    {
      v55.left = v18 + left;
      v55.right = v24 + v18 + left;
      v55.top += v48;
      v55.bottom = v55.top + v47;
    }
    v26 = MonitorFromRect(&v55, 1LL, 0LL, v22);
    v27 = *a1;
    v28 = v26;
    v47 = v26;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v53, *v27);
    MNGetPopupBoundsRect(v53, v28, &v46, 0);
    if ( v17 )
    {
      bottom = v55.top - a4;
      if ( v55.top - a4 < SDWORD1(v46) )
        bottom = v55.bottom;
    }
    else
    {
      bottom = v55.bottom;
    }
    v30 = DWORD2(v46) - a3;
    if ( v25 < DWORD2(v46) - a3 )
      v30 = v25;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) & 0x40) != 0 )
    {
      v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 96LL)
          + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL)
          - v30
          - a3;
      if ( v30 >= DWORD2(v46) - a3 )
        v30 = DWORD2(v46) - a3;
    }
  }
  if ( bottom + a4 <= SHIDWORD(v46) )
  {
    v40 = DWORD1(v46);
  }
  else
  {
    v39 = bottom - a4;
    v40 = DWORD1(v46);
    v41 = (_DWORD *)**a1;
    if ( (*v41 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem((__int64)v41);
      bottom = v39 - GetDpiDependentMetric(26LL, DpiForSystem);
      if ( bottom < v40 )
      {
LABEL_44:
        bottom = HIDWORD(v46) - a4;
        goto LABEL_46;
      }
      v14 = 8;
    }
    else
    {
      bottom = *(_DWORD *)(*v49 + 76) + 6 + v39;
    }
    if ( bottom < v40 || bottom + a4 > SHIDWORD(v46) )
      goto LABEL_44;
  }
LABEL_46:
  if ( v30 <= (int)v46 )
    v30 = v46;
  v43 = (_QWORD *)v52;
  if ( bottom <= v40 )
    bottom = v40;
  *v50 = v30;
  *v51 = bottom;
  if ( v43 )
    *v43 = v47;
  return v14;
}
