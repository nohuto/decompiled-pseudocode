/*
 * XREFs of ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x18010A424
 * Callers:
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x180108A74 (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BB130 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800D4F98 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 *     ??4?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180105A98 (--4-$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18010A1AC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTe.c)
 *     ??$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA?AV?$shared_ptr@UPool@CEndpointResourcePool@Sarm@@@0@AEAI0AEA_J@Z @ 0x18010A288 (--$make_shared@UPool@CEndpointResourcePool@Sarm@@AEAIAEAIAEA_J@std@@YA-AV-$shared_ptr@UPool@CEnd.c)
 */

__int64 __fastcall Sarm::CEndpointResourcePool::Initialize(
        Sarm::CEndpointResourcePool *this,
        struct ISaDeviceProxy *a2,
        struct __POSITION *a3)
{
  int v5; // esi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  bool v12; // al
  __int64 *v13; // rax
  __int64 *v14; // rax
  int v15; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+54h] [rbp-44h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h] BYREF
  __int64 v19; // [rsp+68h] [rbp-30h] BYREF
  std::_Ref_count_base *v20; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v22; // [rsp+A0h] [rbp+8h] BYREF
  int v23; // [rsp+A8h] [rbp+10h] BYREF
  int v24; // [rsp+B0h] [rbp+18h] BYREF
  int v25; // [rsp+B8h] [rbp+20h] BYREF

  *(_QWORD *)this = a3;
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      35LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x887C0103LL);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, int *, int *, int *))(*(_QWORD *)a2 + 200LL))(
         a2,
         &v23,
         &v22,
         &v24);
  if ( v5 < 0 )
  {
    v6 = 36LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, __int64 *))(*(_QWORD *)a2 + 208LL))(a2, &v17);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = 37LL;
    goto LABEL_5;
  }
  if ( (unsigned int)dword_18019C350 > 4 )
  {
    v18 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)a2 + 24LL))(a2);
    v19 = v17;
    v25 = v24;
    v15 = v22;
    v16 = v23;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v9,
      byte_180169267,
      v10,
      v11,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v25,
      (__int64)&v19,
      (void **)&v18);
  }
  try
  {
    v12 = v24 != 0;
    *((_BYTE *)this + 8) = v24 != 0;
    if ( v12 )
    {
      if ( !Sarm::CEndpointResourcePool::s_sharedPool )
      {
        v13 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
                &v19,
                &v23,
                &v22,
                &v17);
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
          &Sarm::CEndpointResourcePool::s_sharedPool,
          v13);
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
      }
      std::shared_ptr<Sarm::CEndpointResourcePool::Pool>::operator=(
        (_QWORD *)this + 2,
        &Sarm::CEndpointResourcePool::s_sharedPool);
    }
    else
    {
      v14 = std::make_shared<Sarm::CEndpointResourcePool::Pool,unsigned int &,unsigned int &,__int64 &>(
              &v19,
              &v23,
              &v22,
              &v17);
      std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
        (_QWORD *)this + 2,
        v14);
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
    }
    result = 0LL;
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
