/*
 * XREFs of ??1CEffectCompilationService@@UEAA@XZ @ 0x18016C310
 * Callers:
 *     ??_GCEffectCompilationService@@UEAAPEAXI@Z @ 0x18016C490 (--_GCEffectCompilationService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001B3A0 (-pop_back@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEf.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800CE23C (-_Tidy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAVCInte.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompilationTask@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18016C160 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUEffectDescriptionKey@@PEAVCEffectCompi.c)
 *     ?Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ @ 0x180186E88 (-Cancel_RenderThread@CEffectCompilationTask@@AEAAXXZ.c)
 */

void __fastcall CEffectCompilationService::~CEffectCompilationService(CEffectCompilationService *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  __int64 i; // rdi
  __int64 v4; // rcx
  void **v5; // rsi
  __int64 v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  __int64 v10; // rcx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  *(_QWORD *)this = &CEffectCompilationService::`vftable';
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 72) = 1;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 26); i = (unsigned int)(i + 1) )
    CEffectCompilationTask::Cancel_RenderThread(*(CEffectCompilationTask **)(*((_QWORD *)this + 10) + 8 * i));
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 264LL))(*((_QWORD *)this + 2));
    CloseHandle(*((HANDLE *)this + 3));
  }
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = (void **)((char *)this + 176);
  while ( *((_QWORD *)this + 26) )
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back((__int64)this + 176);
  v6 = *((_QWORD *)this + 24);
  while ( v6 )
  {
    --v6;
    v7 = *(void **)(*((_QWORD *)this + 23) + 8 * v6);
    if ( v7 )
      std::_Deallocate<16,0>(v7, 0x10uLL);
  }
  v8 = (void *)*((_QWORD *)this + 23);
  if ( v8 )
    std::_Deallocate<16,0>(v8, 8LL * *((_QWORD *)this + 24));
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  v9 = *v5;
  *v5 = 0LL;
  std::_Deallocate<16,0>(v9, 0x10uLL);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>::_Tidy((__int64)this + 136);
  std::_List_node<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<EffectDescriptionKey const,CEffectCompilationTask *>,void *>>>(
    v10,
    *((_QWORD ***)this + 15));
  std::_Deallocate<16,0>(*((void **)this + 15), 0x28uLL);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 80);
  DeleteCriticalSection(v1);
}
