/*
 * XREFs of ?AddRef@CSpringAccelerator@@W7EAAKXZ @ 0x1800EDA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpringAccelerator::AddRef(__int64 a1)
{
  return CFrictionAccelerator::AddRef((CFrictionAccelerator *)(a1 - 8));
}
