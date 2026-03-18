/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD460
 * Callers:
 *     DxgkAddAdapter @ 0x1C01FC084 (DxgkAddAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x1C0044A20 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0053730 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C01FC130 (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     DpiReportAdapter @ 0x1C01FC5E0 (DpiReportAdapter.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FC7F0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DxgkDetermineAffectedSession @ 0x1C01FD110 (DxgkDetermineAffectedSession.c)
 *     DxgkStartPnPTransition @ 0x1C01FD15C (DxgkStartPnPTransition.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FECEC (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z @ 0x1C01FFE58 (-ConsiderForMultiAdapterFeatureUsage@DXGGLOBAL@@AEAAEPEAVDXGADAPTER@@@Z.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1C0203160 (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0219038 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C021B460 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1C021BA30 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030CB8C (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z @ 0x1C03516A8 (-NotifyVailAdapter@DXGVAILOBJECT@@SAXH@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        __int64 a4,
        struct _DXGK_ADAPTER_CAPS *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  void *v8; // r12
  char *v9; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rdi
  int v12; // r14d
  __int64 v13; // r14
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // rax
  int v17; // r11d
  unsigned int v18; // r9d
  struct _LUID *v19; // rdx
  ADAPTER_RENDER *v20; // rcx
  bool IsAdapterSessionized; // al
  char v22; // r8
  unsigned __int64 v23; // rax
  __int64 *v24; // rax
  DXGGLOBAL **v25; // rcx
  __int64 v26; // rcx
  int v27; // r12d
  int updated; // eax
  __int64 v30; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rbx
  int v35; // [rsp+C8h] [rbp-C0h]
  int v36; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v37[8]; // [rsp+108h] [rbp-80h] BYREF
  unsigned int v38; // [rsp+110h] [rbp-78h] BYREF
  int v39; // [rsp+114h] [rbp-74h]
  unsigned __int64 v40; // [rsp+118h] [rbp-70h] BYREF
  _BYTE v41[8]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v42; // [rsp+128h] [rbp-60h]
  char v43; // [rsp+130h] [rbp-58h]

  v8 = (void *)a4;
  v9 = (char *)operator new[](0x1260uLL, 0x4B677844u, 64LL, a4);
  if ( v9 )
  {
    v10 = DXGADAPTER::DXGADAPTER(v9, this);
    v11 = (__int64)v10;
    if ( v10 )
    {
      v12 = DXGADAPTER::Initialize(v10, a2, a5);
      if ( v12 < 0 )
      {
        if ( (*(_DWORD *)(v11 + 2664) & 8) != 0 )
          DXGADAPTER::AdapterTelemetry(v11, 0, (__int64)a6);
      }
      else
      {
        if ( bTracingEnabled )
        {
          v13 = *(_QWORD *)(v11 + 4452);
          v14 = *(_QWORD *)(v11 + 280);
          v15 = *DXGADAPTER::GetAdapterType((DXGADAPTER *)v11, (int *)&v40);
          v39 = *(_DWORD *)(v11 + 3040);
          v16 = *(_QWORD *)(v11 + 2792);
          if ( v16 )
            v17 = *(_DWORD *)(v16 + 96);
          else
            LOBYTE(v17) = 0;
          v18 = *(_DWORD *)(v11 + 2140);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          {
            v30 = v18 >> 14;
            LOBYTE(v30) = v30 & 7;
            McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
              v30,
              &EventCreateAdapter,
              v18 >> 31,
              (__int64)a2,
              v11,
              v17,
              *(_QWORD *)(v11 + 2088),
              *(_DWORD *)(v11 + 2096),
              *(_QWORD *)(v11 + 2104),
              *(_DWORD *)(v11 + 2112),
              *(_DWORD *)(v11 + 2116),
              *(_DWORD *)(v11 + 2124),
              *(_DWORD *)(v11 + 2128),
              *(_DWORD *)(v11 + 2132),
              *(_DWORD *)(v11 + 2144),
              *(_DWORD *)(v11 + 2120),
              *(_DWORD *)(v11 + 2136),
              v18,
              (v18 >> 10) & 0xF,
              v30,
              (v18 >> 17) & 7,
              (v18 & 0x80000000) != 0,
              *(_DWORD *)(v11 + 2148),
              *(_DWORD *)(v11 + 2152),
              v35,
              *(_DWORD *)(v11 + 2160),
              *(_DWORD *)(v11 + 2164),
              v36,
              v39,
              v15,
              v14,
              v13);
          }
          v8 = (void *)a4;
        }
        DpiReportAdapter((__int64)a2, v11);
        if ( *(_QWORD *)(v11 + 2800) )
          DXGADAPTER::ReportNodeMetadata((DXGADAPTER *)v11);
        DXGADAPTER::AdapterTelemetry(v11, 0, (__int64)a6);
        v12 = 0;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 3896LL) = v11;
        v20 = *(ADAPTER_RENDER **)(v11 + 2800);
        if ( v20 && (v12 = ADAPTER_RENDER::FinalizeInitialization(v20), v12 < 0) )
        {
          WdLogSingleEntry2(3LL, -1073741801LL, 2453LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 3896LL) = 0LL;
        }
        else
        {
          v38 = 0;
          v40 = 0LL;
          IsAdapterSessionized = DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v19, &v38, &v40);
          v22 = *(_QWORD *)(v11 + 2792) != 0LL;
          v37[0] = IsAdapterSessionized;
          v23 = DxgkDetermineAffectedSession(IsAdapterSessionized, *(_QWORD *)(v11 + 2800) != 0LL, v22, 0, v40);
          if ( DxgkStartPnPTransition(v8, v23) )
          {
            if ( *(_QWORD *)(v11 + 2800) && (*(_DWORD *)(v11 + 436) & 0x4000) == 0 )
            {
              v42 = v11;
              v43 = 0;
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
              if ( *(_DWORD *)(v11 + 200) == 1 )
              {
                if ( *((_DWORD *)this + 76122) != 10 || (*((_DWORD *)this + 76125) & 1) != 0 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 2800) + 624LL) + 8LL)
                                                         + 952LL))(
                    *(_QWORD *)(*(_QWORD *)(v11 + 2800) + 632LL),
                    *((_DWORD *)this + 76125) & 1);
                if ( *(_QWORD *)((char *)this + 304492) != 0x1E00000032LL )
                  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 2800)
                                                                                         + 648LL)
                                                                             + 8LL)
                                                                 + 1168LL))(
                    *(_QWORD *)(*(_QWORD *)(v11 + 2800) + 656LL),
                    *((unsigned int *)this + 76123),
                    *((unsigned int *)this + 76124));
              }
              if ( v43 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v41);
            }
            DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 704));
            DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 752));
            v24 = (__int64 *)((char *)this + 800);
            v25 = (DXGGLOBAL **)*((_QWORD *)this + 100);
            if ( v25[1] != (DXGGLOBAL *)((char *)this + 800) )
              __fastfail(3u);
            *(_QWORD *)v11 = v25;
            *(_QWORD *)(v11 + 8) = v24;
            v25[1] = (DXGGLOBAL *)v11;
            *v24 = v11;
            if ( DXGGLOBAL::ConsiderForMultiAdapterFeatureUsage((DXGGLOBAL *)v25, (struct DXGADAPTER *)v11) )
            {
              if ( ++*((_DWORD *)this + 76214) == 2 )
              {
                Global = DXGGLOBAL_GetGlobal();
                DXGGLOBAL::RecordFeatureUsage(Global, 6LL, 1LL);
              }
              if ( *(_BYTE *)(v11 + 2636) )
              {
                ++*((_DWORD *)this + 76210);
              }
              else if ( *(_BYTE *)(v11 + 2631) )
              {
                ++*((_DWORD *)this + 76211);
              }
              if ( *((_DWORD *)this + 76211) && *((_DWORD *)this + 76210) )
              {
                v32 = DXGGLOBAL_GetGlobal();
                DXGGLOBAL::RecordFeatureUsage(v32, 9LL, 1LL);
              }
            }
            DXGFASTMUTEX::Release((struct _KTHREAD **)this + 94);
            DXGFASTMUTEX::Release((struct _KTHREAD **)this + 88);
            if ( *(_BYTE *)(v11 + 209) )
            {
              if ( !*((_QWORD *)this + 124) && (*(_DWORD *)(v11 + 2664) & 8) == 0 )
              {
                DXGGLOBAL::SetVirtualRenderAdapter(this, (struct DXGADAPTER *)v11);
                v27 = *(unsigned __int8 *)(v11 + 211);
                goto LABEL_29;
              }
            }
            else
            {
              v26 = *(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL);
              if ( *(_BYTE *)(v26 + 5664) )
              {
                v33 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v26 + 5648), 1u);
                if ( v33 < 0 )
                  WdLogSingleEntry1(2LL, v33);
              }
            }
            v27 = 0;
LABEL_29:
            *(_BYTE *)(v11 + 4488) = 1;
            if ( v37[0] )
              updated = ZwUpdateWnfStateData(&WNF_DX_REMOTE_ADAPTER_START, 0LL, 0LL, 0LL, &v38, 0, 0);
            else
              updated = ZwUpdateWnfStateData(&WNF_DX_CONSOLE_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
            if ( updated < 0 )
            {
              v34 = updated;
              WdLogSingleEntry2(2LL, v11, updated);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to send Start WNF for Adapter=0x%I64x with Status=0x%I64x",
                v11,
                v34,
                0LL,
                0LL,
                0LL);
            }
            if ( v27 )
              DXGVAILOBJECT::NotifyVailAdapter(1);
            if ( *(_QWORD *)(v11 + 2800) )
            {
              v37[0] = 0;
              DxgkCheckAndUpdatePairingForNewAdapter((struct DXGADAPTER *)v11, v37);
              *((_BYTE *)a5 + 1) ^= (*((_BYTE *)a5 + 1) ^ (v37[0] << 6)) & 0x40;
            }
            *a3 = (struct DXGADAPTER *)v11;
            return (unsigned int)v12;
          }
          WdLogSingleEntry2(2LL, -1073741801LL, 2474LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to start PnP transition on the affected sessions, returning 0x%I64x",
            -1073741801LL,
            2474LL,
            0LL,
            0LL,
            0LL);
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 216) + 64LL) + 3896LL) = 0LL;
        }
        DXGADAPTER::Destroy((DXGADAPTER *)v11);
      }
      DXGADAPTER::`scalar deleting destructor'((DXGADAPTER *)v11);
      return (unsigned int)v12;
    }
  }
  WdLogSingleEntry1(3LL, -1073741801LL);
  return 3221225495LL;
}
