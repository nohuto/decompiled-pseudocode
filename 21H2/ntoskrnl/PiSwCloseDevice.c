/*
 * XREFs of PiSwCloseDevice @ 0x140734BB0
 * Callers:
 *     PiSwStopDestroy @ 0x140738E04 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140739024 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x14074D048 (PiSwIrpCleanup.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlDeleteElementGenericTableAvl @ 0x140252950 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1403702F0 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14062D4E0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x140732E54 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x14074D154 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEDA8 (PiSwQueuedCreateInfoFree.c)
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
