/*
 * XREFs of ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800BCAEC
 * Callers:
 *     ??_ECWindowBackgroundTreatment@@UEAAPEAXI@Z @ 0x1800BCAB0 (--_ECWindowBackgroundTreatment@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001CA10 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800BD584 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEBVIDeviceTarget@@V?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800BD63C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEBVIDeviceTarget@@V-$ComPtr@VIRenderTarget.c)
 *     ?InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800BD714 (-InvalidateDependentCachedTreatments@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800BD8CC (-Remove@CPtrArrayBase@@IEAA_N_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800D5D7C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowBackgroundTreatment::~CWindowBackgroundTreatment(CWindowBackgroundTreatment *this)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CWindowBackgroundTreatment::`vftable'{for `IDeviceResourceNotify'};
  CPtrArrayBase::Remove((CPtrArrayBase *)(*((_QWORD *)this + 8) + 24LL), (unsigned __int64)this);
  CWindowBackgroundTreatment::ClearRenderTargetMaps(this);
  CWindowBackgroundTreatment::InvalidateDependentCachedTreatments(this);
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    v6 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v6 + 48LL))(v6, (char *)this + 56);
  }
  v3 = *((_QWORD *)this + 48);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 50) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 48) = 0LL;
    *((_QWORD *)this + 49) = 0LL;
    *((_QWORD *)this + 50) = 0LL;
  }
  Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease((__int64 *)this + 17);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((char *)this + 96);
  std::_List_node<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<IDeviceTarget const * const,Microsoft::WRL::ComPtr<IRenderTargetBitmap>>,void *>>>(
    v4,
    *((_QWORD *)this + 10));
  std::_Deallocate<16,0>(*((_QWORD *)this + 10), 32LL);
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CResource::~CResource(this);
}
