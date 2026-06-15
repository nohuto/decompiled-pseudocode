/*
 * XREFs of ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140051E80
 * Callers:
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14002A9E0 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14002A9F0 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14002AA00 (-Release@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 16LL))(*(_QWORD *)(a1 + 32));
}
