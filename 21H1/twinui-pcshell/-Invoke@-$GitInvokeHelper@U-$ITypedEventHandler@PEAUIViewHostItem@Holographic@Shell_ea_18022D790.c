/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUIViewHostItem@Holographic@Shell@34@PEAUIInspectable@@@Z @ 0x18022D790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>>,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  Microsoft::WRL::WeakRef *v5; // rbx
  int v6; // ebx
  struct IInspectable *v7; // rcx
  struct IInspectable *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = (Microsoft::WRL::WeakRef *)(a1 + 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  if ( *(_QWORD *)v5 )
  {
    v6 = Microsoft::WRL::WeakRef::InternalResolve(v5, &GUID_b22453b5_fb95_5a94_908e_9adeaccea813, &v9);
    v7 = v9;
  }
  else
  {
    v7 = 0LL;
    v9 = 0LL;
    v6 = -2147024809;
  }
  if ( v6 >= 0 )
    v6 = ((__int64 (__fastcall *)(struct IInspectable *, __int64, __int64))v7->lpVtbl->GetIids)(v7, a2, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  return (unsigned int)v6;
}
