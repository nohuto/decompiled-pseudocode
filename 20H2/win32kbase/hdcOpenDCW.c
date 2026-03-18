/*
 * XREFs of hdcOpenDCW @ 0x1C005DDD0
 * Callers:
 *     NtGdiOpenDCW @ 0x1C005DBC0 (NtGdiOpenDCW.c)
 * Callees:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011E88 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvDestroyMDEV @ 0x1C0016458 (DrvDestroyMDEV.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C001A8EC (IsUMPD_ldevUnloadImageSupported.c)
 *     bDeleteDCInternal @ 0x1C00205E0 (bDeleteDCInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00409E8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0041314 (--1DCOBJ@@QEAA@XZ.c)
 *     EnterSharedCrit @ 0x1C004B1D0 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     DrvGetHDEV @ 0x1C005E220 (DrvGetHDEV.c)
 *     EngAcquireSemaphore @ 0x1C005EA70 (EngAcquireSemaphore.c)
 *     UserGetMonitorDC @ 0x1C005EB90 (UserGetMonitorDC.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087050 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1350 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     UserGetCurrentDesktopId @ 0x1C0119E00 (UserGetCurrentDesktopId.c)
 */

struct PDEV *__fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        HDEV a7,
        ULONG64 a8,
        int a9)
{
  struct _devicemodeW *v10; // r12
  struct PDEV *MonitorDC; // rbx
  __int64 v13; // rsi
  __int64 *v14; // rdi
  struct PDEV *HDEV; // r14
  __int64 v16; // rax
  bool v17; // zf
  unsigned int v18; // r15d
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  PERESOURCE v23; // rcx
  __int64 v24; // rcx
  void *v26; // r14
  int v27; // eax
  struct _LDEV *v28; // rdi
  HDEV v29; // rcx
  signed __int32 v30; // ett
  _QWORD *v31; // r8
  _QWORD *v32; // rdx
  int v33; // r8d
  struct PDEV *v34; // [rsp+70h] [rbp-68h] BYREF
  struct PDEV *v35[2]; // [rsp+78h] [rbp-60h] BYREF
  struct _UNICODE_STRING v36; // [rsp+88h] [rbp-50h] BYREF
  _QWORD v37[3]; // [rsp+98h] [rbp-40h] BYREF
  void *v38; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v39; // [rsp+F0h] [rbp+18h]

  v39 = a3;
  v10 = a2;
  MonitorDC = 0LL;
  v13 = (__int64)a7;
  LODWORD(a7) = a7 != 0LL;
  if ( !SourceString || v13 )
  {
    v18 = v39;
    goto LABEL_19;
  }
  v14 = 0LL;
  HDEV = 0LL;
  v36 = 0LL;
  RtlInitUnicodeString(&v36, SourceString);
  EnterSharedCrit(0, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  if ( a9 )
  {
    HDEV = (struct PDEV *)DrvGetHDEV(&v36);
  }
  else
  {
    if ( !v10 )
    {
      v16 = DrvGetHDEV(&v36);
      HDEV = (struct PDEV *)v16;
      v17 = a4 == 0;
      v18 = v39;
      if ( !v17 && !v39 )
        MonitorDC = (struct PDEV *)UserGetMonitorDC(v16);
      goto LABEL_8;
    }
    v14 = (__int64 *)DrvCreateMDEV(&v36, v10, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v14 )
    {
      v38 = 0LL;
      if ( (unsigned int)UserGetCurrentDesktopId(&v38) )
        v14 = (__int64 *)DrvCreateMDEV(&v36, v10, v38, 3u, 0LL, 0, 0, 0, 0LL);
    }
    if ( v14 )
      HDEV = (struct PDEV *)v14[5];
  }
  v18 = v39;
LABEL_8:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (struct PDEV *)GreCreateDisplayDC((HDEV)HDEV, 0, 0)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v37, (HDC)MonitorDC);
      if ( v37[0] )
      {
        v34 = *(struct PDEV **)(v37[0] + 48LL);
        if ( v34 )
          PDEVOBJ::vUnreferencePdev(&v34, 0, v19);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v37);
    }
    else if ( v14 )
    {
      DrvDestroyMDEV(v14);
    }
    else
    {
      v35[0] = HDEV;
      PDEVOBJ::vUnreferencePdev(v35, 0, v33);
    }
  }
  if ( v14 )
    Win32FreePool((__int64)v14);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v23 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v24);
  }
  UserSessionSwitchLeaveCrit((__int64)v23, v20, v21, v22);
LABEL_19:
  if ( !MonitorDC )
  {
    v26 = a5;
    if ( a5 )
    {
      if ( v13 )
      {
        if ( qword_1C024F5B0 )
          v27 = qword_1C024F5B0();
        else
          v27 = -1073741637;
        if ( v27 >= 0 && qword_1C024F5B8 )
        {
          LOBYTE(a2) = 2;
          v28 = (struct _LDEV *)qword_1C024F5B8(*(_QWORD *)(v13 + 24), a2);
        }
        else
        {
          v28 = 0LL;
        }
        if ( v28 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&a7,
            v28,
            v10,
            SourceString,
            *(unsigned __int16 **)(v13 + 32),
            *(unsigned __int16 **)(v13 + 8),
            v26,
            a6,
            0LL,
            0LL,
            (int)a7,
            0,
            0);
          v29 = a7;
          if ( a7 )
          {
            _m_prefetchw(a7 + 10);
            do
              v30 = *((_DWORD *)v29 + 10);
            while ( v30 != _InterlockedCompareExchange((volatile signed __int32 *)v29 + 10, v30 | 0x80, v30) );
            MonitorDC = (struct PDEV *)GreCreateDisplayDC(a7, v18, 1);
            v35[1] = MonitorDC;
            if ( MonitorDC )
            {
              v31 = (_QWORD *)a8;
              if ( a8 )
              {
                v32 = (_QWORD *)a8;
                if ( a8 >= MmUserProbeAddress )
                  v32 = (_QWORD *)MmUserProbeAddress;
                *v32 = *v32;
                *v31 = *((_QWORD *)a7 + 225);
              }
            }
            PDEVOBJ::vUnreferencePdev((struct PDEV **)&a7, 0, (int)v31);
          }
          else if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C024F5C8 )
          {
            qword_1C024F5C8(v28);
          }
        }
        else
        {
          EngSetLastError(0x77u);
        }
      }
    }
  }
  return MonitorDC;
}
