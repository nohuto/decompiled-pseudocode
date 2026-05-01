/*
 * XREFs of ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x1801A47DC
 * Callers:
 *     ??0?$deque@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800C6C50 (--0-$deque@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@5@AEBUWindowTabDataModel@2UI@345@Uevent_token@5@2@Z @ 0x1800D0C94 (--0WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBU-$com_ptr@UTabProxyWindowFac.c)
 *     ??0FullScreenPositioner@@QEAA@XZ @ 0x1801A4930 (--0FullScreenPositioner@@QEAA@XZ.c)
 *     ??0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ @ 0x18021A79C (--0RecentAppsCache@Discover@PenWorkspace@@QEAA@XZ.c)
 *     ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1802EFF30 (--0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvid.c)
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@XZ @ 0x18035A770 (--0TabTipAdapter@KeyboardHosting@@QEAA@XZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>(_QWORD *a1)
{
  _QWORD *result; // rax

  result = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  result[1] = 0LL;
  *a1 = result;
  *result = a1;
  return result;
}
