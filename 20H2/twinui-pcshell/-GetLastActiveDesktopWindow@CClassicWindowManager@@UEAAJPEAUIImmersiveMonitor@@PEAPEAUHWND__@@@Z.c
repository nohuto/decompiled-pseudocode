/*
 * XREFs of ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x180162FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180055710 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveDesktopWindow(
        CClassicWindowManager *this,
        struct IUnknown *a2,
        HWND *a3)
{
  struct IClassicWindow *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  CClassicWindowManager::_GetLastActiveClassicWindow((CClassicWindowManager *)((char *)this - 88), a2, &v7);
  *a3 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
