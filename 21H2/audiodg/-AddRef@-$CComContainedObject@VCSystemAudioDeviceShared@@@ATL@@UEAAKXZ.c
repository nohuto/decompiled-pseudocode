/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140044C10
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x14002A2C0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x14002A2D0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ @ 0x14002A2E0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ @ 0x14002A2F0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x14002A300 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 8LL))(*(_QWORD *)(a1 + 368));
}
