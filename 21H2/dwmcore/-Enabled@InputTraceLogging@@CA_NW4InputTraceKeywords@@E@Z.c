/*
 * XREFs of ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x18002B404
 * Callers:
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18002B370 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CManipulationManager@@@Z @ 0x18002B820 (-InteractionConfigurationUpdate@GestureTargeting@InputTraceLogging@@SAXPEBUInteractionUpdate@CMa.c)
 *     ?DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z @ 0x18017C394 (-DequeueFrame@GestureTargeting@InputTraceLogging@@SAXPEAVCManipulationFrame@@@Z.c)
 *     ?SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z @ 0x180184F4C (-SetInteractionChain@GestureTargeting@InputTraceLogging@@SAXKPEBVCInteraction@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002B43C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 */

bool __fastcall InputTraceLogging::Enabled(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  char v3; // r9
  _DWORD *v4; // rcx

  v1 = (int)a1;
  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v3 = 0;
  v4 = *(_DWORD **)(v2 + 8);
  if ( *v4 )
    return (unsigned __int8)tlgKeywordOn(v4, v1) != 0;
  return v3;
}
