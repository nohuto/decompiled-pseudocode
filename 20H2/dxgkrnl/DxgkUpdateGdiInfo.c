/*
 * XREFs of DxgkUpdateGdiInfo @ 0x1C0144140
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0007A88 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007AE4 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000C0E8 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C011F004 (DxgkReleaseSessionModeChangeLock.c)
 *     DxgkQueryDmmInterface @ 0x1C013EF00 (DxgkQueryDmmInterface.c)
 *     ?QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01409D8 (-QueryWin32DpiValues@@YAJPEAIPEAU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0140C40 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z @ 0x1C01424EC (-ReadDpiFromRegistry@DpiPersistence@@YAJAEBU_LUID@@IHPEAK@Z.c)
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C01442FC (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1C02A81A8 (-WriteDpiToHKLMRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
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
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  int v23; // eax
  int DmmInterface; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  _QWORD *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 CurrentProcess; // rax
  unsigned int v43; // ebx
  const struct _DPI_SCALE_FACTOR_COLLECTION *v44; // r8
  const struct _DPI_SCALE_FACTOR_COLLECTION *v45; // r8
  int PlateauIndexForScaleFactor; // eax
  int v47; // r10d
  unsigned int v48; // r9d
  int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned __int8 v52; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v53[3]; // [rsp+31h] [rbp-CFh] BYREF
  struct _UNICODE_STRING v54; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v55; // [rsp+48h] [rbp-B8h]
  char v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57[4]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+68h] [rbp-98h]
  _BYTE v59[144]; // [rsp+80h] [rbp-80h] BYREF

  HIDWORD(v54.Buffer) = -1;
  v55 = 0LL;
  v7 = (unsigned int)a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v56 = 1;
    HIDWORD(v54.Buffer) = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2172);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54.Buffer + 4, 2172LL);
  if ( !a1 )
  {
    v33 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    goto LABEL_15;
  }
  v53[0] = 0;
  v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v53, 0);
  v13 = v10;
  if ( v10 >= 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v59, (struct DXGADAPTER *const)a1, 0LL);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59, 0LL);
    v17 = v14;
    if ( v14 < 0 )
      goto LABEL_21;
    v52 = 0;
    IsEmergencyMonitorConnected(a1, v7, &v52);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v59);
    *(_DWORD *)&v54.Length = 0;
    if ( v52 )
    {
      *(_DWORD *)&v54.Length = dword_1C00B0A94;
    }
    else
    {
      v18 = DpiPersistence::ReadDpiFromRegistry(
              (struct _LUID *)(a1 + 316),
              (const struct _LUID *)(unsigned int)v7,
              1,
              &v54);
      v22 = v18;
      if ( v18 < 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
        v39[3] = v22;
        CurrentProcess = PsGetCurrentProcess(v41, v40);
        v39[5] = a1;
        v39[4] = CurrentProcess;
        WdLogEvent5_WdWarning(v39);
      }
    }
    v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v59, 0LL);
    v17 = v23;
    if ( v23 < 0 )
    {
LABEL_21:
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v35[3] = v17;
      v35[4] = PsGetCurrentProcess(v37, v36);
      v38 = v35;
      v35[5] = a1;
    }
    else
    {
      *(_QWORD *)(&v54.MaximumLength + 1) = 0LL;
      DmmInterface = DxgkQueryDmmInterface((DXGADAPTER *)a1, v15, &v54.MaximumLength + 1);
      v17 = DmmInterface;
      if ( DmmInterface >= 0 )
      {
        LODWORD(v13) = UpdateGdiInfoForVidPnSource(
                         *(const struct _DXGDMM_INTERFACE **)(&v54.MaximumLength + 1),
                         a1,
                         v7,
                         *(int *)&v54.Length,
                         a3,
                         a4);
        COREADAPTERACCESS::Release((COREADAPTERACCESS *)v59);
        if ( *((_DWORD *)a4 + 21) == 1234568 )
        {
          v43 = *((_DWORD *)a4 + 2);
          *(_OWORD *)v57 = 0LL;
          v58 = 0LL;
          QueryWin32DpiValues(0LL, (struct _DPI_SCALE_FACTOR_COLLECTION *)v57);
          DpiInternal::FindPlateauIndexForScaleFactor((DpiInternal *)*((unsigned int *)a4 + 3), (__int64)v57, v44);
          PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                         (DpiInternal *)v43,
                                         (__int64)v57,
                                         v45);
          v49 = DpiPersistence::WriteDpiToHKLMRegistry(
                  (DpiPersistence *)(a1 + 316),
                  (const struct _LUID *)(unsigned int)v7,
                  PlateauIndexForScaleFactor - v47,
                  v48);
          v13 = v49;
          if ( v49 < 0 )
          {
            v51 = WdLogNewEntry5_WdError(v50, v27);
            *(_QWORD *)(v51 + 24) = v13;
            WdLogEvent5_WdError(v51);
            LODWORD(v13) = 0;
          }
        }
        goto LABEL_12;
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v26, v25);
      v38[3] = v17;
      v38[4] = a1;
      v38[5] = v7;
    }
    WdLogEvent5_WdError(v38);
    LODWORD(v13) = v17;
LABEL_12:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v59, v27);
    goto LABEL_13;
  }
  v34 = WdLogNewEntry5_WdError(v12, v11);
  *(_QWORD *)(v34 + 24) = v13;
  WdLogEvent5_WdError(v34);
LABEL_13:
  if ( v53[0] )
    DxgkReleaseSessionModeChangeLock(v29, v28);
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)((char *)&v54.Buffer + 4), v28);
  if ( v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, SHIDWORD(v54.Buffer));
  return (unsigned int)v13;
}
