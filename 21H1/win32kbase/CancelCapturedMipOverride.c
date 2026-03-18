/*
 * XREFs of CancelCapturedMipOverride @ 0x1C01B1110
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ @ 0x1C01C42A4 (-RemoveMipOverrideOnMouseOwner@CMouseProcessor@@QEAAXXZ.c)
 */

void CancelCapturedMipOverride()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::RemoveMipOverrideOnMouseOwner(MouseProcessor);
}
