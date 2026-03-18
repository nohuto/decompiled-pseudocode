/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C01517D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0173D6C (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268C6C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGADAPTER *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DXGADAPTER *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rbx
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  bool v46; // zf
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  _QWORD *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char *v65; // [rsp+30h] [rbp-88h]
  struct DXGADAPTER *v66; // [rsp+38h] [rbp-80h] BYREF
  int v67; // [rsp+48h] [rbp-70h] BYREF
  __int64 v68; // [rsp+50h] [rbp-68h]
  char v69; // [rsp+58h] [rbp-60h]
  _QWORD v70[2]; // [rsp+60h] [rbp-58h] BYREF
  char v71; // [rsp+70h] [rbp-48h]
  unsigned __int8 v72; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGADAPTER *v73; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v74; // [rsp+D8h] [rbp+20h]

  v3 = (__int64 *)a1;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2046);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2046LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v9, v8)) == 0LL
    || (v11 = *((_QWORD *)Current + 1)) == 0 )
  {
    v11 = v10;
    if ( !v10 )
    {
      v42 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v42 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v42);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v43);
      v46 = v69 == 0;
      goto LABEL_42;
    }
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 88) + 400LL))() )
  {
    v47 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    v36 = -1071775738;
    *(_QWORD *)(v47 + 24) = -1071775738LL;
    WdLogEvent5_WdWarning(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v48);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v36;
LABEL_73:
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v67);
    return v36;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v74 = *v3;
  v15 = v74;
  v73 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v66,
    (unsigned int)v74,
    (struct _KTHREAD **)v11,
    &v73,
    1);
  v19 = v73;
  if ( !v73 )
  {
    v49 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v49 + 24) = v15;
    *(_QWORD *)(v49 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v49);
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v50);
    v46 = v69 == 0;
LABEL_42:
    if ( v46 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_68;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 88) + 208LL))() )
  {
    v36 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = -1071775738LL;
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v37);
    if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v36;
    goto LABEL_73;
  }
  v70[1] = v19;
  _InterlockedIncrement64((volatile signed __int64 *)v19 + 3);
  v70[0] = -1LL;
  KeEnterCriticalRegion();
  v24 = v73;
  v65 = (char *)v73 + 136;
  ExAcquirePushLockSharedEx((char *)v73 + 136, 0LL);
  v71 = 1;
  if ( *((_DWORD *)v24 + 50) == 1 )
  {
    v29 = v73;
    v30 = *((_QWORD *)v73 + 337);
    if ( v30 )
    {
      v31 = HIDWORD(v74);
      if ( HIDWORD(v74) < *(_DWORD *)(v30 + 80) )
      {
        v32 = *(unsigned int *)(*((_QWORD *)v73 + 2) + 744LL);
        if ( (int)v32 <= 0 )
        {
          v60 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v25, v27, v28);
          v36 = -1071775738;
          v60[3] = -1071775738LL;
          v60[4] = v73;
          v60[5] = HIDWORD(v74);
        }
        else
        {
          v33 = *((_QWORD *)v73 + 337);
          v34 = HIDWORD(v74);
          if ( HIDWORD(v74) >= *(_DWORD *)(v33 + 80) )
          {
            v61 = WdLogNewEntry5_WdAssertion(v32, v25);
            *(_QWORD *)(v61 + 24) = 5734LL;
            WdLogEvent5_WdAssertion(v61);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v33 + 112) + 3968 * v34 + 722) )
          {
            v35 = *((_QWORD *)v29 + 337);
            if ( !v35 )
            {
              v63 = WdLogNewEntry5_WdAssertion(v32, v25);
              *(_QWORD *)(v63 + 24) = 9659LL;
              WdLogEvent5_WdAssertion(v63);
              v35 = *((_QWORD *)v29 + 337);
            }
            if ( v35 )
            {
              if ( (unsigned int)v34 >= *(_DWORD *)(v35 + 80) )
              {
                v64 = WdLogNewEntry5_WdAssertion(v32, v25);
                *(_QWORD *)(v64 + 24) = 6068LL;
                WdLogEvent5_WdAssertion(v64);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v35 + 112) + 3968 * v34 + 720) )
                goto LABEL_24;
            }
            v72 = 0;
            if ( DmmIsWaitingForPowerOn(v73, v34, &v72) >= 0 && v72 )
LABEL_24:
              v36 = 0;
            else
              v36 = -1071775738;
          }
          else
          {
            v62 = (_QWORD *)WdLogNewEntry5_WdTrace(v32, v25, v27, v28);
            v62[3] = -1071775739LL;
            v62[4] = v73;
            v62[5] = v34;
            v36 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v65, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v29 + 2), v73);
        if ( v66 && _InterlockedExchangeAdd64((volatile signed __int64 *)v66 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v66 + 2), v66);
        goto LABEL_30;
      }
      v58 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v58 + 24) = v31;
      *(_QWORD *)(v58 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v58);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
      if ( v66 )
        DXGADAPTER::ReleaseReference(v66);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v59);
      if ( !v69 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_68:
      McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v67);
      return 3221225485LL;
    }
    v54 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v54 + 24) = v29;
    *(_QWORD *)(v54 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v54);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v55);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerExit, v57, v67);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v70);
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v51);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v67);
    return 3221226166LL;
  }
}
