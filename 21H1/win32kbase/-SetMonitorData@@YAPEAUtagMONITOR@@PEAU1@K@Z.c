/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00A7048
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C00A9FC8 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00542A4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     HMFreeObject @ 0x1C0070730 (HMFreeObject.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0090430 (Win32AllocPoolZInit.c)
 *     IntersectRect @ 0x1C00A6D20 (IntersectRect.c)
 *     DrvIsUniformSpaceMapping @ 0x1C00A74A0 (DrvIsUniformSpaceMapping.c)
 *     bDeleteDCInternal @ 0x1C00A78A0 (bDeleteDCInternal.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00A78E8 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00A79C8 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00A7A28 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     GreGetDeviceCaps @ 0x1C00AA530 (GreGetDeviceCaps.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v2; // edi
  __int64 v4; // r15
  unsigned __int16 MonitorLogicalDPI; // bp
  int v6; // r12d
  unsigned __int16 MonitorPhysicalDPI; // r13
  HDEV v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  HDC DisplayDC; // r14
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // rax
  _DWORD *v17; // rcx
  char *v18; // rax
  _DWORD *v19; // r14
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  HDEV v25; // rax
  int *v26; // r8
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  _DWORD *v31; // rdx
  __int64 v32; // [rsp+30h] [rbp-58h]
  __int128 v33; // [rsp+38h] [rbp-50h]

  v2 = 0;
  v4 = *(_QWORD *)(gpDispInfo + 16);
  MonitorLogicalDPI = 96;
  v6 = 1;
  MonitorPhysicalDPI = 96;
  v32 = v4 + 56LL * a2;
  v8 = *(HDEV *)(v32 + 40);
  v33 = *(_OWORD *)(((unsigned int)DrvIsUniformSpaceMapping(v4) != 0 ? 0x14 : 0) + v32 + 56);
  DisplayDC = (HDC)GreCreateDisplayDC((__int64)v8, 0, 0);
  v13 = v33;
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
    v13 = v33;
  }
  if ( !DWORD1(v33) && !v13 )
    v2 = 1;
LABEL_9:
  if ( !Monitor )
  {
    if ( v2 )
    {
      Monitor = gpMonitorCached;
      gpMonitorCached = 0LL;
    }
    else
    {
      Monitor = CreateMonitor(v10, v9, v11);
    }
    if ( !Monitor )
      return 0LL;
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 68LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v4) )
    MonitorLogicalDPI = *(_WORD *)(v4 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  v16 = (_DWORD *)*((_QWORD *)Monitor + 39);
  *((_WORD *)Monitor + 112) = MonitorPhysicalDPI;
  if ( v16 )
  {
    --*v16;
    v17 = (_DWORD *)*((_QWORD *)Monitor + 39);
    if ( !*v17 )
      Win32FreePool((__int64)v17, v14, v15);
    *((_QWORD *)Monitor + 39) = 0LL;
  }
  v18 = (char *)Win32AllocPoolZInit(0x64uLL, 0x70776455u);
  v19 = v18;
  if ( !v18 )
  {
    HMFreeObject(Monitor);
    return 0LL;
  }
  GetMonitorDpiInfo(v8, v2, (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL), (struct _DPI_INFORMATION *)(v18 + 4));
  *v19 = 1;
  *((_QWORD *)Monitor + 39) = v19;
  v20 = *((_QWORD *)Monitor + 5);
  v21 = *(_DWORD *)(v20 + 24);
  if ( v6 )
    v22 = v21 | 1;
  else
    v22 = v21 & 0xFFFFFFFE;
  *(_DWORD *)(v20 + 24) = v22;
  v23 = *((_QWORD *)Monitor + 5);
  v24 = *(_QWORD *)(v23 + 28) - v33;
  if ( !v24 )
    v24 = *(_QWORD *)(v23 + 36) - *((_QWORD *)&v33 + 1);
  if ( v24 )
  {
    *(_DWORD *)(v23 + 44) += v33 - *(_DWORD *)(v23 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += DWORD1(v33) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += DWORD2(v33) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v33) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
    v23 = *((_QWORD *)Monitor + 5);
  }
  *(_DWORD *)(v23 + 28) = v33;
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = *(_QWORD *)((char *)&v33 + 4);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v33);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v32 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v32 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v32 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 84LL) = *(_DWORD *)(v32 + 68);
  v25 = v8;
  if ( !v6 )
    v25 = *(HDEV *)v4;
  v26 = (int *)*((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 29) = v25;
  *((_QWORD *)Monitor + 30) = v8;
  v27 = v26[11];
  if ( v26[13] < v27 )
  {
    v26[13] = v27;
    v26 = (int *)*((_QWORD *)Monitor + 5);
  }
  v28 = v26[12];
  if ( v26[14] < v28 )
  {
    v26[14] = v28;
    v26 = (int *)*((_QWORD *)Monitor + 5);
  }
  if ( !(unsigned int)IntersectRect(v26 + 11, v26 + 11, v26 + 7) )
  {
    v31 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v31[11] = v31[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v31[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v31[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v31[10];
  }
  if ( v2 )
  {
    v29 = gpDispInfo;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = *((_QWORD *)Monitor + 6);
    *(_QWORD *)(v29 + 96) = Monitor;
  }
  *(_DWORD *)(struct HDEV__ *)(*((_QWORD *)Monitor + 5) + 60LL) = v8[661];
  return Monitor;
}
