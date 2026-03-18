/*
 * XREFs of ?CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@PEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180244BF0
 * Callers:
 *     ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180244534 (-CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatI.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??0?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultHash@U_GUID@@@1234@AEBU?$DefaultEqualityPredicate@U_GUID@@@1234@Upermission@01234@@Z @ 0x18024292C (--0-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundation@W.c)
 *     ??0?$ValueReference@I@@QEAA@XZ @ 0x180242C78 (--0-$ValueReference@I@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@V?$ValueReference@I@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180243370 (--1-$MakeAllocator@V-$ValueReference@I@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180244220 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 *     ?GetView@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIInspectable@@@345@@Z @ 0x180246600 (-GetView@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Founda.c)
 *     ?Initialize@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEAAJXZ @ 0x180246D10 (-Initialize@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Fou.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18024708C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Insert@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAUIInspectable@@PEAE@Z @ 0x1802470C0 (-Insert@-$HashMap@U_GUID@@PEAUIInspectable@@U-$DefaultHash@U_GUID@@@Internal@Collections@Foundat.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180248240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IM_ea_180248240.c)
 */

__int64 __fastcall CDDisplayManager::CreatePrimaryDescription(
        CDDisplayManager *this,
        const struct RenderTargetInfo *a2,
        const struct PixelFormatInfo *a3,
        const struct D2D_SIZE_U *a4,
        struct Windows::Devices::Display::Core::IDisplayPrimaryDescription **a5)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  LPVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // esi
  LPVOID v13; // rax
  _DWORD *v14; // rdi
  int View; // eax
  const struct _GUID *v16; // rcx
  const struct _GUID *v17; // rcx
  const struct _GUID *v18; // r9
  int CanCastTo; // eax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 (__fastcall *v22)(__int64, __int64, __int64, __int64, int, int, _BYTE, __int64, __int64 *); // rbx
  int v23; // r10d
  int v24; // r11d
  __int64 height; // r9
  __int64 width; // r8
  int v27; // eax
  __int64 v28; // rcx
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v29; // rcx
  int v30; // r9d
  unsigned int v32; // [rsp+20h] [rbp-60h]
  __int64 v33; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-28h] BYREF
  __int64 v35[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v36; // [rsp+70h] [rbp-10h] BYREF
  __int64 v37; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+38h] BYREF

  v37 = (__int64)this;
  v35[0] = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  if ( !*((_BYTE *)a2 + 20) )
    goto LABEL_28;
  v38 = 0LL;
  v33 = 0LL;
  v8 = 0LL;
  v9 = DefaultHeap::Alloc(0xC0uLL);
  if ( v9
    && (v11 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>((__int64)v9),
        (v7 = v11) != 0) )
  {
    v12 = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Initialize(v11);
    if ( v12 >= 0 )
    {
      v8 = (_QWORD *)v7;
      v7 = 0LL;
    }
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v12 < 0 )
  {
    v32 = 370;
    goto LABEL_35;
  }
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  v13 = DefaultHeap::Alloc(0x48uLL);
  v37 = (__int64)v13;
  if ( v13 )
  {
    v14 = (_DWORD *)ValueReference<unsigned int>::ValueReference<unsigned int>((__int64)v13);
    v14[16] = 0x1000000;
    v12 = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, __int64 *))v14)(
            v14,
            &GUID_513ef3af_e784_5325_a91e_97c2b8111cf3,
            &v38);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v12 < 0 )
      goto LABEL_14;
    v36 = DisplayPrimaryDescription_Usage;
    View = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::Insert(
             v8,
             &v36,
             v38,
             &v37);
    v12 = View;
    if ( View < 0 )
    {
      v32 = 374;
    }
    else
    {
      View = Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::GetView(
               v8,
               &v33);
      v12 = View;
      if ( View >= 0 )
      {
        if ( (unsigned int)InlineIsEqualGUID(
                             &GUID_f3b20528_e3b3_5331_b2d0_0c2623aee785,
                             &GUID_00000000_0000_0000_c000_000000000046)
          || (unsigned int)InlineIsEqualGUID(v16, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
        {
          v20 = *v8;
          v7 = (__int64)v8;
          v34 = v8;
          (*(void (__fastcall **)(_QWORD *))(v20 + 8))(v8);
          v12 = 0;
          goto LABEL_25;
        }
        if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_5ee3189c_7dbf_5998_ad07_5414fb82567c) )
        {
          v7 = (__int64)v8;
          v34 = v8;
          v12 = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::CanCastTo(
                        (__int64)(v8 + 1),
                        v18);
          v7 = (__int64)v34;
          v12 = CanCastTo;
          if ( CanCastTo < 0 )
          {
LABEL_25:
            if ( v12 < 0 )
            {
              v32 = 376;
              goto LABEL_35;
            }
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
            if ( v8 )
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::Release(v8);
LABEL_28:
            v21 = *((_QWORD *)&g_DDisplayManager + 1);
            v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, int, _BYTE, __int64, __int64 *))(**((_QWORD **)&g_DDisplayManager + 1) + 48LL);
            wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v35);
            v23 = *((_DWORD *)a3 + 2);
            v24 = *(_DWORD *)a3;
            height = a4->height;
            width = a4->width;
            v37 = 1LL;
            v27 = v22(v21, v7, width, height, v24, v23, 0, 1LL, v35);
            v12 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x184u, 0LL);
            }
            else
            {
              v29 = (struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *)v35[0];
              v35[0] = 0LL;
              *a5 = v29;
            }
            goto LABEL_39;
          }
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        goto LABEL_25;
      }
      v32 = 375;
    }
    v30 = View;
    goto LABEL_36;
  }
  Microsoft::WRL::Details::MakeAllocator<ValueReference<unsigned int>>::~MakeAllocator<ValueReference<unsigned int>>((void **)&v37);
  v12 = -2147024882;
LABEL_14:
  v32 = 373;
LABEL_35:
  v30 = v12;
LABEL_36:
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v30, v32, 0LL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v33);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v38);
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<_GUID,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,IInspectable *> *>,Microsoft::WRL::FtmBase>::Release(v8);
LABEL_39:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v34);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v35);
  return (unsigned int)v12;
}
