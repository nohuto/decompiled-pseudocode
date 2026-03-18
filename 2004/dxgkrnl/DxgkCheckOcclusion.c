/*
 * XREFs of DxgkCheckOcclusion @ 0x1C0161EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A15C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0024708 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024778 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C016206C (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 */

__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct DXGPROCESS *Current; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31; // [rsp+28h] [rbp-50h]
  char v32; // [rsp+30h] [rbp-48h]
  _BYTE v33[24]; // [rsp+38h] [rbp-40h] BYREF
  struct tagRECT v34; // [rsp+50h] [rbp-28h] BYREF

  v3 = (__int64 *)a1;
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2038);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2038LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v10 = *v3;
    if ( v10 )
    {
      v11 = *((_QWORD *)Current + 11);
      if ( (*(unsigned int (**)(void))(v11 + 208))() )
      {
        v16 = -1071775738;
        v34 = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v33, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v33, 1LL);
        if ( (*(unsigned int (__fastcall **)(__int64, struct tagRECT *))(v11 + 360))(v10, &v34) == 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v18, v17);
          if ( DXGGLOBAL::IsWindowVisible(Global, &v34) )
            v16 = 0;
        }
        else
        {
          v29 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v29 + 24) = 308LL;
          WdLogEvent5_WdError(v29);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v33);
      }
      else
      {
        v16 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = -1071775738LL;
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v20);
      if ( v32 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v30);
      }
      return v16;
    }
    v26 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v6, v8);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v25);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
  return 3221225485LL;
}
