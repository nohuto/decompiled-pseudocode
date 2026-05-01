/*
 * XREFs of ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180055670
 * Callers:
 *     ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x180055560 (-GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z.c)
 *     ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1800555E0 (-GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAP.c)
 * Callees:
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180055710 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  struct IClassicWindow *v6; // rbx
  int v7; // ebp
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF
  struct IClassicWindow *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  *a3 = 0LL;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    CClassicWindowManager::_GetLastActiveClassicWindow(this, a2, &v11);
    v6 = v11;
    v7 = (*(__int64 (__fastcall **)(struct IClassicWindow *, _QWORD *, int *))(*(_QWORD *)v11 + 40LL))(v11, v9, &v10);
    if ( v7 < 0 )
      break;
    if ( v10 )
    {
      v11 = 0LL;
      *a3 = v6;
      break;
    }
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 9) + 72LL))((char *)this + 72, v9[0]);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v7;
}
