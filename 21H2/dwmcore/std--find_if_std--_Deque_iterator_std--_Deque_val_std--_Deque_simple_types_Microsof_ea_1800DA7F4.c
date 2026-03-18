/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x1800DA7F4
 * Callers:
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800DA8A0 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 **v4; // rdi
  __int64 v5; // r10
  unsigned __int64 v6; // rbx
  __int64 *v7; // rbp
  _QWORD *result; // rax

  v4 = *(__int64 ***)a2;
  v5 = 0LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v7 = *v4;
  else
    v7 = 0LL;
  while ( v6 != *(_QWORD *)(a3 + 16)
       && *(_QWORD *)(*(_QWORD *)(v7[1] + 8 * ((v7[2] - 1) & (v6 >> 1))) + 8 * (v6 & 1)) != *a4 )
    ++v6;
  *(_QWORD *)(a2 + 16) = v6;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    if ( *v4 )
      v5 = **v4;
    *a1 = v5;
  }
  result = a1;
  a1[2] = v6;
  return result;
}
