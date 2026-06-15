/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x14003B70C
 * Callers:
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x14003B6FC (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x14003E10C (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x1400430F8 (-InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x140044BD8 (-InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ @ 0x140045DD8 (-InternalFinalConstructRelease@CSystemAudioDeviceOffloadGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x14004E13C (-InternalFinalConstructRelease@CVpoContext@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x14004F6E8 (-InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x140051B6C (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x14005D7B0 (-InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x14005D7C4 (-InternalFinalConstructRelease@CCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ @ 0x140066520 (-InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ @ 0x140066534 (-InternalFinalConstructRelease@CSpatialCrossProcessServerInputEndpoint@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(int *a1)
{
  return ATL::CComMultiThreadModel::SafeDecrementReference(a1);
}
