/*
 * XREFs of ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180167D58
 * Callers:
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180167E14 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$ComPtr@VCEffectCompi.c)
 * Callees:
 *     ??4?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800190B8 (--4-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

_OWORD *__fastcall std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _OWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rbp
  unsigned __int64 i; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  _OWORD *result; // rax

  v4 = *(_QWORD *)(a2 + 8);
  for ( i = a3[1];
        v4 != i;
        Microsoft::WRL::ComPtr<CEffectCompilationTask>::operator=(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 8 * ((v11 >> 1) & (*(_QWORD *)(v10 + 16) - 1LL)))
                    + 8 * (v11 & 1)),
          (char *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 8 * ((i >> 1) & v12)) + 8 * (i & 1))) )
  {
    v9 = *a3;
    --i;
    v10 = *a4;
    v11 = a4[1] - 1;
    v12 = *(_QWORD *)(*a3 + 16LL) - 1LL;
    a4[1] = v11;
    a3[1] = i;
  }
  result = a1;
  *a1 = *(_OWORD *)a4;
  return result;
}
