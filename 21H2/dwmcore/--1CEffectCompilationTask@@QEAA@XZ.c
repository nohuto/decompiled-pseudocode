/*
 * XREFs of ??1CEffectCompilationTask@@QEAA@XZ @ 0x1801BF5DC
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1800D9D10 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18001A4E4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180198EEC (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V-$_Uhash_comp.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801BF5B8 (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_constan.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801BF684 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(CEffectCompilationTask *this)
{
  __int64 v2; // rbx
  CCompiledEffectCache *v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel_RenderThread(this);
  v2 = *((_QWORD *)this + 1);
  v6 = *((_QWORD *)this + 6);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
    (_QWORD *)(v2 + 112),
    &v5);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((OLECHAR **)this + 10);
  v3 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
  if ( v3 )
    CCompiledEffectCache::`scalar deleting destructor'(v3);
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2);
}
