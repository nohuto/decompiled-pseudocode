/*
 * XREFs of ??H?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@QEBA?AV01@_J@Z @ 0x1800B5104
 * Callers:
 *     ??A?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_K_K@Z @ 0x1800B501C (--A-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_K_K@Z.c)
 *     ?ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z @ 0x1800B53E0 (-ActivateTab@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_N_KUguid@6@@Z.c)
 *     ?erase@?$deque@_KV?$allocator@_K@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@2@0@Z @ 0x1800BBB00 (-erase@-$deque@_KV-$allocator@_K@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_val@U-$_Deque_sim.c)
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800C03F4 (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 *     ?erase@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@2@0@Z @ 0x1800C0708 (-erase@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_D.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>::operator+(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD **v3; // r9
  _QWORD ***v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = 0LL;
  if ( *(_QWORD *)a1 )
  {
    v4 = **(_QWORD *****)a1;
    if ( v4 )
      v3 = *v4;
  }
  v5 = *(_QWORD *)(a1 + 16);
  *a2 = 0LL;
  v6 = a3 + v5;
  a2[1] = 0LL;
  if ( v3 && *v3 )
    *a2 = **v3;
  a2[2] = v6;
  return a2;
}
