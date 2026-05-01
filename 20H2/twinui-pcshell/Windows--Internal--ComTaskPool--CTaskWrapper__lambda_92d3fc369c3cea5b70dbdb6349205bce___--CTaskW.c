/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce_____lambda_92d3fc369c3cea5b70dbdb6349205bce___ @ 0x180262C80
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_92d3fc369c3cea5b70dbdb6349205bce___ @ 0x1802648F0 (Windows--Internal--ComTaskPool--QueueTask__lambda_92d3fc369c3cea5b70dbdb6349205bce___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180268750 (--0-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflect_ea_180268750.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce___::CTaskWrapper__lambda_92d3fc369c3cea5b70dbdb6349205bce_____lambda_92d3fc369c3cea5b70dbdb6349205bce___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  v4 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  v5 = a2[2];
  a2[2] = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = a2[3];
  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TabShellTelemetryProvider,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &TabViewManagerMeasures::TabViewManagerCloseTabRequested::`vftable';
  *(_QWORD *)a1 = off_1804ABE60;
  return a1;
}
