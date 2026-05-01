/*
 * XREFs of ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@@Z @ 0x1800D4634
 * Callers:
 *     ?ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800D2CB8 (-ActivateTabUnderLock@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 *     ?RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z @ 0x1800D3544 (-RemoveTab@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXUguid@6@@Z.c)
 * Callees:
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x1800D4488 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 */

_QWORD *__fastcall std::deque<winrt::guid>::erase(unsigned __int64 *a1, _QWORD *a2, __int64 a3)
{
  _QWORD **v3; // r9
  _QWORD **v4; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h]

  v3 = *(_QWORD ***)a3;
  v4 = 0LL;
  if ( *(_QWORD *)a3 && *v3 )
    v4 = (_QWORD **)**v3;
  v7 = *(_QWORD *)(a3 + 16);
  v10 = 0LL;
  if ( v4 )
  {
    v8 = *v4;
    if ( v8 )
      *(_QWORD *)&v10 = *v8;
  }
  v11 = v7 + 1;
  v12 = 0LL;
  if ( v3 && *v3 )
    *(_QWORD *)&v12 = **v3;
  v13 = v7;
  std::deque<winrt::guid>::erase(a1, a2, (__int64)&v12, (__int64)&v10);
  return a2;
}
