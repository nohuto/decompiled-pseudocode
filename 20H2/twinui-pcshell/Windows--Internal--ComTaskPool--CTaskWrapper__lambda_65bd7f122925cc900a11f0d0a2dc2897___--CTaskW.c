/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897_____lambda_65bd7f122925cc900a11f0d0a2dc2897___ @ 0x1800EEDB4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___ @ 0x1800EEFC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_65bd7f122925cc900a11f0d0a2dc2897___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180045D28 (--0-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_180045D28.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897___::CTaskWrapper__lambda_65bd7f122925cc900a11f0d0a2dc2897_____lambda_65bd7f122925cc900a11f0d0a2dc2897___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)(a1 + 48),
    a2 + 32);
  *(_QWORD *)(a1 + 48) = &SingleViewExperienceTelemetry::Launch::`vftable';
  *(_QWORD *)a1 = off_180497BD0;
  return a1;
}
