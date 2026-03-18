/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C01CCF40
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
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C03099FC (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
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
  struct DXGADAPTER *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGADAPTER *v20; // rbx
  char *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 v25; // rbx
  __int64 v26; // r14
  int v27; // ecx
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  DXGADAPTER *v35; // rcx
  bool v36; // sf
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned int CurrentProcessSessionId; // eax
  __int64 v42; // rcx
  unsigned int v43; // eax
  struct DXGADAPTER *v44; // [rsp+50h] [rbp-78h] BYREF
  int v45; // [rsp+60h] [rbp-68h] BYREF
  __int64 v46; // [rsp+68h] [rbp-60h]
  char v47; // [rsp+70h] [rbp-58h]
  _QWORD v48[2]; // [rsp+78h] [rbp-50h] BYREF
  char v49; // [rsp+88h] [rbp-40h]
  struct DXGADAPTER *v50; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v51; // [rsp+E0h] [rbp+18h]

  v3 = (__int64 *)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2058);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2058);
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
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
LABEL_67:
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v45);
      return 3221225485LL;
    }
  }
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v13
    || (v14 = PsGetCurrentProcessSessionId(v12),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, v14)) == 0LL) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
    WdLogSingleEntry2(2LL, CurrentProcessSessionId, -1073741811LL);
    v43 = PsGetCurrentProcessSessionId(v42);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckVidPnExclusiveOwnership is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v43,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( !v47 )
      return 3221225485LL;
    v33 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_67;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v51 = *v3;
  v16 = v51;
  v50 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v44, v51, (struct _KTHREAD **)v11, &v50, 1);
  v17 = v50;
  if ( !v50 )
  {
    WdLogSingleEntry2(3LL, v16, -1073741811LL);
    v35 = v44;
    if ( v44 )
LABEL_40:
      DXGADAPTER::ReleaseReference(v35);
LABEL_41:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_67;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 88) + 208LL))() )
  {
    v28 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = -1071775738LL;
    if ( v44 )
      DXGADAPTER::ReleaseReference(v44);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( !v47 )
      return v28;
    v29 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v36 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_49;
  }
  if ( !*((_QWORD *)v17 + 349) )
  {
    WdLogSingleEntry2(3LL, v17, -1073741811LL);
    v35 = v44;
    if ( !v44 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v48[1] = v17;
  _InterlockedIncrement64((volatile signed __int64 *)v17 + 3);
  v48[0] = -1LL;
  KeEnterCriticalRegion();
  v20 = v50;
  v21 = (char *)v50 + 136;
  ExAcquirePushLockSharedEx((char *)v50 + 136, 0LL);
  v49 = 1;
  if ( *((_DWORD *)v20 + 50) == 1 )
  {
    v23 = HIDWORD(v51);
    if ( HIDWORD(v51) < *(_DWORD *)(*((_QWORD *)v17 + 349) + 96LL) )
    {
      if ( *((int *)SessionDataForSpecifiedSession + 4630) <= 0 )
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdTrace(HIDWORD(v51), v22);
        v28 = -1071775738;
        v39[3] = -1071775738LL;
        v39[4] = v50;
        v39[5] = HIDWORD(v51);
      }
      else
      {
        v24 = *((_QWORD *)v17 + 349);
        v25 = HIDWORD(v51);
        if ( HIDWORD(v51) >= *(_DWORD *)(v24 + 96) )
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
        if ( *(_BYTE *)(*(_QWORD *)(v24 + 128) + 4000 * v25 + 762) )
        {
          v26 = *((_QWORD *)v17 + 349);
          if ( (unsigned int)v25 >= *(_DWORD *)(v26 + 96) )
          {
            WdLogSingleEntry1(1LL, 6146LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < m_NumVidPnSources",
              6146LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v27 = *(_DWORD *)(*(_QWORD *)(v26 + 128) + 4000 * v25 + 736);
          if ( (unsigned int)(v27 - 2) <= 1 )
          {
            v28 = -1071775738;
          }
          else if ( v27 )
          {
            v28 = 0;
          }
          else
          {
            v28 = -1071775732;
          }
        }
        else
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
          v40[3] = -1071775739LL;
          v40[4] = v50;
          v40[5] = v25;
          v28 = -1071775739;
        }
      }
      ExReleasePushLockSharedEx(v21, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v50 + 2), v50);
      if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v44 + 2), v44);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( !v47 )
        return v28;
      v36 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_49:
      if ( v36 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v45);
      return v28;
    }
    WdLogSingleEntry2(3LL, HIDWORD(v51), -1073741811LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    v35 = v44;
    if ( v44 )
      goto LABEL_40;
    goto LABEL_41;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
  if ( v44 )
    DXGADAPTER::ReleaseReference(v44);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v45);
  return 3221226166LL;
}
