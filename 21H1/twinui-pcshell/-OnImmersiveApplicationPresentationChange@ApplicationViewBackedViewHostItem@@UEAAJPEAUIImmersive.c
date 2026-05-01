/*
 * XREFs of ?OnImmersiveApplicationPresentationChange@ApplicationViewBackedViewHostItem@@UEAAJPEAUIImmersiveApplication@@W4IMMERSIVE_APPLICATION_PRESENTATION_CHANGE@@@Z @ 0x1802386B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplicationHolographic@@@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationHolographic@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017176C (--$As@UIImmersiveApplicationHolographic@@@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEBAJ.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEB$$T@Z @ 0x180236444 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@$$T@-$AsyncEventSourceT@U-$ITypedEventH.c)
 *     ?_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z @ 0x180239C74 (-_FirePresentationReadinessEvent@ApplicationViewBackedViewHostItem@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::OnImmersiveApplicationPresentationChange(
        __int64 a1,
        __int64 a2,
        int a3)
{
  _QWORD *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v10[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v12; // [rsp+50h] [rbp+20h] BYREF
  __int64 v13; // [rsp+58h] [rbp+28h] BYREF
  __int64 v14; // [rsp+68h] [rbp+38h] BYREF

  v12 = 0;
  v5 = (_QWORD *)(a1 + 176);
  if ( (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)a2 + 104LL))(a2, *(_QWORD *)(a1 + 176), &v12) >= 0
    && v12 )
  {
    v13 = 0LL;
    v6 = Microsoft::WRL::ComPtr<IImmersiveApplication>::As<IImmersiveApplicationHolographic>(v5, &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 630LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
        (const char *)(unsigned int)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      return v7;
    }
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        v14 = 0LL;
        *(_QWORD *)v10 = a1 - 32;
        v6 = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,IInspectable *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,std::nullptr_t>(
               (char *)(a1 + 368),
               v10,
               (__int64)&v14);
        v7 = v6;
        if ( v6 < 0 )
        {
          v8 = 655LL;
          goto LABEL_9;
        }
      }
    }
    else if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13) )
    {
      ApplicationViewBackedViewHostItem::_FirePresentationReadinessEvent(
        (ApplicationViewBackedViewHostItem *)(a1 - 32),
        1);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  return 0LL;
}
