/*
 * XREFs of ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x1400473A0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x14001FF40 (-AddRef@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x14001FF50 (-AddRef@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x14001FF60 (-AddRef@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 32) + 8LL))(*(_QWORD *)(a1 + 32));
}
