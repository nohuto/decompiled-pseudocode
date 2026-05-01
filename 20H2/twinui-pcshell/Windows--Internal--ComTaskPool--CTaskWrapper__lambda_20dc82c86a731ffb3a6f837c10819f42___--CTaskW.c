/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42___::CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42_____lambda_20dc82c86a731ffb3a6f837c10819f42___ @ 0x1800AFC48
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_20dc82c86a731ffb3a6f837c10819f42___ @ 0x1800B0110 (Windows--Internal--ComTaskPool--QueueTask__lambda_20dc82c86a731ffb3a6f837c10819f42___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18002FF10 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180346634 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42___::CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42_____lambda_20dc82c86a731ffb3a6f837c10819f42___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2[2];
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[4] = v5;
  a1[5] = a2[3];
  a1[6] = a2[4];
  a2[3] = 0LL;
  a2[4] = 0LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 7,
    a2 + 5);
  a1[7] = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  *a1 = off_180493D38;
  return a1;
}
