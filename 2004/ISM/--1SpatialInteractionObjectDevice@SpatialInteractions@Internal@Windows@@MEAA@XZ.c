/*
 * XREFs of ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800D5B84
 * Callers:
 *     ??_ESpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D66A0 (--_ESpatialInteractionEyeGazeObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800D6700 (--_GSpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAAPEAXI@Z @ 0x1800D6760 (--_GSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x180045464 (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBEUTar.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C9030 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBU_GUID@@V?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D516C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBU_GUID@@V-$shared_ptr@VSpatialInteracti.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::~SpatialInteractionObjectDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice *this)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  volatile int *v5; // rdx
  __int64 v6; // rcx
  const char *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Holographic::ISpatialObjectWatcherCallback,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (RTL_SRWLOCK *)((char *)this + 192);
  AcquireSRWLockExclusive((PSRWLOCK)this + 24);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x100,
    (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
    (const char *)(*((_QWORD *)this + 18) != 0LL),
    (void *)"Not all SpatialObjects have been deleted.",
    v7);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>>>>::_Tidy((__int64)this + 152);
  std::_List_node<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<_GUID const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject>>,void *>>>(
    v3,
    *((_QWORD ***)this + 17));
  std::_Deallocate<16,0>(*((void **)this + 17), (const struct std::nothrow_t *)0x30);
  v4 = *((_QWORD *)this + 15);
  if ( v4 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 14);
  v5 = (volatile int *)*((_QWORD *)this + 13);
  if ( (unsigned __int64)v5 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 10), (const struct std::nothrow_t *)(2LL * (_QWORD)v5 + 2));
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 7LL;
  *((_WORD *)this + 40) = 0;
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v5);
}
