/*
 * XREFs of ?TestWindowBreak@WindowArrangementSequence@@YGXXZ @ 0x155F40
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z @ 0xB1C6E (-TestSequence@WindowArrangementSequence@@YGXQBUtagHOTKEY@@IIIH@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

void WindowArrangementSequence::TestWindowBreak()
{
  if ( WindowArrangementSequence::fWindowArrangementSequenceInProgress )
  {
    anonymous_namespace_::NotifyShellSimplePayload(0, 3, 2, 8);
    WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
  }
}
