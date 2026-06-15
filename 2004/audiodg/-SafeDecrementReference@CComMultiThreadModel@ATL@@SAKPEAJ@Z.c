/*
 * XREFs of ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001E7F8
 * Callers:
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140017D80 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140019080 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140019150 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x1400191D0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x1400199F0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140019AF0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x14001A0A0 (-Release@-$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ.c)
 *     ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x140030FB4 (-InternalRelease@-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ.c)
 *     ?Release@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140031310 (-Release@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x140038C90 (-Release@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ @ 0x14003B980 (-Release@-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140043D80 (-Release@-$CComObject@VCVpoContext@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x1400566A0 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x14005DFD0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14005E050 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComMultiThreadModel::SafeDecrementReference(int *a1)
{
  return ATL::SafeDecrementReferenceMultiThread(a1);
}
