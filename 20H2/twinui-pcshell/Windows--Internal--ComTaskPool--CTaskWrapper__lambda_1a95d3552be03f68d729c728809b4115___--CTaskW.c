/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115___::CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115_____lambda_1a95d3552be03f68d729c728809b4115___ @ 0x1800AFBB8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1a95d3552be03f68d729c728809b4115___ @ 0x1800B0080 (Windows--Internal--ComTaskPool--QueueTask__lambda_1a95d3552be03f68d729c728809b4115___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180346634 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115___::CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115_____lambda_1a95d3552be03f68d729c728809b4115___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  v4 = (_QWORD *)(a2 + 40);
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  *(_OWORD *)(a1 + 36) = *(_OWORD *)(a2 + 20);
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( a1 + 56 != a2 + 40 )
  {
    *(_QWORD *)(a1 + 56) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 48);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 72,
    a2 + 56);
  *(_QWORD *)(a1 + 72) = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity_Queued::`vftable';
  *(_QWORD *)a1 = off_180493ED8;
  return a1;
}
