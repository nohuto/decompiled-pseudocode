/*
 * XREFs of ?ComputeMouseSystemStateForInterceptor@CMouseProcessor@@AEBA?AW4_INTERCEPTOR_MOUSE_SYSTEM_STATE@@AEBVMouseInputDataEx@1@@Z @ 0x1C01BBC7C
 * Callers:
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C01BD69C (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C0068D1C (_anonymous_namespace_--IsMouseButtonSwapped.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0071B9C (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::ComputeMouseSystemStateForInterceptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v5; // edi
  unsigned __int16 v6; // bx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi
  __int64 result; // rax

  v5 = 0;
  v6 = *(_WORD *)(a2 + 4) & 0xF;
  if ( v6 && !CMouseProcessor::MouseInputDataEx::TestProcessingOption(a2, 1024LL, a3, a4) )
  {
    if ( (v6 & 3) != 0 )
    {
      v11 = 1;
    }
    else
    {
      v6 >>= 2;
      v11 = 2;
      if ( !v6 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
    }
    if ( anonymous_namespace_::IsMouseButtonSwapped(v11, (v6 & 2) != 0) )
      v5 = 1;
  }
  result = v5 | 2;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3688), 1, 1) )
    return v5;
  return result;
}
