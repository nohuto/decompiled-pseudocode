/*
 * XREFs of ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1803151C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801A959C (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801AC0B4 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ?__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z @ 0x1802EBB4C (-__abi_winrt_ptr_assign@@YAPEAXPEAPEAXPE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802EC570 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x180300FBC (-CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@I.c)
 *     MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___ @ 0x180314010 (MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x180314138 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--_lambda_237a64fcb5f24c6cb49474a7b0122401_.c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x180314484 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--__lambda_237a64fcb5f24c6cb49474a7b0122401_.c)
 *     ??1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ @ 0x180314528 (--1ShowSnapAssist@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ @ 0x180314C00 (-DismissView@-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@UEAAJXZ.c)
 *     ?StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ @ 0x180315980 (-StartActivity@ShowSnapAssist@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ??0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCRect@Geometry@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@@Z @ 0x1803222D0 (--0XamlSnapAssistViewController@@QE$AAA@PEAUISnapAssistViewHost@@PEAUISnapAssistCallback@@AEBUCR.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall XamlSnapAssistViewHost::Show(__int64 a1, __m128i *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // r15d
  __int64 v6; // rdx
  __int64 v7; // r8
  void *v8; // rax
  void *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // r12
  __m128i v12; // xmm6
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64); // rbx
  __int64 v15; // rcx
  __int64 (__fastcall *v16)(__int64); // rax
  int v17; // eax
  unsigned int v18; // ebx
  struct _RTL_CRITICAL_SECTION *v19; // rcx
  int v21; // ecx
  int v22; // edx
  __int64 v23; // rbx
  __int64 v24; // r13
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rbx
  int XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401; // eax
  unsigned int v30; // edi
  __int64 v31; // rsi
  __int64 (__fastcall *v32)(__int64, __int64, __m128i *, GUID *, __int64); // rdi
  int v33; // eax
  WINBOOL v34; // edx
  int v35[2]; // [rsp+30h] [rbp-248h] BYREF
  __int128 v36; // [rsp+40h] [rbp-238h] BYREF
  __m128i v37; // [rsp+50h] [rbp-228h] BYREF
  int v38[2]; // [rsp+60h] [rbp-218h] BYREF
  void *v39; // [rsp+68h] [rbp-210h] BYREF
  __int64 v40; // [rsp+70h] [rbp-208h] BYREF
  __int32 v41; // [rsp+78h] [rbp-200h]
  __int32 v42; // [rsp+7Ch] [rbp-1FCh]
  LPCRITICAL_SECTION v43; // [rsp+80h] [rbp-1F8h]
  int v44; // [rsp+88h] [rbp-1F0h]
  __int32 v45; // [rsp+90h] [rbp-1E8h]
  __int32 v46; // [rsp+94h] [rbp-1E4h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+98h] [rbp-1E0h]
  __int64 v48; // [rsp+A0h] [rbp-1D8h]
  char v49; // [rsp+A8h] [rbp-1D0h]
  __m128i v50; // [rsp+B0h] [rbp-1C8h] BYREF
  _QWORD v51[6]; // [rsp+C0h] [rbp-1B8h] BYREF
  _QWORD v52[40]; // [rsp+F0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  *(_QWORD *)&v36 = a1;
  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  lpCriticalSection = v4;
  v43 = v4;
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v44 = v5;
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v52,
    (__int64)"ShowSnapAssist");
  v52[0] = &MultitaskingViewTelemetry::ShowSnapAssist::`vftable';
  MultitaskingViewTelemetry::ShowSnapAssist::StartActivity((MultitaskingViewTelemetry::ShowSnapAssist *)v52);
  v48 = a1;
  v49 = 1;
  try
  {
    v39 = Platform::Details::Heap::Allocate(0x78uLL, 0xC0uLL);
    v6 = *(_QWORD *)(a1 + 176);
    v7 = *(_QWORD *)(a1 + 80);
    v40 = a2->m128i_i64[0];
    v41 = a2->m128i_i32[2];
    v42 = a2->m128i_i32[3];
    v8 = (void *)XamlSnapAssistViewController::XamlSnapAssistViewController(
                   v39,
                   a1,
                   *(_QWORD *)(a1 + 184),
                   &v40,
                   v7,
                   v6);
    v9 = v8;
    v39 = v8;
    if ( v8 )
      v10 = (__int64)v8 + 16;
    else
      v10 = 0LL;
    v11 = (__int64 *)(a1 + 144);
    __abi_winrt_ptr_assign((__int64 *)(a1 + 144), v10);
    if ( v9 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    v12 = *a2;
    v37 = *a2;
    v45 = a2->m128i_i32[0];
    v46 = a2->m128i_i32[1];
    *(_QWORD *)v35 = 0LL;
    v13 = *(_QWORD *)(a1 + 168);
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
    v15 = v13;
    v16 = v14;
  }
  catch ( ... )
  {
    v37.m128i_i32[0] = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x6C,
                         (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                         (const char *)&GUID_880b26f8_9197_43d0_8045_8702d0d72000);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(v36);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v52);
    if ( v44 >= 0 )
      LeaveCriticalSection(v43);
    return v37.m128i_u32[0];
  }
  v17 = v16(v15);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v52);
    if ( v5 < 0 )
      return v18;
    v19 = v4;
LABEL_11:
    LeaveCriticalSection(v19);
    return v18;
  }
  v21 = _mm_cvtsi128_si32(v12);
  *(float *)&v36 = (float)v21;
  v22 = _mm_cvtsi128_si32(_mm_srli_si128(v12, 4));
  *((float *)&v36 + 1) = (float)v22;
  *((float *)&v36 + 2) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)) - v21);
  *((float *)&v36 + 3) = (float)(_mm_cvtsi128_si32(_mm_srli_si128(v12, 12)) - v22);
  v23 = Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
          *(__int64 **)(a1 + 152),
          &v36);
  *(_QWORD *)&v36 = v23;
  v24 = __abi_winrt_ptr_ctor(v23);
  v40 = v24;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v25 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 136));
  *(_QWORD *)&v36 = v25;
  v26 = __abi_winrt_ptr_ctor(*v11);
  v39 = (void *)v26;
  v27 = __abi_winrt_cast_to(
          0,
          *(__int64 (__fastcall ****)(_QWORD, __int64, __int64 *))(a1 + 144),
          (__int64)&_uuidof__AUIXamlSwitcherWindowInteractionEvents__);
  *(_QWORD *)v38 = v27;
  v28 = __abi_winrt_ptr_ctor(v27);
  *(_QWORD *)v38 = v28;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  lambda_237a64fcb5f24c6cb49474a7b0122401_::_lambda_237a64fcb5f24c6cb49474a7b0122401_(
    (__int64)v51,
    &v37,
    (__int64 *)&v36,
    (__int64 *)&v39,
    (__int64 *)v38,
    &v40);
  v37.m128i_i64[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37.m128i_i64);
  XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401 = MakeXamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401_(
                                                                                     v37.m128i_i64,
                                                                                     (__int64)v51);
  v30 = XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401;
  if ( XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401 >= 0 )
  {
    v31 = *(_QWORD *)(a1 + 160);
    v32 = *(__int64 (__fastcall **)(__int64, __int64, __m128i *, GUID *, __int64))(*(_QWORD *)v31 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 192));
    v50 = v12;
    v33 = v32(v31, v37.m128i_i64[0], &v50, &GUID_a9728204_899b_46a5_9344_43e74614d24b, a1 + 192);
    v18 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x96,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
        (const char *)(unsigned int)v33);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37.m128i_i64);
      lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v51);
      if ( *(_QWORD *)v38 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v38 + 16LL))(*(_QWORD *)v38);
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
      CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
      MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v52);
      if ( v44 < 0 )
        return v18;
      v19 = lpCriticalSection;
      goto LABEL_11;
    }
    *(_BYTE *)(a1 + 112) = 1;
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
      *(_QWORD *)(a1 + 88),
      *(unsigned int *)(a1 + 72));
    v49 = 0;
    wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v52,
      v34);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37.m128i_i64);
    lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v51);
    if ( *(_QWORD *)v38 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v38 + 16LL))(*(_QWORD *)v38);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v52);
    if ( v44 >= 0 )
      LeaveCriticalSection(lpCriticalSection);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
      (const char *)(unsigned int)XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v37.m128i_i64);
    lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(v51);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    if ( v24 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v35);
    CMultitaskingViewHostBase<ISnapAssistViewHost>::DismissView(a1);
    MultitaskingViewTelemetry::ShowSnapAssist::~ShowSnapAssist((MultitaskingViewTelemetry::ShowSnapAssist *)v52);
    if ( v44 >= 0 )
      LeaveCriticalSection(v4);
    return v30;
  }
}
