/*
 * XREFs of ?RaiseTabDropped@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabGroupId@2345@UShellTabId@2345@H@Z @ 0x180268D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@?$EventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_18fc82b29393100b2544100e203bc48c_@@@Z @ 0x1801546B0 (--$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@-$EventSource@U-$VectorChangedEventHand.c)
 *     ??$MakeAndInitialize@VTabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabDroppedEventArgs@2345@AEAUShellTabGroupId@2345@AEAUShellTabId@2345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAUITabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@AEAUShellTabGroupId@4567@AEAUShellTabId@4567@AEAH@Z @ 0x180267C44 (--$MakeAndInitialize@VTabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabDroppedEve.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::RaiseTabDropped(
        RTL_SRWLOCK *a1,
        __int128 *a2,
        __int128 *a3,
        int a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v12; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v16; // [rsp+88h] [rbp+38h] BYREF

  v16 = a4;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs,Windows::Internal::ComposableShell::Tabs::ITabDroppedEventArgs,Windows::Internal::ComposableShell::Tabs::ShellTabGroupId &,Windows::Internal::ComposableShell::Tabs::ShellTabId &,int &>(
         &v11,
         a2,
         a3,
         &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v13 = v11;
    v12 = a1;
    *(_QWORD *)&v14 = &v12;
    *((_QWORD *)&v14 + 1) = &v13;
    v7 = Microsoft::WRL::EventSource<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_18fc82b29393100b2544100e203bc48c_>(
           a1 + 19,
           &v14);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    v9 = 204LL;
  }
  else
  {
    v9 = 203LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfereventbroker.cpp",
    (const char *)(unsigned int)v7);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v8;
}
