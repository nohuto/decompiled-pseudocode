/*
 * XREFs of ?zInternalStart@?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0A@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0A@$03@@QEAAXXZ @ 0x1803E87C8
 * Callers:
 *     ?StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QEAAX_N@Z @ 0x1803E39C4 (-StartActivity@VAPositioner_NotifyTrayOfVisibilityActivity@VoiceAssistantPositionerTelemetry@@QE.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

ULONG __fastcall _TlgActivityBase<wil::ActivityBase<WindowManagementLogging,1,0,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>,0,4>::zInternalStart(
        __int64 a1)
{
  void (*v2)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  ULONG result; // eax
  WINBOOL v4; // [rsp+30h] [rbp+8h] BYREF
  _DWORD **v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v5 = (_DWORD **)&qword_1805CD228;
    qword_1805CD228 = &ImmersiveIconsLogging::`vftable';
    qword_1805CD240 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CD228, qword_1805CD240, v2);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_1805CD228);
  }
  result = (unsigned int)v5;
  if ( *v5[1] <= 4u )
    *(_OWORD *)(a1 + 8) = 0LL;
  else
    result = EventActivityIdControl(3u, (LPGUID)(a1 + 8));
  *(_DWORD *)a1 = 1;
  return result;
}
