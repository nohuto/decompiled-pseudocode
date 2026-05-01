/*
 * XREFs of ?ControlLost@TabletModePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1803D52B0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180024A94 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006EC74 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180080934 (--1-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180080A78 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803D5E70 (-EvictAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x1803D9EF0 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 *     ?StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803DBAC4 (-StartActivity@TMPControlLost@TabletModeTraceLogging@@QEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_.c)
 *     ?SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z @ 0x1803DE44C (-SwitchToEmptyLayoutHelper@TabletModePositioner@@AEAAJW4SwitchToEmptyLayoutFlags@@@Z.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1803E3F08 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 */

void __fastcall TabletModePositioner::ControlLost(__int64 a1, __int64 a2, unsigned int a3, void **a4)
{
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  const struct _GUID *v11; // r8
  int Instance; // eax
  HRESULT v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *a4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v19,
    (__int64)"TMPControlLost");
  v19[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  TabletModeTraceLogging::TMPControlLost::StartActivity(v19, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 136));
  if ( a3 == 3 )
  {
    v17 = 0LL;
    v8 = *(_QWORD *)(a1 + 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v8 + 192LL))(
           v8,
           &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
           &v17);
    if ( v9 >= 0 )
    {
      TabletModePositioner::SwitchToEmptyLayoutHelper(a1 - 128);
      if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 80LL))(v17, 5LL) > 1 )
      {
        ppvOut = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)a2 + 32LL))(
                a2,
                0LL,
                &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                &ppvOut);
        if ( v10 >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64, void *))(*(_QWORD *)v17 + 184LL))(v17, ppvOut) )
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 136), &v17);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3B6,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v10);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3AA,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)v9);
    }
    goto LABEL_29;
  }
  if ( ((a3 - 4) & 0xFFFFFFFD) == 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v17);
    if ( v15 >= 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 120) + 184LL))(
              *(_QWORD *)(a1 + 120),
              v17) )
        goto LABEL_29;
      v15 = TabletModePositioner::EvictAppHelper(a1 - 128, v17, 8LL);
      if ( v15 >= 0 )
        goto LABEL_29;
      v16 = 966LL;
    }
    else
    {
      v16 = 964LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v15);
LABEL_29:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    goto LABEL_30;
  }
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &v17);
  if ( (_DWORD)v17 != *(_DWORD *)(a1 + 108) )
  {
    if ( (int)DwmpBeginTransitionRequest(91LL) >= 0 )
      DwmpEndTransitionRequest(91LL);
    Instance = TabletModePositionerHandoffContext_CreateInstance(
                 *(struct IAppLayout **)(a1 + 120),
                 *(_BYTE *)(a1 + 112),
                 v11,
                 a4);
    if ( Instance < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3DC,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)Instance);
    TabletModePositioner::SetTabletMode(a1 - 128, (unsigned int)v17);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v13 = IUnknown_QueryService(
            *(IUnknown **)(a1 - 112),
            (const GUID *const)&SID_VirtualDesktopTabletModePolicyService,
            &GUID_56b32065_0bb3_42e2_975d_a559de1316e8,
            &ppvOut);
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)ppvOut + 24LL))(ppvOut, *(_QWORD *)(a1 + 120));
      if ( v13 >= 0 )
      {
LABEL_22:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_30;
      }
      v14 = 995LL;
    }
    else
    {
      v14 = 993LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_22;
  }
LABEL_30:
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v19);
  v19[0] = &TabletModeTraceLogging::TMPControlLost::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v19);
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v19);
}
