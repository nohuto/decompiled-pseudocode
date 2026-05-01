/*
 * XREFs of ?_GetAppMainWindow@CAppViewManager@@AEAAPEAUHWND__@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180170528
 * Callers:
 *     ?GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z @ 0x18016A3E0 (-GetAppMainWindow@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800784BC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::_GetAppMainWindow(
        CAppViewManager *this,
        int (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))
{
  __int64 v4; // rsi
  int (__fastcall *v5)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, __int64, __int64 *); // rbx
  __int64 v9; // [rsp+58h] [rbp+38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+40h] BYREF
  __int64 v11; // [rsp+68h] [rbp+48h] BYREF

  v4 = 0LL;
  v10 = 0LL;
  v5 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  if ( v5((struct IImmersiveApplicationInternal *)a2, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v10) >= 0 )
  {
    v11 = -1LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 24LL))(v10, &v11) >= 0 )
    {
      v9 = 0LL;
      v6 = *((_QWORD *)this + 15);
      v7 = *(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 64LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v9);
      if ( v7(v6, v11, &v9) >= 0 )
        v4 = *(_QWORD *)(v9 + 24);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v4;
}
