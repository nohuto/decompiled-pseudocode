/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18010D868
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x1801050E8 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800EF66C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher____Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay___Windows::Graphics::Holographic::IHolographicDisplay_____::_)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___ @ 0x18010C5E8 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_18010C5E8.c)
 *     ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x18010CA18 (-LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18010CFC0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18010E160 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CExclusiveModeListener::RuntimeClassInitialize(LPVOID *this)
{
  _QWORD *v2; // rsi
  HRESULT Instance; // ebx
  __int64 v4; // rdx
  __int64 *v5; // r14
  LPVOID v6; // rcx
  __int64 v7; // rbx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **v8; // rsi
  LPVOID v9; // rcx
  __int64 v10; // rbx
  LPVOID v11; // rax
  __int64 v12; // r12
  __int64 v13; // rbx
  LPVOID v14; // rax
  __int64 v15; // r15
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  const CHAR *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v31; // [rsp+48h] [rbp-19h] BYREF
  struct Windows::Graphics::Holographic::IHolographicDisplay *v32; // [rsp+50h] [rbp-11h] BYREF
  __int128 v33; // [rsp+58h] [rbp-9h]
  __int64 v34; // [rsp+68h] [rbp+7h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+88h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = this + 7;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               this + 7);
  if ( Instance < 0 )
  {
    v4 = 37LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)*v2 + 48LL))(*v2, this);
  if ( Instance < 0 )
  {
    v4 = 38LL;
    goto LABEL_3;
  }
  v36 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Graphics.Holographic.HolographicDisplay",
    0x30u,
    0x2Fu);
  v5 = (__int64 *)(this + 8);
  v6 = this[8];
  this[8] = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v6 + 16LL))(v6);
  Instance = RoGetActivationFactory(v36, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, this + 8);
  if ( Instance < 0 )
  {
    v4 = 40LL;
    goto LABEL_3;
  }
  v7 = *v5;
  v8 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **)(this + 9);
  v9 = this[9];
  this[9] = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
  Instance = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, (char *)this + 72);
  if ( Instance < 0 )
  {
    v4 = 41LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v33 = CExclusiveModeListener::OnHmdAdded;
  DWORD2(v33) = 0;
  hstringHeader.Reserved.Reserved1 = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v33;
  v10 = 0LL;
  v11 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = 0LL;
  if ( v11 )
  {
    v10 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher____Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay___Windows::Graphics::Holographic::IHolographicDisplay_____::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___(
            (__int64)v11,
            (__int64)&hstringHeader);
    v12 = v10;
  }
  v34 = v10;
  if ( v12 )
  {
    *(_QWORD *)&v33 = CExclusiveModeListener::OnHmdRemoved;
    DWORD2(v33) = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v33;
    v13 = 0LL;
    v14 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = 0LL;
    if ( v14 )
    {
      v13 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher____Windows::Foundation::Internal::AggregateType_Windows::Graphics::Holographic::HolographicDisplay___Windows::Graphics::Holographic::IHolographicDisplay_____::___Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher___Windows::Graphics::Holographic::HolographicDisplay____Microsoft::WRL::FtmBase___lambda_fd84fb861bda8361cc33008a6db9ede3___1_Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher___Windows::Graphics::Holographic::IHolographicDisplay___(
              (__int64)v14,
              (__int64)&hstringHeader);
      v15 = v13;
    }
    *(_QWORD *)&v33 = v13;
    if ( !v15 )
    {
      Instance = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_44;
    }
    v16 = *v5;
    v32 = 0LL;
    if ( (*(int (__fastcall **)(__int64, struct Windows::Graphics::Holographic::IHolographicDisplay **))(*(_QWORD *)v16 + 64LL))(
           v16,
           &v32) >= 0
      && v32
      && (v17 = CExclusiveModeListener::OnHmdAdded((CExclusiveModeListener *)this, *v8, v32), Instance = v17, v17 < 0) )
    {
      v18 = (unsigned int)v17;
      v19 = 53LL;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v8 + 56LL))(
              *v8,
              v12,
              (char *)this + 120);
      Instance = v20;
      if ( v20 >= 0 )
      {
        v21 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v8 + 72LL))(
                *v8,
                v15,
                (char *)this + 128);
        Instance = v21;
        if ( v21 >= 0 )
        {
          v22 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)*v8 + 120LL))(*v8);
          Instance = v22;
          if ( v22 >= 0 )
          {
            v31 = 0;
            v23 = RtlQueryWnfStateData(
                    &v31,
                    WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                    CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                    this,
                    0LL);
            Instance = v23 | 0x10000000;
            if ( v23 >= 0 )
            {
              v24 = RtlSubscribeWnfStateChangeNotification(
                      this + 44,
                      WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                      v31,
                      CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                      this,
                      0LL,
                      0,
                      0);
              Instance = v24 | 0x10000000;
              if ( v24 >= 0 )
              {
                v31 = 0;
                v25 = RtlQueryWnfStateData(
                        &v31,
                        WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
                        CExclusiveModeListener::HoloshellStateChangeCallback,
                        this,
                        0LL);
                Instance = v25 | 0x10000000;
                if ( v25 >= 0 )
                {
                  v26 = RtlSubscribeWnfStateChangeNotification(
                          this + 45,
                          WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
                          v31,
                          CExclusiveModeListener::HoloshellStateChangeCallback,
                          this,
                          0LL,
                          0,
                          0);
                  Instance = v26 | 0x10000000;
                  if ( v26 >= 0 )
                  {
                    CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v27, 1, v28, v29);
                    *((_BYTE *)this + 377) = 1;
                    Instance = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
                    goto LABEL_43;
                  }
                  v19 = 96LL;
                }
                else
                {
                  v19 = 87LL;
                }
              }
              else
              {
                v19 = 77LL;
              }
            }
            else
            {
              v19 = 68LL;
            }
            v18 = (unsigned int)Instance;
          }
          else
          {
            v18 = (unsigned int)v22;
            v19 = 58LL;
          }
        }
        else
        {
          v18 = (unsigned int)v21;
          v19 = 57LL;
        }
      }
      else
      {
        v18 = (unsigned int)v20;
        v19 = 56LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)v18);
LABEL_43:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
LABEL_44:
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_46;
  }
  Instance = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
LABEL_46:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)Instance;
}
