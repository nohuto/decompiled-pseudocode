/*
 * XREFs of ?RaiseTabViewProvided@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJUShellTabId@2345@H@Z @ 0x18028AC20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@?$EventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_18fc82b29393100b2544100e203bc48c_@@@Z @ 0x180178C50 (--$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@-$EventSource@U-$VectorChangedEventHand.c)
 *     ??$MakeAndInitialize@VTabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabViewProvidedEventArgs@2345@AEAUShellTabId@2345@AEAH@Details@WRL@Microsoft@@YAJPEAPEAUITabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@AEAUShellTabId@4567@AEAH@Z @ 0x180289A84 (--$MakeAndInitialize@VTabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UITabViewP.c)
 */

__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker::RaiseTabViewProvided(
        RTL_SRWLOCK *a1,
        __int128 *a2,
        int a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v10; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  __int128 v12; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  int v14; // [rsp+70h] [rbp+20h] BYREF

  v14 = a3;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs,Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs,Windows::Internal::ComposableShell::Tabs::ShellTabId &,int &>(
         &v9,
         a2,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v11 = v9;
    v10 = a1;
    *(_QWORD *)&v12 = &v10;
    *((_QWORD *)&v12 + 1) = &v11;
    v5 = Microsoft::WRL::EventSource<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_18fc82b29393100b2544100e203bc48c_>(
           a1 + 4,
           &v12);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    v7 = 99LL;
  }
  else
  {
    v7 = 98LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfereventbroker.cpp",
    (const char *)(unsigned int)v5);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v6;
}
