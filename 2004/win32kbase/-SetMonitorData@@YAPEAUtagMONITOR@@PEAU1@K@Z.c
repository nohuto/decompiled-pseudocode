/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0012894
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0013354 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C000EDD0 (Win32AllocPoolZInit.c)
 *     IntersectRect @ 0x1C0012434 (IntersectRect.c)
 *     DrvIsUniformSpaceMapping @ 0x1C0012CF0 (DrvIsUniformSpaceMapping.c)
 *     bDeleteDCInternal @ 0x1C0013120 (bDeleteDCInternal.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0013168 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C0013248 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00132A8 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     GreGetDeviceCaps @ 0x1C00138C0 (GreGetDeviceCaps.c)
 *     HMFreeObject @ 0x1C0017080 (HMFreeObject.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0062288 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v2; // edi
  __int64 v4; // r15
  unsigned __int16 MonitorLogicalDPI; // bp
  int v6; // r12d
  unsigned __int16 MonitorPhysicalDPI; // r13
  HDEV v8; // rsi
  HDC DisplayDC; // r14
  int v10; // eax
  _DWORD *v11; // rax
  _DWORD *v12; // rcx
  char *v13; // rax
  _DWORD *v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  HDEV v20; // rax
  int *v21; // r8
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  _DWORD *v26; // rdx
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+38h] [rbp-50h]

  v2 = 0;
  v4 = *(_QWORD *)(gpDispInfo + 16);
  MonitorLogicalDPI = 96;
  v6 = 1;
  MonitorPhysicalDPI = 96;
  v27 = v4 + 56LL * a2;
  v8 = *(HDEV *)(v27 + 40);
  v28 = *(_OWORD *)(((unsigned int)DrvIsUniformSpaceMapping(v4) != 0 ? 0x14 : 0) + v27 + 56);
  DisplayDC = (HDC)GreCreateDisplayDC(v8, 0LL, 0LL);
  v10 = v28;
  if ( DisplayDC )
  {
    if ( (GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0 )
    {
      v6 = 0;
    }
    else
    {
      MonitorLogicalDPI = GetMonitorLogicalDPI(v8);
      MonitorPhysicalDPI = GetMonitorPhysicalDPI(v8);
    }
    bDeleteDCInternal(DisplayDC, 1LL, 0LL);
    if ( !v6 )
      goto LABEL_9;
    v10 = v28;
  }
  if ( !DWORD1(v28) && !v10 )
    v2 = 1;
LABEL_9:
  if ( !Monitor )
  {
    if ( v2 )
    {
      Monitor = (struct tagMONITOR *)gpMonitorCached;
      gpMonitorCached = 0LL;
    }
    else
    {
      Monitor = CreateMonitor();
    }
    if ( !Monitor )
      return 0LL;
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 68LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v4) )
    MonitorLogicalDPI = *(_WORD *)(v4 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  v11 = (_DWORD *)*((_QWORD *)Monitor + 39);
  *((_WORD *)Monitor + 112) = MonitorPhysicalDPI;
  if ( v11 )
  {
    --*v11;
    v12 = (_DWORD *)*((_QWORD *)Monitor + 39);
    if ( !*v12 )
      Win32FreePool(v12);
    *((_QWORD *)Monitor + 39) = 0LL;
  }
  v13 = (char *)Win32AllocPoolZInit(0x64uLL, 1886872661LL);
  v14 = v13;
  if ( !v13 )
  {
    HMFreeObject(Monitor);
    return 0LL;
  }
  GetMonitorDpiInfo(v8, v2, (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL), (struct _DPI_INFORMATION *)(v13 + 4));
  *v14 = 1;
  *((_QWORD *)Monitor + 39) = v14;
  v15 = *((_QWORD *)Monitor + 5);
  v16 = *(_DWORD *)(v15 + 24);
  if ( v6 )
    v17 = v16 | 1;
  else
    v17 = v16 & 0xFFFFFFFE;
  *(_DWORD *)(v15 + 24) = v17;
  v18 = *((_QWORD *)Monitor + 5);
  v19 = *(_QWORD *)(v18 + 28) - v28;
  if ( !v19 )
    v19 = *(_QWORD *)(v18 + 36) - *((_QWORD *)&v28 + 1);
  if ( v19 )
  {
    *(_DWORD *)(v18 + 44) += v28 - *(_DWORD *)(v18 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += DWORD1(v28) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += DWORD2(v28) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v28) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
    v18 = *((_QWORD *)Monitor + 5);
  }
  *(_DWORD *)(v18 + 28) = v28;
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = *(_QWORD *)((char *)&v28 + 4);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v28);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v27 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v27 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v27 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 84LL) = *(_DWORD *)(v27 + 68);
  v20 = v8;
  if ( !v6 )
    v20 = *(HDEV *)v4;
  v21 = (int *)*((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 29) = v20;
  *((_QWORD *)Monitor + 30) = v8;
  v22 = v21[11];
  if ( v21[13] < v22 )
  {
    v21[13] = v22;
    v21 = (int *)*((_QWORD *)Monitor + 5);
  }
  v23 = v21[12];
  if ( v21[14] < v23 )
  {
    v21[14] = v23;
    v21 = (int *)*((_QWORD *)Monitor + 5);
  }
  if ( !(unsigned int)IntersectRect(v21 + 11, v21 + 11, v21 + 7) )
  {
    v26 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v26[11] = v26[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v26[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v26[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v26[10];
  }
  if ( v2 )
  {
    v24 = gpDispInfo;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = *((_QWORD *)Monitor + 6);
    *(_QWORD *)(v24 + 96) = Monitor;
  }
  *(_DWORD *)(struct HDEV__ *)(*((_QWORD *)Monitor + 5) + 60LL) = v8[661];
  return Monitor;
}
