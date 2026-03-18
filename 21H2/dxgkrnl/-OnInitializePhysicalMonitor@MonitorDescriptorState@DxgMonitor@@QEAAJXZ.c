/*
 * XREFs of ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C020A818
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00275E0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z @ 0x1C006BAB4 (--0MultiMonitorDescriptor@DxgMonitor@@QEAA@AEAUIMonitorDescriptor@1@0@Z.c)
 *     ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020A668 (-CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@UWmiMonitorDescri.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x1C020B208 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 *     ?ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@KAEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020B338 (-ExtractFromEdid@DisplayIdMonitorDescriptor@DxgMonitor@@SAJ$$QEAV-$unique_ptr@$$BY0A@EU-$default.c)
 *     ??0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@K@Z @ 0x1C03BA9E0 (--0DisplayIdMonitorDescriptor@DxgMonitor@@QEAA@$$QEAV-$unique_ptr@$$BY0A@EU-$default_delete@$$BY.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::OnInitializePhysicalMonitor(
        DxgMonitor::MonitorDescriptorState *this)
{
  __int64 v2; // r9
  void **v3; // rbx
  unsigned int v4; // r12d
  __int64 v5; // rax
  size_t v6; // r15
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  void **v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  void *v20; // rax
  void *v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  void (__fastcall ***v27)(_QWORD, __int64); // rcx
  __int64 v28; // rcx
  int v29; // eax
  void *v30; // rcx
  __int64 v31; // rcx
  DxgMonitor::MultiMonitorDescriptor *v32; // rax
  DxgMonitor::MultiMonitorDescriptor *v33; // rax
  void (__fastcall ***v34)(_QWORD, __int64); // rcx
  __int64 v35; // rax
  size_t Size; // [rsp+80h] [rbp+40h] BYREF
  void *v38; // [rsp+88h] [rbp+48h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 64LL))(*((_QWORD *)this + 14)) )
    WdLogSingleEntry0(1LL);
  v3 = 0LL;
  v4 = 0;
  Size = 0LL;
  while ( 1 )
  {
    v5 = operator new[](0x98uLL, 0x4D677844u, 256LL, v2);
    v6 = v5;
    if ( !v5 )
    {
      WdLogSingleEntry0(2LL);
      LODWORD(v12) = -1073741801;
      goto LABEL_70;
    }
    memset((void *)(v5 + 24), 0, 0x80uLL);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = 128LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, size_t))(*(_QWORD *)v7 + 8LL))(
           v7,
           v4 << 7,
           128LL,
           v6 + 24);
    LODWORD(v12) = v8;
    if ( v8 == -1071841279 || v8 == -1071774719 )
      break;
    if ( v8 == -1071841272 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = v4;
      goto LABEL_18;
    }
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL, v8);
      goto LABEL_18;
    }
    *(_DWORD *)(v6 + 8) = 2;
    *(_DWORD *)(v6 + 12) = v4 != 0 ? 255 : 1;
    v13 = *(void ***)v6;
    *(_QWORD *)v6 = v3;
    if ( v13 )
    {
      wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v13);
      operator delete(v13);
    }
    ++v4;
    v3 = (void **)v6;
    Size = v6;
    if ( v4 > 0xFE )
      goto LABEL_19;
  }
  if ( v4 )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry1(3LL, this);
LABEL_18:
  LODWORD(v12) = 0;
  wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>((void **)v6);
  operator delete((void *)v6);
LABEL_19:
  if ( v3 )
  {
    if ( !v4 )
      WdLogSingleEntry0(1LL);
    v14 = DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors((void ***)&Size, (__int64 *)this + 16, v11, v2);
    v12 = v14;
    if ( v14 != -1073741801 )
    {
      v17 = WdLogNewEntry5_WdTrace(v16, v15);
      v3 = (void **)Size;
      *(_QWORD *)(v17 + 24) = v12;
      LODWORD(v12) = 0;
      goto LABEL_26;
    }
    v3 = (void **)Size;
  }
  if ( (int)v12 < 0 )
    goto LABEL_70;
LABEL_26:
  v18 = *((_QWORD *)this + 14);
  LODWORD(Size) = 0;
  v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
  if ( (*(unsigned int (__fastcall **)(__int64, size_t *, _QWORD))(*(_QWORD *)v19 + 16LL))(v19, &Size, 0LL) == -1073741789 )
  {
    if ( (unsigned int)(Size - 1) > 0xFFFF )
    {
      WdLogSingleEntry1(3LL, (unsigned int)Size);
    }
    else
    {
      v20 = (void *)operator new[]((unsigned int)Size, 0x4D677844u, 256LL, v2);
      v38 = v20;
      v21 = v20;
      if ( v20 )
      {
        memset(v20, 0, (unsigned int)Size);
        v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 24LL))(*((_QWORD *)this + 14));
        v23 = (*(__int64 (__fastcall **)(__int64, size_t *, void *))(*(_QWORD *)v22 + 16LL))(v22, &Size, v21);
        if ( v23 < 0 )
        {
          WdLogSingleEntry1(2LL, v23);
        }
        else
        {
          v25 = operator new[](0x30uLL, 0x4D677844u, 256LL, v24);
          if ( v25 )
          {
            v26 = DxgMonitor::DisplayIdMonitorDescriptor::DisplayIdMonitorDescriptor(v25, &v38, (unsigned int)Size);
            v21 = v38;
          }
          else
          {
            v26 = 0LL;
          }
          v27 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 17);
          *((_QWORD *)this + 17) = v26;
          if ( v27 )
          {
            (**v27)(v27, 1LL);
            v26 = *((_QWORD *)this + 17);
          }
          if ( !v26 )
            WdLogSingleEntry0(2LL);
          *((_BYTE *)this + 152) = 0;
          if ( !*((_QWORD *)this + 16) )
            WdLogSingleEntry0(3LL);
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        LODWORD(v12) = -1073741801;
      }
      if ( v21 )
        operator delete[](v21);
      if ( (int)v12 < 0 )
        goto LABEL_70;
    }
  }
  if ( !*((_QWORD *)this + 16) )
    goto LABEL_70;
  if ( *((_QWORD *)this + 17) )
    goto LABEL_59;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_SupportDisplayId2InsideEdid__private_reporting,
    0x1DFE281u,
    v11,
    v2,
    (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
    1);
  v28 = *((_QWORD *)this + 16);
  LODWORD(Size) = 0;
  (*(void (__fastcall **)(__int64, void **, size_t *))(*(_QWORD *)v28 + 232LL))(v28, &v38, &Size);
  if ( !v38 )
  {
    LODWORD(v12) = -1073741801;
    v29 = -1073741801;
LABEL_55:
    WdLogSingleEntry1(2LL, v29);
    goto LABEL_56;
  }
  v29 = DxgMonitor::DisplayIdMonitorDescriptor::ExtractFromEdid(&v38, (unsigned int)Size, (char *)this + 136);
  if ( *((_QWORD *)this + 17) )
    *((_BYTE *)this + 152) = 1;
  if ( (int)(v29 + 0x80000000) >= 0 && v29 != -1073741275 )
    goto LABEL_55;
LABEL_56:
  v30 = v38;
  v38 = 0LL;
  if ( v30 )
    operator delete[](v30);
  if ( (int)v12 >= 0 )
  {
LABEL_59:
    if ( *((_QWORD *)this + 16) )
    {
      v31 = *((_QWORD *)this + 17);
      if ( v31 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v31 + 48LL))(v31) == 2 )
        {
          v32 = (DxgMonitor::MultiMonitorDescriptor *)operator new[](0x28uLL, 0x4D677844u, 256LL, v2);
          if ( v32 )
            v33 = DxgMonitor::MultiMonitorDescriptor::MultiMonitorDescriptor(
                    v32,
                    *((struct DxgMonitor::IMonitorDescriptor **)this + 16),
                    *((struct DxgMonitor::IMonitorDescriptor **)this + 17));
          else
            v33 = 0LL;
          v34 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 18);
          *((_QWORD *)this + 18) = v33;
          if ( v34 )
          {
            (**v34)(v34, 1LL);
            v33 = (DxgMonitor::MultiMonitorDescriptor *)*((_QWORD *)this + 18);
          }
          if ( !v33 )
            LODWORD(v12) = -1073741801;
        }
      }
    }
  }
LABEL_70:
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_PreferDisplayIdOverEdid__private_reporting,
    0x1DFE27Fu,
    v11,
    v2,
    (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
    1);
  v35 = *((_QWORD *)this + 18);
  if ( v35 || (v35 = *((_QWORD *)this + 16)) != 0 || (v35 = *((_QWORD *)this + 17)) != 0 )
    *((_QWORD *)this + 20) = v35;
  DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache(this);
  if ( v3 )
  {
    wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v3);
    operator delete(v3);
  }
  return (unsigned int)v12;
}
