/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C02228F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000ECD8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+38h] [rbp-E0h]
  char v52; // [rsp+40h] [rbp-D8h]
  DXGADAPTER *v53; // [rsp+48h] [rbp-D0h] BYREF
  struct DXGADAPTER *v54; // [rsp+58h] [rbp-C0h] BYREF
  unsigned int v55[4]; // [rsp+60h] [rbp-B8h]
  _BYTE v56[144]; // [rsp+70h] [rbp-A8h] BYREF

  v3 = a1;
  v50 = -1;
  v51 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v52 = 1;
    v50 = 2130;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2130);
  }
  else
  {
    v52 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v50, 2130LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 10395LL;
    WdLogEvent5_WdError(v9);
LABEL_24:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v10);
    if ( v52 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v50);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v55 = *(_QWORD *)v3;
  v11 = *(_DWORD *)(v3 + 8);
  v54 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v53, v55[0], Current, &v54, 1);
  v15 = v54;
  if ( !v54 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v16 + 24) = Current;
    *(_QWORD *)(v16 + 32) = v55[0];
    WdLogEvent5_WdError(v16);
    goto LABEL_22;
  }
  if ( !*((_QWORD *)v54 + 334) )
  {
    v17 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v17 + 24) = v15;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_22;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v56, v54, 0LL);
  v19 = COREADAPTERACCESS::AcquireExclusive((__int64)v56, v18 + 1, v18);
  v23 = v19;
  if ( v19 >= 0 )
  {
    v30 = v55[1];
    if ( v55[1] >= *(_DWORD *)(*((_QWORD *)v15 + 334) + 80LL) )
    {
      v31 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v31 + 24) = v30;
      *(_QWORD *)(v31 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v31);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56, v32);
LABEL_22:
      if ( v53 )
        DXGADAPTER::ReleaseReferenceNoTracking(v53);
      goto LABEL_24;
    }
    if ( *((_BYTE *)DXGPROCESS::GetCurrent(v21, v20) + 346) )
    {
      v43 = 3968 * v30;
      *(_BYTE *)(3968 * v30 + *(_QWORD *)(*((_QWORD *)v15 + 334) + 112LL) + 1112) = v11 != 0;
      v44 = *((_QWORD *)v15 + 334);
      if ( v11 )
      {
        *(_BYTE *)(v44 + 396) = 1;
      }
      else
      {
        *(_BYTE *)(v44 + 396) = 0;
        v43 = 0LL;
        v45 = *((_QWORD *)v15 + 334);
        v46 = *(_DWORD *)(v45 + 80);
        if ( v46 )
        {
          while ( !*(_BYTE *)(3968LL * (unsigned int)v43 + *(_QWORD *)(v45 + 112) + 1112) )
          {
            v43 = (unsigned int)(v43 + 1);
            if ( (unsigned int)v43 >= v46 )
              goto LABEL_42;
          }
          *(_BYTE *)(v45 + 396) = 1;
        }
      }
LABEL_42:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56, v43);
      if ( v53 )
        DXGADAPTER::ReleaseReferenceNoTracking(v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v47);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v50);
      return 0LL;
    }
    else
    {
      v38 = WdLogNewEntry5_WdWarning(v36, v35, v37);
      *(_QWORD *)(v38 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v38);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56, v39);
      if ( v53 )
        DXGADAPTER::ReleaseReferenceNoTracking(v53);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v40);
      if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v50);
      return 3221225506LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v56, v25);
    if ( v53 )
      DXGADAPTER::ReleaseReferenceNoTracking(v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v50, v26);
    if ( v52 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v50);
    return (unsigned int)v23;
  }
}
