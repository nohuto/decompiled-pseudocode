/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C01D4920
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00199CC (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkQueryDmmInterface @ 0x1C01BEC10 (DxgkQueryDmmInterface.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01D476C (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C01D4AE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01D642C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01D7C48 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02FA47C (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(
        __int64 a1,
        struct _LUID *a2,
        __int64 a3,
        struct _GDIINFO *a4,
        struct _DPI_INFORMATION *a5)
{
  unsigned int v6; // r12d
  unsigned __int64 v7; // r14
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  int DpiFromRegistry; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // r14
  __int64 CurrentProcess; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  const wchar_t *v41; // r9
  char *v42; // rbx
  unsigned __int64 v43; // r9
  unsigned int v44; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v45; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v46; // r8
  int PlateauIndexForScaleFactor; // eax
  int v48; // r10d
  unsigned int v49; // r9d
  int v50; // eax
  unsigned int *v51; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v52; // [rsp+50h] [rbp-B0h] BYREF
  char v53[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v54; // [rsp+54h] [rbp-ACh] BYREF
  struct _DXGDMM_INTERFACE *v55; // [rsp+58h] [rbp-A8h] BYREF
  int v56; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v57; // [rsp+68h] [rbp-98h]
  char v58; // [rsp+70h] [rbp-90h]
  unsigned int v59[4]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v60; // [rsp+88h] [rbp-78h]
  _BYTE v61[144]; // [rsp+A0h] [rbp-60h] BYREF

  v56 = -1;
  v6 = a3;
  v7 = (unsigned int)a2;
  v8 = (char *)a1;
  v57 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2172);
  if ( !v8 )
  {
    LODWORD(v29) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified an invalid adapter handle, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_15;
  }
  v53[0] = 0;
  v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v53, 0);
  v10 = v9;
  if ( v9 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, (struct DXGADAPTER *const)v8, 0LL);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61, 0LL);
    v16 = v11;
    if ( v11 < 0 )
    {
      v33 = v11;
      CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
    }
    else
    {
      v52 = 0;
      IsEmergencyMonitorConnected((DXGADAPTER *)v8, (unsigned int)v7, &v52);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v61);
      v54 = 0;
      if ( v52 )
      {
        v54 = dword_1C01303E4;
      }
      else
      {
        DpiFromRegistry = DpiPersistence::ReadDpiFromRegistry(
                            (DpiPersistence *)(v8 + 404),
                            (const struct _LUID *)(unsigned int)v7,
                            1u,
                            (int)&v54,
                            v51);
        v22 = DpiFromRegistry;
        if ( DpiFromRegistry < 0 )
        {
          v35 = PsGetCurrentProcess(v19, v18, v20, v21);
          WdLogSingleEntry3(3LL, v22, v35, v8);
        }
      }
      v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61, 0LL);
      v16 = v23;
      if ( v23 >= 0 )
      {
        v55 = 0LL;
        v28 = DxgkQueryDmmInterface((DXGADAPTER *)v8, v24, &v55);
        LODWORD(v16) = v28;
        if ( v28 >= 0 )
        {
          LODWORD(v29) = UpdateGdiInfoForVidPnSource(v55, v8, v7, v54, v6, a4, a5);
          COREADAPTERACCESS::Release((COREADAPTERACCESS *)v61);
          if ( *((_DWORD *)a5 + 21) == 1234568 )
          {
            v44 = *((_DWORD *)a5 + 2);
            *(_OWORD *)v59 = 0LL;
            v60 = 0LL;
            QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v59);
            DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a5 + 3), (__int64)v59, v45);
            PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                           (DpiInternal *)v44,
                                           (__int64)v59,
                                           v46);
            v50 = DpiPersistence::WriteDpiToHKLMRegistry(
                    (DpiPersistence *)(v8 + 404),
                    (const struct _LUID *)(unsigned int)v7,
                    PlateauIndexForScaleFactor - v48,
                    v49);
            v29 = v50;
            if ( v50 < 0 )
            {
              WdLogSingleEntry1(2LL, v50);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to write DPI to registry with Status = 0x%I64x",
                v29,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v29) = 0;
            }
          }
          goto LABEL_12;
        }
        v42 = (char *)v7;
        v43 = v7;
        v33 = v28;
        WdLogSingleEntry3(2LL, v28, v8, v43);
        v40 = (__int64)v8;
        v41 = L"Failed DxgkQueryDmmInterface with Status = 0x%I64x, adapter = 0x%I64x, SourceId = 0x%I64x";
        v8 = v42;
LABEL_26:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v41, v33, v40, (__int64)v8, 0LL, 0LL);
        LODWORD(v29) = v16;
LABEL_12:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
        goto LABEL_13;
      }
      v33 = v23;
      CurrentProcess = PsGetCurrentProcess(v25, v24, v26, v27);
    }
    WdLogSingleEntry3(2LL, v16, CurrentProcess, v8);
    v40 = PsGetCurrentProcess(v37, v36, v38, v39);
    v41 = L"Couldn't acquire shared adapter access, Status=0x%I64x EPROCESS=0x%I64x pAdapter=0x%I64x";
    goto LABEL_26;
  }
  WdLogSingleEntry1(2LL, v9);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
    v10,
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v29) = v10;
LABEL_13:
  if ( v53[0] )
    DxgkReleaseSessionModeChangeLock();
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 )
  {
    LOBYTE(v30) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v56);
  }
  return (unsigned int)v29;
}
