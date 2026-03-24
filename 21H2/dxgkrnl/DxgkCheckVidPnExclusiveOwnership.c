/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C0156C80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007174 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r14
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGADAPTER *v21; // rbx
  char *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rbx
  struct DXGADAPTER *v28; // r14
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rbx
  __int64 v32; // r14
  int v33; // ecx
  unsigned int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  bool v44; // zf
  __int64 v45; // rdx
  __int64 v46; // rax
  DXGADAPTER *v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  struct DXGADAPTER *v58; // [rsp+30h] [rbp-78h] BYREF
  int v59; // [rsp+40h] [rbp-68h] BYREF
  __int64 v60; // [rsp+48h] [rbp-60h]
  char v61; // [rsp+50h] [rbp-58h]
  _QWORD v62[2]; // [rsp+58h] [rbp-50h] BYREF
  char v63; // [rsp+68h] [rbp-40h]
  struct DXGADAPTER *v64; // [rsp+B8h] [rbp+10h] BYREF
  struct DXGADAPTER *v65; // [rsp+C0h] [rbp+18h]
  __int64 v66; // [rsp+C8h] [rbp+20h]

  v3 = (__int64 *)a1;
  v59 = -1;
  v60 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v61 = 1;
    v59 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2058);
  }
  else
  {
    v61 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2058LL);
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
      v40 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v40 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v40);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v41);
      v44 = v61 == 0;
LABEL_38:
      if ( v44 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_57;
    }
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v66 = *v3;
  v12 = v66;
  v64 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v58,
    (unsigned int)v66,
    (struct _KTHREAD **)v11,
    &v64,
    1);
  v16 = v64;
  if ( !v64 )
  {
    v46 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v46 + 24) = v12;
    *(_QWORD *)(v46 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v46);
    v47 = v58;
    if ( !v58 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 88) + 208LL))() )
  {
    v34 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17, v19, v20) + 24) = -1071775738LL;
    if ( v58 )
      DXGADAPTER::ReleaseReference(v58);
    goto LABEL_27;
  }
  if ( !*((_QWORD *)v16 + 337) )
  {
    v48 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v48 + 24) = v16;
    *(_QWORD *)(v48 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v48);
    v47 = v58;
    if ( !v58 )
      goto LABEL_37;
LABEL_36:
    DXGADAPTER::ReleaseReference(v47);
LABEL_37:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v45);
    v44 = v61 == 0;
    goto LABEL_38;
  }
  v62[1] = v16;
  _InterlockedIncrement64((volatile signed __int64 *)v16 + 3);
  v62[0] = -1LL;
  KeEnterCriticalRegion();
  v21 = v64;
  v22 = (char *)v64 + 136;
  ExAcquirePushLockSharedEx((char *)v64 + 136, 0LL);
  v63 = 1;
  if ( *((_DWORD *)v21 + 50) == 1 )
  {
    v27 = HIDWORD(v66);
    if ( HIDWORD(v66) < *(_DWORD *)(*((_QWORD *)v16 + 337) + 80LL) )
    {
      v28 = v64;
      v65 = v64;
      v29 = *(unsigned int *)(*((_QWORD *)v64 + 2) + 744LL);
      if ( (int)v29 <= 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v23, v25, v26);
        v34 = -1071775738;
        v54[3] = -1071775738LL;
        v54[4] = v64;
        v54[5] = HIDWORD(v66);
      }
      else
      {
        v30 = *((_QWORD *)v16 + 337);
        v31 = HIDWORD(v66);
        if ( HIDWORD(v66) >= *(_DWORD *)(v30 + 80) )
        {
          v55 = WdLogNewEntry5_WdAssertion(v29, v23);
          *(_QWORD *)(v55 + 24) = 5742LL;
          WdLogEvent5_WdAssertion(v55);
        }
        if ( *(_BYTE *)(*(_QWORD *)(v30 + 112) + 3968 * v31 + 722) )
        {
          v32 = *((_QWORD *)v16 + 337);
          if ( (unsigned int)v31 >= *(_DWORD *)(v32 + 80) )
          {
            v57 = WdLogNewEntry5_WdAssertion(v29, v23);
            *(_QWORD *)(v57 + 24) = 6095LL;
            WdLogEvent5_WdAssertion(v57);
          }
          v33 = *(_DWORD *)(*(_QWORD *)(v32 + 112) + 3968 * v31 + 696);
          if ( (unsigned int)(v33 - 2) > 1 )
          {
            v28 = v65;
            if ( v33 )
              v34 = 0;
            else
              v34 = -1071775732;
            goto LABEL_22;
          }
          v34 = -1071775738;
        }
        else
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v23, v25, v26);
          v56[3] = -1071775739LL;
          v56[4] = v64;
          v56[5] = v31;
          v34 = -1071775739;
        }
        v28 = v65;
      }
LABEL_22:
      ExReleasePushLockSharedEx(v22, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v28 + 2), v64);
      if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
LABEL_27:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v35);
      if ( v61 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v59);
      }
      return v34;
    }
    v52 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v52 + 24) = v27;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
    if ( v58 )
      DXGADAPTER::ReleaseReference(v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v53);
    if ( !v61 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_57:
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v59);
    return 3221225485LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v62);
  if ( v58 )
    DXGADAPTER::ReleaseReference(v58);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59, v49);
  if ( v61 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v50, &EventProfilerExit, v51, v59);
  return 3221226166LL;
}
