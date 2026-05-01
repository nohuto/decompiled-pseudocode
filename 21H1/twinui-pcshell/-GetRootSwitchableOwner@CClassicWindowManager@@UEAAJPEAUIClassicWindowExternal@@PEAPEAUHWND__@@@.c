/*
 * XREFs of ?GetRootSwitchableOwner@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUHWND__@@@Z @ 0x18004AA40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRootOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindow@@@Z @ 0x18004C20C (-GetRootOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClass.c)
 *     ?s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUIClassicWindowExternal@@@Z @ 0x18004C518 (-s_ClassicWindowFromClassicWindowExternal@CClassicWindowManager@@CA-AV-$ComPtr@UIClassicWindow@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::GetRootSwitchableOwner(
        CClassicWindowManager *this,
        struct IClassicWindowExternal *a2,
        HWND *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CClassicWindowManager *v7; // [rsp+30h] [rbp+8h] BYREF
  CClassicWindowManager *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = this;
  *a3 = 0LL;
  CClassicWindowManager::s_ClassicWindowFromClassicWindowExternal(&v7, a2);
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  CClassicWindowManager::GetRootOwner(v4, &v8, v7);
  if ( v8 != v7 )
    *a3 = (HWND)(*(__int64 (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v8 + 24LL))(v8);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *a3 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v5;
}
