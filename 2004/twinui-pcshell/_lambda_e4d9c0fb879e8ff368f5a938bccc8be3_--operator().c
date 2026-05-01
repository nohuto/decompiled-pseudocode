/*
 * XREFs of _lambda_e4d9c0fb879e8ff368f5a938bccc8be3_::operator() @ 0x1802CDD50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e4d9c0fb879e8ff368f5a938bccc8be3___::Run @ 0x1802D0DD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e4d9c0fb879e8ff368f5a938bccc8be3___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@?$EventSource@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_18fc82b29393100b2544100e203bc48c_@@@Z @ 0x180178C50 (--$DoInvoke@V_lambda_18fc82b29393100b2544100e203bc48c_@@@-$EventSource@U-$VectorChangedEventHand.c)
 *     ??$MakeAndInitialize@VClientWindowReadyForPresentationEventArgs@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Details@WRL@Microsoft@@YAJPEAPEAUIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEB_N@Z @ 0x1802CC26C (--$MakeAndInitialize@VClientWindowReadyForPresentationEventArgs@@UIClientWindowReadyForPresentat.c)
 */

__int64 __fastcall lambda_e4d9c0fb879e8ff368f5a938bccc8be3_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  RTL_SRWLOCK *v5; // rcx
  __int128 v7; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF

  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<ClientWindowReadyForPresentationEventArgs,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,bool const &>(
         &v9,
         (_BYTE *)(a1 + 16));
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 2239LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_6;
  }
  v5 = *(RTL_SRWLOCK **)a1;
  v11 = v9;
  v10 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v7 = &v10;
  *((_QWORD *)&v7 + 1) = &v11;
  v2 = Microsoft::WRL::EventSource<Windows::Foundation::Collections::VectorChangedEventHandler<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_18fc82b29393100b2544100e203bc48c_>(
         v5 + 61,
         &v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 2241LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v3;
}
