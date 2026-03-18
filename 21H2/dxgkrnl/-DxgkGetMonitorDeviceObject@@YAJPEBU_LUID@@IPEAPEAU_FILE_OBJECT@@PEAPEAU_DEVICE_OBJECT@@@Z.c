/*
 * XREFs of ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0165640
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     MonitorGetDeviceObject @ 0x1C01657A8 (MonitorGetDeviceObject.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C01658E0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetMonitorDeviceObject(
        const struct _LUID *a1,
        unsigned int a2,
        struct _FILE_OBJECT **a3,
        struct _DEVICE_OBJECT **a4)
{
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v11; // rax
  __int64 v12; // rbx
  struct DXGADAPTER *const v13; // rdx
  DXGADAPTER *v14; // rdx
  int v15; // eax
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v21; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  char v24; // [rsp+70h] [rbp-90h]
  unsigned __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v27[64]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v28[72]; // [rsp+C8h] [rbp-38h] BYREF

  v22 = -1;
  v23 = 0LL;
  v7 = a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2166;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2166);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2166);
  v20 = 0;
  if ( a1 && a3 && a4 )
  {
    v21 = *a1;
    v8 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v21, (unsigned int)v7, &v21, &v20);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry4(2LL, a1->LowPart, a1->HighPart, v7, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to find the real target ID from Adapter LUID (0x%I64x, 0x%I64x) target ID 0x%I64x, returning 0x%I64x",
        a1->LowPart,
        a1->HighPart,
        v7,
        v9,
        0LL);
    }
    else
    {
      Global = DXGGLOBAL_GetGlobal();
      v11 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v21, &v25);
      v12 = (__int64)v11;
      if ( v11 )
      {
        v26[1] = 0;
        COREACCESS::COREACCESS((COREACCESS *)v27, v11);
        COREACCESS::COREACCESS((COREACCESS *)v28, v13);
        DXGADAPTER::ReleaseReference(v14);
        if ( *(_QWORD *)(v12 + 2792) )
        {
          v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
          v16 = v15;
          if ( v15 < 0 )
          {
            WdLogSingleEntry2(3LL, v12, v15);
            LODWORD(v9) = v16;
          }
          else
          {
            LODWORD(v9) = MonitorGetDeviceObject(v12, v20, a3, a4);
          }
        }
        else
        {
          LODWORD(v9) = -1073741811;
          WdLogSingleEntry2(2LL, v12, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"DxgkGetMonitorDeviceObject is called on the non-display adapter 0x%I64x, returning 0x%I64x.",
            v12,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      }
      else
      {
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry3(3LL, v21.LowPart, v21.HighPart, -1073741811LL);
      }
    }
  }
  else
  {
    LODWORD(v9) = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v22);
  return (unsigned int)v9;
}
