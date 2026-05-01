/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9f4b11300d3eb5acf8511a585c0f19___::CTaskWrapper__lambda_4f9f4b11300d3eb5acf8511a585c0f19_____lambda_4f9f4b11300d3eb5acf8511a585c0f19___ @ 0x18025CD18
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4f9f4b11300d3eb5acf8511a585c0f19___ @ 0x18025D26C (Windows--Internal--ComTaskPool--QueueTask__lambda_4f9f4b11300d3eb5acf8511a585c0f19___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1801CA670 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9f4b11300d3eb5acf8511a585c0f19___::CTaskWrapper__lambda_4f9f4b11300d3eb5acf8511a585c0f19_____lambda_4f9f4b11300d3eb5acf8511a585c0f19___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 24) = v4;
  *(_BYTE *)(a2 + 32) = 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 56);
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 56) = v5;
  *(_BYTE *)(a2 + 64) = 1;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 88));
  *(_QWORD *)(a1 + 88) = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  *(_QWORD *)a1 = off_1804AC450;
  return a1;
}
