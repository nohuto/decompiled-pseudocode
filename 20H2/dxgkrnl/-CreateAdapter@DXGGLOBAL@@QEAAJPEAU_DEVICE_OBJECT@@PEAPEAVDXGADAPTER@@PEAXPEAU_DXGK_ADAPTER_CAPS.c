/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017775C
 * Callers:
 *     DxgkAddAdapter @ 0x1C01763E0 (DxgkAddAdapter.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00079D8 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer @ 0x1C00390F8 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C004551C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F6120 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C01757C0 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C0175870 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0175F08 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C0176460 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     DpiReportAdapter @ 0x1C01768C0 (DpiReportAdapter.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176AD0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkDetermineAffectedSession @ 0x1C017741C (DxgkDetermineAffectedSession.c)
 *     DxgkStartPnPTransition @ 0x1C0177468 (DxgkStartPnPTransition.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C017A068 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C017AEE8 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0195C40 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020AFF4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026A880 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C02B4488 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
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
  char *v9; // rax
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
  char IsAdapterSessionized; // r13
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  DXGADAPTER **v31; // rax
  DXGGLOBAL **v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // r14d
  int updated; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // edi
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v49; // rax
  NTSTATUS v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // [rsp+C8h] [rbp-C0h]
  int v57; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v58[4]; // [rsp+108h] [rbp-80h] BYREF
  int v59; // [rsp+10Ch] [rbp-7Ch]
  unsigned int v60; // [rsp+110h] [rbp-78h] BYREF
  int v61; // [rsp+114h] [rbp-74h] BYREF
  unsigned __int64 v62; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v63[8]; // [rsp+120h] [rbp-68h] BYREF
  DXGADAPTER *v64; // [rsp+128h] [rbp-60h]
  char v65; // [rsp+130h] [rbp-58h]

  v59 = 0;
  v6 = a4;
  v9 = (char *)operator new(0x11A0uLL, 0x4B677844u, 1, (POOL_TYPE)512);
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
        DXGADAPTER::AdapterTelemetry(v44, 0, (__int64)a6);
    }
    else
    {
      if ( bTracingEnabled )
      {
        v15 = *((_QWORD *)v13 + 337);
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 80);
        else
          LOBYTE(v16) = 0;
        v17 = *((_QWORD *)v13 + 34);
        v18 = *((_DWORD *)v13 + 736);
        AdapterType = DXGADAPTER::GetAdapterType(v13, &v61);
        v20 = *((_DWORD *)v13 + 511);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v45 = v20 >> 14;
          LOBYTE(v45) = v45 & 7;
          McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer(
            v45,
            &EventCreateAdapter,
            v20 >> 31,
            (__int64)a2,
            (char)v13,
            v16,
            *((_QWORD *)v13 + 249),
            *((_DWORD *)v13 + 500),
            *((_QWORD *)v13 + 251),
            *((_DWORD *)v13 + 504),
            *((_DWORD *)v13 + 505),
            *((_DWORD *)v13 + 507),
            *((_DWORD *)v13 + 508),
            *((_DWORD *)v13 + 509),
            *((_DWORD *)v13 + 512),
            *((_DWORD *)v13 + 506),
            *((_DWORD *)v13 + 510),
            v20,
            (v20 >> 10) & 0xF,
            v45,
            (v20 >> 17) & 7,
            (v20 & 0x80000000) != 0,
            *((_DWORD *)v13 + 513),
            *((_DWORD *)v13 + 514),
            v56,
            *((_DWORD *)v13 + 516),
            *((_DWORD *)v13 + 517),
            v57,
            v18,
            *AdapterType,
            v17);
        }
        v6 = a4;
      }
      DpiReportAdapter((__int64)a2, (__int64)v13);
      if ( *((_QWORD *)v13 + 338) )
        DXGADAPTER::ReportNodeMetadata(v13, v21, v22);
      DXGADAPTER::AdapterTelemetry((__int64)v13, 0, (__int64)a6);
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = v13;
      v24 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 338);
      if ( v24 && (v14 = ADAPTER_RENDER::FinalizeInitialization(v24, (__int64)v23), v14 < 0) )
      {
        v46 = WdLogNewEntry5_WdWarning(v25, v23, v26);
        *(_QWORD *)(v46 + 24) = -1073741801LL;
        *(_QWORD *)(v46 + 32) = 2317LL;
        WdLogEvent5_WdWarning(v46);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      else
      {
        v60 = 0;
        v62 = 0LL;
        IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v13, v23, &v60, &v62);
        v28 = DxgkDetermineAffectedSession(
                IsAdapterSessionized,
                *((_QWORD *)v13 + 338) != 0LL,
                *((_QWORD *)v13 + 337) != 0LL,
                0,
                v62);
        if ( DxgkStartPnPTransition(v6, v28) )
        {
          if ( *((_QWORD *)v13 + 338) && (*((_DWORD *)v13 + 87) & 0x4000) == 0 )
          {
            v64 = v13;
            v65 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
            if ( *((_DWORD *)v13 + 50) == 1 )
            {
              if ( *((_DWORD *)this + 76074) != 10 || (*((_DWORD *)this + 76077) & 1) != 0 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 338) + 616LL) + 8LL)
                                                       + 952LL))(
                  *(_QWORD *)(*((_QWORD *)v13 + 338) + 624LL),
                  *((_DWORD *)this + 76077) & 1);
              if ( *(_QWORD *)((char *)this + 304300) != 0x1E00000032LL )
                (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 338) + 640LL)
                                                                           + 8LL)
                                                               + 1160LL))(
                  *(_QWORD *)(*((_QWORD *)v13 + 338) + 648LL),
                  *((unsigned int *)this + 76075),
                  *((unsigned int *)this + 76076));
            }
            if ( v65 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v63);
          }
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 584));
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 624));
          v31 = (DXGADAPTER **)((char *)this + 664);
          v32 = (DXGGLOBAL **)*((_QWORD *)this + 83);
          if ( v32[1] != (DXGGLOBAL *)((char *)this + 664) )
            __fastfail(3u);
          *(_QWORD *)v13 = v32;
          *((_QWORD *)v13 + 1) = v31;
          v32[1] = v13;
          *v31 = v13;
          if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v32, v13) )
          {
            if ( ++*((_DWORD *)this + 76152) == 2 )
            {
              Global = DXGGLOBAL::GetGlobal(v34, v33);
              DXGGLOBAL::RecordFeatureUsage(Global, 6LL, 1LL);
            }
            if ( *((_BYTE *)v13 + 2540) )
            {
              ++*((_DWORD *)this + 76148);
            }
            else if ( *((_BYTE *)v13 + 2535) )
            {
              ++*((_DWORD *)this + 76149);
            }
            if ( *((_DWORD *)this + 76149) && *((_DWORD *)this + 76148) )
            {
              v49 = DXGGLOBAL::GetGlobal(v34, v33);
              DXGGLOBAL::RecordFeatureUsage(v49, 9LL, 1LL);
            }
          }
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 78, v33);
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 73, v35);
          if ( *((_BYTE *)v13 + 209) )
          {
            if ( !*((_QWORD *)this + 104) && !DXGADAPTER::IsComputeOnlyAdapter(v13) )
            {
              DXGGLOBAL::SetVirtualRenderAdapter(this, v13);
              v37 = *((unsigned __int8 *)v13 + 211);
              goto LABEL_30;
            }
          }
          else
          {
            v36 = *(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL);
            if ( *(_BYTE *)(v36 + 5736) )
            {
              v50 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v36 + 5720), 1u);
              v53 = v50;
              if ( v50 < 0 )
              {
                v54 = WdLogNewEntry5_WdError(v52, v51);
                *(_QWORD *)(v54 + 24) = v53;
                WdLogEvent5_WdError(v54);
              }
            }
          }
          v37 = v59;
LABEL_30:
          *((_BYTE *)v13 + 4368) = 1;
          if ( IsAdapterSessionized )
            updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_START, 0LL, 0LL, 0LL, &v60, 0, 0);
          else
            updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
          v41 = updated;
          if ( updated < 0 )
          {
            v55 = WdLogNewEntry5_WdError(v40, v39);
            *(_QWORD *)(v55 + 24) = v13;
            *(_QWORD *)(v55 + 32) = v41;
            WdLogEvent5_WdError(v55);
          }
          if ( v37 )
            DXGVAILOBJECT::NotifyVailAdapter(1);
          if ( *((_QWORD *)v13 + 338) )
          {
            v58[0] = 0;
            DxgkCheckAndUpdatePairingForNewAdapter(v13, v58);
            *((_BYTE *)a5 + 1) ^= (*((_BYTE *)a5 + 1) ^ (v58[0] << 6)) & 0x40;
          }
          *a3 = v13;
          return (unsigned int)v14;
        }
        v47 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v47 + 24) = -1073741801LL;
        *(_QWORD *)(v47 + 32) = 2338LL;
        WdLogEvent5_WdError(v47);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      DXGADAPTER::Destroy(v13);
    }
    DXGADAPTER::`scalar deleting destructor'(v13);
    return (unsigned int)v14;
  }
  v43 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v43 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v43);
  return 3221225495LL;
}
