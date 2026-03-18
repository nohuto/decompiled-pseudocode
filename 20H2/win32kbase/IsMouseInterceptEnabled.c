/*
 * XREFs of IsMouseInterceptEnabled @ 0x1C01A9690
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A1020 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x1C01BA82C (-GetInterceptStateAndBehavior@MouseInterceptState@CMouseProcessor@@QEBA_NPEAW4_MOUSE_PREINTERCEP.c)
 */

bool IsMouseInterceptEnabled()
{
  __int64 MouseProcessor; // rcx
  bool result; // al

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  result = 0;
  if ( MouseProcessor )
    return CMouseProcessor::MouseInterceptState::GetInterceptStateAndBehavior(
             (CMouseProcessor::MouseInterceptState *)(MouseProcessor + 3696),
             0LL);
  return result;
}
