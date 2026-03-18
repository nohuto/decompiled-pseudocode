/*
 * XREFs of ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C022AECC
 * Callers:
 *     DxgkDdiCreateVirtualGpu @ 0x1C022CF18 (DxgkDdiCreateVirtualGpu.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _tlgKeywordOn @ 0x1C0009604 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C00387B4 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@34444@Z @ 0x1C003E0E4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U-$_tlgWrapBuffer@U_UNICODE_STR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C011A908 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211DD4 (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C022B890 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::CreateVirtualGpu(ADAPTER_RENDER *a1, int a2, _DWORD *a3, unsigned __int8 a4)
{
  unsigned __int8 v5; // r14
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // edi
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  _DWORD *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  struct _EPROCESS *v33; // [rsp+28h] [rbp-59h]
  void *v34; // [rsp+30h] [rbp-51h]
  __int64 v35; // [rsp+38h] [rbp-49h]
  __int64 v36; // [rsp+40h] [rbp-41h]
  int v37; // [rsp+78h] [rbp-9h] BYREF
  int v38; // [rsp+7Ch] [rbp-5h] BYREF
  int v39; // [rsp+80h] [rbp-1h] BYREF
  int v40; // [rsp+84h] [rbp+3h] BYREF
  int v41; // [rsp+88h] [rbp+7h] BYREF
  int v42; // [rsp+8Ch] [rbp+Bh] BYREF
  int v43; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v44; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int16 *v45; // [rsp+A0h] [rbp+1Fh] BYREF
  __int64 v46; // [rsp+A8h] [rbp+27h] BYREF
  struct DXGPROCESS *v47; // [rsp+B0h] [rbp+2Fh] BYREF

  v5 = a4;
  v7 = a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v35) = 0;
    McTemplateK0pqtqq_EtwWriteTransfer((__int64)a1, &CreateVirtualGpuStart, (__int64)a3, *((_QWORD *)a1 + 2), *a3, a4);
  }
  LODWORD(v10) = ADAPTER_RENDER::EnsureVirtualGpuProcess(a1);
  if ( (int)v10 < 0 )
  {
    v12 = 8;
    goto LABEL_36;
  }
  v13 = *(_DWORD **)(*((_QWORD *)a1 + 2) + 2576LL);
  if ( (*v13 & 0x200) != 0 && v5 )
  {
    v14 = WdLogNewEntry5_WdError(v13, v8);
    *(_QWORD *)(v14 + 24) = 1226LL;
    WdLogEvent5_WdError(v14);
    LODWORD(v10) = -1073741823;
    v12 = 1;
    goto LABEL_36;
  }
  if ( g_ForceSecureVirtualMachine )
    v5 = 1;
  if ( (_DWORD)v7 == 1 )
    v15 = *((_QWORD *)a1 + 205);
  else
    v15 = *((_QWORD *)a1 + 204);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v13, v8);
    *(_QWORD *)(v16 + 24) = 1240LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v10) = -1073741811;
    v12 = 2;
    goto LABEL_36;
  }
  if ( !DXGPROCESS::GetCurrent((__int64)v13, v8) )
  {
    LODWORD(v10) = DXGPROCESS::CreateDxgProcess(&v47, 0LL, 0LL, 0, 0LL, 0LL);
    if ( (int)v10 < 0 )
    {
      v20 = WdLogNewEntry5_WdWarning(v19, v18, v17);
      *(_QWORD *)(v20 + 24) = 1256LL;
      WdLogEvent5_WdWarning(v20);
      v12 = 3;
      goto LABEL_36;
    }
  }
  if ( (_DWORD)v7 == 1 )
  {
    if ( v5 )
    {
      v21 = (_DWORD *)*((_QWORD *)a1 + 2);
      v22 = 9216LL;
      if ( (int)v21[576] < 9216 )
      {
LABEL_24:
        v23 = WdLogNewEntry5_WdError(v21, v22);
        *(_QWORD *)(v23 + 24) = 1272LL;
        WdLogEvent5_WdError(v23);
        LODWORD(v10) = -1073741637;
        v12 = 4;
        goto LABEL_36;
      }
      if ( v21[576] == 9216 )
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_EnableGpuPVFor2_4Drivers__private_reporting,
          0x1142650u,
          0LL,
          0LL,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
          0,
          v35);
        goto LABEL_24;
      }
      goto LABEL_27;
    }
  }
  else if ( !(_DWORD)v7 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_IoMmuIsolationForGPUP__private_reporting,
      0x12622AFu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1,
      v35);
    v21 = (_DWORD *)*((_QWORD *)a1 + 2);
LABEL_27:
    if ( (v21[509] & 0x800) != 0 )
    {
      v26 = ADAPTER_RENDER::EnableIoMmuIsolation(a1, v22, v17);
      v10 = v26;
      if ( v26 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
        v29[4] = v5;
        v29[3] = v7;
        v29[5] = v10;
        WdLogEvent5_WdError(v29);
        v12 = 6;
        goto LABEL_36;
      }
    }
    else if ( (v21[658] & 8) == 0 )
    {
      v24 = v21[87];
      if ( (v24 & 8) == 0 && (v24 & 4) == 0 )
      {
        v25 = WdLogNewEntry5_WdError(v21, v22);
        *(_QWORD *)(v25 + 24) = 1304LL;
        WdLogEvent5_WdError(v25);
        LODWORD(v10) = -1073741637;
        v12 = 5;
        goto LABEL_36;
      }
    }
  }
  LOBYTE(v17) = v5;
  v12 = 0;
  LODWORD(v10) = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v15 + 16LL))(v15, a3, v17);
  if ( (int)v10 < 0 )
    v12 = 7;
LABEL_36:
  if ( (unsigned int)dword_1C00AEA90 > 5 && tlgKeywordOn((__int64)&dword_1C00AEA90, 0x400000008000LL) )
  {
    v31 = *((_QWORD *)a1 + 2);
    v41 = v10;
    v42 = v12;
    v43 = v7;
    v37 = *(_DWORD *)(v31 + 336);
    v38 = *(_DWORD *)(v31 + 332);
    v39 = *(_DWORD *)(v31 + 328);
    v40 = *(_DWORD *)(v31 + 324);
    v44 = *(_QWORD *)(v31 + 316);
    v45 = *(unsigned __int16 **)(v31 + 1496);
    v46 = 0x2000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v31,
      byte_1C007C51E,
      v11,
      v30,
      (__int64)&v46,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      &v45,
      (__int64)&v44,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37);
  }
  if ( bTracingEnabled )
  {
    if ( (int)v10 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000) != 0 )
    {
      LODWORD(v36) = v12;
      LODWORD(v35) = v10;
      LODWORD(v34) = v5;
      LODWORD(v33) = *a3;
      McTemplateK0pqtqq_EtwWriteTransfer(v9, &CreateVirtualGpuFailed, v11, *((_QWORD *)a1 + 2), v33, v34, v35, v36);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v36) = v12;
      LODWORD(v35) = v10;
      LODWORD(v34) = v5;
      LODWORD(v33) = *a3;
      McTemplateK0pqtqq_EtwWriteTransfer(v9, &CreateVirtualGpuEnd, v11, *((_QWORD *)a1 + 2), v33, v34, v35, v36);
    }
  }
  return (unsigned int)v10;
}
