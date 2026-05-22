/*
 * XREFs of ?AddRef@InputRedirectionProcessor@@WBI@EAAKXZ @ 0x18004AF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputRedirectionProcessor::AddRef(__int64 a1)
{
  return InputStateManager::AddRef((InputStateManager *)(a1 - 24));
}
