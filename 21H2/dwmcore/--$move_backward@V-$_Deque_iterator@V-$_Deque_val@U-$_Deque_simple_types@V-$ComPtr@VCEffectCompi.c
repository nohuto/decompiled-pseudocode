/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x1800195D0
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800D9E00 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180198E48 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 *v11; // r15
  __int64 *v12; // rax
  __int64 *v13; // rax
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = *(__int64 **)(a2 + 16);
  v7 = (unsigned __int64)a3[2];
  if ( *a3 )
    v8 = **a3;
  else
    v8 = 0LL;
  v9 = (unsigned __int64)a4[2];
  if ( *a4 )
    v10 = **a4;
  else
    v10 = 0LL;
  v11 = a3[2];
  while ( v5 != v11 )
  {
    --v7;
    --v9;
    v11 = (__int64 *)v7;
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((*(_QWORD *)(v10 + 16) - 1LL) & (v9 >> 1))) + 8 * (v9 & 1),
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((*(_QWORD *)(v8 + 16) - 1LL) & (v7 >> 1))) + 8 * (v7 & 1));
  }
  v12 = *a4;
  a4[2] = (__int64 *)v9;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v12 )
  {
    v13 = (__int64 *)*v12;
    if ( v13 )
      v4 = *v13;
    *a1 = v4;
  }
  result = a1;
  a1[2] = v9;
  return result;
}
