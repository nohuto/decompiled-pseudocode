/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C01CC2D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01A9544 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0225DE6 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int v14; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  unsigned int v16; // ebx
  DXGADAPTER *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGADAPTER *v20; // rbx
  char *v21; // r13
  __int64 v22; // rdx
  DXGADAPTER *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // rbx
  unsigned int v29; // ebx
  __int64 v30; // rcx
  __int64 v31; // r8
  void *v33; // rcx
  struct DXGTHREAD *Current; // rax
  __int64 v35; // rcx
  __int64 v36; // r8
  DXGADAPTER *v37; // rcx
  bool v38; // sf
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r8
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v45; // rcx
  unsigned int v46; // eax
  struct DXGADAPTER *v47; // [rsp+58h] [rbp-80h] BYREF
  int v48; // [rsp+68h] [rbp-70h] BYREF
  __int64 v49; // [rsp+70h] [rbp-68h]
  char v50; // [rsp+78h] [rbp-60h]
  _QWORD v51[2]; // [rsp+80h] [rbp-58h] BYREF
  char v52; // [rsp+90h] [rbp-48h]
  unsigned __int8 v53; // [rsp+E8h] [rbp+10h] BYREF
  DXGADAPTER *v54; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v55; // [rsp+F8h] [rbp+20h]

  v3 = (__int64 *)a1;
  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2046);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2046);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = *((_QWORD *)Current + 3)) == 0 )
  {
    v11 = v10;
    if ( !v10 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid process context, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
      if ( !v50 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
LABEL_81:
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v48);
      return 3221225485LL;
    }
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 88) + 400LL))() )
  {
    v29 = -1071775738;
    WdLogSingleEntry1(3LL, -1071775738LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return v29;
    goto LABEL_59;
  }
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v13
    || (v14 = PsGetCurrentProcessSessionId(v12),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, v14)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v46 = PsGetCurrentProcessSessionId(v45);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckMonitorPowerState is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v46,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 )
      return 3221225485LL;
    v35 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_81;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v55 = *v3;
  v16 = v55;
  v54 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v47, v55, (struct _KTHREAD **)v11, &v54, 1);
  v17 = v54;
  if ( !v54 )
  {
    WdLogSingleEntry2(3LL, v16, -1073741811LL);
    v37 = v47;
    if ( v47 )
LABEL_49:
      DXGADAPTER::ReleaseReference(v37);
LABEL_50:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_81;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 88) + 208LL))() )
  {
    v29 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = -1071775738LL;
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( !v50 )
      return v29;
    v30 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v38 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_58;
  }
  v51[1] = v17;
  _InterlockedIncrement64((volatile signed __int64 *)v17 + 3);
  v51[0] = -1LL;
  KeEnterCriticalRegion();
  v20 = v54;
  v21 = (char *)v54 + 136;
  ExAcquirePushLockSharedEx((char *)v54 + 136, 0LL);
  v52 = 1;
  if ( *((_DWORD *)v20 + 50) == 1 )
  {
    v23 = v54;
    v24 = *((_QWORD *)v54 + 349);
    if ( v24 )
    {
      v25 = HIDWORD(v55);
      if ( HIDWORD(v55) < *(_DWORD *)(v24 + 96) )
      {
        if ( *((int *)SessionDataForSpecifiedSession + 4630) <= 0 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdTrace(HIDWORD(v55), v22);
          v29 = -1071775738;
          v42[3] = -1071775738LL;
          v42[4] = v54;
          v42[5] = HIDWORD(v55);
        }
        else
        {
          v26 = *((_QWORD *)v54 + 349);
          v27 = HIDWORD(v55);
          if ( HIDWORD(v55) >= *(_DWORD *)(v26 + 96) )
          {
            WdLogSingleEntry1(1LL, 5800LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < m_NumVidPnSources",
              5800LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v26 + 128) + 4000 * v27 + 762) )
          {
            v28 = *((_QWORD *)v23 + 349);
            if ( !v28 )
            {
              WdLogSingleEntry1(1LL, 10119LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDisplayAdapter()", 10119LL, 0LL, 0LL, 0LL, 0LL);
              v28 = *((_QWORD *)v23 + 349);
            }
            if ( v28 )
            {
              if ( (unsigned int)v27 >= *(_DWORD *)(v28 + 96) )
              {
                WdLogSingleEntry1(1LL, 6126LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"VidPnSourceId < m_NumVidPnSources",
                  6126LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v28 + 128) + 4000 * v27 + 760) )
                goto LABEL_26;
            }
            v53 = 0;
            if ( !DXGADAPTER::DriverSupportSetTimingsFromVidPn(v54)
              && DmmIsWaitingForPowerOn(v33, v27, &v53) >= 0
              && v53 )
            {
LABEL_26:
              v29 = 0;
            }
            else
            {
              v29 = -1071775738;
            }
          }
          else
          {
            v43 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v22);
            v43[3] = -1071775739LL;
            v43[4] = v54;
            v43[5] = v27;
            v29 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v21, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v54 + 2), v54);
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v47 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v47 + 2), v47);
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
        if ( !v50 )
          return v29;
        v38 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_58:
        if ( !v38 )
          return v29;
LABEL_59:
        McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v48);
        return v29;
      }
      WdLogSingleEntry2(3LL, HIDWORD(v55), -1073741811LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      v37 = v47;
      if ( v47 )
        goto LABEL_49;
      goto LABEL_50;
    }
    WdLogSingleEntry2(3LL, v54, -1073741637LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v41, v48);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v48);
    return 3221226166LL;
  }
}
