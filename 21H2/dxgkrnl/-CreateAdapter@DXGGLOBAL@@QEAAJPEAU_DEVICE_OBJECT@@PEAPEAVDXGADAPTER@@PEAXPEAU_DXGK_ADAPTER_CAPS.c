/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0183448
 * Callers:
 *     DxgkAddAdapter @ 0x1C01820CC (DxgkAddAdapter.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00046F8 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0007C88 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D178 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer @ 0x1C003A024 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C004646C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F7BC0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C018214C (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     DpiReportAdapter @ 0x1C01825AC (DpiReportAdapter.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01827BC (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkDetermineAffectedSession @ 0x1C0183108 (DxgkDetermineAffectedSession.c)
 *     DxgkStartPnPTransition @ 0x1C0183154 (DxgkStartPnPTransition.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01845A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C0185FF0 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C018942C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C019D5FC (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C019E9EC (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C019F8E0 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020BED8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026BB10 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C02B58D8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
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
  struct _LUID *v21; // rdx
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  char IsAdapterSessionized; // r13
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGADAPTER **v29; // rax
  DXGGLOBAL **v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r14d
  int updated; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // edi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v47; // rax
  NTSTATUS v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // [rsp+C8h] [rbp-C0h]
  int v55; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v56[4]; // [rsp+108h] [rbp-80h] BYREF
  int v57; // [rsp+10Ch] [rbp-7Ch]
  unsigned int v58; // [rsp+110h] [rbp-78h] BYREF
  int v59; // [rsp+114h] [rbp-74h] BYREF
  unsigned __int64 v60; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v61[8]; // [rsp+120h] [rbp-68h] BYREF
  DXGADAPTER *v62; // [rsp+128h] [rbp-60h]
  char v63; // [rsp+130h] [rbp-58h]

  v57 = 0;
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
        DXGADAPTER::AdapterTelemetry(v42, 0, (__int64)a6);
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
        AdapterType = DXGADAPTER::GetAdapterType(v13, &v59);
        v20 = *((_DWORD *)v13 + 511);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v43 = v20 >> 14;
          LOBYTE(v43) = v43 & 7;
          McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqp_EtwWriteTransfer(
            v43,
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
            v43,
            (v20 >> 17) & 7,
            (v20 & 0x80000000) != 0,
            *((_DWORD *)v13 + 513),
            *((_DWORD *)v13 + 514),
            v54,
            *((_DWORD *)v13 + 516),
            *((_DWORD *)v13 + 517),
            v55,
            v18,
            *AdapterType,
            v17);
        }
        v6 = a4;
      }
      DpiReportAdapter((__int64)a2, (__int64)v13);
      if ( *((_QWORD *)v13 + 338) )
        DXGADAPTER::ReportNodeMetadata(v13);
      DXGADAPTER::AdapterTelemetry((__int64)v13, 0, (__int64)a6);
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = v13;
      v22 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 338);
      if ( v22 && (v14 = ADAPTER_RENDER::FinalizeInitialization(v22), v14 < 0) )
      {
        v44 = WdLogNewEntry5_WdWarning(v23, v21, v24);
        *(_QWORD *)(v44 + 24) = -1073741801LL;
        *(_QWORD *)(v44 + 32) = 2317LL;
        WdLogEvent5_WdWarning(v44);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      else
      {
        v58 = 0;
        v60 = 0LL;
        IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized(v13, v21, &v58, &v60);
        v26 = DxgkDetermineAffectedSession(
                IsAdapterSessionized,
                *((_QWORD *)v13 + 338) != 0LL,
                *((_QWORD *)v13 + 337) != 0LL,
                0,
                v60);
        if ( DxgkStartPnPTransition(v6, v26) )
        {
          if ( *((_QWORD *)v13 + 338) && (*((_DWORD *)v13 + 87) & 0x4000) == 0 )
          {
            v62 = v13;
            v63 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
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
            if ( v63 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v61);
          }
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 584));
          DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 624));
          v29 = (DXGADAPTER **)((char *)this + 664);
          v30 = (DXGGLOBAL **)*((_QWORD *)this + 83);
          if ( v30[1] != (DXGGLOBAL *)((char *)this + 664) )
            __fastfail(3u);
          *(_QWORD *)v13 = v30;
          *((_QWORD *)v13 + 1) = v29;
          v30[1] = v13;
          *v29 = v13;
          if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v30, v13) )
          {
            if ( ++*((_DWORD *)this + 76152) == 2 )
            {
              Global = DXGGLOBAL::GetGlobal(v32, v31);
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
              v47 = DXGGLOBAL::GetGlobal(v32, v31);
              DXGGLOBAL::RecordFeatureUsage(v47, 9LL, 1LL);
            }
          }
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 78, v31);
          DXGFASTMUTEX::Release((struct _KTHREAD **)this + 73, v33);
          if ( *((_BYTE *)v13 + 209) )
          {
            if ( !*((_QWORD *)this + 104) && !DXGADAPTER::IsComputeOnlyAdapter(v13) )
            {
              DXGGLOBAL::SetVirtualRenderAdapter(this, v13);
              v35 = *((unsigned __int8 *)v13 + 211);
              goto LABEL_30;
            }
          }
          else
          {
            v34 = *(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL);
            if ( *(_BYTE *)(v34 + 5736) )
            {
              v48 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v34 + 5720), 1u);
              v51 = v48;
              if ( v48 < 0 )
              {
                v52 = WdLogNewEntry5_WdError(v50, v49);
                *(_QWORD *)(v52 + 24) = v51;
                WdLogEvent5_WdError(v52);
              }
            }
          }
          v35 = v57;
LABEL_30:
          *((_BYTE *)v13 + 4368) = 1;
          if ( IsAdapterSessionized )
            updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_START, 0LL, 0LL, 0LL, &v58, 0, 0);
          else
            updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
          v39 = updated;
          if ( updated < 0 )
          {
            v53 = WdLogNewEntry5_WdError(v38, v37);
            *(_QWORD *)(v53 + 24) = v13;
            *(_QWORD *)(v53 + 32) = v39;
            WdLogEvent5_WdError(v53);
          }
          if ( v35 )
            DXGVAILOBJECT::NotifyVailAdapter(1);
          if ( *((_QWORD *)v13 + 338) )
          {
            v56[0] = 0;
            DxgkCheckAndUpdatePairingForNewAdapter(v13, v56);
            *((_BYTE *)a5 + 1) ^= (*((_BYTE *)a5 + 1) ^ (v56[0] << 6)) & 0x40;
          }
          *a3 = v13;
          return (unsigned int)v14;
        }
        v45 = WdLogNewEntry5_WdError(v28, v27);
        *(_QWORD *)(v45 + 24) = -1073741801LL;
        *(_QWORD *)(v45 + 32) = 2338LL;
        WdLogEvent5_WdError(v45);
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 27) + 64LL) + 3896LL) = 0LL;
      }
      DXGADAPTER::Destroy(v13);
    }
    DXGADAPTER::`scalar deleting destructor'(v13);
    return (unsigned int)v14;
  }
  v41 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v41 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v41);
  return 3221225495LL;
}
