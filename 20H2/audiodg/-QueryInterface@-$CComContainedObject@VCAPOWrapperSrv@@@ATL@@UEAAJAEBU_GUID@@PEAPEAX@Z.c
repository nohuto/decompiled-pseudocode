/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140051CD0
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A8B0 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A8C0 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002A8D0 (-QueryInterface@-$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 32));
}
