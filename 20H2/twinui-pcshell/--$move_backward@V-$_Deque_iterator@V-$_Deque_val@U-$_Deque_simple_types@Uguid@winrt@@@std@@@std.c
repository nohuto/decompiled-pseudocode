/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x1800D2614
 * Callers:
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x1800D4488 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // r11
  __int64 *v9; // rax
  _QWORD *v10; // rax
  _QWORD *result; // rax

  v4 = *(__int64 **)(a2 + 16);
  v5 = a3[2];
  if ( *a3 )
    v6 = **a3;
  else
    v6 = 0LL;
  v7 = a4[2];
  if ( *a4 )
    v8 = **a4;
  else
    v8 = 0LL;
  while ( v4 != v5 )
  {
    v5 = (__int64 *)((char *)v5 - 1);
    v7 = (__int64 *)((char *)v7 - 1);
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v7 & (*(_QWORD *)(v8 + 16) - 1LL))) = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((unsigned __int64)v5 & (*(_QWORD *)(v6 + 16) - 1LL)));
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  v9 = *a4;
  a4[2] = v7;
  if ( v9 )
  {
    v10 = (_QWORD *)*v9;
    if ( v10 )
      *a1 = *v10;
  }
  result = a1;
  a1[2] = v7;
  return result;
}
