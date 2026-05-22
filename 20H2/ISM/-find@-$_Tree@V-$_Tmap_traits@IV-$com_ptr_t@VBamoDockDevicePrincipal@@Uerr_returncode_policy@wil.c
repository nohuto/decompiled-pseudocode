/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@IV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$com_ptr_t@VBamoDockDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@AEBI@Z @ 0x18006C334
 * Callers:
 *     ?GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA?AV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18006B2B8 (-GetGestureHandlerForWorkspace@MPCGestureHandlerManager@@AEAA-AV-$com_ptr_t@VMPCGestureHandler@@.c)
 *     ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18006BA70 (-ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ?OnDockDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x180126428 (-OnDockDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?OnDockDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x180126598 (-OnDockDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 *     ?OnDockableDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x1801266C8 (-OnDockableDeviceArrival@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     ?OnDockableDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z @ 0x18012684C (-OnDockableDeviceRemoval@KeyboardDockServer@@QEAAJPEAUDockableDeviceInfo@@@Z.c)
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18012691C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A031C (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801A1A30 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned int,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,wil::com_ptr_t<BamoDockDevicePrincipal,wil::err_returncode_policy>>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        unsigned int *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax
  unsigned int v6; // r8d

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_9;
  v6 = *a3;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= v6 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || v6 < *((_DWORD *)v4 + 8) )
LABEL_9:
    v4 = v3;
  *a2 = v4;
  return a2;
}
