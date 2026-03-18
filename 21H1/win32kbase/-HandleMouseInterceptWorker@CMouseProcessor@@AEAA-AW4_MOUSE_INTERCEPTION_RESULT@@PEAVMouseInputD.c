/*
 * XREFs of ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x1C01C2C44
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C360C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0065FBC (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z @ 0x1C01C1528 (-CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C01C15BC (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01C28FC (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 *     ?HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProcessorData@@@Z @ 0x1C01C2AB8 (-HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProces.c)
 *     ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x1C01C2EC4 (-Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C01C33FC (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 */

__int64 __fastcall CMouseProcessor::HandleMouseInterceptWorker(
        __int64 a1,
        const struct CMouseProcessor::MouseInputDataEx *a2)
{
  __int64 v2; // rsi
  bool v6; // zf
  char v7; // al
  unsigned int v8; // edi
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  _OWORD v11[3]; // [rsp+38h] [rbp-38h] BYREF
  int v12; // [rsp+80h] [rbp+10h] BYREF

  v12 = 0;
  v2 = a1 + 3768;
  if ( !CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
          (CMouseProcessor::MouseInterceptState *)(a1 + 3768),
          (enum _MOUSE_PREINTERCEPT_BEHAVIOR *)&v12) )
    return 0LL;
  v6 = !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8);
  v7 = v12;
  if ( !v6 )
    v7 = v12 & 0xFE;
  memset(v11, 0, sizeof(v11));
  CMouseProcessor::PrepareDataForIntercept((CMouseProcessor *)a1, a2, v7 & 1, (struct _MouseInterceptorData *)v11);
  InputTraceLogging::Mouse::CallInterceptor();
  v10 = 0LL;
  v9 = 0LL;
  v8 = CMouseProcessor::MouseInterceptState::CallInterceptor(v2, (__int64)v11, (__int64)&v9);
  InputTraceLogging::Mouse::HandleInterception();
  if ( v8 == 2 )
  {
    if ( (dword_1C025A5F8 & 1) == 0 )
      dword_1C025A5F8 |= 1u;
    HIDWORD(v10) = BYTE4(v10) & 0x76;
    CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(a2, (const struct _MouseProcessorData *)&v9);
  }
  return v8;
}
