/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C0135D50
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00099AC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0012920 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkQueryDmmInterface @ 0x1C00DE2F0 (DxgkQueryDmmInterface.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011438C (DxgkReleaseSessionModeChangeLock.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C0134CF4 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0136EEC (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0137590 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C0138E3C (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A4C98 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DxgkUpdateGdiInfo(char *a1, struct _LUID *a2, struct _GDIINFO *a3, struct _DPI_INFORMATION *a4)
{
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdi
  int DpiFromRegistry; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v44; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v45; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v46; // r8
  int PlateauIndexForScaleFactor; // eax
  int v48; // r10d
  unsigned int v49; // r9d
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // rax
  struct _GDIINFO *v53; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v54; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v55[3]; // [rsp+31h] [rbp-CFh] BYREF
  int v56; // [rsp+34h] [rbp-CCh] BYREF
  struct _DXGDMM_INTERFACE *v57; // [rsp+38h] [rbp-C8h] BYREF
  int v58; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+48h] [rbp-B8h]
  char v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v62; // [rsp+68h] [rbp-98h]
  _BYTE v63[144]; // [rsp+80h] [rbp-80h] BYREF

  v58 = -1;
  v59 = 0LL;
  v7 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v60 = 1;
    v58 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2172);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 2172LL);
  if ( !a1 )
  {
    v34 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    goto LABEL_15;
  }
  v55[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v55, 0);
  v13 = v10;
  if ( v10 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v63, (struct DXGADAPTER *const)a1, 0LL);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    v18 = v14;
    if ( v14 < 0 )
      goto LABEL_21;
    v54 = 0;
    IsEmergencyMonitorConnected((DXGADAPTER *)a1, (unsigned int)v7, &v54, v17);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v63);
    v56 = 0;
    if ( v54 )
    {
      v56 = dword_1C00AF984;
    }
    else
    {
      DpiFromRegistry = DpiPersistence::ReadDpiFromRegistry(
                          (DpiPersistence *)(a1 + 316),
                          (const struct _LUID *)(unsigned int)v7,
                          1u,
                          (int)&v56,
                          &v53->ulVersion);
      v23 = DpiFromRegistry;
      if ( DpiFromRegistry < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
        v40[3] = v23;
        CurrentProcess = PsGetCurrentProcess(v42, v41);
        v40[5] = a1;
        v40[4] = CurrentProcess;
        WdLogEvent5_WdWarning(v40);
      }
    }
    v24 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v63, 0LL);
    v18 = v24;
    if ( v24 < 0 )
    {
LABEL_21:
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v36[3] = v18;
      v36[4] = PsGetCurrentProcess(v38, v37);
      v39 = v36;
      v36[5] = a1;
    }
    else
    {
      v57 = 0LL;
      v25 = DxgkQueryDmmInterface((DXGADAPTER *)a1, v15, &v57);
      v18 = v25;
      if ( v25 >= 0 )
      {
        LODWORD(v13) = UpdateGdiInfoForVidPnSource(v57, a1, v7, v56, a3, a4);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v63);
        if ( *((_DWORD *)a4 + 21) == 1234568 )
        {
          v44 = *((_DWORD *)a4 + 2);
          *(_OWORD *)v61 = 0LL;
          v62 = 0LL;
          QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v61);
          DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a4 + 3), (__int64)v61, v45);
          PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                         (DpiInternal *)v44,
                                         (__int64)v61,
                                         v46);
          v50 = DpiPersistence::WriteDpiToHKLMRegistry(
                  (DpiPersistence *)(a1 + 316),
                  (const struct _LUID *)(unsigned int)v7,
                  PlateauIndexForScaleFactor - v48,
                  v49);
          v13 = v50;
          if ( v50 < 0 )
          {
            v52 = WdLogNewEntry5_WdError(v51, v28);
            *(_QWORD *)(v52 + 24) = v13;
            WdLogEvent5_WdError(v52);
            LODWORD(v13) = 0;
          }
        }
        goto LABEL_12;
      }
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v39[3] = v18;
      v39[4] = a1;
      v39[5] = v7;
    }
    WdLogEvent5_WdError(v39);
    LODWORD(v13) = v18;
LABEL_12:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v63, v28);
    goto LABEL_13;
  }
  v35 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v35 + 24) = v13;
  WdLogEvent5_WdError(v35);
LABEL_13:
  if ( v55[0] )
    DxgkReleaseSessionModeChangeLock(v30, v29);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v29);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v58);
  return (unsigned int)v13;
}
