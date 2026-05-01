/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71_____lambda_119a9763b6a8c971f47739bbe9fd0d71___ @ 0x18018748C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_119a9763b6a8c971f47739bbe9fd0d71___ @ 0x180187D78 (Windows--Internal--ComTaskPool--QueueTask__lambda_119a9763b6a8c971f47739bbe9fd0d71___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180166E30 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_180166E30.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71___::CTaskWrapper__lambda_119a9763b6a8c971f47739bbe9fd0d71_____lambda_119a9763b6a8c971f47739bbe9fd0d71___(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = a2[1];
  v4 = a2 + 2;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)(a1 + 32) != a2 + 2 )
  {
    *(_QWORD *)(a1 + 32) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 40) = a2[3];
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 48));
  *(_QWORD *)(a1 + 48) = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  *(_QWORD *)a1 = off_18049DC80;
  return a1;
}
