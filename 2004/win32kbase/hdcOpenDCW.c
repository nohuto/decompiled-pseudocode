/*
 * XREFs of hdcOpenDCW @ 0x1C0079530
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0079880 (NtGdiOpenDCW.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0013120 (bDeleteDCInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0071D3C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C007FBC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00864D4 (--1DCOBJ@@QEAA@XZ.c)
 *     EnterSharedCrit @ 0x1C0091220 (EnterSharedCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     UserGetMonitorDC @ 0x1C00A52E8 (UserGetMonitorDC.c)
 *     DrvGetHDEV @ 0x1C00A5420 (DrvGetHDEV.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvDestroyMDEV @ 0x1C00BA624 (DrvDestroyMDEV.c)
 *     IsUMPD_ldevUnloadImageSupported @ 0x1C00BD960 (IsUMPD_ldevUnloadImageSupported.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C2650 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     UserGetCurrentDesktopId @ 0x1C011C140 (UserGetCurrentDesktopId.c)
 */

HDC __fastcall hdcOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        ULONG64 a8,
        int a9)
{
  struct _devicemodeW *v10; // r12
  HDC MonitorDC; // rbx
  __int64 v13; // rsi
  struct _MDEV *v14; // rdi
  __int64 HDEV; // r14
  __int64 v16; // rax
  int v17; // r8d
  bool v18; // zf
  unsigned int v19; // r15d
  PERESOURCE v20; // rcx
  __int64 v21; // rcx
  void *v23; // r14
  int v24; // eax
  struct _LDEV *v25; // rdi
  __int64 v26; // rcx
  signed __int32 v27; // ett
  _QWORD *v28; // r8
  _QWORD *v29; // rdx
  __int64 v30; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v31[2]; // [rsp+78h] [rbp-60h] BYREF
  struct _UNICODE_STRING v32; // [rsp+88h] [rbp-50h] BYREF
  _QWORD v33[3]; // [rsp+98h] [rbp-40h] BYREF
  void *v34; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+F0h] [rbp+18h]

  v35 = a3;
  v10 = a2;
  MonitorDC = 0LL;
  v13 = a7;
  LODWORD(a7) = a7 != 0;
  if ( !a1 || v13 )
  {
    v19 = v35;
    goto LABEL_19;
  }
  v14 = 0LL;
  HDEV = 0LL;
  v32 = 0LL;
  RtlInitUnicodeString(&v32, a1);
  EnterSharedCrit(0LL, 1LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  if ( a9 )
  {
    HDEV = DrvGetHDEV(&v32);
  }
  else
  {
    if ( !v10 )
    {
      v16 = DrvGetHDEV(&v32);
      HDEV = v16;
      v18 = a4 == 0;
      v19 = v35;
      if ( !v18 && !v35 )
        MonitorDC = (HDC)UserGetMonitorDC(v16);
      goto LABEL_8;
    }
    v14 = DrvCreateMDEV(&v32, v10, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
    if ( !v14 )
    {
      v34 = 0LL;
      if ( (unsigned int)UserGetCurrentDesktopId(&v34) )
        v14 = DrvCreateMDEV(&v32, v10, v34, 3u, 0LL, 0, 0, 0, 0LL);
    }
    if ( v14 )
      HDEV = *((_QWORD *)v14 + 5);
  }
  v19 = v35;
LABEL_8:
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (HDC)GreCreateDisplayDC(HDEV, 0LL, 0LL)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v33, MonitorDC);
      if ( v33[0] )
      {
        v30 = *(_QWORD *)(v33[0] + 48LL);
        if ( v30 )
          PDEVOBJ::vUnreferencePdev(&v30, 0LL);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v33);
    }
    else if ( v14 )
    {
      DrvDestroyMDEV(v14);
    }
    else
    {
      v31[0] = HDEV;
      PDEVOBJ::vUnreferencePdev(v31, 0LL);
    }
  }
  if ( v14 )
    Win32FreePool(v14);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v17);
  v20 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v21);
  }
  UserSessionSwitchLeaveCrit(v20);
LABEL_19:
  if ( !MonitorDC )
  {
    v23 = a5;
    if ( a5 )
    {
      if ( v13 )
      {
        if ( qword_1C02515B0 )
          v24 = qword_1C02515B0();
        else
          v24 = -1073741637;
        if ( v24 >= 0 && qword_1C02515B8 )
        {
          LOBYTE(a2) = 2;
          v25 = (struct _LDEV *)qword_1C02515B8(*(_QWORD *)(v13 + 24), a2);
        }
        else
        {
          v25 = 0LL;
        }
        if ( v25 )
        {
          PDEVOBJ::PDEVOBJ(
            (PDEVOBJ *)&a7,
            v25,
            v10,
            a1,
            *(unsigned __int16 **)(v13 + 32),
            *(unsigned __int16 **)(v13 + 8),
            v23,
            a6,
            0LL,
            0LL,
            a7,
            0,
            0);
          v26 = a7;
          if ( a7 )
          {
            _m_prefetchw((const void *)(a7 + 40));
            do
              v27 = *(_DWORD *)(v26 + 40);
            while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 40), v27 | 0x80, v27) );
            MonitorDC = (HDC)GreCreateDisplayDC(a7, v19, 1LL);
            v31[1] = MonitorDC;
            if ( MonitorDC )
            {
              v28 = (_QWORD *)a8;
              if ( a8 )
              {
                v29 = (_QWORD *)a8;
                if ( a8 >= MmUserProbeAddress )
                  v29 = (_QWORD *)MmUserProbeAddress;
                *v29 = *v29;
                *v28 = *(_QWORD *)(a7 + 1800);
              }
            }
            PDEVOBJ::vUnreferencePdev(&a7, 0LL);
          }
          else if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 && qword_1C02515C8 )
          {
            qword_1C02515C8(v25);
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
