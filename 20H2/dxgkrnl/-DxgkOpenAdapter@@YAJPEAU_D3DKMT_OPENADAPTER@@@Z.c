/*
 * XREFs of ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C0109E80
 * Callers:
 *     DxgkOpenAdapterFromDeviceName @ 0x1C0135B70 (DxgkOpenAdapterFromDeviceName.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000230C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0007384 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C00E3B14 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010A620 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     DpiGetDxgAdapterSafe @ 0x1C010A760 (DpiGetDxgAdapterSafe.c)
 *     ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C015AB2C (-Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267C8C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapter(struct _D3DKMT_OPENADAPTER *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTER *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rcx
  int DxgAdapterSafe; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  volatile signed __int64 *v17; // rdi
  struct DXGADAPTER *v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  DXGADAPTER *v22; // r15
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGADAPTER *v29; // rdx
  __int64 v30; // r15
  __int64 v31; // r13
  _QWORD *v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // r13
  _QWORD *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rbx
  signed __int64 v40; // rax
  struct DXGADAPTER *v41; // r14
  __int64 v42; // rcx
  __int64 v43; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // r9d
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  struct DXGADAPTER *v58; // [rsp+38h] [rbp-21h] BYREF
  __int64 v59; // [rsp+40h] [rbp-19h] BYREF
  __int64 v60; // [rsp+48h] [rbp-11h]
  char *v61; // [rsp+50h] [rbp-9h]
  int v62; // [rsp+58h] [rbp-1h] BYREF
  __int64 v63; // [rsp+60h] [rbp+7h]
  char v64; // [rsp+68h] [rbp+Fh]
  __int64 v66; // [rsp+C8h] [rbp+6Fh]
  bool v67; // [rsp+C8h] [rbp+6Fh]
  unsigned int v68; // [rsp+D0h] [rbp+77h]
  unsigned int v69; // [rsp+D8h] [rbp+7Fh]

  v3 = a1;
  v62 = -1;
  v63 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v64 = 1;
    v62 = 2001;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2001);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v62, 2001LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v9, v8)) == 0LL
    || (v11 = *((_QWORD *)Current + 1)) == 0 )
  {
    v11 = v10;
  }
  if ( !v11 )
  {
    v46 = WdLogNewEntry5_WdError(v9, v8);
    LODWORD(v39) = -1073741811;
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v46);
    goto LABEL_39;
  }
  v12 = *(_QWORD *)v3;
  v58 = 0LL;
  v59 = 0LL;
  DxgAdapterSafe = DpiGetDxgAdapterSafe(v12, &v58, &v59);
  if ( DxgAdapterSafe < 0 )
  {
    LODWORD(v39) = DxgAdapterSafe;
    goto LABEL_39;
  }
  v17 = (volatile signed __int64 *)v58;
  if ( (*((_DWORD *)v58 + 642) & 4) != 0 )
  {
    v47 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v47 + 24) = v17;
    WdLogEvent5_WdWarning(v47);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v17);
    LODWORD(v39) = -1073741790;
    goto LABEL_39;
  }
  _InterlockedIncrement64((volatile signed __int64 *)v58 + 3);
  KeEnterCriticalRegion();
  v18 = v58;
  v61 = (char *)v58 + 136;
  ExAcquirePushLockSharedEx((char *)v58 + 136, 0LL);
  if ( *((_DWORD *)v18 + 50) != 1
    || (v22 = v58, *((_BYTE *)v58 + 2609))
    || (v20 = (_QWORD *)*((_QWORD *)v58 + 338)) == 0LL
    || *(_BYTE *)(v20[2] + 209LL) )
  {
LABEL_19:
    v69 = 0;
    if ( *((_DWORD *)v18 + 50) != 1 )
    {
      v50 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      LODWORD(v39) = -1073741130;
      *(_QWORD *)(v50 + 24) = v58;
      *(_QWORD *)(v50 + 32) = -1073741130LL;
      WdLogEvent5_WdWarning(v50);
      goto LABEL_33;
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v11 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v51 = *(_DWORD *)(v11 + 232);
        if ( v51 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v27, &EventBlockThread, v28, v51);
      }
      ExAcquirePushLockExclusiveEx(v11 + 208, 0LL);
    }
    v29 = v58;
    *(_QWORD *)(v11 + 216) = KeGetCurrentThread();
    v68 = HMGRTABLE::AllocHandle(v11 + 240, v29, 1LL);
    *(_QWORD *)(v11 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 208, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64(v17 + 3);
    if ( !v68 )
    {
      DXGADAPTER::ReleaseReferenceNoTracking(v58);
      LODWORD(v39) = -1073741801;
      goto LABEL_33;
    }
    v30 = *((_QWORD *)v58 + 338);
    if ( !v30 )
    {
LABEL_32:
      LODWORD(v39) = 0;
      v69 = v68;
LABEL_33:
      v40 = _InterlockedExchangeAdd64(v17 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v41 = v58;
      if ( v40 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
      if ( (int)v39 >= 0 )
      {
        LODWORD(v39) = 0;
        *((_DWORD *)v3 + 2) = v69;
        *(_QWORD *)((char *)v3 + 12) = *(_QWORD *)((char *)v41 + 316);
      }
      goto LABEL_37;
    }
    v67 = (*(_BYTE *)(v11 + 347) & 0x10) != 0;
    v31 = v30 + 72;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v30 + 72, 0LL);
    *(_QWORD *)(v30 + 80) = KeGetCurrentThread();
    v32 = *(_QWORD **)(8LL * *(unsigned int *)(*(_QWORD *)(v30 + 16) + 232LL) + *(_QWORD *)(v11 + 48));
    v60 = 8LL * *(unsigned int *)(*(_QWORD *)(v30 + 16) + 232LL);
    if ( !v32 )
    {
      v33 = operator new(0x78uLL, 0x4B677844u, 1, PagedPool);
      v32 = v33;
      if ( !v33 )
      {
        LODWORD(v39) = -1073741801;
        goto LABEL_31;
      }
      v36 = v33 + 7;
      v33[1] = 0LL;
      v33[2] = 0LL;
      v33[3] = 0LL;
      v33[4] = 0LL;
      v33[5] = 0LL;
      v33[6] = 0LL;
      *((_DWORD *)v33 + 18) = 0;
      *((_WORD *)v33 + 38) = 0;
      v33[10] = 0LL;
      v33[11] = 0LL;
      *((_DWORD *)v33 + 24) = 0;
      *((_DWORD *)v33 + 25) = 1;
      v33[14] = v33 + 13;
      v33[13] = v33 + 13;
      v33[4] = v11;
      v33[6] = v30;
      if ( *(struct _KTHREAD **)(v30 + 80) != KeGetCurrentThread() )
      {
        v52 = WdLogNewEntry5_WdAssertion(v35, v34);
        *(_QWORD *)(v52 + 24) = 4355LL;
        WdLogEvent5_WdAssertion(v52);
      }
      v37 = *(_QWORD **)(v30 + 296);
      if ( *v37 != v30 + 288 )
        __fastfail(3u);
      v32[8] = v37;
      *v36 = v30 + 288;
      *v37 = v36;
      v38 = v60;
      *(_QWORD *)(v30 + 296) = v36;
      v31 = v30 + 72;
      ++*(_DWORD *)(v30 + 304);
      *(_QWORD *)(v38 + *(_QWORD *)(v11 + 48)) = v32;
    }
    ++*((_DWORD *)v32 + 6);
    if ( v67 )
    {
      v53 = DXGPROCESS_ADAPTER_INFO::Initialize(
              (DXGPROCESS_ADAPTER_INFO *)v32,
              (struct DXGPROCESS *)v11,
              (struct ADAPTER_RENDER *)v30);
      v39 = v53;
      if ( v53 < 0 )
      {
        v57 = WdLogNewEntry5_WdWarning(v55, v54, v56);
        *(_QWORD *)(v57 + 24) = v39;
        WdLogEvent5_WdWarning(v57);
      }
    }
    else
    {
      LODWORD(v39) = 0;
    }
LABEL_31:
    *(_QWORD *)(v31 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v31, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v39 < 0 )
    {
      DXGPROCESS::CloseAdapter((DXGPROCESS *)v11, (struct DXGADAPTER *const *)v30);
      DXGPROCESS::FreeHandleSafe((DXGPROCESS *)v11, v68);
      DXGADAPTER::ReleaseReferenceNoTracking(v58);
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  v23 = v20[78];
  v24 = v20[77];
  v25 = *(_QWORD *)(v11 + 64);
  v66 = v23;
  if ( v25 )
    v26 = *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)v24 - 1) + 16);
  else
    v26 = 0LL;
  if ( !v26 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v25, v19);
    *(_QWORD *)(v48 + 24) = 990LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v24 + 8) + 840LL))(v66, v26) )
  {
    v3 = a1;
    goto LABEL_19;
  }
  v49 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v49 + 24) = v22;
  *(_QWORD *)(v49 + 32) = v11;
  WdLogEvent5_WdEvent(v49);
  DXGADAPTER::ReleaseReference(v22);
  LODWORD(v39) = -1073741790;
LABEL_37:
  ExReleasePushLockSharedEx(v61, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64(v17 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
LABEL_39:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v14);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v62);
  return (unsigned int)v39;
}
