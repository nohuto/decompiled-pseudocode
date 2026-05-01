/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc0b3fba328f8aac054ce118344567ee___::Run @ 0x1802D0490
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$DoInvoke@V_lambda_01545e3462c885316a734816cc3d9dbf_@@@?$EventSource@UIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_01545e3462c885316a734816cc3d9dbf_@@@Z @ 0x1802CB1A0 (--$DoInvoke@V_lambda_01545e3462c885316a734816cc3d9dbf_@@@-$EventSource@UIPopupPropertyChangedEve.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc0b3fba328f8aac054ce118344567ee___::Run(
        __int64 a1)
{
  RTL_SRWLOCK *v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 16) + 320LL);
  v4 = 1;
  v2 = Microsoft::WRL::EventSource<Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler,Microsoft::WRL::InvokeModeOptions<2>>::DoInvoke<_lambda_01545e3462c885316a734816cc3d9dbf_>(
         v1,
         (__int64)&v4);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x238,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v2);
}
