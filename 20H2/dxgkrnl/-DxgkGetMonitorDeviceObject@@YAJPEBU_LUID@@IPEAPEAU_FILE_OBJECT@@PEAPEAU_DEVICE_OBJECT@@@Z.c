/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0127670
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     MonitorGetDeviceObject @ 0x1C0127568 (MonitorGetDeviceObject.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01290D0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        unsigned int a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  DXGADAPTER *v14; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // [rsp+20h] [rbp-A9h] BYREF
  struct _LUID v37; // [rsp+28h] [rbp-A1h] BYREF
  int v38; // [rsp+30h] [rbp-99h] BYREF
  __int64 v39; // [rsp+38h] [rbp-91h]
  char v40; // [rsp+40h] [rbp-89h]
  unsigned __int64 v41; // [rsp+48h] [rbp-81h] BYREF
  _BYTE v42[144]; // [rsp+50h] [rbp-79h] BYREF

  v38 = -1;
  v39 = 0LL;
  v7 = a2;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2166;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2166);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2166LL);
  v36 = 0;
  if ( !a1 || !a3 || !a4 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10);
    LODWORD(v14) = -1073741811;
    v33[3] = -1073741811LL;
LABEL_21:
    WdLogEvent5_WdWarning(v33);
    goto LABEL_12;
  }
  v37 = *a1;
  v11 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v37, (unsigned int)v7, &v37, &v36);
  v14 = (DXGADAPTER *)v11;
  if ( v11 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v13, v12);
    v16 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v37, &v41);
    v14 = v16;
    if ( v16 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v42, v16, 0LL);
      DXGADAPTER::ReleaseReference(v14);
      if ( *((_QWORD *)v14 + 337) )
      {
        v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v42, 0LL);
        v26 = v22;
        if ( v22 < 0 )
        {
          v35 = WdLogNewEntry5_WdWarning(v24, v23, v25);
          *(_QWORD *)(v35 + 24) = v14;
          *(_QWORD *)(v35 + 32) = v26;
          WdLogEvent5_WdWarning(v35);
          LODWORD(v14) = v26;
        }
        else
        {
          LODWORD(v14) = MonitorGetDeviceObject(v14, v36, a3, a4);
        }
      }
      else
      {
        v34 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v34 + 24) = v14;
        LODWORD(v14) = -1073741811;
        *(_QWORD *)(v34 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v34);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42, v27);
      goto LABEL_12;
    }
    v33 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    LODWORD(v14) = -1073741811;
    v33[3] = v37.LowPart;
    v33[4] = v37.HighPart;
    v33[5] = -1073741811LL;
    goto LABEL_21;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
  v32[3] = a1->LowPart;
  v32[4] = a1->HighPart;
  v32[5] = v7;
  v32[6] = v14;
  WdLogEvent5_WdError(v32);
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38, v28);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v38);
  return (unsigned int)v14;
}
