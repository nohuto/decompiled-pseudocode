/*
 * XREFs of ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800C6458
 * Callers:
 *     ?Release@CEffectCompilationTask@@UEAAKXZ @ 0x1800C6360 (-Release@CEffectCompilationTask@@UEAAKXZ.c)
 * Callees:
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x1800C6554 (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_Microsoft--WRL--ComPt.c)
 *     ?_Push_back_internal@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@AEAAX$$QEAV?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@Z @ 0x1800C6E7C (-_Push_back_internal@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?pop_front@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180167DEC (-pop_front@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCE.c)
 */

char __fastcall CEffectCompilationService::TryAddDeadTask(
        CEffectCompilationService *this,
        struct CEffectCompilationTask *a2)
{
  struct CEffectCompilationTask *v2; // rdi
  char *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-40h]
  __int128 v13; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h]
  _BYTE v15[32]; // [rsp+50h] [rbp-20h] BYREF
  struct CEffectCompilationTask *v16; // [rsp+90h] [rbp+20h] BYREF
  struct CEffectCompilationTask *v17; // [rsp+98h] [rbp+28h] BYREF

  v17 = a2;
  v2 = a2;
  if ( *((_BYTE *)this + 72) || *((_BYTE *)this + 216) )
    return 0;
  v11 = 0LL;
  v4 = (char *)this + 176;
  v5 = *((_QWORD *)this + 25);
  v6 = *((_QWORD *)this + 22);
  v7 = v5 + *((_QWORD *)v4 + 4);
  v10 = v6;
  v14 = v5;
  v13 = 0LL;
  v12 = v7;
  v8 = 0LL;
  if ( v4 )
    v8 = v6;
  if ( *(_QWORD *)(std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___(
                     v15,
                     &v13,
                     &v10,
                     &v17,
                     v10,
                     v11,
                     v12,
                     v8,
                     *((_QWORD *)&v13 + 1),
                     v14)
                 + 16) != v7 )
    return 0;
  if ( *((_QWORD *)this + 26) > 0x40uLL )
  {
    *((_BYTE *)this + 216) = 1;
    std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_front(v4);
    v2 = v17;
    *((_BYTE *)this + 216) = 0;
  }
  v16 = v2;
  if ( v2 )
    (**(void (__fastcall ***)(struct CEffectCompilationTask *))v2)(v2);
  std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::_Push_back_internal(v4, &v16);
  if ( v16 )
    (*(void (__fastcall **)(struct CEffectCompilationTask *))(*(_QWORD *)v16 + 8LL))(v16);
  return 1;
}
