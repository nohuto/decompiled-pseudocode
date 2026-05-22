/*
 * XREFs of ?QueryInterface@TapProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004DAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TapProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return TapProcessor::QueryInterface((TapProcessor *)(a1 - 16), a2, a3);
}
