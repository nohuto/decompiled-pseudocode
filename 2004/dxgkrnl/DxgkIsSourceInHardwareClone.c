/*
 * XREFs of DxgkIsSourceInHardwareClone @ 0x1C01678C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011D0FC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012254C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall DxgkIsSourceInHardwareClone(struct _LUID *a1, unsigned int a2, _DWORD *a3)
{
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGADAPTER *v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v25; // rax
  __int64 LowPart; // rcx
  __int64 v27; // rax
  unsigned int v28[2]; // [rsp+20h] [rbp-89h] BYREF
  int v29; // [rsp+28h] [rbp-81h] BYREF
  __int64 v30; // [rsp+30h] [rbp-79h]
  char v31; // [rsp+38h] [rbp-71h]
  _BYTE v32[144]; // [rsp+40h] [rbp-69h] BYREF

  v29 = -1;
  v30 = 0LL;
  v5 = a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2175;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2175);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2175LL);
  Global = DXGGLOBAL::GetGlobal(v7, v6);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)v28);
  v12 = v9;
  if ( !v9 )
  {
    v27 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v27 + 24) = a1->HighPart;
    *(_QWORD *)(v27 + 32) = a1->LowPart;
    WdLogEvent5_WdError(v27);
    LODWORD(v16) = -1073741811;
    goto LABEL_8;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v9, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
  v16 = v13;
  if ( v13 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
    v25[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v25[5] = v16;
LABEL_14:
    v25[4] = LowPart;
    WdLogEvent5_WdError(v25);
    goto LABEL_7;
  }
  v28[0] = 0;
  v17 = DmmEnumClientVidPnPathTargetsFromSource(v12, (unsigned int)v5, 1uLL, v28);
  v16 = v17;
  if ( v17 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v25[3] = a1->HighPart;
    LowPart = a1->LowPart;
    v25[5] = v5;
    v25[6] = v16;
    goto LABEL_14;
  }
  *a3 = v28[0] != -1;
LABEL_7:
  DXGADAPTER::ReleaseReference(v12);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32, v20);
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v21);
  if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v29);
  return (unsigned int)v16;
}
