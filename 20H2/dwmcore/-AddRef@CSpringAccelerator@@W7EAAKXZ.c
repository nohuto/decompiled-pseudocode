/*
 * XREFs of ?AddRef@CSpringAccelerator@@W7EAAKXZ @ 0x1800F05E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpringAccelerator::AddRef(__int64 a1)
{
  return CFrictionAccelerator::AddRef((CFrictionAccelerator *)(a1 - 8));
}
