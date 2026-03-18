/*
 * XREFs of ?IsOfType@CRemoteRenderTarget@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E1970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRemoteRenderTarget::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 112) & 0xFFFFFFDD) == 0 && a2 != 114;
}
