/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C0059B30
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C0059B54 (-ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

void ForceResetMouseButtonsDownState()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(MouseProcessor);
}
