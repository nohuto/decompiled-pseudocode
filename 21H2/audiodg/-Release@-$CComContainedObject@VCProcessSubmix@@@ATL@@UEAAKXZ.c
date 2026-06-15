/*
 * XREFs of ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14004FA10
 * Callers:
 *     ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x14002A8B0 (-Release@-$CComContainedObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x14002A8C0 (-Release@-$CComContainedObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CProcessSubmix>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 16LL))(*(_QWORD *)(a1 + 336));
}
