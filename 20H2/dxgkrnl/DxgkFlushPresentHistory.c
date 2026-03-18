/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C01661B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006EC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGADAPTER *v12; // rbx
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct DXGADAPTER *v26; // [rsp+30h] [rbp-79h] BYREF
  int v27; // [rsp+38h] [rbp-71h] BYREF
  __int64 v28; // [rsp+40h] [rbp-69h]
  char v29; // [rsp+48h] [rbp-61h]
  DXGADAPTER *v30; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v31[144]; // [rsp+60h] [rbp-49h] BYREF

  v27 = -1;
  v28 = 0LL;
  v3 = (unsigned int)a1;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2189);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2189LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v23 = WdLogNewEntry5_WdError(v8, v7);
    v18 = -1073741811;
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    goto LABEL_14;
  }
  v26 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v30, (unsigned int)v3, Current, &v26, 1);
  v12 = v26;
  if ( v26 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v26, 0LL);
    v14 = COREADAPTERACCESS::AcquireExclusive((__int64)v31, (unsigned int)(v13 + 2));
    if ( v14 != -1073741130 )
    {
      if ( v14 < 0 )
      {
LABEL_16:
        v18 = v14;
LABEL_11:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31, v15);
        goto LABEL_12;
      }
      v17 = *((_QWORD *)v12 + 338);
      if ( v17 )
      {
        if ( !*((_BYTE *)v12 + 209) )
          ADAPTER_RENDER::FlushScheduler(v17, 1, 0xFFFFFFFF, 0);
        v18 = 0;
        goto LABEL_11;
      }
      v25 = WdLogNewEntry5_WdWarning(0LL, v15, v16);
      *(_QWORD *)(v25 + 24) = v3;
      *(_QWORD *)(v25 + 32) = -1073741637LL;
      WdLogEvent5_WdWarning(v25);
    }
    v14 = 0;
    goto LABEL_16;
  }
  v24 = WdLogNewEntry5_WdWarning(v10, v9, v11);
  v18 = -1073741811;
  *(_QWORD *)(v24 + 24) = v3;
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v24);
LABEL_12:
  if ( v30 )
    DXGADAPTER::ReleaseReference(v30);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27, v19);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
  return v18;
}
