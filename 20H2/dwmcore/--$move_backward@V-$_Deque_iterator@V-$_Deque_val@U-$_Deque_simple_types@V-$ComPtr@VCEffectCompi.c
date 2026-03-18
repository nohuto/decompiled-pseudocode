/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x1801678F4
 * Callers:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001A428 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 * Callees:
 *     ??$_Move_backward_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@0@V10@00@Z @ 0x180167838 (--$_Move_backward_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-.c)
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
        _QWORD *a1,
        __int64 **a2,
        __int64 **a3,
        __int64 a4)
{
  __int64 *v5; // r10
  __int64 v7; // rdx
  __int64 *v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _OWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD **v13; // rax
  _QWORD *v14; // rax
  __int64 v16[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v19; // [rsp+50h] [rbp-18h] BYREF

  v5 = a2[2];
  if ( *a2 )
    v7 = **a2;
  else
    v7 = 0LL;
  v8 = a3[2];
  if ( *a3 )
    v9 = **a3;
  else
    v9 = 0LL;
  v10 = *(_QWORD **)a4;
  if ( *(_QWORD *)a4 )
    v10 = (_QWORD *)*v10;
  v16[1] = *(_QWORD *)(a4 + 16);
  v17[0] = v9;
  v17[1] = v8;
  v18[0] = v7;
  v16[0] = (__int64)v10;
  v18[1] = v5;
  v11 = std::_Move_backward_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<Microsoft::WRL::ComPtr<CEffectCompilationTask>>>>>(
          &v19,
          (__int64)v18,
          v17,
          v16);
  *a1 = 0LL;
  a1[1] = 0LL;
  v12 = *((_QWORD *)v11 + 1);
  v13 = *(_QWORD ***)a4;
  *(_QWORD *)(a4 + 16) = v12;
  if ( v13 )
  {
    v14 = *v13;
    if ( v14 )
      *a1 = *v14;
  }
  a1[2] = v12;
  return a1;
}
