/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C02BD52C
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C030C1C8 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer @ 0x1C0044A20 (McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C0044DE4 (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0044E7C (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqjzqqx_EtwWriteTransfer @ 0x1C0044F24 (McTemplateK0pqqqqjzqqx_EtwWriteTransfer.c)
 *     McTemplateK0pqqqxx_EtwWriteTransfer @ 0x1C0045118 (McTemplateK0pqqqxx_EtwWriteTransfer.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0179770 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiReportAdapter @ 0x1C01FC5E0 (DpiReportAdapter.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0219038 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02C20C8 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C4420 (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  int *AdapterType; // rax
  unsigned int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  wchar_t *v10; // r14
  unsigned int i; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rdi
  int v20; // r14d
  unsigned int m; // ebp
  __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // esi
  __int64 v25; // rcx
  ADAPTER_DISPLAY *v26; // rcx
  ADAPTER_RENDER *v27; // rcx
  __int64 v28; // [rsp+20h] [rbp-128h]
  __int64 v29; // [rsp+20h] [rbp-128h]
  __int64 v30; // [rsp+28h] [rbp-120h]
  __int64 v31; // [rsp+28h] [rbp-120h]
  __int64 v32; // [rsp+30h] [rbp-118h]
  __int64 v33; // [rsp+30h] [rbp-118h]
  __int64 v34; // [rsp+38h] [rbp-110h]
  __int64 v35; // [rsp+50h] [rbp-F8h]
  __int64 v36; // [rsp+58h] [rbp-F0h]
  int v37; // [rsp+C0h] [rbp-88h]
  int v38; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v39; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  int v41; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 9786LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 9786LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( bTracingEnabled )
  {
    v2 = *(_QWORD *)((char *)this + 4452);
    v3 = *((_QWORD *)this + 35);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v41);
    v5 = *((_DWORD *)this + 535);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      v6 = v5 >> 14;
      LOBYTE(v6) = v6 & 7;
      McTemplateK0ppqxqxqqqqqqqqquuuuqqqqqQR23qqpx_EtwWriteTransfer(
        v6,
        &EventReportAdapter,
        v5 >> 31,
        *((_QWORD *)this + 27),
        (char)this,
        *((_DWORD *)this + 386),
        *((_QWORD *)this + 261),
        *((_DWORD *)this + 524),
        *((_QWORD *)this + 263),
        *((_DWORD *)this + 528),
        *((_DWORD *)this + 529),
        *((_DWORD *)this + 531),
        *((_DWORD *)this + 532),
        *((_DWORD *)this + 533),
        *((_DWORD *)this + 536),
        *((_DWORD *)this + 530),
        *((_DWORD *)this + 534),
        v5,
        (v5 >> 10) & 0xF,
        v6,
        (v5 >> 17) & 7,
        (v5 & 0x80000000) != 0,
        *((_DWORD *)this + 537),
        *((_DWORD *)this + 538),
        v37,
        *((_DWORD *)this + 540),
        *((_DWORD *)this + 541),
        v38,
        *((_DWORD *)this + 760),
        *AdapterType,
        v3,
        v2);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 27), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 760) )
  {
    v39 = 0LL;
    v10 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, 256LL, v9);
    if ( v10 )
    {
      for ( i = 0; i < *((_DWORD *)this + 760); ++i )
      {
        DestinationString = 0LL;
        v12 = *((_QWORD *)this + 362) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v12 + 236));
        *(_QWORD *)&v39.Length = 5242880LL;
        v39.Buffer = v10;
        if ( RtlAnsiStringToUnicodeString(&v39, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v39, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          LODWORD(v36) = *(_DWORD *)(v12 + 344);
          LODWORD(v35) = *(_DWORD *)(v12 + 216);
          LODWORD(v34) = *(_DWORD *)(v12 + 8);
          LODWORD(v32) = *(_DWORD *)(v12 + 212);
          LODWORD(v30) = *(_DWORD *)(v12 + 208);
          LODWORD(v28) = i;
          McTemplateK0pqqqqjzqqx_EtwWriteTransfer(
            v12 + 220,
            v13,
            v14,
            this,
            v28,
            v30,
            v32,
            v34,
            v12 + 220,
            v39.Buffer,
            v35,
            v36,
            *(_QWORD *)(v12 + 368));
        }
        for ( j = 0; j < *(_DWORD *)(v12 + 8); ++j )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          {
            LODWORD(v32) = *(_DWORD *)(v12 + 24LL * j + 32);
            LODWORD(v30) = j;
            LODWORD(v28) = i;
            McTemplateK0pqqqxx_EtwWriteTransfer(
              3LL * j,
              v13,
              v14,
              this,
              v28,
              v30,
              v32,
              *(_QWORD *)(v12 + 24LL * j + 16),
              *(_QWORD *)(v12 + 24LL * j + 24));
          }
        }
      }
      operator delete[](v10);
    }
    for ( k = 0; k < *((_DWORD *)this + 760); ++k )
    {
      v17 = 520LL * k;
      v18 = *((_QWORD *)this + 362);
      v19 = *(unsigned int **)(v17 + v18 + 512);
      if ( v19 )
      {
        v20 = *(_DWORD *)(v17 + v18 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          LODWORD(v34) = v19[48];
          LODWORD(v32) = *v19;
          LODWORD(v30) = *(_DWORD *)(v17 + v18 + 212);
          LODWORD(v28) = k;
          McTemplateK0pqtqq_EtwWriteTransfer(v17, &Dxgk_PowerPStateComponent, v8, this, v28, v30, v32, v34);
        }
        for ( m = 0; m < *v19; ++m )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          {
            LODWORD(v32) = v19[m + 1];
            LODWORD(v30) = m;
            LODWORD(v28) = v20;
            McTemplateK0pqqq_EtwWriteTransfer((unsigned int)v32, &Dxgk_PowerPState, v8, this, v28, v30, v32);
          }
        }
      }
    }
  }
  v22 = *((_QWORD *)this + 27);
  v23 = *(_QWORD *)(v22 + 64);
  v24 = *(_DWORD *)(v23 + 4380);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v32) = 0;
    LODWORD(v30) = *(unsigned __int8 *)(v23 + 4384);
    LODWORD(v28) = v30;
    McTemplateK0pqqq_EtwWriteTransfer(v23, &EventBrightness, v8, v22, v28, v30, v32);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v33) = 0;
      LODWORD(v31) = v24;
      LODWORD(v29) = v24;
      McTemplateK0pqqq_EtwWriteTransfer(v25, &EventBacklightOptimizationLevel, v8, v22, v29, v31, v33);
    }
  }
  v26 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 349);
  if ( v26 )
    ADAPTER_DISPLAY::ReportState(v26);
  v27 = (ADAPTER_RENDER *)*((_QWORD *)this + 350);
  if ( v27 )
    ADAPTER_RENDER::ReportState(v27);
  DXGADAPTER::ReportNodeMetadata(this, v7, v8);
}
