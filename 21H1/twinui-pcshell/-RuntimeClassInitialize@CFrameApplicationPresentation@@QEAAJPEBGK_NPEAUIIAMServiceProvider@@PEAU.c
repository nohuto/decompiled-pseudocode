/*
 * XREFs of ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18004243C
 * Callers:
 *     ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18001D4F0 (--$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvid.c)
 * Callees:
 *     ?StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z @ 0x18001E7F8 (-StartActivity@Initialization@CFramePresentationTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180034A50 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_f643ad3347bf4393b851723eb8b01c00___ @ 0x18007259C (CFrameApplicationPresentation--_AddTaskToQueue__lambda_f643ad3347bf4393b851723eb8b01c00___.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800743C8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800743C8.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     WPP_SF_Sdd @ 0x180135DE8 (WPP_SF_Sdd.c)
 *     WPP_SF_Sd @ 0x180160318 (WPP_SF_Sd.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CFrameApplicationPresentation::RuntimeClassInitialize(
        CFrameApplicationPresentation *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        char a4,
        struct IIAMServiceProvider *a5,
        struct IImmersiveApplicationInternal *a6)
{
  int v10; // edi
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  char *v13; // rcx
  signed __int64 v14; // r9
  __int16 v15; // ax
  char *v16; // rax
  struct IIAMServiceProvider *v17; // rax
  LPVOID v18; // rbx
  HWND v19; // rcx
  bool v20; // bl
  __int64 (__fastcall *v21)(struct IIAMServiceProvider *, SID *, GUID *, char *); // rdi
  __int64 v22; // rcx
  void *v24; // rbx
  HANDLE ProcessHeap; // rax
  void (*v26)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  __int64 pvAttribute; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  struct IIAMServiceProvider *v30; // [rsp+48h] [rbp-B8h] BYREF
  HWND hwnd; // [rsp+50h] [rbp-B0h] BYREF
  struct IIAMServiceProvider *v32; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-A0h] BYREF
  bool v34; // [rsp+70h] [rbp-90h]
  void **v35; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v36[3]; // [rsp+88h] [rbp-78h] BYREF
  int v37; // [rsp+A0h] [rbp-60h]
  int *v38; // [rsp+A8h] [rbp-58h]
  int *v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B8h] [rbp-48h] BYREF
  char v41; // [rsp+BCh] [rbp-44h]
  char v42[32]; // [rsp+C0h] [rbp-40h] BYREF
  int v43; // [rsp+E0h] [rbp-20h] BYREF
  const char *v44; // [rsp+E8h] [rbp-18h]
  LPVOID lpMem; // [rsp+F0h] [rbp-10h]
  char v46; // [rsp+F8h] [rbp-8h]
  __int64 v47; // [rsp+100h] [rbp+0h]
  char v48[144]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v49; // [rsp+198h] [rbp+98h] BYREF
  __int128 v50; // [rsp+1A0h] [rbp+A0h]
  __int64 v51; // [rsp+1B0h] [rbp+B0h] BYREF

  v36[0] = 0LL;
  v36[1] = &v35;
  v36[2] = 0LL;
  v37 = 0;
  v38 = &v43;
  v39 = &v40;
  v40 = 0;
  v41 = 0;
  v46 = 0;
  v43 = 0;
  v44 = "Initialization";
  lpMem = 0LL;
  v47 = 1LL;
  v49 = 0LL;
  memset_0(v48, 0, sizeof(v48));
  v50 = 0LL;
  v51 = 0LL;
  v35 = &CImmersiveAppTelemetry::Initialization::`vftable';
  CFramePresentationTelemetry::Initialization::StartActivity((CFramePresentationTelemetry::Initialization *)&v35, a2);
  *((_BYTE *)this + 53) = a4;
  v32 = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  v29 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IIAMServiceProvider *, GUID *, GUID *, __int64 *))(*(_QWORD *)a5 + 24LL))(
          a5,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &GUID_88b25c81_171b_48b0_91d6_c75846bcf035,
          &v29);
  if ( v10 >= 0 )
  {
    Context = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, const unsigned __int16 *, _QWORD, LPVOID *))(*(_QWORD *)v29 + 72LL))(
            v29,
            a2,
            a3,
            &Context);
    if ( v10 < 0 )
    {
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_5ec67ad958ea315cfc78e4414cad3743_Traceguids,
          (_DWORD)a2,
          a3);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(LPVOID, HWND *))(*(_QWORD *)Context + 24LL))(Context, &hwnd);
      if ( v10 >= 0 )
      {
        if ( !BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr)
          && DwmGetWindowAttribute(hwnd, 0xEu, &pvAttribute, 4u) >= 0 )
        {
          *((_BYTE *)this + 52) = (pvAttribute & 2) == 0;
        }
        v10 = 0;
        if ( a2 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( a2[v11] );
          v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
                  (__int64)this + 600,
                  v11);
          if ( v10 >= 0 )
          {
            v12 = v11 + 1;
            v13 = (char *)*((_QWORD *)this + 75);
            if ( v11 > 0x7FFFFFFE )
            {
              if ( v11 != -1LL )
                *(_WORD *)v13 = 0;
            }
            else
            {
              v14 = (char *)a2 - v13;
              do
              {
                if ( v12 == 1 )
                  break;
                v15 = *(_WORD *)&v13[v14];
                if ( !v15 )
                  break;
                *(_WORD *)v13 = v15;
                v13 += 2;
                --v12;
              }
              while ( v12 );
              v16 = v13 - 2;
              if ( v12 )
                v16 = v13;
              *(_WORD *)v16 = 0;
            }
            *((_QWORD *)this + 76) = v11;
          }
        }
        else
        {
          Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((char *)this + 600);
        }
        if ( v10 >= 0 )
        {
          v17 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
          v18 = Context;
          if ( v17 != Context )
          {
            if ( Context )
            {
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)Context + 8LL))(Context);
              v17 = (struct IIAMServiceProvider *)*((_QWORD *)this + 15);
            }
            v30 = v17;
            *((_QWORD *)this + 15) = v18;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
          }
          v19 = hwnd;
          *((_QWORD *)this + 16) = hwnd;
          *((_QWORD *)this + 78) = a6;
          GetWindowBand(v19, (char *)this + 216);
          v30 = a5;
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          v20 = 0;
          pvAttribute = 0LL;
          if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 78))(
                 *((_QWORD *)this + 78),
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 &pvAttribute) >= 0 )
            v20 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)pvAttribute + 328LL))(pvAttribute, 6LL) == 0;
          v33[0] = this;
          v33[1] = a5;
          (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
          v34 = v20;
          v10 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_f643ad3347bf4393b851723eb8b01c00___(this, v33);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&pvAttribute);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
        }
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    if ( v10 >= 0 )
    {
      v21 = *(__int64 (__fastcall **)(struct IIAMServiceProvider *, SID *, GUID *, char *))(*(_QWORD *)a5 + 24LL);
      v22 = *((_QWORD *)this + 79);
      if ( v22 )
      {
        *((_QWORD *)this + 79) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v10 = v21(
              a5,
              &SID_ImmersiveApplicationManagerPriv,
              &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
              (char *)this + 632);
    }
  }
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_5ec67ad958ea315cfc78e4414cad3743_Traceguids,
      (_DWORD)a2,
      a3,
      *((_DWORD *)this + 12));
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v35, (unsigned int)v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  v35 = &CImmersiveAppTelemetry::Initialization::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v35);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v51);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v49);
  if ( v46 )
  {
    v24 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v24);
    v46 = 0;
  }
  lpMem = 0LL;
  if ( v40 == 1 )
  {
    v40 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, (PBOOL)&pvAttribute, &Context)
      && (_DWORD)pvAttribute )
    {
      Context = qword_18059FE50;
      qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v26);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v42);
  }
  v40 = 3;
  if ( v37 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v36);
  return (unsigned int)v10;
}
