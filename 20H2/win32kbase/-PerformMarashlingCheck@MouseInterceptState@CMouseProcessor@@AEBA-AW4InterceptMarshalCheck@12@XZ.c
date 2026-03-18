/*
 * XREFs of ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C01BB160
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01B94EC (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int CurrentThreadId; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edi
  __int64 v11; // rcx
  int v13; // eax

  if ( !*(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v10 = CurrentThreadId;
  if ( CurrentThreadId != *(_DWORD *)(a1 + 36) && CurrentThreadId != *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  v11 = *(unsigned int *)(a1 + 32);
  if ( v10 == (_DWORD)v11 )
    return 1LL;
  v13 = *(_DWORD *)(a1 + 36);
  if ( v10 != v13 )
    return 2LL;
  if ( (_DWORD)v11 == v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v6, v8, v9);
  return 0LL;
}
