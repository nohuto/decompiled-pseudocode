/*
 * XREFs of ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14001A620
 * Callers:
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14002A820 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14002A830 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CProcessSubmix>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 336), a2);
}
