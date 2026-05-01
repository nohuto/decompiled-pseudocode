/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1803CFB60
 * Callers:
 *     ?EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@PEAPEAUIViewGroup@@PEAPEAU2@@Z @ 0x1803CADA4 (-EnsureViewIsInViewGroupForTabGroup@CDesktopPositioner@@AEAAJPEAUIApplicationView@@AEBUShellTabG.c)
 *     ?TabSwitchRequested@CDesktopPositioner@@UEAAJAEBU_GUID@@PEAUIApplicationView@@1@Z @ 0x1803CD820 (-TabSwitchRequested@CDesktopPositioner@@UEAAJAEBU_GUID@@PEAUIApplicationView@@1@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800CA48B (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::find(
        __int64 *a1,
        _QWORD *a2,
        const void *a3)
{
  __int64 *v3; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( memcmp_0(v7 + 4, a3, 0x10uLL) >= 0 )
    {
      v3 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v3 == v6 || memcmp_0(a3, v3 + 4, 0x10uLL) < 0 )
    v3 = v6;
  result = a2;
  *a2 = v3;
  return result;
}
