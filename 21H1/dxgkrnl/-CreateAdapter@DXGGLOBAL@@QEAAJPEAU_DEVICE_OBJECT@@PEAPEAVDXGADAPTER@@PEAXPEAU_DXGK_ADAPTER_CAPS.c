/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FBAC
 * Callers:
 *     DxgkAddAdapter @ 0x1C016FB2C (DxgkAddAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CE00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000CEC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F1E8 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0011FD8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer @ 0x1C0038368 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C00445FC (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FA130 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C016D45C (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C016D50C (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C016D59C (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DxgkStartPnPTransition @ 0x1C016FF3C (DxgkStartPnPTransition.c)
 *     DxgkDetermineAffectedSession @ 0x1C0170230 (DxgkDetermineAffectedSession.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017027C (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiReportAdapter @ 0x1C0170BC8 (DpiReportAdapter.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C0170DD8 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0176AF4 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C0177974 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0186C20 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0207F5C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0267530 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C02B0F28 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        void *a4,
        struct _DXGK_ADAPTER_CAPS *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  void *v6; // r12
  PVOID v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rbx
  int v14; // esi
  __int64 v15; // rax
  int v16; // esi
  __int64 v17; // r12
  int v18; // r13d
  int *AdapterType; // rax
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _LUID *v23; // rdx
  ADAPTER_RENDER *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r8
  bool IsAdapterSessionized; // al
  int v28; // ecx
  bool v29; // r13
  int v30; // r8d
  int v31; // edx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  DXGADAPTER **v35; // rax
  DXGGLOBAL **v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r14d
  int updated; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // edi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v53; // rax
  NTSTATUS v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  int v60; // [rsp+C8h] [rbp-C0h]
  int v61; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v62[4]; // [rsp+108h] [rbp-80h] BYREF
  int v63; // [rsp+10Ch] [rbp-7Ch]
  unsigned int v64; // [rsp+110h] [rbp-78h] BYREF
  int v65; // [rsp+114h] [rbp-74h] BYREF
  unsigned __int64 v66; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v67[8]; // [rsp+120h] [rbp-68h] BYREF
  DXGADAPTER *v68; // [rsp+128h] [rbp-60h]
  char v69; // [rsp+130h] [rbp-58h]

  v63 = 0;
  v6 = a4;
  v9 = operator new(0x1170uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v9 )
    v13 = DXGADAPTER::DXGADAPTER(v9, this);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = DXGADAPTER::Initialize(v13, a2, a5);
    if ( v14 < 0 )
    {
      if ( DXGADAPTER::IsComputeOnlyAdapter(v13) )
        DXGADAPTER::AdapterTelemetry(v48, 0LL, a6);
    }
    else
    {
      if ( bTracingEnabled )
      {
        v15 = *((_QWORD *)v13 + 334);
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 80);
        else
          LOBYTE(v16) = 0;
        v17 = *((_QWORD *)v13 + 34);
        v18 = *((_DWORD *)v13 + 730);
        AdapterType = DXGADAPTER::GetAdapterType(v13, &v65);
        v20 = *((_DWORD *)v13 + 505);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v49 = v20 >> 14;
          LOBYTE(v49) = v49 & 7;
          McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer(
            v49,
            &EventCreateAdapter,
            v20 >> 31,
            (__int64)a2,
            (char)v13,
            v16,
            *((_QWORD *)v13 + 246),
            *((_DWORD *)v13 + 494),
            *((_QWORD *)v13 + 248),
            *((_DWORD *)v13 + 498),
            *((_DWORD *)v13 + 499),
            *((_DWORD *)v13 + 501),
            *((_DWORD *)v13 + 502),
            *((_DWORD *)v13 + 503),
            *((_DWORD *)v13 + 506),
            *((_DWORD *)v13 + 500),
            *((_DWORD *)v13 + 504),
            v20,
            (v20 >> 10) & 0xF,
            v49,
            (v20 >> 17) & 7,
            (v20 & 0x80000000) != 0,
            *((_DWORD *)v13 + 507),
            *((_DWORD *)v13 + 508),
            v60,
            *((_DWORD *)v13 + 510),
            *((_DWORD *)v13 + 511),
            v61,
            v18,
            *AdapterType,
            v17);
        }
        v6 = a4;
      }
      DpiReportAdapter(a2, v13);
      if ( *((_QWORD *)v13 + 335) )
        DXGADAPTER::ReportNodeMetadata(v13, v21, v22);
      DXGADAPTER::AdapterTelemetry(v13, 0LL, a6);
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = v13;
      v24 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 335);
      if ( v24 && (v14 = ADAPTER_RENDER::FinalizeInitialization(v24, (__int64)v23), v14 < 0) )
      {
        v50 = WdLogNewEntry5_WdWarning(v25, v23, v26);
        *(_QWORD *)(v50 + 24) = -1073741801LL;
        *(_QWORD *)(v50 + 32) = 2298LL;
        WdLogEvent5_WdWarning(v50);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      else
      {
        v64 = 0;
        v66 = 0LL;
        IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v13, v23, &v64, &v66);
        v28 = v66;
        v29 = IsAdapterSessionized;
        LOBYTE(v28) = IsAdapterSessionized;
        LOBYTE(v30) = *((_QWORD *)v13 + 334) != 0LL;
        LOBYTE(v31) = *((_QWORD *)v13 + 335) != 0LL;
        v32 = DxgkDetermineAffectedSession(v28, v31, v30, 0, v66);
        if ( DxgkStartPnPTransition(v6, v32) )
        {
          if ( *((_QWORD *)v13 + 335) && (*((_DWORD *)v13 + 87) & 0x4000) == 0 )
          {
            v68 = v13;
            v69 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
            if ( *((_DWORD *)v13 + 50) == 1 )
            {
              if ( *((_DWORD *)this + 76044) != 10 || (*((_DWORD *)this + 76047) & 1) != 0 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 335) + 616LL) + 8LL)
                                                       + 952LL))(
                  *(_QWORD *)(*((_QWORD *)v13 + 335) + 624LL),
                  *((_DWORD *)this + 76047) & 1);
              if ( *(_QWORD *)((char *)this + 304180) != 0x1E00000032LL )
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 335) + 640LL)
                                                                           + 8LL)
                                                               + 1160LL))(
                  *(_QWORD *)(*((_QWORD *)v13 + 335) + 648LL),
                  *((unsigned int *)this + 76045),
                  *((unsigned int *)this + 76046));
            }
            if ( v69 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v67);
          }
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 472));
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 512));
          v35 = (DXGADAPTER **)((char *)this + 552);
          v36 = (DXGGLOBAL **)*((_QWORD *)this + 69);
          if ( v36[1] != (DXGGLOBAL *)((char *)this + 552) )
            __fastfail(3u);
          *(_QWORD *)v13 = v36;
          *((_QWORD *)v13 + 1) = v35;
          v36[1] = v13;
          *v35 = v13;
          if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v36, v13) )
          {
            if ( ++*((_DWORD *)this + 76122) == 2 )
            {
              Global = DXGGLOBAL::GetGlobal(v38, v37);
              DXGGLOBAL::RecordFeatureUsage(Global, 6LL, 1LL);
            }
            if ( *((_BYTE *)v13 + 2516) )
            {
              ++*((_DWORD *)this + 76118);
            }
            else if ( *((_BYTE *)v13 + 2511) )
            {
              ++*((_DWORD *)this + 76119);
            }
            if ( *((_DWORD *)this + 76119) && *((_DWORD *)this + 76118) )
            {
              v53 = DXGGLOBAL::GetGlobal(v38, v37);
              DXGGLOBAL::RecordFeatureUsage(v53, 9LL, 1LL);
            }
          }
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 64, v37);
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 59, v39);
          if ( *((_BYTE *)v13 + 209) )
          {
            if ( !*((_QWORD *)this + 90) && !DXGADAPTER::IsComputeOnlyAdapter(v13) )
            {
              DXGGLOBAL::SetVirtualRenderAdapter(this, v13);
              v41 = *((unsigned __int8 *)v13 + 211);
              goto LABEL_30;
            }
          }
          else
          {
            v40 = *(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL);
            if ( *(_BYTE *)(v40 + 5736) )
            {
              v54 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v40 + 5720), 1u);
              v57 = v54;
              if ( v54 < 0 )
              {
                v58 = WdLogNewEntry5_WdError(v56, v55);
                *(_QWORD *)(v58 + 24) = v57;
                WdLogEvent5_WdError(v58);
              }
            }
          }
          v41 = v63;
LABEL_30:
          *((_BYTE *)v13 + 4328) = 1;
          if ( v29 )
            updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_START, 0LL, 0LL, 0LL, &v64, 0, 0);
          else
            updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
          v45 = updated;
          if ( updated < 0 )
          {
            v59 = WdLogNewEntry5_WdError(v44, v43);
            *(_QWORD *)(v59 + 24) = v13;
            *(_QWORD *)(v59 + 32) = v45;
            WdLogEvent5_WdError(v59);
          }
          if ( v41 )
            DXGVAILOBJECT::NotifyVailAdapter(1);
          if ( *((_QWORD *)v13 + 335) )
          {
            v62[0] = 0;
            DxgkCheckAndUpdatePairingForNewAdapter(v13, v62);
            *((_BYTE *)a5 + 1) ^= (*((_BYTE *)a5 + 1) ^ (v62[0] << 6)) & 0x40;
          }
          *a3 = v13;
          return (unsigned int)v14;
        }
        v51 = WdLogNewEntry5_WdError(v34, v33);
        *(_QWORD *)(v51 + 24) = -1073741801LL;
        *(_QWORD *)(v51 + 32) = 2319LL;
        WdLogEvent5_WdError(v51);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      DXGADAPTER::Destroy(v13);
    }
    DXGADAPTER::`scalar deleting destructor'(v13);
    return (unsigned int)v14;
  }
  v47 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v47 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v47);
  return 3221225495LL;
}
