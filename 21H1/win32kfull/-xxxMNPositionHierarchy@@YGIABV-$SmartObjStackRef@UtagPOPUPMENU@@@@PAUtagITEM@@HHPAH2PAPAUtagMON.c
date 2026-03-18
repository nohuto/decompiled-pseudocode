/*
 * XREFs of ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F
 * Callers:
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _MNGetpItemFromIndex@8 @ 0x1D032 (_MNGetpItemFromIndex@8.c)
 *     ?_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z @ 0x33616 (-_MonitorFromWindowInternal@@YGPAUtagMONITOR@@PAUtagWND@@KH@Z.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _IsTrayWindow@4 @ 0x40204 (_IsTrayWindow@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetProcessDpiMetrics@0 @ 0x91BCE (_GetProcessDpiMetrics@0.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     _xxxSendMinRectMessages@8 @ 0xA7C5A (_xxxSendMinRectMessages@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 *     ?GetMenuRightAlignHint@MenuHelpers@@YG_NXZ @ 0x1A159A (-GetMenuRightAlignHint@MenuHelpers@@YG_NXZ.c)
 */

int __fastcall xxxMNPositionHierarchy(int **a1, int a2, int a3, int a4, int *a5, int *a6, struct tagMONITOR **a7)
{
  _DWORD *v8; // eax
  char v9; // cl
  int v10; // edx
  int *v11; // eax
  int *v12; // esi
  int *v13; // eax
  int *v14; // eax
  char v15; // cl
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // eax
  int v21; // edi
  int *v22; // eax
  int v23; // ecx
  int v24; // edi
  int *v25; // eax
  int v26; // ecx
  int ProcessDpiMetrics; // eax
  struct tagMONITOR *v28; // eax
  int v29; // ecx
  int *v30; // eax
  int *v31; // eax
  int v32; // edx
  int *v33; // eax
  int v34; // edi
  int v35; // ebx
  INT DpiForSystem; // eax
  struct tagMONITOR **v37; // edx
  int v39; // [esp-8h] [ebp-64h] BYREF
  int v40; // [esp-4h] [ebp-60h]
  MenuHelpers *v41; // [esp+0h] [ebp-5Ch]
  int v42; // [esp+4h] [ebp-58h]
  struct tagMONITOR **v43; // [esp+Ch] [ebp-50h]
  int *v44; // [esp+10h] [ebp-4Ch]
  int *v45; // [esp+14h] [ebp-48h]
  int v46; // [esp+18h] [ebp-44h]
  int v47; // [esp+1Ch] [ebp-40h]
  int v48; // [esp+20h] [ebp-3Ch]
  int v49; // [esp+24h] [ebp-38h] BYREF
  int v50; // [esp+28h] [ebp-34h]
  int v51; // [esp+2Ch] [ebp-30h]
  int v52; // [esp+30h] [ebp-2Ch]
  int v53; // [esp+34h] [ebp-28h]
  int v54; // [esp+38h] [ebp-24h]
  struct tagMONITOR *v55; // [esp+3Ch] [ebp-20h]
  char v56; // [esp+42h] [ebp-1Ah]
  char v57; // [esp+43h] [ebp-19h]
  int v58; // [esp+44h] [ebp-18h] BYREF
  int v59; // [esp+48h] [ebp-14h]
  int v60; // [esp+4Ch] [ebp-10h]
  int v61; // [esp+50h] [ebp-Ch]

  v45 = a5;
  v44 = a6;
  v43 = a7;
  v46 = a2;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  if ( (*(_BYTE *)**a1 & 1) != 0 )
  {
    v8 = *(_DWORD **)a2;
    v9 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 23) & 0x20;
    v57 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 23) & 0x20;
    v53 = v8[9];
    v48 = v8[10];
    v10 = v8[11];
    v47 = v8[12];
    v54 = 4;
    v11 = *a1;
    v55 = (struct tagMONITOR *)v10;
    v12 = *(int **)(*(_DWORD *)(*v11 + 8) + 20);
    v13 = *a1;
    v12 += 13;
    v58 = *v12++;
    v59 = *v12++;
    v60 = *v12;
    v61 = v12[1];
    if ( !*(_DWORD *)(*v13 + 20)
      || (v14 = *a1, v56 = 0, (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*v14 + 20) + 20) + 20) & 0x20) == 0) )
    {
      v56 = 1;
    }
    if ( v9 && IsTrayWindow(*(_DWORD **)(**a1 + 8)) )
      xxxSendMinRectMessages(*(struct tagHOOK **)(**a1 + 8), (unsigned int *)&v58);
    if ( MenuHelpers::GetMenuRightAlignHint(v41) || !v56 )
    {
      v15 = v57;
      v17 = v53;
      v18 = (int)v55;
      *(_DWORD *)**a1 |= 0x10u;
      v16 = v58;
      if ( v15 )
        v19 = v60 - a3;
      else
        v19 = v58 + v18 + v17 - a3;
    }
    else
    {
      v15 = v57;
      v16 = v58;
      v17 = v53;
      v18 = (int)v55;
      if ( v57 )
        v19 = v58;
      else
        v19 = v53 + v58;
    }
    if ( !v15 )
    {
      v58 = v17 + v16;
      v60 = v18 + v17 + v16;
      v20 = v48 + v59 + v47;
      v59 += v48;
      v61 = v20;
    }
    v21 = _MonitorFromRect(&v58, 1, 0);
    v22 = *a1;
    v40 = v23;
    v39 = v23;
    v55 = (struct tagMONITOR *)v21;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v39, *v22);
    MNGetPopupBoundsRect(v21, &v49, 0, v39, v40);
    if ( !v57 || (v24 = v59 - a4, v59 - a4 < v50) )
      v24 = v61;
    if ( v19 >= v51 - a3 )
      v19 = v51 - a3;
    v25 = *a1;
    v40 = 4;
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*v25 + 8) + 20) + 18) & 0x40) != 0 )
    {
      v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 60)
          + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52)
          - v19
          - a3;
      v26 = v40;
      if ( v19 >= v51 - a3 )
        v19 = v51 - a3;
    }
    else
    {
      v26 = v40;
    }
  }
  else
  {
    v54 = 1;
    v19 = *(_DWORD *)(*(_DWORD *)a2 + 36)
        + *(_DWORD *)(*(_DWORD *)a2 + 44)
        + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52);
    v24 = *(_DWORD *)(*(_DWORD *)a2 + 40) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 56);
    if ( (*(_BYTE *)(*(_DWORD *)(**a1 + 20) + 80) & 3) != 0 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        ProcessDpiMetrics = GetProcessDpiMetrics();
      else
        ProcessDpiMetrics = Get96DpiMetrics();
      v55 = (struct tagMONITOR *)ProcessDpiMetrics;
      v24 += *(_DWORD *)(ProcessDpiMetrics + 24)
           - *(_DWORD *)(*(_DWORD *)MNGetpItemFromIndex(
                                      *(_DWORD *)(**a1 + 20),
                                      *(_DWORD *)(*(_DWORD *)(**a1 + 20) + 72))
                       + 40);
    }
    v28 = _MonitorFromWindowInternal(1, *(_DWORD *)(**a1 + 8), 0, (unsigned int)v41, v42);
    v40 = v29;
    v55 = v28;
    v30 = *a1;
    v39 = v29;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(&v39, *v30);
    MNGetPopupBoundsRect((int)v55, &v49, 0, v39, v40);
    if ( ((*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 18) & 0x40) != 0) == ((*(_DWORD *)**a1 & 0x10) != 0)
      || *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52) - a3 + 3 < v49 )
    {
      v26 = v54;
    }
    else
    {
      v26 = 2;
      v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 52) - a3 + 3;
      v54 = 2;
    }
    if ( v19 + a3 > v51 )
    {
      v31 = *a1;
      v26 = 2;
      v54 = 2;
      v19 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v31 + 8) + 20) + 52) - a3 + 3;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(**a1 + 8) + 20) + 18) & 0x40) != 0 )
    {
      v26 ^= 3u;
      v54 = v26;
    }
  }
  v32 = a4;
  if ( v24 + a4 <= v52 )
  {
    v35 = v50;
  }
  else
  {
    v33 = *a1;
    v34 = v24 - a4;
    v35 = v50;
    if ( (*(_BYTE *)*v33 & 1) != 0 )
    {
      DpiForSystem = GetDpiForSystem();
      v24 = v34 - GetDpiDependentMetric(26, DpiForSystem);
      if ( v24 < v35 )
      {
        v26 = v54;
LABEL_49:
        v24 = v52 - a4;
        goto LABEL_51;
      }
      v32 = a4;
      v26 = 8;
    }
    else
    {
      v24 = *(_DWORD *)(*(_DWORD *)v46 + 48) + 6 + v34;
    }
    if ( v24 < v35 || v24 + v32 > v52 )
      goto LABEL_49;
  }
LABEL_51:
  if ( v19 <= v49 )
    v19 = v49;
  if ( v24 <= v35 )
    v24 = v35;
  v37 = v43;
  *v45 = v19;
  *v44 = v24;
  if ( v37 )
    *v37 = v55;
  return v26;
}
