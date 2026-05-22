/*
 * XREFs of ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x18004AEF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::AddRef(__int64 a1)
{
  return InputStateManager::AddRef((InputStateManager *)(a1 - 8));
}
