/*
 * XREFs of ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140033E70
 * Callers:
 *     ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14001F690 (-Release@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x14001F6A0 (-Release@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x14001F6B0 (-Release@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 16LL))(*(_QWORD *)(a1 + 344));
}
