/*
 * XREFs of PiSwCloseDevice @ 0x1407209F0
 * Callers:
 *     PiSwStopDestroy @ 0x1407344C4 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x14073464C (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x140754680 (PiSwIrpCleanup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1402E5430 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x14036BA20 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14071068C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x14071EB94 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140754648 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AA828 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwCloseDevice(PVOID a1)
{
  struct _DEVICE_OBJECT *v1; // rax
  struct _DMA_ADAPTER *v2; // rbx
  _QWORD *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = a1;
  if ( *((_QWORD *)a1 + 11) )
  {
    PiSwQueuedCreateInfoFree(*((PVOID *)a1 + 11));
    Buffer[11] = 0LL;
    a1 = Buffer;
  }
  if ( *((_QWORD *)a1 + 15) )
  {
    *((_DWORD *)a1 + 1) |= 2u;
    v1 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v2 = (struct _DMA_ADAPTER *)v1;
    if ( v1 )
    {
      IoInvalidateDeviceRelations(v1, SingleBusRelations);
      HalPutDmaAdapter(v2);
    }
  }
  else
  {
    if ( *((_QWORD *)a1 + 14) )
      PiSwBusRelationRemove((char *)a1);
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    PiSwDeviceDereference(Buffer);
  }
}
