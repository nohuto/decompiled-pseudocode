/*
 * XREFs of ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x18004AA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ComboButtonProcessor::Release(__int64 a1)
{
  return MPCFocusTarget::Release((MPCFocusTarget *)(a1 - 8));
}
