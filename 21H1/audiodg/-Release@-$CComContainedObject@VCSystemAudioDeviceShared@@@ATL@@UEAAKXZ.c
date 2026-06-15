/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14003A630
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x14001FA20 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x14001FA30 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ @ 0x14001FA40 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ @ 0x14001FA50 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x14001FA60 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 368) + 16LL))(*(_QWORD *)(a1 + 368));
}
