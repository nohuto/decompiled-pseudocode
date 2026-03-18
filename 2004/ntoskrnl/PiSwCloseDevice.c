/*
 * XREFs of PiSwCloseDevice @ 0x1407228B0
 * Callers:
 *     PiSwStopDestroy @ 0x14073287C (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140732924 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x1407610EC (PiSwIrpCleanup.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140201B40 (RtlDeleteElementGenericTableAvl.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     IoInvalidateDeviceRelations @ 0x14036DA30 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406A5D5C (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x140720934 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140761630 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408ABB48 (PiSwQueuedCreateInfoFree.c)
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
