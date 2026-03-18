/*
 * XREFs of ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x1802236C8
 * Callers:
 *     ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x18009D5C0 (-HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBV.c)
 *     ?SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z @ 0x180225B40 (-SetPointerResult@GestureTargeting@InputTraceLogging@@SAX_K0KKAEBUTargetingInfo@@@Z.c)
 *     ?EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z @ 0x1802274D8 (-EvaluateHitTestCandidate@DWM@InputTraceLogging@@SAXPEBVCInteraction@@_N@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x1802349AC (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall InputTraceLogging::InteractionInputSink(const struct CInteraction *a1)
{
  void *result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 12);
    if ( v2 )
      return *(void **)(v2 + 64);
  }
  return result;
}
