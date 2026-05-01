/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9___::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9_____lambda_9ab68852e2b72d35890b3d375991eaf9___ @ 0x1800AFEF0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9ab68852e2b72d35890b3d375991eaf9___ @ 0x1800B034C (Windows--Internal--ComTaskPool--QueueTask__lambda_9ab68852e2b72d35890b3d375991eaf9___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180346634 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9___::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9_____lambda_9ab68852e2b72d35890b3d375991eaf9___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 2;
  a1[3] = a2[1];
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  a1[5] = a2[3];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 6,
    a2 + 4);
  a1[6] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationFrameCommand::`vftable';
  *a1 = off_180493EB0;
  return a1;
}
