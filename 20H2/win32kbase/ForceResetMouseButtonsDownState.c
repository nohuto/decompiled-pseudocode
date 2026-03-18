/*
 * XREFs of ForceResetMouseButtonsDownState @ 0x1C00B9850
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00B9874 (-ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ.c)
 */

void ForceResetMouseButtonsDownState()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(MouseProcessor);
}
