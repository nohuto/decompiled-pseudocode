/*
 * XREFs of ?SubscribeToServices@WindowSizeConverter@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803D29A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B66C (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::SubscribeToServices(WindowSizeConverter *this, struct IServiceProvider *a2)
{
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 *v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, char *); // rdi
  HRESULT (__stdcall *v10)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  QueryService = a2->lpVtbl->QueryService;
  v5 = (__int64 *)((char *)this + 88);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 11);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v5);
  if ( v6 >= 0 )
  {
    v8 = *v5;
    v9 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 64LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
    v6 = v9(v8, (char *)this + 96);
    if ( v6 < 0 )
    {
      v7 = 240LL;
      goto LABEL_3;
    }
    v15 = 0LL;
    v10 = a2->lpVtbl->QueryService;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v10)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            &v15);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v15 + 24LL))(
              v15,
              ((unsigned __int64)this + 72) & -(__int64)(this != (WindowSizeConverter *)24),
              (char *)this + 128);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v6 = 0;
        goto LABEL_12;
      }
      v12 = 245LL;
    }
    else
    {
      v12 = 244LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v11);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    return (unsigned int)v6;
  }
  v7 = 239LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
