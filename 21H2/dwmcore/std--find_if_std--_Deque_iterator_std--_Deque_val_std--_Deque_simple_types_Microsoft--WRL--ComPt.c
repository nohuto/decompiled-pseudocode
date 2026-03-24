/*
 * XREFs of std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___ @ 0x1800CA834
 * Callers:
 *     ?TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z @ 0x1800CA738 (-TryAddDeadTask@CEffectCompilationService@@AEAA_NPEAVCEffectCompilationTask@@@Z.c)
 *     ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800CAD14 (-TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_Microsoft::WRL::ComPtr_CEffectCompilationTask_________lambda_b07e6d4d1a74fa50f03de8a08b13a0b6___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD **v4; // rbx
  unsigned __int64 v5; // r11
  _QWORD *v6; // rsi
  _QWORD *result; // rax

  v4 = *(_QWORD ***)a2;
  v5 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)a2 )
    v6 = *v4;
  else
    v6 = 0LL;
  while ( v5 != *(_QWORD *)(a3 + 16)
       && *(_QWORD *)(*(_QWORD *)(v6[1] + 8 * ((v6[2] - 1LL) & (v5 >> 1))) + 8 * (v5 & 1)) != *a4 )
    ++v5;
  *a1 = 0LL;
  a1[1] = 0LL;
  *(_QWORD *)(a2 + 16) = v5;
  if ( v4 && *v4 )
    *a1 = **v4;
  result = a1;
  a1[2] = v5;
  return result;
}
