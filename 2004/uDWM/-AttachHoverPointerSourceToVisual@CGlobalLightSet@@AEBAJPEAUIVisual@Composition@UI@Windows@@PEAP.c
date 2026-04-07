/*
 * XREFs of ?AttachHoverPointerSourceToVisual@CGlobalLightSet@@AEBAJPEAUIVisual@Composition@UI@Windows@@PEAPEAUIHoverPointerSourcePartner@345@@Z @ 0x18004821C
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180048348 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003EF44 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalLightSet::AttachHoverPointerSourceToVisual(
        CGlobalLightSet *this,
        struct Windows::UI::Composition::IVisual *a2,
        struct Windows::UI::Composition::IHoverPointerSourcePartner **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  struct Windows::UI::Composition::IHoverPointerSourcePartner *v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CGlobalLightSet *v16; // [rsp+50h] [rbp+20h] BYREF
  __int64 v17; // [rsp+58h] [rbp+28h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+38h] BYREF

  v16 = this;
  v14[0] = 0LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v14);
  v5 = (**(__int64 (__fastcall ***)(struct Windows::UI::Composition::IVisual *, GUID *, __int64 *))a2)(
         a2,
         &GUID_bcb4ad45_7609_4550_934f_16002a68fded,
         v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 117LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
  v7 = v14[0];
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v18);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v7 + 48LL))(
         v7,
         &v18);
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 118LL;
    goto LABEL_10;
  }
  v17 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
  v8 = (**v18)(v18, &GUID_36af3eb2_0371_49d7_9bb8_9c9414a9229c, &v17);
  v6 = v8;
  if ( v8 < 0 )
  {
    v13 = 123LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_6;
  }
  v9 = v17;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::IVisual *, CGlobalLightSet **))(*(_QWORD *)v9 + 24LL))(
         v9,
         a2,
         &v16);
  v6 = v8;
  if ( v8 < 0 )
  {
    v13 = 124LL;
    goto LABEL_13;
  }
  v10 = v16;
  v16 = 0LL;
  v6 = 0;
  *a3 = v10;
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v17);
LABEL_7:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v14);
  return v6;
}
