/*
 * XREFs of PiSwCloseDevice @ 0x1407349F0
 * Callers:
 *     PiSwStopDestroy @ 0x140738C44 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140738E64 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x14074CE88 (PiSwIrpCleanup.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1402648C0 (RtlDeleteElementGenericTableAvl.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     IoInvalidateDeviceRelations @ 0x1403707A0 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406386D0 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x140732C94 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x14074CF94 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1408AEC48 (PiSwQueuedCreateInfoFree.c)
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
