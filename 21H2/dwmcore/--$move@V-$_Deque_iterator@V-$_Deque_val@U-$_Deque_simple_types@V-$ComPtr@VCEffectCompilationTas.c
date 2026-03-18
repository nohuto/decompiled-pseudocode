/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x1800D9C64
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800D9E00 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180198E48 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_QWORD *__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 a3,
        __int64 **a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r14
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // r13
  __int64 *v12; // rax
  __int64 *v13; // rax
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = (unsigned __int64)a2[2];
  if ( *a2 )
    v8 = **a2;
  else
    v8 = 0LL;
  v9 = *(_QWORD *)(a3 + 16);
  v10 = (unsigned __int64)a4[2];
  if ( *a4 )
    v11 = **a4;
  else
    v11 = 0LL;
  while ( v5 != v9 )
  {
    Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
      *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8 * ((*(_QWORD *)(v11 + 16) - 1LL) & (v10 >> 1))) + 8 * (v10 & 1),
      *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((*(_QWORD *)(v8 + 16) - 1LL) & (v5 >> 1))) + 8 * (v5 & 1));
    ++v10;
    ++v5;
  }
  v12 = *a4;
  a4[2] = (__int64 *)v10;
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
  a1[2] = v10;
  return result;
}
