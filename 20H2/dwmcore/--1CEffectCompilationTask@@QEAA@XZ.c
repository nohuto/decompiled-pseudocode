/*
 * XREFs of ??1CEffectCompilationTask@@QEAA@XZ @ 0x180182428
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1800C6360 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180021070 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V?$_Uhash_compare@UEffectDescriptionKey@@U?$hash@UEffectDescriptionKey@@@std@@U?$equal_to@UEffectDescriptionKey@@@3@@std@@V?$allocator@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBUEffectDescriptionKey@@@Z @ 0x180167D18 (-erase@-$_Hash@V-$_Umap_traits@UEffectDescriptionKey@@PEAVCEffectCompilationTask@@V_ea_180167D18.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x1801824C8 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationTask::~CEffectCompilationTask(CEffectCompilationTask *this)
{
  __int64 v2; // rbx
  OLECHAR *v3; // rcx
  CCompiledEffectCache *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  *(_QWORD *)this = &CEffectCompilationTask::`vftable';
  CEffectCompilationTask::Cancel_RenderThread(this);
  v2 = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 6);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 104LL))(v7);
  std::_Hash<std::_Umap_traits<EffectDescriptionKey,CEffectCompilationTask *,std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>,std::allocator<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>>,0>>::erase(
    (_QWORD *)(v2 + 112),
    &v6);
  v3 = (OLECHAR *)*((_QWORD *)this + 10);
  if ( v3 )
    SysFreeString(v3);
  v4 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
  if ( v4 )
    CCompiledEffectCache::`scalar deleting destructor'(v4);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
