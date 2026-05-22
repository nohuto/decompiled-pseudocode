/*
 * XREFs of ??0MagnifierProcessor@@QEAA@XZ @ 0x18017C8F8
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIContextualProcessor@@@Z @ 0x18017C1A4 (--$MakeAndInitialize@VMagnifierProcessor@@UIContextualProcessor@@$$V@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1801373BC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@@std@@@1@@Z @ 0x18017C73C (--0-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UDeviceState@MagnifierProcessor@@@WRL@Microsoft@@V-$_Uhas.c)
 */

// Hidden C++ exception states: #wind=1
MagnifierProcessor *__fastcall MagnifierProcessor::MagnifierProcessor(MagnifierProcessor *this)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+3Ch] [rbp+14h]

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>((__int64)this);
  *(_QWORD *)this = &MagnifierProcessor::`vftable';
  v4 = ((unsigned __int64)this + 16) >> 32;
  v3 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<MagnifierProcessor::DeviceState>>>,0>>(
    (__int64)this + 16,
    &v3);
  *((_QWORD *)this + 10) = 500LL;
  *((_QWORD *)this + 11) = 100LL;
  *((_DWORD *)this + 24) = 200;
  *((_DWORD *)this + 25) = 270;
  *((_QWORD *)this + 13) = 0x3FE8D4FDF3B645A2LL;
  return this;
}
