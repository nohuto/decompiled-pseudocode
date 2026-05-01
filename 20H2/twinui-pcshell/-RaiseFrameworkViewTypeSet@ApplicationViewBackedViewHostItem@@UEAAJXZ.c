/*
 * XREFs of ?RaiseFrameworkViewTypeSet@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x180259DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x18024F0A8 (-InternalRelease@-$ComPtr@VViewHostViewModeChangeRequestedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVFrameworkViewTypeSetEventArgs@@@?$AsyncEventSourceT@U?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@VGitEventSourceSupportsAgile@Internal@3@U?$InvokeModeOptions@$01@WRL@Microsoft@@$00Uerr_returncode_policy@wil@@@wil@@QEAAJAEBQEAVApplicationViewBackedViewHostItem@@AEBQEAVFrameworkViewTypeSetEventArgs@@@Z @ 0x180257B48 (--$AsyncInvokeAll@PEAVApplicationViewBackedViewHostItem@@PEAVFrameworkViewTypeSetEventArgs@@@-$A.c)
 *     ??$MakeAndInitialize@VFrameworkViewTypeSetEventArgs@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVFrameworkViewTypeSetEventArgs@@AEAH@Z @ 0x180258120 (--$MakeAndInitialize@VFrameworkViewTypeSetEventArgs@@V1@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVFr.c)
 *     ?get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z @ 0x18025BB80 (-get_FrameworkViewType@ApplicationViewBackedViewHostItem@@UEAAJPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::RaiseFrameworkViewTypeSet(
        ApplicationViewBackedViewHostItem *this)
{
  char *v2; // rsi
  int FrameworkViewType; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  FrameworkViewTypeSetEventArgs *v8; // [rsp+40h] [rbp+8h] BYREF
  FrameworkViewTypeSetEventArgs *v9; // [rsp+48h] [rbp+10h] BYREF
  char *v10; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v2 = (char *)this - 16;
  FrameworkViewType = ApplicationViewBackedViewHostItem::get_FrameworkViewType(
                        (ApplicationViewBackedViewHostItem *)((char *)this - 16),
                        (int *)&v8);
  v4 = FrameworkViewType;
  if ( FrameworkViewType >= 0 )
  {
    Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((__int64 *)&v9);
    FrameworkViewType = Microsoft::WRL::Details::MakeAndInitialize<FrameworkViewTypeSetEventArgs,FrameworkViewTypeSetEventArgs,int &>(
                          &v9,
                          (int *)&v8);
    v4 = FrameworkViewType;
    if ( FrameworkViewType >= 0 )
    {
      v8 = v9;
      v10 = v2;
      FrameworkViewType = wil::AsyncEventSourceT<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *>,Windows::Internal::GitEventSourceSupportsAgile,Microsoft::WRL::InvokeModeOptions<2>,1,wil::err_returncode_policy>::AsyncInvokeAll<ApplicationViewBackedViewHostItem *,FrameworkViewTypeSetEventArgs *>(
                            (char *)this + 528,
                            (volatile int *)&v10,
                            (__int64 *)&v8);
      v4 = FrameworkViewType;
      if ( FrameworkViewType >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v5 = 548LL;
    }
    else
    {
      v5 = 547LL;
    }
  }
  else
  {
    v5 = 546LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
    (const char *)(unsigned int)FrameworkViewType);
LABEL_9:
  Microsoft::WRL::ComPtr<ViewHostViewModeChangeRequestedEventArgs>::InternalRelease((__int64 *)&v9);
  return v4;
}
