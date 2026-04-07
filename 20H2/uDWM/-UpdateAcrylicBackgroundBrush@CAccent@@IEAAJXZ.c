/*
 * XREFs of ?UpdateAcrylicBackgroundBrush@CAccent@@IEAAJXZ @ 0x18000F6A0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18000CCF0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000E740 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002B218 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ @ 0x18000F820 (-ValidateDevice@AcrylicHostBackdrop@@QEAAJXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800248DC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003968C (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DC0C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 *     ?CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@UI@Windows@@@Z @ 0x1800931A8 (-CreateSolidColorBrush@CAccent@@KAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBru.c)
 */

int __fastcall CAccent::UpdateAcrylicBackgroundBrush(struct Windows::UI::Composition::ICompositionBrush **this)
{
  AcrylicHostBackdrop *v2; // rcx
  WindowsInternal::UI *v3; // rdi
  int result; // eax
  __int64 v5; // rbx
  WindowsInternal::UI *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int SolidColorBrush; // eax
  struct Windows::UI::Composition::ICompositionBrush **v9; // r8
  int v10; // edi
  int HostBackdropBrush; // eax
  struct Windows::UI::Composition::ICompositionBrush *v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  WindowsInternal::UI *v17; // [rsp+38h] [rbp+10h] BYREF

  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[46];
  if ( v2 )
  {
    v3 = *(WindowsInternal::UI **)(*((_QWORD *)v2 + 2) + 80LL);
    result = AcrylicHostBackdrop::ValidateDevice(v2);
    if ( result < 0 )
      return result;
    v5 = *((_QWORD *)this[46] + 2);
    if ( *(_QWORD *)(v5 + 24) )
    {
      v6 = *(WindowsInternal::UI **)(v5 + 80);
      v17 = v6;
      if ( v6 )
        (*(void (__fastcall **)(WindowsInternal::UI *))(*(_QWORD *)v6 + 8LL))(v6);
      if ( v6 != v3 )
      {
        v12 = this[44];
        if ( v12 )
        {
          (*(void (__fastcall **)(struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v12 + 16LL))(v12);
          this[44] = 0LL;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 45);
      }
      if ( !v6 )
        goto LABEL_16;
      v16 = 0LL;
      v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this[46] + 2) + 24LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
      SolidColorBrush = (**v7)(v7, &GUID_bbed8da5_977f_42cb_9b28_f0ceebced3a7, &v16);
      v10 = SolidColorBrush;
      if ( SolidColorBrush < 0 )
      {
        v13 = 1757LL;
      }
      else if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 601LL) )
      {
        if ( this[44]
          || (HostBackdropBrush = WindowsInternal::UI::CreateHostBackdropBrush(
                                    v6,
                                    (struct IDCompositionDesktopDevicePartner *)(this + 44),
                                    v9),
              v10 = HostBackdropBrush,
              HostBackdropBrush >= 0) )
        {
          v10 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x200,
            (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)HostBackdropBrush);
        }
        if ( v10 < 0 )
        {
          v14 = (unsigned int)v10;
          v13 = 1761LL;
LABEL_33:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)v14);
          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
          return v10;
        }
        SolidColorBrush = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v16 + 48LL))(
                            v16,
                            this[44]);
        v10 = SolidColorBrush;
        if ( SolidColorBrush >= 0 )
          goto LABEL_14;
        v13 = 1762LL;
      }
      else
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(this + 45);
        SolidColorBrush = CAccent::CreateSolidColorBrush(v6, this + 45);
        v10 = SolidColorBrush;
        if ( SolidColorBrush >= 0 )
        {
          SolidColorBrush = (*(__int64 (__fastcall **)(__int64, struct Windows::UI::Composition::ICompositionBrush *))(*(_QWORD *)v16 + 48LL))(
                              v16,
                              this[45]);
          v10 = SolidColorBrush;
          if ( SolidColorBrush >= 0 )
          {
LABEL_14:
            SolidColorBrush = (*(__int64 (__fastcall **)(WindowsInternal::UI *))(*(_QWORD *)v6 + 24LL))(v6);
            v10 = SolidColorBrush;
            if ( SolidColorBrush >= 0 )
            {
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v16);
LABEL_16:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
              return 0;
            }
            v13 = 1769LL;
            goto LABEL_32;
          }
          v13 = 1767LL;
        }
        else
        {
          v13 = 1766LL;
        }
      }
LABEL_32:
      v14 = (unsigned int)SolidColorBrush;
      goto LABEL_33;
    }
  }
  return 0;
}
