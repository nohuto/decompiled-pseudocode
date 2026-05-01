/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1803EECF4
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@1@1@Z @ 0x1803E8CD0 (--$_Insert_at@AEAU-$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V-$ComPtr@U.c)
 *     _std::_Tree_std::_Tmap_traits_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_Microsoft::WRL::ComPtr_IViewGroup__std::less_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId__std::allocator_std::pair_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const__Microsoft::WRL::ComPtr_IViewGroup______0___::_Insert_nohint_std::pair_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const__Microsoft::WRL::ComPtr_IViewGroup____&_std::_Tree_node_std::pair_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const__Microsoft::WRL::ComPtr_IViewGroup____void_______::_1_::catch$19 @ 0x1803E9370 (_std--_Tree_std--_Tmap_traits_Windows--Internal--ComposableShell--Tabs--ShellTabGroupId_Microsof.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2 + 6);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x38);
}
