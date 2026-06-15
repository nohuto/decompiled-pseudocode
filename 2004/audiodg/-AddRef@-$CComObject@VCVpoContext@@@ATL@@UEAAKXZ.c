/*
 * XREFs of ?AddRef@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x1400436B0
 * Callers:
 *     ?AddRef@?$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x14001FDD0 (-AddRef@-$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CVpoContext>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 16), a2);
}
