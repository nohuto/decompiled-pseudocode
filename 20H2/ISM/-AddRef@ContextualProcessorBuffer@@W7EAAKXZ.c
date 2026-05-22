/*
 * XREFs of ?AddRef@ContextualProcessorBuffer@@W7EAAKXZ @ 0x18004C280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::AddRef(__int64 a1)
{
  return MouseProcessor::AddRef((MouseProcessor *)(a1 - 8));
}
