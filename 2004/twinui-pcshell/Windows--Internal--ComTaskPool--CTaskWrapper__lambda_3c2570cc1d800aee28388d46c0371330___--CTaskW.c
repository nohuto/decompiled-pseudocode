/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330___::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330_____lambda_3c2570cc1d800aee28388d46c0371330___ @ 0x1800ADEE8
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3c2570cc1d800aee28388d46c0371330___ @ 0x1800AE45C (Windows--Internal--ComTaskPool--QueueTask__lambda_3c2570cc1d800aee28388d46c0371330___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038DB0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x180347094 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330___::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330_____lambda_3c2570cc1d800aee28388d46c0371330___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  a1[4] = a2[2];
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 5,
    a2 + 3);
  a1[5] = &TouchKeyboardExperienceTelemetryLogger::OnApplicationChromeOffsetsChanged::`vftable';
  *a1 = off_180494750;
  return a1;
}
