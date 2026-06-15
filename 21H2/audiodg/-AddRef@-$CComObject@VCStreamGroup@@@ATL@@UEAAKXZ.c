/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x1400192C0
 * Callers:
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x140029FB0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x140029FC0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x140029FD0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 344), a2);
}
