/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___::Run @ 0x180036CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$DoInvoke@V_lambda_e6e0eff2c801ccf50926d67388532b90_@@@?$EventSource@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_e6e0eff2c801ccf50926d67388532b90_@@@Z @ 0x180036DB0 (--$DoInvoke@V_lambda_e6e0eff2c801ccf50926d67388532b90_@@@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1800AE718 (--$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientWindo.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  int v6[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v7; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(&v9, a1 + 32);
  v2 = *(_QWORD *)(a1 + 16) + 160LL;
  v3 = *(_QWORD *)(a1 + 24);
  v11 = v9;
  v10 = v3;
  *(_QWORD *)v6 = &v10;
  v7 = &v11;
  result = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::DoInvoke<_lambda_e6e0eff2c801ccf50926d67388532b90_>(
             v2,
             v6);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAA3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)result,
      v6[0]);
    JUMPOUT(0x18011781CLL);
  }
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
