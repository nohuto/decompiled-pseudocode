/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C01E6FB0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000F8D4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  char v19; // [rsp+68h] [rbp-98h]
  DXGADAPTER *v20; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[144]; // [rsp+80h] [rbp-80h] BYREF

  v17 = -1;
  v18 = 0LL;
  v3 = (unsigned int)a1;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2189;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2189);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2189);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v12 = -1073741811;
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
    goto LABEL_14;
  }
  v16 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v20, v3, Current, &v16, 1);
  v9 = v16;
  if ( v16 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v16, 0LL);
    v10 = COREADAPTERACCESS::AcquireExclusive((__int64)v21);
    if ( v10 != -1073741130 )
    {
      if ( v10 < 0 )
      {
LABEL_16:
        v12 = v10;
LABEL_11:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
        goto LABEL_12;
      }
      v11 = *((_QWORD *)v9 + 350);
      if ( v11 )
      {
        if ( !*((_BYTE *)v9 + 209) )
          ADAPTER_RENDER::FlushScheduler(v11, 1u, 0xFFFFFFFF, 0);
        v12 = 0;
        goto LABEL_11;
      }
      WdLogSingleEntry2(3LL, v3, -1073741637LL);
    }
    v10 = 0;
    goto LABEL_16;
  }
  v12 = -1073741811;
  WdLogSingleEntry2(3LL, v3, -1073741811LL);
LABEL_12:
  if ( v20 )
    DXGADAPTER::ReleaseReference(v20);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v17);
  }
  return v12;
}
