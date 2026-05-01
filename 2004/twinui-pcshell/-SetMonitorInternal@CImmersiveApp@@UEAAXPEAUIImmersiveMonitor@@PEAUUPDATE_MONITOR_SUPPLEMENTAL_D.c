/*
 * XREFs of ?SetMonitorInternal@CImmersiveApp@@UEAAXPEAUIImmersiveMonitor@@PEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@W4MonitorChangeOptions@@@Z @ 0x180070120
 * Callers:
 *     <none>
 * Callees:
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18000B9E8 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180010000 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002CB98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180061C50 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x180063F04 (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x180086B10 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18014DE38 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CImmersiveApp::SetMonitorInternal(__int64 *a1, struct IUnknown *a2, struct IUnknown **a3, char a4)
{
  int v8; // esi
  __int64 v9; // rbx
  __int64 v10; // rdi
  int v11; // edi
  void (__fastcall *v12)(__int64 *, struct IUnknown **); // rdi
  BOOL v13; // r15d
  void (__fastcall *v14)(__int64 *, GUID *, struct IUnknown **); // rdi
  char IsReportingEnabled; // al
  void (__fastcall *v16)(__int64 *, struct IUnknown **); // rdi
  __int64 v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // edx
  int v22; // [rsp+20h] [rbp-40h]
  struct IUnknown *v23; // [rsp+30h] [rbp-30h] BYREF
  struct IUnknown *v24; // [rsp+38h] [rbp-28h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-20h] BYREF
  struct IUnknown *v26; // [rsp+50h] [rbp-10h] BYREF
  __int64 v27; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  struct IUnknown *v29; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+58h] BYREF

  v30 = 0;
  v8 = a4 & 8;
  v9 = 0LL;
  v27 = 0LL;
  if ( (a4 & 8) != 0 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v27, a1 + 84);
    v9 = v27;
  }
  else
  {
    v10 = a1[83];
    if ( v10 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(a1[83]);
      v9 = v10;
      v27 = v10;
    }
  }
  if ( !a2 || !v9 )
    goto LABEL_37;
  if ( a2 != (struct IUnknown *)v9 )
  {
    v26 = 0LL;
    v29 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_00000000_0000_0000_c000_000000000046,
           &v26) < 0 )
      goto LABEL_37;
    v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v9)(
            v9,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v29);
    if ( v11 >= 0 )
      ((void (__fastcall *)(struct IUnknown *))v29->lpVtbl->Release)(v29);
    ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
    if ( v11 < 0 || v26 != v29 )
    {
LABEL_37:
      if ( (a4 & 1) == 0 || !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1) )
      {
        v26 = 0LL;
        v12 = *(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
        v12(a1, &v26);
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(
          (__int64 *)((char *)a1 + (v8 != 0 ? 672LL : 664LL)),
          (__int64)a2);
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 400))(a1) && (a4 & 6) != 0 )
        {
          v13 = (a4 & 2) == 0;
          v29 = 0LL;
          if ( a3 )
          {
            v29 = *a3;
          }
          else
          {
            v25[0] = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
            v24 = 0LL;
            v30 = 2;
            v14 = *(void (__fastcall **)(__int64 *, GUID *, struct IUnknown **))(*(a1 - 8) + 32);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            v14(a1 - 8, &GUID_00000000_0000_0000_c000_000000000046, &v24);
            IAMPrivate_QueryObject(
              v24,
              (const struct _GUID *)&SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              v25);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
            (*(void (__fastcall **)(void *, struct IUnknown **))(*(_QWORD *)v25[0] + 120LL))(v25[0], &v29);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
          }
          IsReportingEnabled = CReportWindowVisibilityChange::IsReportingEnabled(
                                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                                 a2,
                                 0LL);
          v22 = v13;
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*a1 + 264))(
            a1,
            (unsigned int)(IsReportingEnabled != 0) + 1,
            (unsigned int)v29,
            HIDWORD(v29));
        }
        v23 = 0LL;
        v16 = *(void (__fastcall **)(__int64 *, struct IUnknown **))(*a1 + 464);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        v16(a1, &v23);
        if ( (unsigned int)SHIsSameObject(v26, v23) )
          goto LABEL_34;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
          1u);
        v17 = a1[85];
        if ( v17 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, unsigned int *))(*(_QWORD *)v17 + 80LL))(
                  v17,
                  v23,
                  &v30);
          v19 = retaddr;
          if ( v18 >= 0 )
          {
            v21 = v30;
            if ( *((_DWORD *)a1 + 172) == v30 )
              goto LABEL_33;
            *((_DWORD *)a1 + 172) = v30;
            v18 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(
                    (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 23),
                    v21);
            v19 = retaddr;
            if ( v18 >= 0 )
              goto LABEL_33;
            v20 = 1969LL;
          }
          else
          {
            v20 = 1965LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v19,
            (void *)v20,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)(unsigned int)v18);
        }
        else
        {
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x7B7,
            (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
            (const char *)0x8000FFFFLL,
            v22);
        }
LABEL_33:
        LODWORD(v25[0]) = 17;
        v25[1] = 0LL;
        CImmersiveApp::_ScheduleApplicationNotifications(
          (CImmersiveApp *)(a1 - 14),
          (const struct APP_CHANGE_INFO *const)v25,
          1uLL);
LABEL_34:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
      }
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
