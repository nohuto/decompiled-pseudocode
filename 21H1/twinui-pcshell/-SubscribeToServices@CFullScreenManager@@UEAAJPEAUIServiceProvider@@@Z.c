/*
 * XREFs of ?SubscribeToServices@CFullScreenManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180188D10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x180043F18 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenManager::SubscribeToServices(CFullScreenManager *this, struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rbx
  HRESULT Service; // eax
  __int64 v8; // rdx
  char *v9; // rsi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  IUnknown *punk; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  if ( !IsPPIEdition() )
  {
    v9 = (char *)this - 24;
    goto LABEL_14;
  }
  v16 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    punk = 0LL;
    v6 = v16;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    Service = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, IUnknown **))(*(_QWORD *)v6 + 72LL))(
                v6,
                0LL,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                &punk);
    v5 = Service;
    if ( Service < 0 )
    {
      v8 = 103LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
        (const char *)(unsigned int)Service);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
    Service = IUnknown_QueryService(
                punk,
                &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
                &GUID_b6b9bca5_a1ad_4216_ab1f_4de46296eac8,
                (void **)this + 23);
    v5 = Service;
    if ( Service < 0 )
    {
      v8 = 105LL;
      goto LABEL_10;
    }
    v9 = (char *)this - 24;
    Service = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 23) + 24LL))(
                *((_QWORD *)this + 23),
                ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
                (char *)this + 172);
    v5 = Service;
    if ( Service < 0 )
    {
      v8 = 106LL;
      goto LABEL_10;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
LABEL_14:
    v13[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
            a2,
            &SID_IImmersiveMonitorService,
            &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
            v13);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v13[0] + 24LL))(
              v13[0],
              ((unsigned __int64)this + 96) & -(__int64)(v9 != 0LL),
              (char *)this + 176);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v5 = 0;
        goto LABEL_20;
      }
      v11 = 111LL;
    }
    else
    {
      v11 = 110LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    return v5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x65,
    (__int64)"pcshell\\twinui\\fullscreenmanager\\lib\\fullscreenmanager.cpp",
    (const char *)(unsigned int)v4);
LABEL_11:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v16);
  return v5;
}
