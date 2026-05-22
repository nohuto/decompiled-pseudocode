/*
 * XREFs of ?QueryInterface@ContextualProcessorBuffer@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004CE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContextualProcessorBuffer::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        ContextualProcessorBuffer **a3)
{
  return ContextualProcessorBuffer::QueryInterface((ContextualProcessorBuffer *)(a1 - 8), a2, a3);
}
