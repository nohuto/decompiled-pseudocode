/*
 * XREFs of ??1CExclusiveModeListener@@UEAA@XZ @ 0x18010D2E0
 * Callers:
 *     ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x1801067A0 (--_GCExclusiveModeListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x180106060 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@-.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x18010A5D8 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18010EABC (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 */

void __fastcall CExclusiveModeListener::~CExclusiveModeListener(CExclusiveModeListener *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CExclusiveModeListener::`vftable';
  *((_QWORD *)this + 1) = &CExclusiveModeListener::`vftable'{for `IMixedRealitySpatialAudioFormatPolicyChange'};
  *((_QWORD *)this + 2) = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  CExclusiveModeListener::Shutdown(this);
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 184));
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(
    (__int64)this + 160,
    (__int64)this + 160,
    *(_QWORD *)(*((_QWORD *)this + 20) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 20), (const struct std::nothrow_t *)0x48);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 7);
  *((_DWORD *)this + 13) = -1073741823;
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
