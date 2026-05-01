/*
 * XREFs of ?_HandleApplicationCreation@CImmersiveWindowManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18007BECC
 * Callers:
 *     ?HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@@Z @ 0x180037160 (-HandleWindowAction@CImmersiveWindowManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::_HandleApplicationCreation(
        IUnknown *punkSite,
        IUnknown *punk,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a3,
        struct ITaskWindow *a4)
{
  int v8; // ebx
  ULONG (__stdcall *AddRef)(IUnknown *); // rbx
  IUnknown *v11; // [rsp+38h] [rbp+10h] BYREF

  IUnknown_SetSite(punk, punkSite);
  v8 = ((__int64 (__fastcall *)(IUnknown *, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, struct ITaskWindow *))punk->lpVtbl[1].AddRef)(
         punk,
         a3,
         a4);
  if ( v8 >= 0 )
  {
    AddRef = punkSite[26].lpVtbl->AddRef;
    v11 = punk;
    ((void (__fastcall *)(IUnknown *))punk->lpVtbl->AddRef)(punk);
    v8 = ((__int64 (__fastcall *)(IUnknown *, IUnknown **))AddRef)(&punkSite[26], &v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
    if ( v8 < 0 )
      IUnknown_SetSite(punk, 0LL);
  }
  return (unsigned int)v8;
}
