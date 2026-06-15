/*
 * XREFs of ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140051CF0
 * Callers:
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14002A910 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14002A920 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14002A930 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32));
}
