/*
 * XREFs of ?SubscribeToServices@VoiceAssistantPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803E7570
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180088F6C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@SmartCookie@@QEAAJPEAUIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEvents@@PEAK@ZP81@EAAJK@ZPEAVVoiceAssistantPositioner@@@Z @ 0x1803DE1C8 (--$Register@UIViewPresentationMediator@@P81@EAAJPEAUIWindowManagementShowMoveSizeEv_ea_1803DE1C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::SubscribeToServices(
        VoiceAssistantPositioner *this,
        struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v5; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v14)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v15; // r8
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (_QWORD *)((char *)this + 144);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 18);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, _QWORD *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v8 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v5)(
           *v5,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v18);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v18 + 24LL))(
             v18,
             ((unsigned __int64)this + 88) & -(__int64)(this != (VoiceAssistantPositioner *)40),
             (char *)this + 152);
      v7 = v8;
      if ( v8 >= 0 )
      {
        v10 = a2->lpVtbl->QueryService;
        v11 = (_QWORD *)((char *)this + 160);
        v12 = *((_QWORD *)this + 20);
        if ( v12 )
        {
          *v11 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v10)(
               a2,
               &SID_InputHostLayout,
               &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
               (char *)this + 160);
        v7 = v8;
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(*(_QWORD *)*v11 + 24LL))(
                 *v11,
                 ((unsigned __int64)this + 96) & -(__int64)(this != (VoiceAssistantPositioner *)40),
                 (char *)this + 168);
          v7 = v8;
          if ( v8 >= 0 )
          {
            v13 = a2->lpVtbl->QueryService;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
            v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v13)(
                   a2,
                   &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                   &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
                   (char *)this + 176);
            v7 = v8;
            if ( v8 >= 0 )
            {
              v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 22) + 96LL))(
                     *((_QWORD *)this + 22),
                     ((unsigned __int64)this + 112) & -(__int64)(this != (VoiceAssistantPositioner *)40),
                     (char *)this + 184);
              v7 = v8;
              if ( v8 >= 0 )
              {
                v14 = a2->lpVtbl->QueryService;
                wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 24);
                v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v14)(
                       a2,
                       &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                       &GUID_c16d3efd_5c6f_462b_86f1_858082a48bb1,
                       (char *)this + 192);
                v7 = v8;
                if ( v8 >= 0 )
                {
                  v8 = SmartCookie::Register<IViewPresentationMediator,long (IViewPresentationMediator::*)(IWindowManagementShowMoveSizeEvents *,unsigned long *),long (IViewPresentationMediator::*)(unsigned long),VoiceAssistantPositioner *>(
                         (__int64)this + 200,
                         *((_QWORD *)this + 24),
                         v15);
                  v7 = v8;
                  if ( v8 >= 0 )
                  {
                    v7 = 0;
                    goto LABEL_23;
                  }
                  v9 = 219LL;
                }
                else
                {
                  v9 = 214LL;
                }
              }
              else
              {
                v9 = 212LL;
              }
            }
            else
            {
              v9 = 211LL;
            }
          }
          else
          {
            v9 = 207LL;
          }
        }
        else
        {
          v9 = 206LL;
        }
      }
      else
      {
        v9 = 204LL;
      }
    }
    else
    {
      v9 = 202LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v8);
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    return v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
