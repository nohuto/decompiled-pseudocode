/*
 * XREFs of ??1AtmosCheck@@UEAA@XZ @ 0x180134500
 * Callers:
 *     ??_EAtmosCheck@@UEAAPEAXI@Z @ 0x180134760 (--_EAtmosCheck@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180060440 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180069E00 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??1?$vector@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800F05C0 (--1-$vector@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ?Uninitialize@AtmosCheck@@QEAAXXZ @ 0x180137010 (-Uninitialize@AtmosCheck@@QEAAXXZ.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180137E48 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 */

void __fastcall AtmosCheck::~AtmosCheck(AtmosCheck *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  struct wil::details::wnf_subscription_state_base *v4; // rdx
  __int64 v5; // rcx
  wil::details *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &AtmosCheck::`vftable';
  *((_QWORD *)this + 1) = &AtmosCheck::`vftable'{for `IMMNotificationClient'};
  *((_QWORD *)this + 2) = &AtmosCheck::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  AtmosCheck::Uninitialize(this);
  v2 = (void *)*((_QWORD *)this + 66);
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 68) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    *((_QWORD *)this + 66) = 0LL;
    *((_QWORD *)this + 67) = 0LL;
    *((_QWORD *)this + 68) = 0LL;
  }
  std::vector<unsigned __int64>::~vector<unsigned __int64>((__int64)this + 488);
  std::_List_node<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>,void *>>>(
    v3,
    *((_QWORD *)this + 59));
  std::_Deallocate<16,0>(*((void **)this + 59), (const struct std::nothrow_t *)0x38);
  `eh vector destructor iterator'(
    (char *)this + 272,
    32LL,
    6LL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  v5 = *((_QWORD *)this + 31);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (wil::details *)*((_QWORD *)this + 30);
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, v4);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 27);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v7 = *((_QWORD *)this + 6);
  if ( v7 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>((__int64)this);
}
