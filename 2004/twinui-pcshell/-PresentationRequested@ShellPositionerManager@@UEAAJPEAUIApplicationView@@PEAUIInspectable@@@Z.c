/*
 * XREFs of ?PresentationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803D4CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180018AB8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180024938 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006F394 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180081218 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??$query@U?$IVectorView@I@Collections@Foundation@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IVectorView@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800B5C70 (--$query@U-$IVectorView@I@Collections@Foundation@Windows@@@-$com_ptr_t@UIInspectable@@Uerr_excep.c)
 *     ??$query@UIPresentationRequestedArgs@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIPresentationRequestedArgs@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800B5CC0 (--$query@UIPresentationRequestedArgs@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803D39DC (--1PresentationRequested@ShellPositionerTelemetry@@QEAA@XZ.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1803D4AE0 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x1803D5894 (-StartActivity@PresentationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIInspectable@@@Z @ 0x1803D6D80 (-UpdatePositionerPriorityForPresentation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriori.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall ShellPositionerManager::PresentationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  int PositionerPriorityForView; // eax
  unsigned int v7; // ebx
  struct IShellPositionerPriority *v8; // rdi
  int v9; // r12d
  __int64 (__fastcall *v10)(struct IApplicationView *, IUnknown **); // rbx
  int v11; // eax
  _QWORD *v12; // rax
  char v13; // r14
  __int64 v14; // rbx
  int (__fastcall *v15)(__int64, __int64 *); // rsi
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, struct IShellPositionerPriority **); // rsi
  struct IShellPositionerPriority *v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  struct IShellPositionerPriority *v23; // rbx
  __int64 (__fastcall *v24)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **); // rsi
  unsigned int v25; // ebx
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, _QWORD, struct IShellPositionerPriority **); // r13
  struct IShellPositionerPriority *v28; // rcx
  struct IShellPositionerPriority *v29; // rbx
  __int64 (__fastcall *v30)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **); // rsi
  struct IShellPositionerPriority *v31; // rcx
  int PositionerForMonitor; // eax
  __int64 v33; // rdx
  struct IShellPositionerPriority *v34; // rcx
  struct IInspectable *v35; // rsi
  __int64 (__fastcall *v36)(struct IShellPositionerPriority *, struct IShellPositionerPriority **); // rbx
  int updated; // eax
  ShellPositionerManager *v38; // rcx
  __int64 v39; // rdx
  int v40; // edi
  int v41; // eax
  __int64 v42; // rdx
  struct IShellPositionerPriority *v44; // [rsp+40h] [rbp-C0h] BYREF
  void *v45; // [rsp+48h] [rbp-B8h] BYREF
  struct IImmersiveMonitor *v46; // [rsp+50h] [rbp-B0h] BYREF
  IUnknown *v47; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-A0h] BYREF
  void *v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  int v51[2]; // [rsp+78h] [rbp-88h] BYREF
  struct IShellPositionerPriority *v52; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v53; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v54; // [rsp+8Ch] [rbp-74h] BYREF
  struct IInspectable *v55; // [rsp+90h] [rbp-70h]
  __int64 v56; // [rsp+98h] [rbp-68h]
  _QWORD v57[40]; // [rsp+A0h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v55 = a3;
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v57,
    (__int64)"PresentationRequested");
  v57[0] = &ShellPositionerTelemetry::PresentationRequested::`vftable';
  ShellPositionerTelemetry::PresentationRequested::StartActivity((ShellPositionerTelemetry::PresentationRequested *)v57);
  v52 = 0LL;
  v56 = (__int64)this - 128;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
  PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                (ShellPositionerManager *)((char *)this - 128),
                                a2,
                                &v52);
  v7 = PositionerPriorityForView;
  if ( PositionerPriorityForView >= 0 )
  {
    v8 = v52;
    v9 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v52 + 24LL))(v52);
    v47 = 0LL;
    v10 = *(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
    v11 = v10(a2, &v47);
    v7 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x246,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_63:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v47);
      goto LABEL_64;
    }
    v12 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
            &v45,
            (__int64)a3);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IPresentationRequestedArgs>(v12, (__int64)v51);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v45);
    v46 = (struct IImmersiveMonitor *)v47;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v46);
    v13 = 0;
    v50 = 0LL;
    v14 = *(_QWORD *)v51;
    v15 = *(int (__fastcall **)(__int64, __int64 *))(**(_QWORD **)v51 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
    if ( v15(v14, &v50) >= 0 )
    {
      wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
        &v44,
        v50);
      wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Foundation::Collections::IVectorView<unsigned int>>(
        &v44,
        (__int64)&v45);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
      v16 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v45 + 56LL))(v45, &v53);
      v7 = v16;
      if ( v16 < 0 )
      {
        v17 = 595LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v16);
        goto LABEL_37;
      }
      if ( v53 )
      {
        v13 = 1;
        if ( v53 > 1 )
        {
          v7 = -2147024809;
LABEL_37:
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v45);
LABEL_62:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v50);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v51);
          goto LABEL_63;
        }
        v16 = (*(__int64 (__fastcall **)(void *, _QWORD, unsigned int *))(*(_QWORD *)v45 + 48LL))(v45, 0LL, &v48);
        v7 = v16;
        if ( v16 < 0 )
        {
          v17 = 602LL;
          goto LABEL_13;
        }
        v44 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v51 + 40LL))(*(_QWORD *)v51, &v54) < 0 )
        {
          if ( v9 == 5 )
          {
            v7 = -2147467263;
LABEL_35:
            v34 = v44;
            if ( v44 )
            {
              v44 = 0LL;
              (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v34 + 16LL))(v34);
            }
            goto LABEL_37;
          }
          v25 = (*((_DWORD *)this + 4) == 1) + 1;
          v26 = *((_QWORD *)this + 6);
          v27 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v26 + 32LL);
          v28 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v28 + 16LL))(v28);
          }
          v21 = v27(v26, v25, &v44);
          v7 = v21;
          if ( v21 < 0 )
          {
            v22 = 623LL;
            goto LABEL_28;
          }
          v29 = v44;
          v30 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v44 + 88LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
          v21 = v30(v29, v48, &v46);
          v7 = v21;
          if ( v21 < 0 )
          {
            v22 = 624LL;
            goto LABEL_28;
          }
        }
        else
        {
          v18 = *((_QWORD *)this + 6);
          v19 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IShellPositionerPriority **))(*(_QWORD *)v18 + 40LL);
          v20 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v21 = v19(v18, v54, &v44);
          v7 = v21;
          if ( v21 < 0 )
          {
            v22 = 608LL;
LABEL_28:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v22,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
              (const char *)(unsigned int)v21);
            goto LABEL_35;
          }
          v23 = v44;
          v24 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, _QWORD, struct IImmersiveMonitor **))(*(_QWORD *)v44 + 88LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v46);
          v21 = v24(v23, v48, &v46);
          v7 = v21;
          if ( v21 < 0 )
          {
            v22 = 609LL;
            goto LABEL_28;
          }
        }
        v31 = v44;
        if ( v44 )
        {
          v44 = 0LL;
          (*(void (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v31 + 16LL))(v31);
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v45);
    }
    v49 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
    PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(
                             v9,
                             v47,
                             &GUID_ee010e17_919a_4068_868b_675acf787303,
                             &v49);
    v7 = PositionerForMonitor;
    if ( PositionerForMonitor < 0 )
    {
      v33 = 631LL;
LABEL_44:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v33,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerForMonitor);
LABEL_61:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v49);
      goto LABEL_62;
    }
    if ( v13 && v9 && v9 != 6 )
    {
      v35 = v55;
    }
    else
    {
      v35 = v55;
      if ( (*(unsigned int (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v49 + 72LL))(
             v49,
             a2,
             v55) )
      {
        PositionerForMonitor = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IInspectable *))(*(_QWORD *)v49 + 80LL))(
                                 v49,
                                 a2,
                                 v35);
        v7 = PositionerForMonitor;
        if ( PositionerForMonitor < 0 )
        {
          v33 = 642LL;
          goto LABEL_44;
        }
LABEL_60:
        wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v57);
        v7 = 0;
        goto LABEL_61;
      }
    }
    v44 = 0LL;
    v36 = *(__int64 (__fastcall **)(struct IShellPositionerPriority *, struct IShellPositionerPriority **))(*(_QWORD *)v8 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
    updated = v36(v8, &v44);
    v7 = updated;
    if ( updated >= 0 )
    {
      updated = ShellPositionerManager::UpdatePositionerPriorityForPresentation(v38, v44, a2, v46, v35);
      v7 = updated;
      if ( updated >= 0 )
      {
        v40 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v44 + 24LL))(v44);
        v45 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
        v41 = ShellPositionerManager::GetPositionerForMonitor(
                v40,
                (IUnknown *)v46,
                &GUID_ee010e17_919a_4068_868b_675acf787303,
                &v45);
        v7 = v41;
        if ( v41 >= 0 )
        {
          v41 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IShellPositionerPriority *))(*(_QWORD *)a2 + 272LL))(
                  a2,
                  v44);
          v7 = v41;
          if ( v41 >= 0 )
          {
            v41 = ShellPositionerManager::PerformPositionerHandoff(
                    v56,
                    a2,
                    (__int64)v47,
                    (__int64)v46,
                    *(__int64 *)v51,
                    v9,
                    v40);
            v7 = v41;
            if ( v41 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
              goto LABEL_60;
            }
            v42 = 666LL;
          }
          else
          {
            v42 = 662LL;
          }
        }
        else
        {
          v42 = 659LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v42,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v41);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v45);
LABEL_58:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v44);
        goto LABEL_61;
      }
      v39 = 654LL;
    }
    else
    {
      v39 = 651LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)updated);
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)PositionerPriorityForView);
LABEL_64:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v52);
  ShellPositionerTelemetry::PresentationRequested::~PresentationRequested((ShellPositionerTelemetry::PresentationRequested *)v57);
  return v7;
}
