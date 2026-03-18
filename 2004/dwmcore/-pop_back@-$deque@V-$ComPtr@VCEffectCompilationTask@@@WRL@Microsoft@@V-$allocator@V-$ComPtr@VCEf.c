/*
 * XREFs of ?pop_back@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18001A7B0
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001A638 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 *     ??1CEffectCompilationService@@UEAA@XZ @ 0x1801697B0 (--1CEffectCompilationService@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::pop_back(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 32);
  v3 = ((_DWORD)v2 + *(_DWORD *)(a1 + 24) - 1) & 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8)
                 + 8 * (((unsigned __int64)(v2 + *(_QWORD *)(a1 + 24) - 1LL) >> 1) & (*(_QWORD *)(a1 + 16) - 1LL)));
  v5 = *(_QWORD *)(v4 + 8 * v3);
  if ( v5 )
  {
    *(_QWORD *)(v4 + 8 * v3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v2 = *(_QWORD *)(a1 + 32);
  }
  result = v2 - 1;
  *(_QWORD *)(a1 + 32) = v2 - 1;
  if ( v2 == 1 )
    *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
