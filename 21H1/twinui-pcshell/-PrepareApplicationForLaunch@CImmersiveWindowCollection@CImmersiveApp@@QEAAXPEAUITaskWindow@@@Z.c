/*
 * XREFs of ?PrepareApplicationForLaunch@CImmersiveWindowCollection@CImmersiveApp@@QEAAXPEAUITaskWindow@@@Z @ 0x180020548
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18001F9F8 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ @ 0x18015B690 (-PrepareEnsuredViewForShow@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0001@@W4GHOST_STATUS@@@Z @ 0x180020C98 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::PrepareApplicationForLaunch(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct ITaskWindow *a2)
{
  if ( !a2 || !(*(__int64 (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 32LL))(a2) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(
      this,
      2LL,
      *(_BYTE *)(*((_QWORD *)this + 20) + 762LL) != 0 ? 0x20 : 0);
}
