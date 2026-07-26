/*
 * XREFs of NdisMGetDeviceProperty @ 0x1C0039680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisMGetDeviceProperty(
        NDIS_HANDLE MiniportAdapterHandle,
        PDEVICE_OBJECT *PhysicalDeviceObject,
        PDEVICE_OBJECT *FunctionalDeviceObject,
        PDEVICE_OBJECT *NextDeviceObject,
        PCM_RESOURCE_LIST *AllocatedResources,
        PCM_RESOURCE_LIST *AllocatedResourcesTranslated)
{
  int v6; // eax

  if ( *((_BYTE *)MiniportAdapterHandle + 32) < 6u )
  {
    v6 = *((_DWORD *)MiniportAdapterHandle + 31);
    if ( (v6 & 0x200000) == 0 )
      *((_DWORD *)MiniportAdapterHandle + 31) = v6 | 0x400000;
  }
  if ( PhysicalDeviceObject )
    *PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
  if ( FunctionalDeviceObject )
    *FunctionalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 478);
  if ( NextDeviceObject )
    *NextDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 480);
  if ( AllocatedResources )
    *AllocatedResources = (PCM_RESOURCE_LIST)*((_QWORD *)MiniportAdapterHandle + 118);
  if ( AllocatedResourcesTranslated )
    *AllocatedResourcesTranslated = (PCM_RESOURCE_LIST)*((_QWORD *)MiniportAdapterHandle + 119);
}
