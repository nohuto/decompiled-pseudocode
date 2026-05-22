/*
 * XREFs of ?QueryInterface@TapProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004CF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TapProcessor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return TapProcessor::QueryInterface((TapProcessor *)(a1 - 8), a2, a3);
}
