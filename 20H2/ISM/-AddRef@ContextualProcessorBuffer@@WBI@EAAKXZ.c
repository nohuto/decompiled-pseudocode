/*
 * XREFs of ?AddRef@ContextualProcessorBuffer@@WBI@EAAKXZ @ 0x18004C2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 24));
}
