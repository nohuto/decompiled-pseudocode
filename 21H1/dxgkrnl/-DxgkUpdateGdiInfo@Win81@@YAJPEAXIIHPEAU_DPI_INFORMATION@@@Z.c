/*
 * XREFs of ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AAE2C
 * Callers:
 *     DxgkGetLegacyDpiInfo @ 0x1C02ABF30 (DxgkGetLegacyDpiInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkQueryDmmInterface @ 0x1C00DE2F0 (DxgkQueryDmmInterface.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AB4F8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall Win81::DxgkUpdateGdiInfo(Win81 *this, void *a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v6; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int updated; // ebx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 CurrentProcess; // rax
  _QWORD *v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  Win81 *v30; // [rsp+30h] [rbp-A1h] BYREF
  int v31; // [rsp+38h] [rbp-99h] BYREF
  __int64 v32; // [rsp+40h] [rbp-91h]
  char v33; // [rsp+48h] [rbp-89h]
  _BYTE v34[144]; // [rsp+50h] [rbp-81h] BYREF

  v31 = -1;
  v32 = 0LL;
  v6 = a3;
  v8 = (unsigned int)a2;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2172;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 2172);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2172LL);
  if ( this )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, this, 0LL);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
    v17 = v14;
    if ( v14 >= 0 )
    {
      v30 = 0LL;
      v23 = DxgkQueryDmmInterface(this, v15, &v30);
      v17 = v23;
      if ( v23 >= 0 )
      {
        updated = Win81::UpdateGdiInfoForVidPnSource(v30, this, (void *const)(unsigned int)v8, v6, a4, a5, v30);
        goto LABEL_13;
      }
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v22[3] = v17;
      v22[4] = this;
      v22[5] = v8;
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v18[3] = v17;
      CurrentProcess = PsGetCurrentProcess(v20, v19);
      v18[5] = this;
      v22 = v18;
      v18[4] = CurrentProcess;
    }
    WdLogEvent5_WdError(v22);
    updated = v17;
LABEL_13:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34, v26);
    goto LABEL_14;
  }
  v11 = WdLogNewEntry5_WdError(v10, v9);
  updated = -1073741811;
  *(_QWORD *)(v11 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v11);
LABEL_14:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v13);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v31);
  return updated;
}
