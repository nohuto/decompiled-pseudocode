/*
 * XREFs of ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C01C3230
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01C15BC (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(__int64 a1)
{
  unsigned int CurrentThreadId; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7; // eax

  if ( !*(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = CurrentThreadId;
  if ( CurrentThreadId != *(_DWORD *)(a1 + 36) && CurrentThreadId != *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  v5 = *(unsigned int *)(a1 + 32);
  if ( v4 == (_DWORD)v5 )
    return 1LL;
  v7 = *(_DWORD *)(a1 + 36);
  if ( v4 != v7 )
    return 2LL;
  if ( (_DWORD)v5 == v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
  return 0LL;
}
