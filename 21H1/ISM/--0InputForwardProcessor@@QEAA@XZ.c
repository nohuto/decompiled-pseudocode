/*
 * XREFs of ??0InputForwardProcessor@@QEAA@XZ @ 0x180176944
 * Callers:
 *     ?Create@InputForwardProcessor@@SAJPEAPEAV1@@Z @ 0x180176A4C (-Create@InputForwardProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@1@@Z @ 0x18017688C (--0-$_Hash@V-$_Umap_traits@_KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@_KU-$has.c)
 */

// Hidden C++ exception states: #wind=2
InputForwardProcessor *__fastcall InputForwardProcessor::InputForwardProcessor(InputForwardProcessor *this)
{
  char *v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &InputForwardProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &InputForwardProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = 0LL;
  v2 = (char *)this + 32;
  v5 = HIDWORD(v2);
  v4 = 0;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<IInputTarget>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<IInputTarget>>>,0>>(
    (__int64)v2,
    &v4);
  return this;
}
