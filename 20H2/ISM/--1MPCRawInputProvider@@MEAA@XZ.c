/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x180089E68
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x18008A1A0 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800214F0 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800321EC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B3CC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x180069674 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@0AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x180089704 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18008A6DC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18008B98C (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??1MPCHeadMovementDetector@@QEAA@XZ @ 0x18008BE9C (--1MPCHeadMovementDetector@@QEAA@XZ.c)
 */

void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *Instance; // rax
  SpectrumListener *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  void *v10; // rcx
  void *v11; // rdi
  void *v12; // rdx
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, *((_DWORD *)this + 21));
  v3 = (SpectrumListener *)*((_QWORD *)this + 6);
  if ( v3 )
    SpectrumListener::Unregister(v3);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  if ( *((_QWORD *)this + 9) )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 264LL))(v4);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          72LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 224LL))(*((_QWORD *)this + 8));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      75LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v6);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 8);
  if ( *((_QWORD *)this + 2) )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 3);
    v8 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v7 != v8 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2), *v7);
      v7 += 2;
    }
  }
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (void *)*((_QWORD *)this + 23);
  if ( v10 )
  {
    std::_Deallocate<16,0>(
      v10,
      (const struct std::nothrow_t *)(2032 * ((*((_QWORD *)this + 25) - (_QWORD)v10) / 2032LL)));
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 160);
  v11 = (void *)*((_QWORD *)this + 17);
  if ( v11 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(
      *((_QWORD *)this + 17),
      *((_QWORD *)this + 18));
    std::_Deallocate<16,0>(
      v11,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 19) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 9,
    v12);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 8);
  v13 = (void *)*((_QWORD *)this + 7);
  if ( v13 )
  {
    MPCHeadMovementDetector::~MPCHeadMovementDetector(*((MPCHeadMovementDetector **)this + 7));
    operator delete(v13, (const struct std::nothrow_t *)0xB8);
  }
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  v14 = (void *)*((_QWORD *)this + 3);
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(*((_QWORD *)this + 3), *((_QWORD *)this + 4));
    std::_Deallocate<16,0>(
      v14,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 5) - (_QWORD)v14) & 0xFFFFFFFFFFFFFFF0uLL));
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  v15 = *((_QWORD *)this + 2);
  if ( v15 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
