/*
 * XREFs of ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800451BC
 * Callers:
 *     ?Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ @ 0x180045170 (-Initialize@CAccentAcrylicBlurBehind@@EEAAJXZ.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004B728 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006658 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDesktopDevicePartner@@@Z @ 0x180011F74 (--4-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionDes.c)
 *     ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180011FCC (-GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180012318 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800242F0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z @ 0x18002B934 (-CreateFromSharedHandle@CVisual@@SAJPEAXPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DC0C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x180045728 (--$As@UIDCompositionVisualPartnerWinRTInterop@@@-$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@.c)
 *     ??$As@UIVisual@Composition@UI@Windows@@@?$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004576C (--$As@UIVisual@Composition@UI@Windows@@@-$ComPtr@UISpriteVisual@Composition@UI@Windows@@@WRL@Mic.c)
 *     ??$As@UICompositor@Composition@UI@Windows@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICompositor@Composition@UI@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800457B0 (--$As@UICompositor@Composition@UI@Windows@@@-$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Mi.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentAcrylicBlurBehind::InitializeDComp(CAccentAcrylicBlurBehind *this)
{
  __int64 *v1; // rdi
  struct IDCompositionDesktopDevicePartner *DCompositionInteropDevice; // rax
  __int64 v4; // rbx
  _QWORD *v5; // r12
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rbx
  int inserted; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  HANDLE hObject[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF
  __int64 v26; // [rsp+98h] [rbp+58h] BYREF

  hObject[0] = 0LL;
  v1 = (__int64 *)((char *)this + 288);
  DCompositionInteropDevice = CDesktopManager::GetDCompositionInteropDevice(this);
  Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::operator=(v1, (__int64)DCompositionInteropDevice);
  v4 = *v1;
  if ( !*v1 )
  {
    v7 = -2147467259;
    goto LABEL_19;
  }
  if ( *((_QWORD *)this + 35) )
  {
LABEL_18:
    v7 = 0;
    goto LABEL_19;
  }
  v5 = (_QWORD *)((char *)this + 296);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 37);
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v4 + 216LL))(
         v4,
         &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89,
         (char *)this + 296);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 1830LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_19;
  }
  v8 = *v1;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    hObject,
    0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, HANDLE *))(*(_QWORD *)v8 + 224LL))(v8, *v5, hObject);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 1833LL;
    goto LABEL_25;
  }
  v26 = 0LL;
  v9 = Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<Windows::UI::Composition::ICompositor>(v1, &v26);
  v7 = v9;
  if ( v9 < 0 )
  {
    v18 = 1837LL;
  }
  else
  {
    v10 = v26;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 41);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 176LL))(v10, (char *)this + 328);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v25 = 0LL;
      v11 = Microsoft::WRL::ComPtr<Windows::UI::Composition::ISpriteVisual>::As<Windows::UI::Composition::IVisual>(
              (char *)this + 328,
              &v25);
      v7 = v11;
      if ( v11 < 0 )
      {
        v19 = 1843LL;
      }
      else
      {
        v12 = *v1;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 38);
        v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 48LL))(v12, (char *)this + 304);
        v7 = v11;
        if ( v11 < 0 )
        {
          v19 = 1846LL;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 24LL))(*v1);
          v7 = v11;
          if ( v11 >= 0 )
          {
            v24 = 0LL;
            v13 = Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
                    (char *)this + 304,
                    &v24);
            v7 = v13;
            if ( v13 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x73B,
                (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)v13);
            }
            else
            {
              v23 = 0LL;
              v14 = v24;
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
              inserted = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 352LL))(v14, &v23);
              v7 = inserted;
              if ( inserted < 0 )
              {
                v20 = 1853LL;
              }
              else
              {
                inserted = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 72LL))(v23, v25);
                v7 = inserted;
                if ( inserted < 0 )
                {
                  v20 = 1854LL;
                }
                else
                {
                  inserted = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 24LL))(
                               *v5,
                               *((_QWORD *)this + 38));
                  v7 = inserted;
                  if ( inserted < 0 )
                  {
                    v20 = 1857LL;
                  }
                  else
                  {
                    inserted = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v1 + 24LL))(*v1);
                    v7 = inserted;
                    if ( inserted < 0 )
                    {
                      v20 = 1859LL;
                    }
                    else
                    {
                      inserted = CVisual::CreateFromSharedHandle(hObject[0], (struct CVisual **)this + 35);
                      v7 = inserted;
                      if ( inserted < 0 )
                      {
                        v20 = 1865LL;
                      }
                      else
                      {
                        inserted = VisualCollection::InsertRelative(
                                     (CAccentAcrylicBlurBehind *)((char *)this + 32),
                                     *((struct CVisual **)this + 35),
                                     0LL,
                                     0,
                                     1);
                        v7 = inserted;
                        if ( inserted >= 0 )
                        {
                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
                          Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
                          goto LABEL_18;
                        }
                        v20 = 1868LL;
                      }
                    }
                  }
                }
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v20,
                (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
                (const char *)(unsigned int)inserted);
              Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v23);
            }
            Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v24);
            goto LABEL_42;
          }
          v19 = 1847LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)v11);
LABEL_42:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v25);
      goto LABEL_43;
    }
    v18 = 1840LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v18,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v9);
LABEL_43:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v26);
LABEL_19:
  if ( (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(hObject[0]);
  return v7;
}
