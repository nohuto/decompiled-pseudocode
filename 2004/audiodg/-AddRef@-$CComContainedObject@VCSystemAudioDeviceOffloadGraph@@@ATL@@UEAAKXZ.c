/*
 * XREFs of ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14003AB10
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ @ 0x14001FAC0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ @ 0x14001FAD0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ @ 0x14001FAE0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBCI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ @ 0x14001FAF0 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBDA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ @ 0x14001FB00 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ @ 0x14001FB10 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBHI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ @ 0x14001FB20 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ @ 0x14001FB30 (-AddRef@-$CComContainedObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@WBIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 392) + 8LL))(*(_QWORD *)(a1 + 392));
}
