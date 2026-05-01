/*
 * XREFs of ??$remove@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@0@V10@V10@AEBQE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802EF958
 * Callers:
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1802F0720 (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 * Callees:
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EBB4C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@std@@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x1802EFDB8 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@PE$AAVXamlExplorerHostLaunchHand.c)
 */

__int64 __fastcall std::remove<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>,WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // r11
  unsigned __int64 v5; // r10
  __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v15; // [rsp+20h] [rbp-48h]

  v4 = 0LL;
  v5 = (unsigned __int64)a2[2];
  if ( *a2 )
    v4 = **a2;
  v9 = *(_QWORD *)(a3 + 16);
  v15 = v4;
  while ( v5 != v9
       && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * ((v5 >> 1) & (*(_QWORD *)(v4 + 16) - 1LL))) + 8 * (v5 & 1)) != *a4 )
    ++v5;
  v10 = v5;
  if ( v5 != v9 )
  {
    v11 = v5;
    while ( ++v11 != v9 )
    {
      v12 = *(_QWORD *)(v15 + 8);
      v13 = *(_QWORD *)(v15 + 16) - 1LL;
      if ( *(_QWORD *)(*(_QWORD *)(v12 + 8 * (v13 & (v11 >> 1))) + 8 * (v11 & 1)) != *a4 )
      {
        __abi_winrt_ptr_assign(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * ((v10 >> 1) & (*(_QWORD *)(v15 + 16) - 1LL)))
                    + 8 * (v10 & 1)),
          *(_QWORD *)(*(_QWORD *)(v12 + 8 * (v13 & (v11 >> 1))) + 8 * (v11 & 1)));
        ++v10;
      }
    }
  }
  a2[2] = (__int64 *)v10;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>>>(
    a1,
    a2);
  return a1;
}
