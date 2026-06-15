/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x140030FB4
 * Callers:
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x140030FA4 (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x140033A6C (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x1400389B8 (-InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x14003A4A8 (-InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ @ 0x14003B6A8 (-InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x140043ABC (-InternalFinalConstructRelease@CVpoContext@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x140045068 (-InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x1400474EC (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x140054D50 (-InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x140054D64 (-InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ @ 0x14005D9F0 (-InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x14005DA04 (-InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(int *a1)
{
  return ATL::CComMultiThreadModel::SafeDecrementReference(a1);
}
