/*
 * XREFs of ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x1C01C355C
 * Callers:
 *     ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01C311C (-Marshal@MouseInterceptState@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInte.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C0015350 (CreateKernelEvent.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CMouseProcessor::MouseInterceptState::PrepareForMarshaling(
        CMouseProcessor::MouseInterceptState *this,
        const struct _MouseInterceptorData *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // di
  struct _KEVENT *KernelEvent; // rax

  if ( *((_DWORD *)this + 8) == (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( *((_DWORD *)this + 9) != (unsigned int)PsGetCurrentThreadId() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  *(_OWORD *)((char *)this + 88) = 0LL;
  v6 = 1;
  *((_QWORD *)this + 13) = 0LL;
  if ( !*((_QWORD *)this + 14) )
  {
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *((_QWORD *)this + 14) = KernelEvent;
    if ( !KernelEvent )
      return 0;
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  return v6;
}
