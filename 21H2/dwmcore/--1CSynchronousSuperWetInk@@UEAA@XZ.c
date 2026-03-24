/*
 * XREFs of ??1CSynchronousSuperWetInk@@UEAA@XZ @ 0x1801EF56C
 * Callers:
 *     ??_GCSynchronousSuperWetInk@@UEAAPEAXI@Z @ 0x1801EF720 (--_GCSynchronousSuperWetInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800D44BC (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_1934314809@@@details@wil@@QEAA_NXZ @ 0x1800F06F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_1934314809@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801542D8 (McTemplateU0x_EventWriteTransfer.c)
 *     ?TelemetryEndTouchLatencyAnalysis@CComposition@@QEAAX_K@Z @ 0x180156020 (-TelemetryEndTouchLatencyAnalysis@CComposition@@QEAAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173D04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x18019599C (-RemoveSource@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ??1CSuperWetSource@@UEAA@XZ @ 0x1801C39D4 (--1CSuperWetSource@@UEAA@XZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KV?$shared_ptr@$$BY0A@E@std@@@std@@PEAX@1@@Z @ 0x1801EEE84 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KV-$shared_ptr@$$BY0A@E@std@@@std@@PEAX@s.c)
 */

void __fastcall CSynchronousSuperWetInk::~CSynchronousSuperWetInk(CSynchronousSuperWetInk *this)
{
  struct CSuperWetSource *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  std::_Ref_count_base *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx

  v2 = (CSynchronousSuperWetInk *)((char *)this + 112);
  *(_QWORD *)this = &CSynchronousSuperWetInk::`vftable'{for `CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>'};
  *((_QWORD *)this + 14) = &CSynchronousSuperWetInk::`vftable'{for `CSuperWetSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CSynchronousSuperWetInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CSynchronousSuperWetInk::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 208;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 224;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_1934314809>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_1934314809>::GetImpl'::`2'::impl) )
  {
    if ( !*((_QWORD *)this + 11) )
      goto LABEL_11;
    if ( *((_BYTE *)this + 248) )
      CComposition::TelemetryEndTouchLatencyAnalysis(*((CComposition **)this + 2));
    CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 128LL), v2);
    v6 = *((_QWORD *)this + 11);
    goto LABEL_10;
  }
  if ( *((_BYTE *)this + 248) )
    CComposition::TelemetryEndTouchLatencyAnalysis(*((CComposition **)this + 2));
  CSuperWetInkManager::RemoveSource(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 128LL), v2);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
LABEL_10:
    *(_QWORD *)(v6 + 184) = 0LL;
LABEL_11:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
    McTemplateU0x_EventWriteTransfer(v5, &EVTDESC_SYNCHRONOUSSUPERWETINK_DESTROYED, (__int64)this);
  std::vector<unsigned char>::_Tidy((__int64)this + 224);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 27);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,std::shared_ptr<unsigned char [0]>>,void *>>>(
    (__int64)this + 184,
    (__int64)this + 184,
    *(__int64 **)(*((_QWORD *)this + 23) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 23), 0x38uLL);
  v8 = (void *)*((_QWORD *)this + 22);
  if ( v8 )
    operator delete(v8);
  v9 = *((_QWORD *)this + 21);
  if ( v9 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  CSuperWetSource::~CSuperWetSource(v2);
  CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::~CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>((struct CResource **)this);
}
